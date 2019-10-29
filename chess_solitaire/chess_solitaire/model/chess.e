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
			game_finished:= FALSE
			start := 1
		end

feature --Implementation

	chess_board: CHESS_BOARD
	message: STRING
	error: STRING
	num_pieces: INTEGER
	game_started: BOOLEAN
	game_finished: BOOLEAN
	start: INTEGER


feature -- model operations

	setup_chess(c: INTEGER ; row: INTEGER_32 ; col: INTEGER_32)
		require
			game_did_not_start:
				game_started = FALSE

			valid_slot:
				row > 0 or row < 5 or col > 0 or col < 5

			slot_not_occupied:
				chess_board.board.item (row, col) = 0
		do
			chess_board.board.put (c, row, col)
			num_pieces := num_pieces + 1
			set_start
		end

	start_game
		require
			game_did_not_start: game_started = FALSE
		do
			game_started := TRUE
			set_start
		end

	moves(row: INTEGER_32 ; col: INTEGER_32)
		require
			game_start:
				game_started = TRUE

			game_not_finished:
				start /= 0

			occupied_slot:
				chess_board.board.item (row, col) /= 0

			valid_slot:
				row > 0 or row < 5 or col > 0 or col < 5
		do

			set_start

			chess_board.set_moves_trigger
		end

	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		require
			game_start:
				game_started = TRUE

			game_not_finished:
				start /= 0

			occupied_slot:
				chess_board.board.item (r1, c1) /= 0 and
				chess_board.board.item (r2, c2) /= 0

			valid_slot:
				(r1 > 0 or r1 < 5 or c1 > 0 or c1 < 5) and
				(r2 > 0 or r2 < 5 or c2 > 0 or c2 < 5)
		do
			set_start
			
		end

	set_start
		do
			start := start + 1
		end

	reset_game
		require
			game_start:
				game_started = TRUE
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

	set_game_started(b: BOOLEAN)
		do
			game_started := b
		end

	set_game_finished(b: BOOLEAN)
		do
			game_finished := b
			start := 0
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




