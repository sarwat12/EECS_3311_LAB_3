note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS

inherit
	ANY
		redefine
			out
		end

create {CHESS_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create chess_board.make
			create message.make_empty
			create error.make_empty
			num_pieces := 0
			game_started:= FALSE
		end

feature --Implementation

	chess_board: CHESS_BOARD
	message: STRING
	error: STRING
	num_pieces: INTEGER
	game_started: BOOLEAN


feature -- model operations

	setup_chess(c: CHARACTER ; row: INTEGER_32 ; col: INTEGER_32)
		do
			chess_board.board.put (c, row, col)
			num_pieces := num_pieces + 1
		end

	start_game
		do
			game_started := TRUE
		end

	moves(row: INTEGER_32 ; col: INTEGER_32)
		do

		end

	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		do

		end

	reset_game
		do
			make
		end

	reset
			-- Reset model state.
		do
			make
		end

	set_error(s: STRING)
		do
			error := s
		end

feature -- queries
	out : STRING
		do
			create Result.make_empty
			Result.append ("# of chess pieces on board: ")
			Result.append_integer (num_pieces)
			Result.append ("%N")
			if game_started = False then
				Result.append("Game being Setup...%N")
			end
			if error.is_empty then
				Result.append (message)
			else
				Result.append (error)
			end
			across 1 |..| 4 is i loop
				across 1 |..| 4 is j loop
					if chess_board.board.item (i, j) ~ 'E' then
						Result.append(".")
					else
						Result.append_character (chess_board.board.item (i, j))
					end
				end
				Result.append ("%N")
			end
		end

end




