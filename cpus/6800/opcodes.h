"aba", { INH }, { 0x00, 0x1B, 0x00, M6800 | M6801 | M68HC11 }, "abx", { INH },
	{ 0x00, 0x3A, 0x00, M6801 | M68HC11 }, "aby", { INH },
	{ 0x18, 0x3A, 0x00, M68HC11 }, "adca", { IMM },
	{ 0x00, 0x89, 0x00, M6800 | M6801 | M68HC11 }, "adca", { ADDR },
	{ 0x00, 0xB9, 0x99, M6800 | M6801 | M68HC11 }, "adca", { DIR, REGX },
	{ 0x00, 0x00, 0xA9, M6800 | M6801 | M68HC11 }, "adca", { DIR, REGY },
	{ 0x18, 0x00, 0xA9, M68HC11 }, "adcb", { IMM },
	{ 0x00, 0xC9, 0x00, M6800 | M6801 | M68HC11 }, "adcb", { ADDR },
	{ 0x00, 0xF9, 0xD9, M6800 | M6801 | M68HC11 }, "adcb", { DIR, REGX },
	{ 0x00, 0x00, 0xE9, M6800 | M6801 | M68HC11 }, "adcb", { DIR, REGY },
	{ 0x18, 0x00, 0xE9, M68HC11 }, "adda", { IMM },
	{ 0x00, 0x8B, 0x00, M6800 | M6801 | M68HC11 }, "adda", { ADDR },
	{ 0x00, 0xBB, 0x9B, M6800 | M6801 | M68HC11 }, "adda", { DIR, REGX },
	{ 0x00, 0x00, 0xAB, M6800 | M6801 | M68HC11 }, "adda", { DIR, REGY },
	{ 0x18, 0x00, 0xAB, M68HC11 }, "addb", { IMM },
	{ 0x00, 0xCB, 0x00, M6800 | M6801 | M68HC11 }, "addb", { ADDR },
	{ 0x00, 0xFB, 0xDB, M6800 | M6801 | M68HC11 }, "addb", { DIR, REGX },
	{ 0x00, 0x00, 0xEB, M6800 | M6801 | M68HC11 }, "addb", { DIR, REGY },
	{ 0x18, 0x00, 0xEB, M68HC11 }, "addd", { IMM16 },
	{ 0x00, 0xC3, 0x00, M6801 | M68HC11 }, "addd", { ADDR },
	{ 0x00, 0xF3, 0xD3, M6801 | M68HC11 }, "addd", { DIR, REGX },
	{ 0x00, 0x00, 0xE3, M6801 | M68HC11 }, "addd", { DIR, REGY },
	{ 0x18, 0x00, 0xE3, M68HC11 }, "anda", { IMM },
	{ 0x00, 0x84, 0x00, M6800 | M6801 | M68HC11 }, "anda", { ADDR },
	{ 0x00, 0xB4, 0x94, M6800 | M6801 | M68HC11 }, "anda", { DIR, REGX },
	{ 0x00, 0x00, 0xA4, M6800 | M6801 | M68HC11 }, "anda", { DIR, REGY },
	{ 0x18, 0x00, 0xA4, M68HC11 }, "andb", { IMM },
	{ 0x00, 0xC4, 0x00, M6800 | M6801 | M68HC11 }, "andb", { ADDR },
	{ 0x00, 0xF4, 0xD4, M6800 | M6801 | M68HC11 }, "andb", { DIR, REGX },
	{ 0x00, 0x00, 0xE4, M6800 | M6801 | M68HC11 }, "andb", { DIR, REGY },
	{ 0x18, 0x00, 0xE4, M68HC11 }, "asl", { EXT },
	{ 0x00, 0x78, 0x00, M6800 | M6801 | M68HC11 }, "asl", { DIR, REGX },
	{ 0x00, 0x00, 0x68, M6800 | M6801 | M68HC11 }, "asl", { DIR, REGY },
	{ 0x18, 0x00, 0x68, M68HC11 }, "asla", { INH },
	{ 0x00, 0x48, 0x00, M6800 | M6801 | M68HC11 }, "aslb", { INH },
	{ 0x00, 0x58, 0x00, M6800 | M6801 | M68HC11 }, "asld", { INH },
	{ 0x00, 0x05, 0x00, M6800 | M6801 | M68HC11 }, "asr", { EXT },
	{ 0x00, 0x77, 0x00, M6800 | M6801 | M68HC11 }, "asr", { DIR, REGX },
	{ 0x00, 0x00, 0x67, M6800 | M6801 | M68HC11 }, "asr", { DIR, REGY },
	{ 0x18, 0x00, 0x67, M68HC11 }, "asra",
	{
		INH,
	},
	{ 0x00, 0x47, 0x00, M6800 | M6801 | M68HC11 }, "asrb",
	{
		INH,
	},
	{ 0x00, 0x57, 0x00, M6800 | M6801 | M68HC11 },

	"bclr", { DIR, IMM }, { 0x00, 0x00, 0x15, M68HC11 }, "bclr",
	{ DIR, REGX, IMM }, { 0x00, 0x00, 0x1D, M68HC11 }, "bclr",
	{ DIR, REGY, IMM }, { 0x18, 0x00, 0x1D, M68HC11 },

	"bcc",
	{
		REL,
	},
	{ 0x00, 0x24, 0x00, M6800 | M6801 | M68HC11 }, "bcs",
	{
		REL,
	},
	{ 0x00, 0x25, 0x00, M6800 | M6801 | M68HC11 }, "beq",
	{
		REL,
	},
	{ 0x00, 0x27, 0x00, M6800 | M6801 | M68HC11 }, "bge",
	{
		REL,
	},
	{ 0x00, 0x2C, 0x00, M6800 | M6801 | M68HC11 }, "bgt",
	{
		REL,
	},
	{ 0x00, 0x2E, 0x00, M6800 | M6801 | M68HC11 }, "bhi",
	{
		REL,
	},
	{ 0x00, 0x22, 0x00, M6800 | M6801 | M68HC11 }, "bhs",
	{
		REL,
	},
	{ 0x00, 0x24, 0x00, M6800 | M6801 | M68HC11 }, "bita", { IMM },
	{ 0x00, 0x85, 0x00, M6800 | M6801 | M68HC11 }, "bita",
	{
		ADDR,
	},
	{ 0x00, 0xB5, 0x95, M6800 | M6801 | M68HC11 }, "bita", { DIR, REGX },
	{ 0x00, 0x00, 0xA5, M6800 | M6801 | M68HC11 }, "bita", { DIR, REGY },
	{ 0x18, 0x00, 0xA5, M68HC11 }, "bitb", { IMM },
	{ 0x00, 0xC5, 0x00, M6800 | M6801 | M68HC11 }, "bitb",
	{
		ADDR,
	},
	{ 0x00, 0xF5, 0xD5, M6800 | M6801 | M68HC11 }, "bitb", { DIR, REGX },
	{ 0x00, 0x00, 0xE5, M6800 | M6801 | M68HC11 }, "bitb", { DIR, REGY },
	{ 0x18, 0x00, 0xE5, M68HC11 },

	"ble",
	{
		REL,
	},
	{ 0x00, 0x2F, 0x00, M6800 | M6801 | M68HC11 }, "blo",
	{
		REL,
	},
	{ 0x00, 0x25, 0x00, M6800 | M6801 | M68HC11 }, "bls",
	{
		REL,
	},
	{ 0x00, 0x23, 0x00, M6800 | M6801 | M68HC11 }, "blt",
	{
		REL,
	},
	{ 0x00, 0x2D, 0x00, M6800 | M6801 | M68HC11 }, "bmi",
	{
		REL,
	},
	{ 0x00, 0x2B, 0x00, M6800 | M6801 | M68HC11 }, "bne",
	{
		REL,
	},
	{ 0x00, 0x26, 0x00, M6800 | M6801 | M68HC11 }, "bpl",
	{
		REL,
	},
	{ 0x00, 0x2A, 0x00, M6800 | M6801 | M68HC11 }, "bra",
	{
		REL,
	},
	{ 0x00, 0x20, 0x00, M6800 | M6801 | M68HC11 }, "jr",
	{
		REL,
	},
	{ 0x00, 0x20, 0x00, M6800 | M6801 | M68HC11 }, /* bra */

	"brclr", { DIR, IMM, REL }, { 0x00, 0x00, 0x13, M68HC11 }, "brclr",
	{ DIR, REGX, IMM, REL }, { 0x00, 0x00, 0x1F, M68HC11 }, "brclr",
	{ DIR, REGY, IMM, REL }, { 0x18, 0x00, 0x1F, M68HC11 },

	"brn",
	{
		REL,
	},
	{ 0x00, 0x21, 0x00, M6801 | M68HC11 },

	"brset", { DIR, IMM, REL }, { 0x00, 0x00, 0x12, M68HC11 }, "brset",
	{ DIR, REGX, IMM, REL }, { 0x00, 0x00, 0x1E, M68HC11 }, "brset",
	{ DIR, REGY, IMM, REL }, { 0x18, 0x00, 0x1E, M68HC11 },

	"bset", { DIR, IMM }, { 0x00, 0x00, 0x14, M68HC11 }, "bset",
	{ DIR, REGX, IMM }, { 0x00, 0x00, 0x1C, M68HC11 }, "bset",
	{ DIR, REGY, IMM }, { 0x18, 0x00, 0x1C, M68HC11 },

	"bsr",
	{
		REL,
	},
	{ 0x00, 0x8D, 0x00, M6800 | M6801 | M68HC11 }, "callr",
	{
		REL,
	},
	{ 0x00, 0x8D, 0x00, M6800 | M6801 | M68HC11 }, /* bsr */
	"bvc",
	{
		REL,
	},
	{ 0x00, 0x28, 0x00, M6800 | M6801 | M68HC11 }, "bvs",
	{
		REL,
	},
	{ 0x00, 0x29, 0x00, M6800 | M6801 | M68HC11 }, "cba",
	{
		INH,
	},
	{ 0x00, 0x11, 0x00, M6800 | M6801 | M68HC11 }, "clc",
	{
		INH,
	},
	{ 0x00, 0x0C, 0x00, M6800 | M6801 | M68HC11 }, "cli",
	{
		INH,
	},
	{ 0x00, 0x0E, 0x00, M6800 | M6801 | M68HC11 }, "ei",
	{
		INH,
	},
	{ 0x00, 0x0E, 0x00, M6800 | M6801 | M68HC11 }, /* cli */
	"clr",
	{
		EXT,
	},
	{ 0x00, 0x7F, 0x00, M6800 | M6801 | M68HC11 }, "clr", { DIR, REGX },
	{ 0x00, 0x00, 0x6F, M6800 | M6801 | M68HC11 }, "clr", { DIR, REGY },
	{ 0x18, 0x00, 0x6F, M68HC11 }, "clra",
	{
		INH,
	},
	{ 0x00, 0x4F, 0x00, M6800 | M6801 | M68HC11 }, "clrb",
	{
		INH,
	},
	{ 0x00, 0x5F, 0x00, M6800 | M6801 | M68HC11 }, "clv",
	{
		INH,
	},
	{ 0x00, 0x0A, 0x00, M6800 | M6801 | M68HC11 }, "cmpa", { IMM },
	{ 0x00, 0x81, 0x00, M6800 | M6801 | M68HC11 }, "cmpa",
	{
		ADDR,
	},
	{ 0x00, 0xB1, 0x91, M6800 | M6801 | M68HC11 }, "cmpa", { DIR, REGX },
	{ 0x00, 0x00, 0xA1, M6800 | M6801 | M68HC11 }, "cmpa", { DIR, REGY },
	{ 0x18, 0x00, 0xA1, M68HC11 }, "cmpb", { IMM },
	{ 0x00, 0xC1, 0x00, M6800 | M6801 | M68HC11 }, "cmpb",
	{
		ADDR,
	},
	{ 0x00, 0xF1, 0xD1, M6800 | M6801 | M68HC11 }, "cmpb", { DIR, REGX },
	{ 0x00, 0x00, 0xE1, M6800 | M6801 | M68HC11 }, "cmpb", { DIR, REGY },
	{ 0x18, 0x00, 0xE1, M68HC11 }, "com",
	{
		EXT,
	},
	{ 0x00, 0x73, 0x00, M6800 | M6801 | M68HC11 }, "com", { DIR, REGX },
	{ 0x00, 0x00, 0x63, M6800 | M6801 | M68HC11 }, "com", { DIR, REGY },
	{ 0x18, 0x00, 0x63, M68HC11 }, "coma",
	{
		INH,
	},
	{ 0x00, 0x43, 0x00, M6800 | M6801 | M68HC11 }, "comb",
	{
		INH,
	},
	{ 0x00, 0x53, 0x00, M6800 | M6801 | M68HC11 }, "cpd", { IMM16 },
	{ 0x1A, 0x83, 0x00, M68HC11 }, "cpd",
	{
		ADDR,
	},
	{ 0x1A, 0xB3, 0x93, M68HC11 }, "cpd", { DIR, REGX },
	{ 0x1A, 0x00, 0xA3, M68HC11 }, "cpd", { DIR, REGY },
	{ 0xCD, 0x00, 0xA3, M68HC11 }, "cmpd", { IMM16 },
	{ 0x1A, 0x83, 0x00, M68HC11 }, /* cpd */
	"cmpd",
	{
		ADDR,
	},
	{ 0x1A, 0xB3, 0x93, M68HC11 }, /* cpd */
	"cmpd", { DIR, REGX }, { 0x1A, 0x00, 0xA3, M68HC11 }, /* cpd */
	"cmpd", { DIR, REGY }, { 0xCD, 0x00, 0xA3, M68HC11 }, /* cpd */
	"cpx", { IMM16 }, { 0x00, 0x8C, 0x00, M6800 | M6801 | M68HC11 }, "cpx",
	{
		ADDR,
	},
	{ 0x00, 0xBC, 0x9C, M6800 | M6801 | M68HC11 }, "cpx", { DIR, REGX },
	{ 0x00, 0x00, 0xAC, M6800 | M6801 | M68HC11 }, "cpx", { DIR, REGY },
	{ 0xCD, 0x00, 0xAC, M68HC11 }, "cmpx", { IMM16 },
	{ 0x00, 0x8C, 0x00, M6800 | M6801 | M68HC11 }, /* cpx */
	"cmpx",
	{
		ADDR,
	},
	{ 0x00, 0xBC, 0x9C, M6800 | M6801 | M68HC11 }, /* cpx */
	"cmpx", { DIR, REGX },
	{ 0x00, 0x00, 0xAC, M6800 | M6801 | M68HC11 }, /* cpx */
	"cmpx", { DIR, REGY }, { 0xCD, 0x00, 0xAC, M68HC11 }, /* cpx */
	"cpy", { IMM16 }, { 0x18, 0x8C, 0x00, M68HC11 }, "cpy",
	{
		ADDR,
	},
	{ 0x18, 0xBC, 0x9C, M68HC11 }, "cpy", { DIR, REGX },
	{ 0x1A, 0x00, 0xAC, M68HC11 }, "cpy", { DIR, REGY },
	{ 0x18, 0x00, 0xAC, M68HC11 }, "cmpy", { IMM16 },
	{ 0x18, 0x8C, 0x00, M68HC11 }, /* cpy */
	"cmpy",
	{
		ADDR,
	},
	{ 0x18, 0xBC, 0x9C, M68HC11 }, /* cpy */
	"cmpy", { DIR, REGX }, { 0x1A, 0x00, 0xAC, M68HC11 }, /* cpy */
	"cmpy", { DIR, REGY }, { 0x18, 0x00, 0xAC, M68HC11 }, /* cpy */
	"daa",
	{
		INH,
	},
	{ 0x00, 0x19, 0x00, M6800 | M6801 | M68HC11 }, "dec",
	{
		EXT,
	},
	{ 0x00, 0x7A, 0x00, M6800 | M6801 | M68HC11 }, "dec", { DIR, REGX },
	{ 0x00, 0x00, 0x6A, M6800 | M6801 | M68HC11 }, "dec", { DIR, REGY },
	{ 0x18, 0x00, 0x6A, M68HC11 }, "deca",
	{
		INH,
	},
	{ 0x00, 0x4A, 0x00, M6800 | M6801 | M68HC11 }, "decb",
	{
		INH,
	},
	{ 0x00, 0x5A, 0x00, M6800 | M6801 | M68HC11 }, "des",
	{
		INH,
	},
	{ 0x00, 0x34, 0x00, M6800 | M6801 | M68HC11 }, "decs",
	{
		INH,
	},
	{ 0x00, 0x34, 0x00, M6800 | M6801 | M68HC11 }, /* des */
	"dex",
	{
		INH,
	},
	{ 0x00, 0x09, 0x00, M6800 | M6801 | M68HC11 }, "decx",
	{
		INH,
	},
	{ 0x00, 0x09, 0x00, M6800 | M6801 | M68HC11 }, /* dex */
	"dey",
	{
		INH,
	},
	{ 0x18, 0x09, 0x00, M68HC11 }, "decy",
	{
		INH,
	},
	{ 0x18, 0x09, 0x00, M68HC11 }, /* dey */
	"eora",
	{
		IMM,
	},
	{ 0x00, 0x88, 0x00, M6800 | M6801 | M68HC11 }, "eora",
	{
		ADDR,
	},
	{ 0x00, 0xB8, 0x98, M6800 | M6801 | M68HC11 }, "eora", { DIR, REGX },
	{ 0x00, 0x00, 0xA8, M6800 | M6801 | M68HC11 }, "eora", { DIR, REGY },
	{ 0x18, 0x00, 0xA8, M68HC11 }, "xora",
	{
		IMM,
	},
	{ 0x00, 0x88, 0x00, M6800 | M6801 | M68HC11 }, /* eora */
	"xora",
	{
		ADDR,
	},
	{ 0x00, 0xB8, 0x98, M6800 | M6801 | M68HC11 }, /* eora */
	"xora", { DIR, REGX },
	{ 0x00, 0x00, 0xA8, M6800 | M6801 | M68HC11 }, /* eora */
	"xora", { DIR, REGY }, { 0x18, 0x00, 0xA8, M68HC11 }, /* eora */
	"eorb",
	{
		IMM,
	},
	{ 0x00, 0xC8, 0x00, M6800 | M6801 | M68HC11 }, "eorb",
	{
		ADDR,
	},
	{ 0x00, 0xF8, 0xD8, M6800 | M6801 | M68HC11 }, "eorb", { DIR, REGX },
	{ 0x00, 0x00, 0xE8, M6800 | M6801 | M68HC11 }, "eorb", { DIR, REGY },
	{ 0x18, 0x00, 0xE8, M68HC11 }, "xorb",
	{
		IMM,
	},
	{ 0x00, 0xC8, 0x00, M6800 | M6801 | M68HC11 }, /* eorb */
	"xorb",
	{
		ADDR,
	},
	{ 0x00, 0xF8, 0xD8, M6800 | M6801 | M68HC11 }, /* eorb */
	"xorb", { DIR, REGX },
	{ 0x00, 0x00, 0xE8, M6800 | M6801 | M68HC11 }, /* eorb */
	"xorb", { DIR, REGY }, { 0x18, 0x00, 0xE8, M68HC11 }, /* eorb */
	"fdiv",
	{
		INH,
	},
	{ 0x00, 0x03, 0x00, M68HC11 }, "idiv",
	{
		INH,
	},
	{ 0x00, 0x02, 0x00, M68HC11 }, "inc",
	{
		EXT,
	},
	{ 0x00, 0x7C, 0x00, M6800 | M6801 | M68HC11 }, "inc", { DIR, REGX },
	{ 0x00, 0x00, 0x6C, M6800 | M6801 | M68HC11 }, "inc", { DIR, REGY },
	{ 0x18, 0x00, 0x6C, M68HC11 }, "inca",
	{
		INH,
	},
	{ 0x00, 0x4C, 0x00, M6800 | M6801 | M68HC11 }, "incb",
	{
		INH,
	},
	{ 0x00, 0x5C, 0x00, M6800 | M6801 | M68HC11 }, "ins",
	{
		INH,
	},
	{ 0x00, 0x31, 0x00, M6800 | M6801 | M68HC11 }, "incs",
	{
		INH,
	},
	{ 0x00, 0x31, 0x00, M6800 | M6801 | M68HC11 }, /* ins */
	"inx",
	{
		INH,
	},
	{ 0x00, 0x08, 0x00, M6800 | M6801 | M68HC11 }, "incx",
	{
		INH,
	},
	{ 0x00, 0x08, 0x00, M6800 | M6801 | M68HC11 }, /* inx */
	"iny",
	{
		INH,
	},
	{ 0x18, 0x08, 0x00, M68HC11 }, "incy",
	{
		INH,
	},
	{ 0x18, 0x08, 0x00, M68HC11 }, /* iny */
	"jmp",
	{
		EXT,
	},
	{ 0x00, 0x7E, 0x00, M6800 | M6801 | M68HC11 }, "jmp", { DIR, REGX },
	{ 0x00, 0x00, 0x6E, M6800 | M6801 | M68HC11 }, "jmp", { DIR, REGY },
	{ 0x18, 0x00, 0x6E, M68HC11 }, "jsr",
	{
		ADDR,
	},
	{ 0x00, 0xBD, 0x9D, M6800 | M6801 | M68HC11 }, "jsr", { DIR, REGX },
	{ 0x00, 0x00, 0xAD, M6800 | M6801 | M68HC11 }, "jsr", { DIR, REGY },
	{ 0x18, 0x00, 0xAD, M68HC11 }, "call",
	{
		ADDR,
	},
	{ 0x00, 0xBD, 0x9D, M6800 | M6801 | M68HC11 }, /* jsr */
	"call", { DIR, REGX },
	{ 0x00, 0x00, 0xAD, M6800 | M6801 | M68HC11 }, /* jsr */
	"call", { DIR, REGY }, { 0x18, 0x00, 0xAD, M68HC11 }, /* jsr */
	"lda",
	{
		IMM,
	},
	{ 0x00, 0x86, 0x00, M6800 | M6801 | M68HC11 }, "lda",
	{
		ADDR,
	},
	{ 0x00, 0xB6, 0x96, M6800 | M6801 | M68HC11 }, "lda", { DIR, REGX },
	{ 0x00, 0x00, 0xA6, M6800 | M6801 | M68HC11 }, "lda", { DIR, REGY },
	{ 0x18, 0x00, 0xA6, M68HC11 }, "ldaa",
	{
		IMM,
	},
	{ 0x00, 0x86, 0x00, M6800 | M6801 | M68HC11 }, "ldaa",
	{
		ADDR,
	},
	{ 0x00, 0xB6, 0x96, M6800 | M6801 | M68HC11 }, "ldaa", { DIR, REGX },
	{ 0x00, 0x00, 0xA6, M6800 | M6801 | M68HC11 }, "ldaa", { DIR, REGY },
	{ 0x18, 0x00, 0xA6, M68HC11 }, "ldb",
	{
		IMM,
	},
	{ 0x00, 0xC6, 0x00, M6800 | M6801 | M68HC11 }, "ldb",
	{
		ADDR,
	},
	{ 0x00, 0xF6, 0xD6, M6800 | M6801 | M68HC11 }, "ldb", { DIR, REGX },
	{ 0x00, 0x00, 0xE6, M6800 | M6801 | M68HC11 }, "ldb", { DIR, REGY },
	{ 0x18, 0x00, 0xE6, M68HC11 }, "ldab",
	{
		IMM,
	},
	{ 0x00, 0xC6, 0x00, M6800 | M6801 | M68HC11 }, "ldab",
	{
		ADDR,
	},
	{ 0x00, 0xF6, 0xD6, M6800 | M6801 | M68HC11 }, "ldab", { DIR, REGX },
	{ 0x00, 0x00, 0xE6, M6800 | M6801 | M68HC11 }, "ldab", { DIR, REGY },
	{ 0x18, 0x00, 0xE6, M68HC11 }, "ldd",
	{
		IMM16,
	},
	{ 0x00, 0xCC, 0x00, M6801 | M68HC11 }, "ldd",
	{
		ADDR,
	},
	{ 0x00, 0xFC, 0xDC, M6801 | M68HC11 }, "ldd", { DIR, REGX },
	{ 0x00, 0x00, 0xEC, M6801 | M68HC11 }, "ldd", { DIR, REGY },
	{ 0x18, 0x00, 0xEC, M68HC11 }, "lds",
	{
		IMM16,
	},
	{ 0x00, 0x8E, 0x00, M6800 | M6801 | M68HC11 }, "lds",
	{
		ADDR,
	},
	{ 0x00, 0xBE, 0x9E, M6800 | M6801 | M68HC11 }, "lds", { DIR, REGX },
	{ 0x00, 0x00, 0xAE, M6800 | M6801 | M68HC11 }, "lds", { DIR, REGY },
	{ 0x18, 0x00, 0xAE, M68HC11 }, "ldx",
	{
		IMM16,
	},
	{ 0x00, 0xCE, 0x00, M6800 | M6801 | M68HC11 }, "ldx",
	{
		ADDR,
	},
	{ 0x00, 0xFE, 0xDE, M6800 | M6801 | M68HC11 }, "ldx", { DIR, REGX },
	{ 0x00, 0x00, 0xEE, M6800 | M6801 | M68HC11 }, "ldx", { DIR, REGY },
	{ 0xCD, 0x00, 0xEE, M68HC11 }, "ldy",
	{
		IMM16,
	},
	{ 0x18, 0xCE, 0x00, M68HC11 }, "ldy",
	{
		ADDR,
	},
	{ 0x18, 0xFE, 0xDE, M68HC11 }, "ldy", { DIR, REGX },
	{ 0x1A, 0x00, 0xEE, M68HC11 }, "ldy", { DIR, REGY },
	{ 0x18, 0x00, 0xEE, M68HC11 }, "lsl",
	{
		EXT,
	},
	{ 0x00, 0x78, 0x00, M6800 | M6801 | M68HC11 }, "lsl", { DIR, REGX },
	{ 0x00, 0x00, 0x68, M6800 | M6801 | M68HC11 }, "lsl", { DIR, REGY },
	{ 0x18, 0x00, 0x68, M68HC11 }, "lsla",
	{
		INH,
	},
	{ 0x00, 0x48, 0x00, M6800 | M6801 | M68HC11 }, "lslb",
	{
		INH,
	},
	{ 0x00, 0x58, 0x00, M6800 | M6801 | M68HC11 }, "lsld",
	{
		INH,
	},
	{ 0x00, 0x05, 0x00, M6801 | M68HC11 }, "lsr",
	{
		EXT,
	},
	{ 0x00, 0x74, 0x00, M6800 | M6801 | M68HC11 }, "lsr", { DIR, REGX },
	{ 0x00, 0x00, 0x64, M6800 | M6801 | M68HC11 }, "lsr", { DIR, REGY },
	{ 0x18, 0x00, 0x64, M68HC11 }, "lsra",
	{
		INH,
	},
	{ 0x00, 0x44, 0x00, M6800 | M6801 | M68HC11 }, "lsrb",
	{
		INH,
	},
	{ 0x00, 0x54, 0x00, M6800 | M6801 | M68HC11 }, "lsrd",
	{
		INH,
	},
	{ 0x00, 0x04, 0x00, M6801 | M68HC11 }, "mul",
	{
		INH,
	},
	{ 0x00, 0x3D, 0x00, M6801 | M68HC11 }, "neg",
	{
		EXT,
	},
	{ 0x00, 0x70, 0x00, M6800 | M6801 | M68HC11 }, "neg", { DIR, REGX },
	{ 0x00, 0x00, 0x60, M6800 | M6801 | M68HC11 }, "neg", { DIR, REGY },
	{ 0x18, 0x00, 0x60, M68HC11 }, "nega",
	{
		INH,
	},
	{ 0x00, 0x40, 0x00, M6800 | M6801 | M68HC11 }, "negb",
	{
		INH,
	},
	{ 0x00, 0x50, 0x00, M6800 | M6801 | M68HC11 }, "nop",
	{
		INH,
	},
	{ 0x00, 0x01, 0x00, M6800 | M6801 | M68HC11 }, "oraa",
	{
		IMM,
	},
	{ 0x00, 0x8A, 0x00, M6800 | M6801 | M68HC11 }, "oraa",
	{
		ADDR,
	},
	{ 0x00, 0xBA, 0x9A, M6800 | M6801 | M68HC11 }, "oraa", { DIR, REGX },
	{ 0x00, 0x00, 0xAA, M6800 | M6801 | M68HC11 }, "oraa", { DIR, REGY },
	{ 0x18, 0x00, 0xAA, M68HC11 }, "orab",
	{
		IMM,
	},
	{ 0x00, 0xCA, 0x00, M6800 | M6801 | M68HC11 }, "orab",
	{
		ADDR,
	},
	{ 0x00, 0xFA, 0xDA, M6800 | M6801 | M68HC11 }, "orab", { DIR, REGX },
	{ 0x00, 0x00, 0xEA, M6800 | M6801 | M68HC11 }, "orab", { DIR, REGY },
	{ 0x18, 0x00, 0xEA, M68HC11 }, "psha",
	{
		INH,
	},
	{ 0x00, 0x36, 0x00, M6800 | M6801 | M68HC11 }, "pusha",
	{
		INH,
	},
	{ 0x00, 0x36, 0x00, M6800 | M6801 | M68HC11 }, /* psha */
	"pshb",
	{
		INH,
	},
	{ 0x00, 0x37, 0x00, M6800 | M6801 | M68HC11 }, "pushb",
	{
		INH,
	},
	{ 0x00, 0x37, 0x00, M6800 | M6801 | M68HC11 }, /* pshb */
	"pshx",
	{
		INH,
	},
	{ 0x00, 0x3C, 0x00, M6801 | M68HC11 }, "pushx",
	{
		INH,
	},
	{ 0x00, 0x3C, 0x00, M6801 | M68HC11 }, /* pshx */
	"pshy",
	{
		INH,
	},
	{ 0x18, 0x3C, 0x00, M68HC11 }, "pushy",
	{
		INH,
	},
	{ 0x18, 0x3C, 0x00, M68HC11 }, /* pshy */
	"pula",
	{
		INH,
	},
	{ 0x00, 0x32, 0x00, M6800 | M6801 | M68HC11 }, "popa",
	{
		INH,
	},
	{ 0x00, 0x32, 0x00, M6800 | M6801 | M68HC11 }, /* pula */
	"pulb",
	{
		INH,
	},
	{ 0x00, 0x33, 0x00, M6800 | M6801 | M68HC11 }, "popb",
	{
		INH,
	},
	{ 0x00, 0x33, 0x00, M6800 | M6801 | M68HC11 }, /* pulb */
	"pulx",
	{
		INH,
	},
	{ 0x00, 0x38, 0x00, M6801 | M68HC11 }, "popx",
	{
		INH,
	},
	{ 0x00, 0x38, 0x00, M6801 | M68HC11 }, /* pulx */
	"puly",
	{
		INH,
	},
	{ 0x18, 0x38, 0x00, M68HC11 }, "popy",
	{
		INH,
	},
	{ 0x18, 0x38, 0x00, M68HC11 }, /* puly */
	"rol",
	{
		EXT,
	},
	{ 0x00, 0x79, 0x00, M6800 | M6801 | M68HC11 }, "rol", { DIR, REGX },
	{ 0x00, 0x00, 0x69, M6800 | M6801 | M68HC11 }, "rol", { DIR, REGY },
	{ 0x18, 0x00, 0x69, M68HC11 }, "rola",
	{
		INH,
	},
	{ 0x00, 0x49, 0x00, M6800 | M6801 | M68HC11 }, "rolb",
	{
		INH,
	},
	{ 0x00, 0x59, 0x00, M6800 | M6801 | M68HC11 }, "ror",
	{
		EXT,
	},
	{ 0x00, 0x76, 0x00, M6800 | M6801 | M68HC11 }, "ror", { DIR, REGX },
	{ 0x00, 0x00, 0x66, M6800 | M6801 | M68HC11 }, "ror", { DIR, REGY },
	{ 0x18, 0x00, 0x66, M68HC11 }, "rora",
	{
		INH,
	},
	{ 0x00, 0x46, 0x00, M6800 | M6801 | M68HC11 }, "rorb",
	{
		INH,
	},
	{ 0x00, 0x56, 0x00, M6800 | M6801 | M68HC11 }, "rti",
	{
		INH,
	},
	{ 0x00, 0x3B, 0x00, M6800 | M6801 | M68HC11 }, "reti",
	{
		INH,
	},
	{ 0x00, 0x3B, 0x00, M6800 | M6801 | M68HC11 }, /* rti */
	"rts",
	{
		INH,
	},
	{ 0x00, 0x39, 0x00, M6800 | M6801 | M68HC11 }, "ret",
	{
		INH,
	},
	{ 0x00, 0x39, 0x00, M6800 | M6801 | M68HC11 }, /* rts */
	"sba",
	{
		INH,
	},
	{ 0x00, 0x10, 0x00, M6800 | M6801 | M68HC11 }, "sbca",
	{
		IMM,
	},
	{ 0x00, 0x82, 0x00, M6800 | M6801 | M68HC11 }, "sbca",
	{
		ADDR,
	},
	{ 0x00, 0xB2, 0x92, M6800 | M6801 | M68HC11 }, "sbca", { DIR, REGX },
	{ 0x00, 0x00, 0xA2, M6800 | M6801 | M68HC11 }, "sbca", { DIR, REGY },
	{ 0x18, 0x00, 0xA2, M68HC11 }, "sbcb",
	{
		IMM,
	},
	{ 0x00, 0xC2, 0x00, M6800 | M6801 | M68HC11 }, "sbcb",
	{
		ADDR,
	},
	{ 0x00, 0xF2, 0xD2, M6800 | M6801 | M68HC11 }, "sbcb", { DIR, REGX },
	{ 0x00, 0x00, 0xE2, M6800 | M6801 | M68HC11 }, "sbcb", { DIR, REGY },
	{ 0x18, 0x00, 0xE2, M68HC11 }, "sec",
	{
		INH,
	},
	{ 0x00, 0x0D, 0x00, M6800 | M6801 | M68HC11 }, "sei",
	{
		INH,
	},
	{ 0x00, 0x0F, 0x00, M6800 | M6801 | M68HC11 }, "di",
	{
		INH,
	},
	{ 0x00, 0x0F, 0x00, M6800 | M6801 | M68HC11 }, /* sei */
	"sev",
	{
		INH,
	},
	{ 0x00, 0x0B, 0x00, M6800 | M6801 | M68HC11 }, "staa",
	{
		ADDR,
	},
	{ 0x00, 0xB7, 0x97, M6800 | M6801 | M68HC11 }, "staa", { DIR, REGX },
	{ 0x00, 0x00, 0xA7, M6800 | M6801 | M68HC11 }, "staa", { DIR, REGY },
	{ 0x18, 0x00, 0xA7, M68HC11 }, "stab",
	{
		ADDR,
	},
	{ 0x00, 0xF7, 0xD7, M6800 | M6801 | M68HC11 }, "stab", { DIR, REGX },
	{ 0x00, 0x00, 0xE7, M6800 | M6801 | M68HC11 }, "stab", { DIR, REGY },
	{ 0x18, 0x00, 0xE7, M68HC11 }, "std",
	{
		ADDR,
	},
	{ 0x00, 0xFD, 0xDD, M6801 | M68HC11 }, "std", { DIR, REGX },
	{ 0x00, 0x00, 0xED, M6801 | M68HC11 }, "std", { DIR, REGY },
	{ 0x18, 0x00, 0xED, M68HC11 }, "stop",
	{
		INH,
	},
	{ 0x00, 0xCF, 0x00, M68HC11 }, "sts",
	{
		ADDR,
	},
	{ 0x00, 0xBF, 0x9F, M6800 | M6801 | M68HC11 }, "sts", { DIR, REGX },
	{ 0x00, 0x00, 0xAF, M6800 | M6801 | M68HC11 }, "sts", { DIR, REGY },
	{ 0x18, 0x00, 0xAF, M68HC11 }, "stx",
	{
		ADDR,
	},
	{ 0x00, 0xFF, 0xDF, M6800 | M6801 | M68HC11 }, "stx", { DIR, REGX },
	{ 0x00, 0x00, 0xEF, M6800 | M6801 | M68HC11 }, "stx", { DIR, REGY },
	{ 0xCD, 0x00, 0xEF, M68HC11 }, "sty",
	{
		ADDR,
	},
	{ 0x18, 0xFF, 0xDF, M68HC11 }, "sty", { DIR, REGX },
	{ 0x1A, 0x00, 0xEF, M68HC11 }, "sty", { DIR, REGY },
	{ 0x18, 0x00, 0xEF, M68HC11 }, "suba",
	{
		IMM,
	},
	{ 0x00, 0x80, 0x00, M6800 | M6801 | M68HC11 }, "suba",
	{
		ADDR,
	},
	{ 0x00, 0xB0, 0x90, M6800 | M6801 | M68HC11 }, "suba", { DIR, REGX },
	{ 0x00, 0x00, 0xA0, M6800 | M6801 | M68HC11 }, "suba", { DIR, REGY },
	{ 0x18, 0x00, 0xA0, M68HC11 }, "subb",
	{
		IMM,
	},
	{ 0x00, 0xC0, 0x00, M6800 | M6801 | M68HC11 }, "subb",
	{
		ADDR,
	},
	{ 0x00, 0xF0, 0xD0, M6800 | M6801 | M68HC11 }, "subb", { DIR, REGX },
	{ 0x00, 0x00, 0xE0, M6800 | M6801 | M68HC11 }, "subb", { DIR, REGY },
	{ 0x18, 0x00, 0xE0, M68HC11 }, "subd",
	{
		IMM16,
	},
	{ 0x00, 0x83, 0x00, M6801 | M68HC11 }, "subd",
	{
		ADDR,
	},
	{ 0x00, 0xB3, 0x93, M6801 | M68HC11 }, "subd", { DIR, REGX },
	{ 0x00, 0x00, 0xA3, M6801 | M68HC11 }, "subd", { DIR, REGY },
	{ 0x18, 0x00, 0xA3, M68HC11 }, "swi",
	{
		INH,
	},
	{ 0x00, 0x3F, 0x00, M6800 | M6801 | M68HC11 }, "tab",
	{
		INH,
	},
	{ 0x00, 0x16, 0x00, M6800 | M6801 | M68HC11 }, "tap",
	{
		INH,
	},
	{ 0x00, 0x06, 0x00, M6800 | M6801 | M68HC11 }, "tba",
	{
		INH,
	},
	{ 0x00, 0x17, 0x00, M6800 | M6801 | M68HC11 }, "test",
	{
		INH,
	},
	{ 0x00, 0x00, 0x00, M68HC11 }, "tpa",
	{
		INH,
	},
	{ 0x00, 0x07, 0x00, M6800 | M6801 | M68HC11 }, "tst",
	{
		EXT,
	},
	{ 0x00, 0x7D, 0x00, M6800 | M6801 | M68HC11 }, "tst", { DIR, REGX },
	{ 0x00, 0x00, 0x6D, M6800 | M6801 | M68HC11 }, "tst", { DIR, REGY },
	{ 0x18, 0x00, 0x6D, M68HC11 }, "tsta",
	{
		INH,
	},
	{ 0x00, 0x4D, 0x00, M6800 | M6801 | M68HC11 }, "tstb",
	{
		INH,
	},
	{ 0x00, 0x5D, 0x00, M6800 | M6801 | M68HC11 }, "tsx",
	{
		INH,
	},
	{ 0x00, 0x30, 0x00, M6800 | M6801 | M68HC11 }, "tsy",
	{
		INH,
	},
	{ 0x18, 0x30, 0x00, M68HC11 }, "txs",
	{
		INH,
	},
	{ 0x00, 0x35, 0x00, M6800 | M6801 | M68HC11 }, "tys",
	{
		INH,
	},
	{ 0x18, 0x35, 0x00, M68HC11 }, "wai",
	{
		INH,
	},
	{ 0x00, 0x3E, 0x00, M6800 | M6801 | M68HC11 }, "xgdx",
	{
		INH,
	},
	{ 0x00, 0x8F, 0x00, M68HC11 }, "xgdy",
	{
		INH,
	},
	{ 0x18, 0x8F, 0x00, M68HC11 },