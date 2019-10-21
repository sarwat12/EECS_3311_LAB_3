#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7136)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A159_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A159_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3070, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A159_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3071, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* ETF_GUI_OUTPUT_HANDLER log_error */
void _A1260_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10683, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_EVENT [G#1] execute */
void _A2008_36_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7738, "execute", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_empty */
void _A1261_34_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10681, "log_empty", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_error */
void _A1261_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10683, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_command */
void _A1261_40_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10682, "log_command", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void _A1327_152_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11766, "enable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void _A1327_153_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11767, "disable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void _A1329_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11775, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_TREE_ITEM_CHECK_ACTION_SEQUENCE wrapper */
void _A1330_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11776, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
void _A1331_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11777, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
void _A1332_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11778, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_SCROLL_ACTION_SEQUENCE wrapper */
void _A1333_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11779, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
void _A1334_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11780, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
void _A1335_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11781, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
void _A1336_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11782, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
void _A1337_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11783, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
void _A1338_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11784, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
void _A1339_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11785, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DPI_ACTION_SEQUENCE wrapper */
void _A1340_184_2_3_4_5_6 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11786, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], closed [2]);
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
void _A1341_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11787, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
void _A1342_184_2_3_4_5_6_7_8 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11788, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], closed [2]);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
void _A1343_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11789, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
void _A1344_184_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11790, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], closed [2]);
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
void _A1345_184_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11791, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
void _A1346_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11792, "wrapper", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void _A1346_182 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
void _A1347_184_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11793, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8], closed [2]);
}

	/* ETF_DUMMY etf_dummy */
void _A1369_57 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11982, "etf_dummy", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MOVES_INTERFACE moves */
void _A1370_57_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11983, "moves", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* ETF_MOVE_AND_CAPTURE_INTERFACE move_and_capture */
void _A1372_57_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11984, "move_and_capture", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* ETF_RESET_GAME_INTERFACE reset_game */
void _A1374_57 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11985, "reset_game", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_SETUP_CHESS_INTERFACE setup_chess */
void _A1376_58_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11987, "setup_chess", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3]);
}

	/* ETF_START_GAME_INTERFACE start_game */
void _A1378_57 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11988, "start_game", closed [1].it_r))(closed [1].it_r);
}

	/* WEL_FONT_FAMILY_ENUMERATOR update_current */
void A1401_42 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12259, "update_current", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].it_i4 = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3]));
}

	/* HASH_TABLE [G#1, G#2] put */
void _A413_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void _A536_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void _A601_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void _A887_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void _A936_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, POINTER] put */
void _A1984_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, G#2] remove */
void _A413_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void _A536_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void _A601_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void _A887_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void _A936_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, POINTER] remove */
void _A1984_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* WEL_RICH_EDIT_STREAM_OUT internal_callback */
EIF_INTEGER_32 A1521_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14611, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1])).it_i4;
}

	/* WEL_RICH_EDIT_STREAM_IN internal_callback */
EIF_INTEGER_32 A1524_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	EIF_TYPED_VALUE u [3];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14620, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2])).it_i4;
}

	/* EV_DYNAMIC_LIST [G#1] inline-agent#1 of append */
EIF_TYPED_VALUE _A1981_150_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1981_25563)(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I connect_accelerator */
void _A1721_263_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16430, "connect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I disconnect_accelerator */
void _A1721_264_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16431, "disconnect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_MAIN_WINDOW_IMP command_return_key_pressed */
void _A1609_318 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15364, "command_return_key_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP execute_pressed */
void _A1609_319 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15365, "execute_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP reset_pressed */
void _A1609_320 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15366, "reset_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP load_pressed */
void _A1609_321 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15367, "load_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP destroy_and_exit_if_last */
void _A1609_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15316, "destroy_and_exit_if_last", closed [1].it_r))(closed [1].it_r);
}

	/* EV_DIALOG dialog_key_press_action */
void _A1611_310_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15403, "dialog_key_press_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DIALOG destroy */
void _A1611_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14777, "destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void _A1613_351 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15433, "on_button_press", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void _A1613_352_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15434, "on_key_press", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CHECKABLE_TREE is_item_checked */
EIF_TYPED_VALUE _A1648_308_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15619, "is_item_checked", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_APPLICATION_I contextual_help */
void _A1676_301_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15976, "contextual_help", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_APPLICATION_I safe_destroy */
void _A1676_33 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15653, "safe_destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_TYPED_VALUE _A1676_306_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1676_25585)(closed [1].it_r, open [1], open [2]);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void _A1676_307_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1676_25586)(closed [1].it_r, open [1], open [2], open [3]);
}

	/* EV_APPLICATION_I help_handler */
void _A1676_298 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15973, "help_handler", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void _A1676_243 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15919, "enable_contextual_help", closed [1].it_r))(closed [1].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void _A1328_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_item_clicked */
EIF_TYPED_VALUE _A1680_244_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1680_25588)(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_opened */
EIF_TYPED_VALUE _A1680_245_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1680_25589)(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void _A1684_100 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16132, "close_dockable_dialog", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_CHECKABLE_TREE_I get_state */
void _A1730_271_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16546, "get_state", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PIXMAP_IMP_LOADER update_fields */
void A1824_96 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	EIF_TYPED_VALUE u [6];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17559, "update_fields", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].it_i4 = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_POINTER), (u [4].it_p = arg5), u [4]), ((u [5].type = SK_POINTER), (u [5].it_p = arg6), u [5]));
}

	/* EV_PIXMAP_IMP refresh_color_depth */
void _A1825_466 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17587, "refresh_color_depth", closed [1].it_r))(closed [1].it_r);
}

	/* EV_FONT_IMP update_preferred_faces */
void _A1838_192_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15814, "update_preferred_faces", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WEL_WINDOW_ENUMERATOR enumerate_hwnd_callback */
void A1853_146 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18187, "enumerate_hwnd_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]));
}

	/* WEL_WINDOW_ENUMERATOR enumerate_child_windows_callback */
void A1853_145 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18186, "enumerate_child_windows_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]));
}

	/* WEL_DISPATCHER window_procedure */
EIF_POINTER A1860_367 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18315, "window_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3])).it_p;
}

	/* WEL_DISPATCHER dialog_procedure */
EIF_POINTER A1860_368 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18316, "dialog_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3])).it_p;
}

	/* EV_APPLICATION_IMP on_exception_action */
void _A1862_271_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15959, "on_exception_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PICK_AND_DROPABLE_IMP real_start_transport */
void _A1908_255 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19314, "real_start_transport", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7], closed [8], closed [9], closed [10]);
}

	/* EV_WIDGET_IMP enable_drag_accept_files */
void _A1922_754 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19529, "enable_drag_accept_files", closed [1].it_r))(closed [1].it_r);
}

	/* EV_WIDGET_IMP disable_drag_accept_files */
void _A1922_755 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19530, "disable_drag_accept_files", closed [1].it_r))(closed [1].it_r);
}

	/* EV_CONTAINER_IMP disable_widget_sensitivity */
void _A1923_813_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19565, "disable_widget_sensitivity", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP add_radio_button */
void _A1923_810_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19562, "add_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP enable_widget_sensitivity */
void _A1923_812_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19564, "enable_widget_sensitivity", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP remove_radio_button */
void _A1923_811_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19563, "remove_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_BOX_IMP removed_so_update_non_expandable_children */
void _A1926_1811_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19591, "removed_so_update_non_expandable_children", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_BOX_IMP added_so_update_non_expandable_children */
void _A1926_1812_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19592, "added_so_update_non_expandable_children", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_VERTICAL_BOX_IMP set_item_size */
void _A1927_1824 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19596, "set_item_size", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7]);
}

	/* EV_HORIZONTAL_BOX_IMP set_item_size */
void _A1928_1824 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19596, "set_item_size", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7]);
}

	/* EV_DIALOG_IMP_COMMON copy_box_attributes */
void _A1938_1881 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19667, "copy_box_attributes", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_TOOL_BAR_IMP add_button */
void _A1942_1859_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19732, "add_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP add_radio_button */
void _A1942_1858_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19731, "add_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP add_toggle_button */
void _A1942_1861_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19734, "add_toggle_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP remove_radio_button */
void _A1942_1860_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19733, "remove_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GAUGE_IMP set_range */
void _A1951_793 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19810, "set_range", closed [1].it_r))(closed [1].it_r);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void _A1962_2147_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16666, "update_tab_positions", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* STRING_8 is_empty */
EIF_TYPED_VALUE _A233_162_1 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", open [1].it_r))(open [1].it_r);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A159_97,
(fnptr)A159_161,
(fnptr)A159_162,
(fnptr)A1401_42,
(fnptr)A1521_76,
(fnptr)A1524_76,
(fnptr)A1824_96,
(fnptr)A1853_146,
(fnptr)A1853_145,
(fnptr)A1860_367,
(fnptr)A1860_368,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
