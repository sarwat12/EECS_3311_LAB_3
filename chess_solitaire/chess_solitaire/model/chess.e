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
			start := 1
		end

feature --Implementation

	chess_board: CHESS_BOARD
	message: STRING
	error: STRING
	num_pieces: INTEGER
	game_started: BOOLEAN
	start: INTEGER


feature -- model operations

	setup_chess(c: INTEGER ; row: INTEGER_32 ; col: INTEGER_32)
		do
			chess_board.board.put (c, row, col)
			num_pieces := num_pieces + 1
			set_start
		end

	start_game
		do
			game_started := TRUE
			set_start
		end

	moves(row: INTEGER_32 ; col: INTEGER_32)
		do
			set_start
		end

	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		do
			set_start
		end

	set_start
		do
			start := start + 1
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

			Result.append ("  # of chess pieces on board: " + num_pieces.out + "%N")

			if start = 1 then
				Result.append("  Game being Setup...%N")
			end

			if not error.is_empty then
				Result.append (error)
			end

			Result.append (chess_board.out)
		end

end




