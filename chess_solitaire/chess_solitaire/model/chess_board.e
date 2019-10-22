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

		end

feature --Attributes


feature --Redefined 'out' feature
	out: STRING
		do
			create Result.make_empty
		end

end
