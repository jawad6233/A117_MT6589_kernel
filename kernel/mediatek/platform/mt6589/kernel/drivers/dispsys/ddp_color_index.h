
#include "ddp_drv.h"

const DISPLAY_PQ_T pqindex = 
{
GLOBAL_SAT   :
{0x80,0x84,0x88,0x8c,0x90,0x94,0x98,0x9c,0xa0,0xa5}, //0~9
PARTIAL_Y    :
{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
PURP_TONE_S  :
{//hue 0~10
	{//0 disable  
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x14, 0x14, 0x14},
		{0x32, 0x32, 0x32}
	}, 

	{//1
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x1a, 0x1e, 0x18},
		{0x36, 0x3c, 0x30}
	},
	
	{//2
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x14, 0x14, 0x14},
		{0x32, 0x32, 0x32}
	},

	{//3
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x18, 0x1e, 0x13},
		{0x30, 0x3c, 0x26}
	},
	
	{//4
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x18, 0x1e, 0x13},
		{0x30, 0x3c, 0x26}
	},
	
	{//5
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x18, 0x1e, 0x13},
		{0x30, 0x3c, 0x26}
	},

	{//6
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x18, 0x1e, 0x13},
		{0x30, 0x3c, 0x26}
	},
  // 7
	{
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80}
	},
	// 8
	{
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80}
	},
	// 9
	{
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80}
	}
},
SKIN_TONE_S:
{
	{//0 disable  
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14},
		{0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32}
	},

	{//1
		{0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x80},
		{0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x1a, 0x1a, 0x1a, 0x18, 0x16, 0x17, 0x1a, 0x1c, 0x1d, 0x1e, 0x1e, 0x1e, 0x1e, 0x1c},
		{0x34, 0x36, 0x33, 0x30, 0x2d, 0x2f, 0x33, 0x38, 0x3a, 0x3c, 0x3c, 0x3c, 0x3c, 0x38}
	},
	
	{//2
		{0x90, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0x90, 0x80},
		{0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x1a, 0x1a, 0x1a, 0x18, 0x16, 0x17, 0x1a, 0x1c, 0x1d, 0x1e, 0x1e, 0x1e, 0x1e, 0x1c},
		{0x34, 0x36, 0x33, 0x30, 0x2d, 0x2f, 0x33, 0x38, 0x3a, 0x3c, 0x3c, 0x3c, 0x3c, 0x38}
	},
	
	{//3
		{0x9a, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0x9a, 0x80},
		{0x8f, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0x8f, 0x80},
		{0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x80},
		{0x16, 0x18, 0x16, 0x14, 0x10, 0x12, 0x16, 0x1a, 0x1d, 0x1e, 0x1e, 0x1e, 0x1e, 0x1a},
		{0x2d, 0x30, 0x2b, 0x27, 0x21, 0x24, 0x2b, 0x34, 0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x34}
	},

	{//4
		{0x9a, 0xb2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xb2, 0x9a, 0x80},
		{0x97, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0x95, 0x80},
		{0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x80},
		{0x16, 0x18, 0x16, 0x14, 0x10, 0x12, 0x16, 0x1a, 0x1d, 0x1e, 0x1e, 0x1e, 0x1e, 0x1a},
		{0x2d, 0x30, 0x2b, 0x27, 0x21, 0x24, 0x2b, 0x34, 0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x34}
	},
	
	{//5
		{0xa7, 0xc3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xbb, 0x9e, 0x80},
		{0xa7, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xa9, 0x95, 0x80},
		{0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x6a, 0x80},
		{0x16, 0x18, 0x16, 0x14, 0x10, 0x12, 0x16, 0x1a, 0x1d, 0x1e, 0x1e, 0x1e, 0x1e, 0x1a},
		{0x2d, 0x30, 0x2b, 0x27, 0x21, 0x24, 0x2b, 0x34, 0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x34}
	},
	{//6
		{0xa7, 0xc3, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xd3, 0xbb, 0x9e, 0x80},
		{0xa7, 0xb6, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xb6, 0xa9, 0x95, 0x80},
		{0x5f, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x67, 0x80},
		{0x16, 0x18, 0x16, 0x14, 0x10, 0x12, 0x16, 0x1a, 0x1d, 0x1e, 0x1e, 0x1e, 0x1e, 0x1a},
		{0x2d, 0x30, 0x2b, 0x27, 0x21, 0x24, 0x2b, 0x34, 0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x34}
	},
	
	{//7
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}
	},
	
	{//8
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}
	},
	
	{//9
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}
	}
},
GRASS_TONE_S:
{
	{//0 disable  
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14},
		{0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32}
	},

	{//1
		{0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x80},
		{0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x1a, 0x18, 0x18, 0x1a, 0x1e, 0x18, 0x1a, 0x1a},
		{0x34, 0x31, 0x31, 0x35, 0x3c, 0x30, 0x34, 0x36}
	},
	
	{//2
		{0x90, 0xa1, 0xa1, 0xa1, 0xa0, 0xa0, 0xa1, 0x80},
		{0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x1a, 0x18, 0x18, 0x1a, 0x1e, 0x18, 0x1a, 0x1a},
		{0x34, 0x31, 0x31, 0x35, 0x3c, 0x30, 0x34, 0x36}
	},

	{//3
		{0x97, 0xb2, 0xb2, 0xb2, 0xb2, 0xb2, 0xa0, 0x80},
		{0x8f, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0x8f, 0x80},
		{0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x80},
		{0x16, 0x14, 0x14, 0x17, 0x1e, 0x13, 0x16, 0x18},
		{0x2e, 0x28, 0x28, 0x2f, 0x3c, 0x26, 0x2d, 0x30}
	},
	
	{//4
		{0xa0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xa0, 0x80},
		{0x97, 0xab, 0xab, 0xab, 0xab, 0xab, 0x98, 0x80},
		{0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x80},
		{0x16, 0x14, 0x14, 0x17, 0x1e, 0x13, 0x16, 0x18},
		{0x2e, 0x28, 0x28, 0x2f, 0x3c, 0x26, 0x2d, 0x30}
	},

	{//5
		{0xa9, 0xc6, 0xd3, 0xd3, 0xd3, 0xca, 0xb0, 0x80},
		{0x9e, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xa5, 0x80},
		{0x6a, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x6a, 0x80},
		{0x16, 0x14, 0x14, 0x17, 0x1e, 0x13, 0x16, 0x18},
		{0x2e, 0x28, 0x28, 0x2f, 0x3c, 0x26, 0x2d, 0x30}
	},
	
	{//6
		{0xa9, 0xc6, 0xdb, 0xe7, 0xe7, 0xdb, 0xbd, 0x80},
		{0x9e, 0xb2, 0xc0, 0xc0, 0xc0, 0xb6, 0xab, 0x80},
		{0x6a, 0x5a, 0x55, 0x55, 0x55, 0x5f, 0x6a, 0x80},
		{0x16, 0x14, 0x14, 0x17, 0x1e, 0x13, 0x16, 0x18},
		{0x2e, 0x28, 0x28, 0x2f, 0x3c, 0x26, 0x2d, 0x30}
	},

	{//7
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}
	},
	
	{//8
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}
	},
	
	{//9
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}
	}


},
SKY_TONE_S:
{
	{//0 disable
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x14, 0x14, 0x14},
		{0x32, 0x32, 0x32}
	},

	{//1
		{0x90, 0x90, 0x90},
		{0x8a, 0x8a, 0x8a},
		{0x80, 0x80, 0x80},
		{0x17, 0x1e, 0x1c},
		{0x2f, 0x3c, 0x38}
	},
	{//2
		{0xa1, 0xa1, 0xa1},
		{0x8f, 0x8f, 0x8f},
		{0x80, 0x80, 0x80},
		{0x17, 0x1e, 0x1c},
		{0x2f, 0x3c, 0x38}
	},

	{//3
		{0xab, 0xb2, 0xab},
		{0x9a, 0xa0, 0x9a},
		{0x75, 0x75, 0x75},
		{0x12, 0x1e, 0x1a},
		{0x24, 0x3c, 0x34}
	},
	{//4
		{0xad, 0xc3, 0xad},
		{0xa3, 0xab, 0xa3},
		{0x6a, 0x6a, 0x6a},
		{0x12, 0x1e, 0x1a},
		{0x24, 0x3c, 0x34}
	},

	{//5
		{0xbd, 0xd3, 0xbd},
		{0xad, 0xb6, 0xad},
		{0x67, 0x5f, 0x67},
		{0x12, 0x1e, 0x1a},
		{0x24, 0x3c, 0x34}
	},
	
	{//6
		{0xca, 0xe7, 0xca},
		{0xb2, 0xc0, 0xb4},
		{0x5f, 0x55, 0x5f},
		{0x12, 0x1e, 0x1a},
		{0x24, 0x3c, 0x34}
	},
	
	{//7
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80}
	},
	
	{//8
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80}
	},
	
	{//9
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80},
		{0x80, 0x80, 0x80}
	}


},

PURP_TONE_H :
{ 
//hue 0~2 
	{0x80, 0x80, 0x80},//0 -3
	{0x80, 0x80, 0x80},//1 -2
	{0x80, 0x80, 0x80},//2 -1
  {0x80, 0x80, 0x80},//3 disable
  {0x80, 0x80, 0x80},//4 +1
  {0x80, 0x80, 0x80},//5 +2
  {0x80, 0x80, 0x80},//6  +3 
  {0x80, 0x80, 0x80},//7 +0 
  {0x80, 0x80, 0x80},//8 +0
  {0x80, 0x80, 0x80}//9 +0  
},
	
SKIN_TONE_H:
{
//hue 3~16
	{0x80, 0x80, 0x7a, 0x74, 0x6f, 0x6a, 0x66, 0x63, 0x64, 0x67, 0x6c, 0x71, 0x79, 0x80},//0 -3     
	{0x80, 0x80, 0x7c, 0x77, 0x71, 0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 0x72, 0x78, 0x7c, 0x80},//1 -2     
	{0x80, 0x80, 0x7c, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x7c, 0x80},//2 -1     
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},//3 disable
	{0x84, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x86, 0x80},//4 +1     
	{0x86, 0x8b, 0x8f, 0x93, 0x94, 0x94, 0x94, 0x94, 0x94, 0x94, 0x94, 0x90, 0x87, 0x80},//5 +2     
	{0x8a, 0x90, 0x96, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x99, 0x96, 0x90, 0x87, 0x80},//6  +3     
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},//7 +0
  {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},//8 +0
  {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}//9 +0
},
	
GRASS_TONE_H :
{
// hue 17~24
	{0x78, 0x74, 0x6e, 0x69, 0x64, 0x68, 0x6f, 0x80},//0 -3     
	{0x7c, 0x77, 0x73, 0x6e, 0x6d, 0x6d, 0x74, 0x80},//1 -2     
	{0x7c, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7a, 0x80},//2 -1     
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},//3 disable
	{0x86, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x86, 0x80},//4 +1     
	{0x89, 0x8e, 0x93, 0x94, 0x94, 0x91, 0x8a, 0x80},//5 +2     
	{0x89, 0x92, 0x99, 0x9c, 0x9c, 0x98, 0x8d, 0x80},//6  +3     
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},//7 +0
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},//8 +0
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}//9 +0
},

SKY_TONE_H:
{
	{0x70, 0x63, 0x70},//0 -3     
	{0x72, 0x6d, 0x72},//1 -2     
	{0x77, 0x77, 0x77},//2 -1     
	{0x80, 0x80, 0x80},//3 disable
	{0x8a, 0x8a, 0x8a},//4 +1     
	{0x8f, 0x94, 0x8f},//5 +2     
	{0x95, 0x9c, 0x95},//6  +3     
	{0x80, 0x80, 0x80},//7 +0
	{0x80, 0x80, 0x80},//8 +0
	{0x80, 0x80, 0x80}//9 +0
	
}

};

const DISPLAY_GAMMA_T gammaindex = 
{
entry:
{
    {
      0,  16,  32,  48,  64,  80,  96, 112, 128, 144, 160, 176, 192, 208, 224, 240, 
	  1,  17,  33,  49,  65,  81,  97, 113, 129, 145, 161, 177, 193, 209, 225, 241, 
	  2,  18,  34,  50,  66,  82,  98, 114, 130, 146, 162, 178, 194, 210, 226, 242, 
	  3,  19,  35,  51,  67,  83,  99, 115, 131, 147, 163, 179, 195, 211, 227, 243, 
	  4,  20,  36,  52,  68,  84, 100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 
	  5,  21,  37,  53,  69,  85, 101, 117, 133, 149, 165, 181, 197, 213, 229, 245, 
	  6,  22,  38,  54,  70,  86, 102, 118, 134, 150, 166, 182, 198, 214, 230, 246, 
	  7,  23,  39,  55,  71,  87, 103, 119, 135, 151, 167, 183, 199, 215, 231, 247, 
	  8,  24,  40,  56,  72,  88, 104, 120, 136, 152, 168, 184, 200, 216, 232, 248, 
	  9,  25,  41,  57,  73,  89, 105, 121, 137, 153, 169, 185, 201, 217, 233, 249, 
	 10,  26,  42,  58,  74,  90, 106, 122, 138, 154, 170, 186, 202, 218, 234, 250, 
	 11,  27,  43,  59,  75,  91, 107, 123, 139, 155, 171, 187, 203, 219, 235, 251, 
	 12,  28,  44,  60,  76,  92, 108, 124, 140, 156, 172, 188, 204, 220, 236, 252, 
	 13,  29,  45,  61,  77,  93, 109, 125, 141, 157, 173, 189, 205, 221, 237, 253, 
	 14,  30,  46,  62,  78,  94, 110, 126, 142, 158, 174, 190, 206, 222, 238, 254, 
	 15,  31,  47,  63,  79,  95, 111, 127, 143, 159, 175, 191, 207, 223, 239, 255
    },
    {
	  0,  16,  32,  48,  64,  80,  96, 112, 128, 144, 160, 176, 192, 208, 224, 240, 
	  1,  17,  33,  49,  65,  81,  97, 113, 129, 145, 161, 177, 193, 209, 225, 241, 
	  2,  18,  34,  50,  66,  82,  98, 114, 130, 146, 162, 178, 194, 210, 226, 242, 
	  3,  19,  35,  51,  67,  83,  99, 115, 131, 147, 163, 179, 195, 211, 227, 243, 
	  4,  20,  36,  52,  68,  84, 100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 
	  5,  21,  37,  53,  69,  85, 101, 117, 133, 149, 165, 181, 197, 213, 229, 245, 
	  6,  22,  38,  54,  70,  86, 102, 118, 134, 150, 166, 182, 198, 214, 230, 246, 
	  7,  23,  39,  55,  71,  87, 103, 119, 135, 151, 167, 183, 199, 215, 231, 247, 
	  8,  24,  40,  56,  72,  88, 104, 120, 136, 152, 168, 184, 200, 216, 232, 248, 
	  9,  25,  41,  57,  73,  89, 105, 121, 137, 153, 169, 185, 201, 217, 233, 249, 
	 10,  26,  42,  58,  74,  90, 106, 122, 138, 154, 170, 186, 202, 218, 234, 250, 
	 11,  27,  43,  59,  75,  91, 107, 123, 139, 155, 171, 187, 203, 219, 235, 251, 
	 12,  28,  44,  60,  76,  92, 108, 124, 140, 156, 172, 188, 204, 220, 236, 252, 
	 13,  29,  45,  61,  77,  93, 109, 125, 141, 157, 173, 189, 205, 221, 237, 253, 
	 14,  30,  46,  62,  78,  94, 110, 126, 142, 158, 174, 190, 206, 222, 238, 254, 
	 15,  31,  47,  63,  79,  95, 111, 127, 143, 159, 175, 191, 207, 223, 239, 255
    },
    {
	  0,  16,  32,  48,  64,  80,  96, 112, 128, 144, 160, 176, 192, 208, 224, 240, 
	  1,  17,  33,  49,  65,  81,  97, 113, 129, 145, 161, 177, 193, 209, 225, 241, 
	  2,  18,  34,  50,  66,  82,  98, 114, 130, 146, 162, 178, 194, 210, 226, 242, 
	  3,  19,  35,  51,  67,  83,  99, 115, 131, 147, 163, 179, 195, 211, 227, 243, 
	  4,  20,  36,  52,  68,  84, 100, 116, 132, 148, 164, 180, 196, 212, 228, 244, 
	  5,  21,  37,  53,  69,  85, 101, 117, 133, 149, 165, 181, 197, 213, 229, 245, 
	  6,  22,  38,  54,  70,  86, 102, 118, 134, 150, 166, 182, 198, 214, 230, 246, 
	  7,  23,  39,  55,  71,  87, 103, 119, 135, 151, 167, 183, 199, 215, 231, 247, 
	  8,  24,  40,  56,  72,  88, 104, 120, 136, 152, 168, 184, 200, 216, 232, 248, 
	  9,  25,  41,  57,  73,  89, 105, 121, 137, 153, 169, 185, 201, 217, 233, 249, 
	 10,  26,  42,  58,  74,  90, 106, 122, 138, 154, 170, 186, 202, 218, 234, 250, 
	 11,  27,  43,  59,  75,  91, 107, 123, 139, 155, 171, 187, 203, 219, 235, 251, 
	 12,  28,  44,  60,  76,  92, 108, 124, 140, 156, 172, 188, 204, 220, 236, 252, 
	 13,  29,  45,  61,  77,  93, 109, 125, 141, 157, 173, 189, 205, 221, 237, 253, 
	 14,  30,  46,  62,  78,  94, 110, 126, 142, 158, 174, 190, 206, 222, 238, 254, 
	 15,  31,  47,  63,  79,  95, 111, 127, 143, 159, 175, 191, 207, 223, 239, 255
    }
}
};