/*
 * Class DATE_TIME_PARSER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_999 [] = {0xFF01,245,998,0xFFFF};
static const EIF_TYPE_INDEX egt_2_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_3_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_6_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_7_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_999 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_999 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_13_999 [] = {0xFF01,962,0xFFFF};
static const EIF_TYPE_INDEX egt_14_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_15_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_16_999 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_17_999 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_18_999 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_19_999 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_20_999 [] = {0xFF01,546,218,0xFFFF};
static const EIF_TYPE_INDEX egt_21_999 [] = {0xFF01,158,0xFFFF};
static const EIF_TYPE_INDEX egt_22_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_23_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_24_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_25_999 [] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_26_999 [] = {0xFF01,535,0xFF01,989,218,0xFFFF};
static const EIF_TYPE_INDEX egt_27_999 [] = {248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_28_999 [] = {248,0xFF01,232,0xFFFF};


static const struct desc_info desc_999[] = {
	{EIF_GENERIC(NULL), 14092, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_999), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_999), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_999), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_999), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_999), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_999), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_999), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_999), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_999), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_999), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_999), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_999), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07CD /*998*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_999), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13696, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13697, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_999), 13698, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_999), 13699, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13725, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13726, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13727, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13728, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13729, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13730, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_999), 13731, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_999), 13732, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_999), 13733, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_999), 13734, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_999), 13735, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13736, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13737, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_999), 13738, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13935, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13936, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13937, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13940, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13941, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13942, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13943, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13750, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13946, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_999), 6565, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13938, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13939, 48},
	{EIF_GENERIC(NULL), 13944, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13945, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13947, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13948, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13949, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13950, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13931, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13932, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_999), 13933, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13934, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14013, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14014, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14015, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14016, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14017, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14018, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14019, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13700, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13701, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13702, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13703, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13704, 0xFFFFFFFF},
	{EIF_GENERIC(egt_23_999), 13705, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13714, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13715, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13716, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 13719, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13706, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13707, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13708, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13724, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13723, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 13717, 80},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13718, 44},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13720, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13721, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13722, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13709, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13710, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13711, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13712, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13713, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13980, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13981, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13982, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14063, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14064, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14065, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13670, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13671, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13672, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13673, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13674, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13675, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13676, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13677, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13678, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13679, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13680, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13681, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13682, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13683, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13684, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13685, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13686, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13687, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13688, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13689, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13690, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13691, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13692, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13693, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13694, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13695, 0xFFFFFFFF},
	{EIF_GENERIC(egt_24_999), 13951, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13952, 0xFFFFFFFF},
	{EIF_GENERIC(egt_25_999), 13953, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13954, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14093, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 14094, 0},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14095, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14096, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14097, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14066, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14067, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 14068, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 14069, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14070, 40},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14071, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14072, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14073, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14074, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14075, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14076, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14077, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14078, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14079, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14080, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14081, 52},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14082, 56},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14083, 60},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14084, 64},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14085, 68},
	{EIF_NON_GENERIC(0x019D /*206*/), 14086, 88},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 14087, 8},
	{EIF_GENERIC(egt_26_999), 14088, 16},
	{EIF_GENERIC(egt_27_999), 14089, 24},
	{EIF_GENERIC(egt_28_999), 14090, 32},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14091, 72},
};
void Init999(void)
{
	IDSC(desc_999, 0, 998);
	IDSC(desc_999 + 1, 1, 998);
	IDSC(desc_999 + 32, 401, 998);
	IDSC(desc_999 + 36, 391, 998);
	IDSC(desc_999 + 50, 392, 998);
	IDSC(desc_999 + 58, 127, 998);
	IDSC(desc_999 + 60, 382, 998);
	IDSC(desc_999 + 72, 383, 998);
	IDSC(desc_999 + 79, 398, 998);
	IDSC(desc_999 + 85, 397, 998);
	IDSC(desc_999 + 94, 385, 998);
	IDSC(desc_999 + 104, 386, 998);
	IDSC(desc_999 + 107, 389, 998);
	IDSC(desc_999 + 110, 402, 998);
	IDSC(desc_999 + 136, 395, 998);
	IDSC(desc_999 + 140, 393, 998);
}


#ifdef __cplusplus
}
#endif
