static const Block blocks[] = {
	/* icon */   /* command */                   /* update interval */   /* update signal */
	{ "",         "dwmblocks_hostanduser",			0,						0 },
	{ "",         "dwmblocks_keyboard_layout",		1,						1 },
	/* { "",         "dwmblocks_network",				5,						0 }, */
	{ "",         "dwmblocks_network_short",		1,						0 },
	{ "",         "dwmblocks_volume",				1,						2 },
	{ "",         "dwmblocks_memory",				1,						0 },
//	{ "",         "dwmblocks_swap",					5,						0 },
	{ "",         "dwmblocks_date",					1,						0 },
//	{ "",         "dwmblocks_battery",				5,						0 },
};

// sets the delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "^d^|";
static unsigned int delimLen = 4;
