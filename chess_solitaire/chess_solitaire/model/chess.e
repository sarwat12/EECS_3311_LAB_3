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
		end

feature --Implementation

	chess_board: CHESS_BOARD


feature -- model operations

	setup_chess(c: INTEGER_32 ; row: INTEGER_32 ; col: INTEGER_32)
		do

		end

	start_game
		do

		end

	moves(row: INTEGER_32 ; col: INTEGER_32)
		do

		end

	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		do

		end

	reset_game
		do

		end

	reset
			-- Reset model state.
		do
			make
		end

feature -- queries
	out : STRING
		do
			create Result.make_empty
		end

end




