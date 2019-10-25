note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVES
inherit
	ETF_MOVES_INTERFACE
create
	make
feature -- command
	moves(row: INTEGER_32 ; col: INTEGER_32)
    	do
			-- perform some update on the model state
			if model.game_started = FALSE then
				model.set_error ("  Error: Game not yet started%N")
			else
				model.moves(row, col)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
