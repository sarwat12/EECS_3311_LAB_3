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
			create moves_board.make_filled ([0, 0], 4, 4)
		end

feature --Board Implementation
	board: ARRAY2[INTEGER] --multi-dimesional board for storing and representing chess pieces
	num_pieces: INTEGER
	piece_mapping: ARRAY[STRING]  --Mapping for each chess piece to its corresponding integer
	x: INTEGER --for later use in ETF_MOVES
	y: INTEGER --for later use in ETF_MOVES
	moves_board: ARRAY2[TUPLE[a: INTEGER; b:INTEGER]] --for later use in ETF_MOVES
	moves_trigger: INTEGER  --signal for initiating ET_MOVES output


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
			Result := FALSE
			if is_valid_index (r2, c2) then
				if (r2 = r1 + 1 or r2 = r1 - 1) and c2 = c1 then
					Result := TRUE
				end
				if (c2 = c1 + 1 or c2 = c1 - 1) and r2 = r1 then
					Result := TRUE
				end
				if ((r2 = r1 + 1) or (r2 = r1 - 1)) and ((c2 = c1 + 1) or (c2 = c1 - 1))  then
					Result := TRUE
				end
			end
		end

	queen_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do
			Result := FALSE
			if is_valid_index (r2, c2) then
				if ((r2 - r1) = (c2 - c1)) then
					Result := TRUE
				end
				if r2 = r1 then
					Result := TRUE
				end
				if c2 = c1 then
					Result := TRUE
				end
			end
		end

	block_exists_queen(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER): BOOLEAN
		do

		end

	knight_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do
			Result := FALSE
			if is_valid_index (r2, c2) then

			end
		end

	block_exists_knight(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER): BOOLEAN
		do

		end

	bishop_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		local
			a,b :INTEGER
		do
			Result := FALSE
			a := r2 - r1
			b := c2 - c1
			if is_valid_index (r2, c2) then
				if (a.abs = b.abs) then
					Result := TRUE
				end
			end
		end

	block_exists_bishop(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER): BOOLEAN
		do
			
		end

	rook_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do
			Result := FALSE
			if is_valid_index (r2, c2) then
				if c2 = c1 then
					Result := TRUE
				end
				if r2 = r1 then
					Result := TRUE
				end
			end
		end

	block_exists_rook(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER): BOOLEAN
		do

		end

	pawn_is_valid_move(r1:INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER):BOOLEAN
		do
			Result := FALSE

			if is_valid_index (r2, c2)  and (r2 = r1 + 1) and (c2 = c1 + 1) then
				Result := TRUE
			end
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

	print_moves(row: INTEGER_32 ; col: INTEGER_32): STRING
	do
		x:= row
		y:= col
		create Result.make_empty
		across 1 |..| 4 is i loop
				Result.append ("  ")
				across 1 |..| 4 is j loop
					if i = x and j = y then
						Result.append(piece_mapping.item (board.item (i, j)))
					else
						Result.append (".")
					end
				end
				if i /= 4 then
					Result.append ("%N")
				end
			end
	end

	print_board: STRING
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

		set_moves_trigger
			do
				moves_trigger := 1
			end

feature --Redefined 'out' feature
	out: STRING
		do
			create Result.make_empty
			if moves_trigger = 1 then
				Result.append(print_moves(x,y))
				moves_trigger := 0
			else
				Result.append (print_board)
			end

		end

invariant
	--Maximum available slots are '16'
	four_by_four_board:
		board.count <= 16

end
