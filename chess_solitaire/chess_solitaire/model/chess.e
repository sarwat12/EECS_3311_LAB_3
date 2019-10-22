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
			create s.make_empty
			i := 1
		end

feature --Implementation

feature -- model attributes
	s : STRING
	i : INTEGER

feature -- model operations

	setup_chess
		do

		end

	start_game
		do

		end

	moves
		do

		end

	move_and_capture
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
			create Result.make_from_string ("  ")
			Result.append ("System State: default model state ")
			Result.append ("(")
			Result.append (i.out)
			Result.append (")")
		end

end




