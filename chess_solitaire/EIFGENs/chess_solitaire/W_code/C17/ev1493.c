/*
 * Code for class EV_CHECK_MENU_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1493_14743(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1493_14744(EIF_REFERENCE);
extern void F1493_14745(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1493_14746(EIF_REFERENCE);
extern void F1493_14747(EIF_REFERENCE);
extern void F1493_14748(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1493_14749(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1493_14750(EIF_REFERENCE);
static EIF_TYPED_VALUE F1493_14751_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1493_14751(EIF_REFERENCE);
extern void EIF_Minit1493(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHECK_MENU_ITEM_IMP}.old_make */
void F1493_14743 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 1, 20940);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20940);
	RTCC(arg1, 1492, l_feature_name, 1, RTWCT(9327, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_interface_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9320, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9327, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("base_make_called", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9337, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_CHECK_MENU_ITEM_IMP}.initialize_menu_item */
void F1493_14744 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_menu_item";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 0, 20941);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20941);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5391, 969))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9844, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_CHECK_MENU_ITEM_IMP}.make */
void F1493_14745 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 0, 20942);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20942);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9322, 1490))(Current);
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10888, dtype))(Current)).it_p);
	up1 = tp1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5393, 969))(Current, up1x, ub1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10093, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_initialized", EX_POST);
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9330, dtype))(Current)).it_i1);
		ui1_1 = ti1_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9336, dtype))(Current, ui1_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui1_1
#undef ub1
}

/* {EV_CHECK_MENU_ITEM_IMP}.is_selected */
EIF_TYPED_VALUE F1493_14746 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_selected";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 0, 20943);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20943);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10888, dtype))(Current)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5626, 969))(Current, up1x)).it_i4);
	RTNHOOK(1,1);
	tr1 = RTLN(eif_new_type(221, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4490, "to_boolean", tr1))(tr1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {EV_CHECK_MENU_ITEM_IMP}.enable_select */
void F1493_14747 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_select";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 0, 20944);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20944);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_selectable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10089, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10090, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 10897, 0x04000000, 1); /* ignore_select_actions */
		*(EIF_BOOLEAN *)(Current + RTWA(10897, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10888, dtype))(Current)).it_p);
		up1 = tp1;
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5392, 969))(Current, up1x, ub1x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 10897, 0x04000000, 1); /* ignore_select_actions */
		*(EIF_BOOLEAN *)(Current + RTWA(10897, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("selected", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10090, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_CHECK_MENU_ITEM_IMP}.disable_select */
void F1493_14748 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_select";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 0, 20945);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20945);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_selectable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10089, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10090, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 10897, 0x04000000, 1); /* ignore_select_actions */
		*(EIF_BOOLEAN *)(Current + RTWA(10897, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10888, dtype))(Current)).it_p);
		up1 = tp1;
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5392, 969))(Current, up1x, ub1x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 10897, 0x04000000, 1); /* ignore_select_actions */
		*(EIF_BOOLEAN *)(Current + RTWA(10897, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("deselected", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10090, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_CHECK_MENU_ITEM_IMP}.allow_on_activate */
EIF_TYPED_VALUE F1493_14749 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "allow_on_activate";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 0, 20946);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20946);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10846, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(10897, dtype));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {EV_CHECK_MENU_ITEM_IMP}.ignore_select_actions */
EIF_TYPED_VALUE F1493_14750 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10897,Dtype(Current)));
	return r;
}


/* {EV_CHECK_MENU_ITEM_IMP}.interface */
static EIF_TYPED_VALUE F1493_14751_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1492, Current, 0, 0, 20948);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1492, Current, 20948);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1493_14751 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9327,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9327, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1493_14751_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9327,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1493 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
