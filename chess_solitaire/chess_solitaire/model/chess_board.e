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
		end

feature --Board Implementation
	board: ARRAY2[INTEGER]
	num_pieces: INTEGER


feature --Chess piece movements	
	chess_at (row: INTEGER; col: INTEGER)
		do

		end

    move_up (row: INTEGER; col: INTEGER)
    	do

    	end

    move_down (row: INTEGER col: INTEGER)
    	do

    	end

	move_left (row: INTEGER; col: INTEGER)
		do

		end

	move_right (row: INTEGER; col: INTEGER)
		do

		end

feature --Redefined 'out' feature
	out: STRING
		do
			create Result.make_empty
		end

invariant
	--Maximum available slots are '16'
	four_by_four_board:
		board.count <= 16

end
