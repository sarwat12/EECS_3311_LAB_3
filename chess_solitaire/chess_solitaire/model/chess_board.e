note
	description: "Summary description for {CHESS_BOARD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS_BOARD

inherit
	ANY
		redefine
			out
		end

create
	make

feature --Constructor
	make
		do
			create board.make_filled (0, 4, 4)
			num_pieces := 0
			create piece_mapping.make_empty
			set_mapping
		end

feature --Board Implementation
	board: ARRAY2[INTEGER]
	num_pieces: INTEGER
	piece_mapping: ARRAY[STRING]


feature --Queries about the board
	chess_at (row: INTEGER; col: INTEGER):STRING
		do
			create Result.make_empty
			Result := piece_mapping.item (board.item (row, col))
		end

	is_valid_index(row: INTEGER; col: INTEGER): BOOLEAN
		do
			Result := not (row < 1 or row > 4 or col < 1 or col > 4)
		end


feature --Queries about chess
	king_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do

		end

	queen_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do

		end

	knight_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do

		end

	bishop_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do

		end

	rook_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do

		end

	pawn_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do

		end

feature --Piece Movements	

    move_up (row: INTEGER; col: INTEGER)
    	do
			if is_valid_index (row - 1, col) then
				board.put (board.item (row, col), row - 1, col)
				board.put (0, row, col)
			end
    	end

    move_down (row: INTEGER col: INTEGER)
    	do
			if is_valid_index (row + 1, col) then
				board.put (board.item (row, col), row + 1, col)
				board.put (0, row, col)
			end
    	end

	move_left (row: INTEGER; col: INTEGER)
		do
			if is_valid_index (row, col - 1) then
				board.put (board.item (row, col), row, col - 1)
				board.put (0, row, col)
			end
		end

	move_right (row: INTEGER; col: INTEGER)
		do
			if is_valid_index (row, col + 1) then
				board.put (board.item (row, col), row, col + 1)
				board.put (0, row, col)
			end
		end

	move_diagonal_left_up (row: INTEGER; col: INTEGER)
		do
			if is_valid_index (row - 1, col - 1) then
				board.put (board.item (row, col), row - 1, col - 1)
				board.put (0, row, col)
			end
		end

	move_diagonal_right_up (row: INTEGER; col: INTEGER)
		do
			if is_valid_index (row - 1, col + 1) then
				board.put (board.item (row, col), row - 1, col + 1)
				board.put (0, row, col)
			end
		end

	move_diagonal_left_down (row: INTEGER; col: INTEGER)
		do
			if is_valid_index (row + 1, col - 1) then
				board.put (board.item (row, col), row + 1, col - 1)
				board.put (0, row, col)
			end
		end

	move_diagonal_right_down (row: INTEGER; col: INTEGER)
		do
			if is_valid_index (row + 1, col + 1) then
				board.put (board.item (row, col), row + 1, col + 1)
				board.put (0, row, col)
			end
		end


feature --Commands

	capture(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER)
		do
			board.put (board.item (r1, c1), r2, c2)
			board.put (0, r1, c1)
		end



    set_mapping
		do
			piece_mapping.force ("K", piece_mapping.count + 1)
			piece_mapping.force ("Q", piece_mapping.count + 1)
			piece_mapping.force ("N", piece_mapping.count + 1)
			piece_mapping.force ("B", piece_mapping.count + 1)
			piece_mapping.force ("R", piece_mapping.count + 1)
			piece_mapping.force ("P", piece_mapping.count + 1)
		end

feature --Redefined 'out' feature
	out: STRING
		do
			create Result.make_empty
			across 1 |..| 4 is i loop
				Result.append ("  ")
				across 1 |..| 4 is j loop
					if board.item (i, j) ~ 0 then
						Result.append(".")
					else
						Result.append (piece_mapping.item (board.item (i, j)))
					end
				end
				if i /= 4 then
					Result.append ("%N")
				end
			end
		end

invariant
	--Maximum available slots are '16'
	four_by_four_board:
		board.count <= 16

end
