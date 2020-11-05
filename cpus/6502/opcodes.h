"adc",
	{
		IMMED,
	},
	{ 0x69, 0x00, M6502 }, "adc",
	{
		ABS,
	},
	{ 0x6d, 0x65, M6502 }, "adc",
	{
		INDX,
	},
	{ 0x61, 0x00, M6502 }, "adc",
	{
		DPINDIR,
	},
	{ 0x72, 0x00, M65C02 }, "adc", { INDIR, DUMY }, { 0x71, 0x00, M6502 },
	"adc", { ABS, DUMX }, { 0x7d, 0x75, M6502 }, "adc", { ABS, DUMY },
	{ 0x79, 0x00, M6502 }, "ahx", { INDIR, DUMY }, { 0x93, 0x00, ILL },
	"ahx", { ABS, DUMY }, { 0x9f, 0x00, ILL }, "alr",
	{
		IMMED,
	},
	{ 0x4b, 0x00, ILL }, "anc",
	{
		IMMED,
	},
	{ 0x0b, 0x00, ILL }, "anc2",
	{
		IMMED,
	},
	{ 0x2b, 0x00, ILL }, "and",
	{
		IMMED,
	},
	{ 0x29, 0x00, M6502 }, "and",
	{
		ABS,
	},
	{ 0x2d, 0x25, M6502 }, "and",
	{
		INDX,
	},
	{ 0x21, 0x00, M6502 }, "and",
	{
		DPINDIR,
	},
	{ 0x32, 0x00, M65C02 }, "and", { INDIR, DUMY }, { 0x31, 0x00, M6502 },
	"and", { ABS, DUMX }, { 0x3d, 0x35, M6502 }, "and", { ABS, DUMY },
	{ 0x39, 0x00, M6502 }, "arr",
	{
		IMMED,
	},
	{ 0x6b, 0x00, ILL }, "asl",
	{
		ACCU,
	},
	{ 0x0a, 0x00, M6502 }, "asl",
	{
		ABS,
	},
	{ 0x0e, 0x06, M6502 }, "asl",
	{
		IMPLIED,
	},
	{ 0x0a, 0x00, M6502 }, "asl", { ABS, DUMX }, { 0x1e, 0x16, M6502 },
	"aso",
	{
		ABS,
	},
	{ 0x0f, 0x07, ILL }, "aso",
	{
		INDX,
	},
	{ 0x03, 0x00, ILL }, "aso", { INDIR, DUMY }, { 0x13, 0x00, ILL }, "aso",
	{ ABS, DUMX }, { 0x1f, 0x17, ILL }, "aso", { ABS, DUMY },
	{ 0x1b, 0x00, ILL }, "axa", { INDIR, DUMY }, { 0x93, 0x00, ILL }, "axa",
	{ ABS, DUMY }, { 0x9f, 0x00, ILL }, "axs",
	{
		IMMED,
	},
	{ 0xcb, 0x00, ILL }, "axs",
	{
		ABS,
	},
	{ 0x8f, 0x87, ILL }, "axs",
	{
		INDX,
	},
	{ 0x83, 0x00, ILL }, "axs", { ABS, DUMY }, { 0x00, 0x97, ILL }, "bbr",
	{ WBIT, ZPAGE, REL }, { 0x00, 0x0f, WDC02 }, "bbr0", { ZPAGE, REL },
	{ 0x00, 0x0f, WDC02 }, "bbr1", { ZPAGE, REL }, { 0x00, 0x1f, WDC02 },
	"bbr2", { ZPAGE, REL }, { 0x00, 0x2f, WDC02 }, "bbr3", { ZPAGE, REL },
	{ 0x00, 0x3f, WDC02 }, "bbr4", { ZPAGE, REL }, { 0x00, 0x4f, WDC02 },
	"bbr5", { ZPAGE, REL }, { 0x00, 0x5f, WDC02 }, "bbr6", { ZPAGE, REL },
	{ 0x00, 0x6f, WDC02 }, "bbr7", { ZPAGE, REL }, { 0x00, 0x7f, WDC02 },
	"bbs", { WBIT, ZPAGE, REL }, { 0x00, 0x8f, WDC02 }, "bbs0",
	{ ZPAGE, REL }, { 0x00, 0x8f, WDC02 }, "bbs1", { ZPAGE, REL },
	{ 0x00, 0x9f, WDC02 }, "bbs2", { ZPAGE, REL }, { 0x00, 0xaf, WDC02 },
	"bbs3", { ZPAGE, REL }, { 0x00, 0xbf, WDC02 }, "bbs4", { ZPAGE, REL },
	{ 0x00, 0xcf, WDC02 }, "bbs5", { ZPAGE, REL }, { 0x00, 0xdf, WDC02 },
	"bbs6", { ZPAGE, REL }, { 0x00, 0xef, WDC02 }, "bbs7", { ZPAGE, REL },
	{ 0x00, 0xff, WDC02 }, "bcc",
	{
		REL,
	},
	{ 0x90, 0x00, M6502 }, "bcs",
	{
		REL,
	},
	{ 0xb0, 0x00, M6502 }, "beq",
	{
		REL,
	},
	{ 0xf0, 0x00, M6502 }, "bit",
	{
		IMMED,
	},
	{ 0x89, 0x00, M65C02 }, "bit",
	{
		ABS,
	},
	{ 0x2c, 0x24, M6502 }, "bit", { ABS, DUMX }, { 0x3c, 0x34, M65C02 },
	"bmi",
	{
		REL,
	},
	{ 0x30, 0x00, M6502 }, "bne",
	{
		REL,
	},
	{ 0xd0, 0x00, M6502 }, "bpl",
	{
		REL,
	},
	{ 0x10, 0x00, M6502 }, "bra",
	{
		REL,
	},
	{ 0x12, 0x00, DTV }, "bra",
	{
		REL,
	},
	{ 0x80, 0x00, M65C02 }, "brk",
	{
		IMPLIED,
	},
	{ 0x00, 0x00, M6502 }, "bsr",
	{
		REL,
	},
	{ 0x44, 0x00, HU6280 }, "bvc",
	{
		REL,
	},
	{ 0x50, 0x00, M6502 }, "bvs",
	{
		REL,
	},
	{ 0x70, 0x00, M6502 }, "cla",
	{
		IMPLIED,
	},
	{ 0x62, 0x00, HU6280 }, "clc",
	{
		IMPLIED,
	},
	{ 0x18, 0x00, M6502 }, "cld",
	{
		IMPLIED,
	},
	{ 0xd8, 0x00, M6502 }, "cli",
	{
		IMPLIED,
	},
	{ 0x58, 0x00, M6502 }, "clv",
	{
		IMPLIED,
	},
	{ 0xb8, 0x00, M6502 }, "clx",
	{
		IMPLIED,
	},
	{ 0x82, 0x00, HU6280 }, "cly",
	{
		IMPLIED,
	},
	{ 0xc2, 0x00, HU6280 }, "cmp",
	{
		IMMED,
	},
	{ 0xc9, 0x00, M6502 }, "cmp",
	{
		ABS,
	},
	{ 0xcd, 0xc5, M6502 }, "cmp",
	{
		INDX,
	},
	{ 0xc1, 0x00, M6502 }, "cmp",
	{
		DPINDIR,
	},
	{ 0xd2, 0x00, M65C02 }, "cmp", { INDIR, DUMY }, { 0xd1, 0x00, M6502 },
	"cmp", { ABS, DUMX }, { 0xdd, 0xd5, M6502 }, "cmp", { ABS, DUMY },
	{ 0xd9, 0x00, M6502 }, "cpx",
	{
		IMMED,
	},
	{ 0xe0, 0x00, M6502 }, "cpx",
	{
		ABS,
	},
	{ 0xec, 0xe4, M6502 }, "cpy",
	{
		IMMED,
	},
	{ 0xc0, 0x00, M6502 }, "cpy",
	{
		ABS,
	},
	{ 0xcc, 0xc4, M6502 }, "csh",
	{
		IMPLIED,
	},
	{ 0xd4, 0x00, HU6280 }, "csl",
	{
		IMPLIED,
	},
	{ 0x54, 0x00, HU6280 }, "dcm",
	{
		ABS,
	},
	{ 0xcf, 0xc7, ILL }, "dcm",
	{
		INDX,
	},
	{ 0xc3, 0x00, ILL }, "dcm", { INDIR, DUMY }, { 0xd3, 0x00, ILL }, "dcm",
	{ ABS, DUMX }, { 0xdf, 0xd7, ILL }, "dcm", { ABS, DUMY },
	{ 0xdb, 0x00, ILL }, "dcp",
	{
		ABS,
	},
	{ 0xcf, 0xc7, ILL }, "dcp",
	{
		INDX,
	},
	{ 0xc3, 0x00, ILL }, "dcp", { INDIR, DUMY }, { 0xd3, 0x00, ILL }, "dcp",
	{ ABS, DUMX }, { 0xdf, 0xd7, ILL }, "dcp", { ABS, DUMY },
	{ 0xdb, 0x00, ILL }, "dea",
	{
		IMPLIED,
	},
	{ 0x3a, 0x00, M65C02 }, "dec",
	{
		ACCU,
	},
	{ 0x3a, 0x00, M65C02 }, "dec",
	{
		IMPLIED,
	},
	{ 0x3a, 0x00, M65C02 }, "dec",
	{
		ABS,
	},
	{ 0xce, 0xc6, M6502 }, "dec", { ABS, DUMX }, { 0xde, 0xd6, M6502 },
	"dex",
	{
		IMPLIED,
	},
	{ 0xca, 0x00, M6502 }, "dey",
	{
		IMPLIED,
	},
	{ 0x88, 0x00, M6502 }, "eor",
	{
		IMMED,
	},
	{ 0x49, 0x00, M6502 }, "eor",
	{
		ABS,
	},
	{ 0x4d, 0x45, M6502 }, "eor",
	{
		INDX,
	},
	{ 0x41, 0x00, M6502 }, "eor",
	{
		DPINDIR,
	},
	{ 0x52, 0x00, M65C02 }, "eor", { INDIR, DUMY }, { 0x51, 0x00, M6502 },
	"eor", { ABS, DUMX }, { 0x5d, 0x55, M6502 }, "eor", { ABS, DUMY },
	{ 0x59, 0x00, M6502 }, "ina",
	{
		IMPLIED,
	},
	{ 0x1a, 0x00, M65C02 }, "inc",
	{
		ACCU,
	},
	{ 0x1a, 0x00, M65C02 }, "inc",
	{
		IMPLIED,
	},
	{ 0x1a, 0x00, M65C02 }, "inc",
	{
		ABS,
	},
	{ 0xee, 0xe6, M6502 }, "inc", { ABS, DUMX }, { 0xfe, 0xf6, M6502 },
	"ins",
	{
		ABS,
	},
	{ 0xef, 0xe7, ILL }, "ins",
	{
		INDX,
	},
	{ 0xe3, 0x00, ILL }, "ins", { INDIR, DUMY }, { 0xf3, 0x00, ILL }, "ins",
	{ ABS, DUMX }, { 0xff, 0xf7, ILL }, "ins", { ABS, DUMY },
	{ 0xfb, 0x00, ILL }, "inx",
	{
		IMPLIED,
	},
	{ 0xe8, 0x00, M6502 }, "iny",
	{
		IMPLIED,
	},
	{ 0xc8, 0x00, M6502 }, "isc",
	{
		ABS,
	},
	{ 0xef, 0xe7, ILL }, "isc",
	{
		INDX,
	},
	{ 0xe3, 0x00, ILL }, "isc", { INDIR, DUMY }, { 0xf3, 0x00, ILL }, "isc",
	{ ABS, DUMX }, { 0xff, 0xf7, ILL }, "isc", { ABS, DUMY },
	{ 0xfb, 0x00, ILL }, "jmp",
	{
		ABS,
	},
	{ 0x4c, 0x00, M6502 }, "jmp",
	{
		INDIRX,
	},
	{ 0x7c, 0x00, M65C02 }, "jmp",
	{
		INDIR,
	},
	{ 0x6c, 0x00, M6502 }, "jsr",
	{
		ABS,
	},
	{ 0x20, 0x00, M6502 }, "las", { ABS, DUMY }, { 0xbb, 0x00, ILL }, "lax",
	{
		IMMED,
	},
	{ 0xab, 0x00, ILL }, "lax",
	{
		ABS,
	},
	{ 0xaf, 0xa7, ILL }, "lax", { ABS, DUMY }, { 0xbf, 0xb7, ILL }, "lax",
	{
		INDX,
	},
	{ 0xa3, 0x00, ILL }, "lax", { INDIR, DUMY }, { 0xb3, 0x00, ILL }, "lda",
	{
		IMMED,
	},
	{ 0xa9, 0x00, M6502 }, "lda",
	{
		ABS,
	},
	{ 0xad, 0xa5, M6502 }, "lda",
	{
		INDX,
	},
	{ 0xa1, 0x00, M6502 }, "lda",
	{
		DPINDIR,
	},
	{ 0xb2, 0x00, M65C02 }, "lda", { INDIR, DUMY }, { 0xb1, 0x00, M6502 },
	"lda", { ABS, DUMX }, { 0xbd, 0xb5, M6502 }, "lda", { ABS, DUMY },
	{ 0xb9, 0x00, M6502 }, "ldx",
	{
		IMMED,
	},
	{ 0xa2, 0x00, M6502 }, "ldx",
	{
		ABS,
	},
	{ 0xae, 0xa6, M6502 }, "ldx", { ABS, DUMY }, { 0xbe, 0xb6, M6502 },
	"ldy",
	{
		IMMED,
	},
	{ 0xa0, 0x00, M6502 }, "ldy",
	{
		ABS,
	},
	{ 0xac, 0xa4, M6502 }, "ldy", { ABS, DUMX }, { 0xbc, 0xb4, M6502 },
	"lse",
	{
		ABS,
	},
	{ 0x4f, 0x47, ILL }, "lse",
	{
		INDX,
	},
	{ 0x43, 0x00, ILL }, "lse", { INDIR, DUMY }, { 0x53, 0x00, ILL }, "lse",
	{ ABS, DUMX }, { 0x5f, 0x57, ILL }, "lse", { ABS, DUMY },
	{ 0x5b, 0x00, ILL }, "lsr",
	{
		ACCU,
	},
	{ 0x4a, 0x00, M6502 }, "lsr",
	{
		ABS,
	},
	{ 0x4e, 0x46, M6502 }, "lsr",
	{
		IMPLIED,
	},
	{ 0x4a, 0x00, M6502 }, "lsr", { ABS, DUMX }, { 0x5e, 0x56, M6502 },
	"nop",
	{
		IMPLIED,
	},
	{ 0xea, 0x00, M6502 }, "oal",
	{
		IMMED,
	},
	{ 0xab, 0x00, ILL }, "ora",
	{
		IMMED,
	},
	{ 0x09, 0x00, M6502 }, "ora",
	{
		ABS,
	},
	{ 0x0d, 0x05, M6502 }, "ora",
	{
		INDX,
	},
	{ 0x01, 0x00, M6502 }, "ora",
	{
		DPINDIR,
	},
	{ 0x12, 0x00, M65C02 }, "ora", { INDIR, DUMY }, { 0x11, 0x00, M6502 },
	"ora", { ABS, DUMX }, { 0x1d, 0x15, M6502 }, "ora", { ABS, DUMY },
	{ 0x19, 0x00, M6502 }, "pha",
	{
		IMPLIED,
	},
	{ 0x48, 0x00, M6502 }, "php",
	{
		IMPLIED,
	},
	{ 0x08, 0x00, M6502 }, "phx",
	{
		IMPLIED,
	},
	{ 0xda, 0x00, M65C02 }, "phy",
	{
		IMPLIED,
	},
	{ 0x5a, 0x00, M65C02 }, "pla",
	{
		IMPLIED,
	},
	{ 0x68, 0x00, M6502 }, "plp",
	{
		IMPLIED,
	},
	{ 0x28, 0x00, M6502 }, "plx",
	{
		IMPLIED,
	},
	{ 0xfa, 0x00, M65C02 }, "ply",
	{
		IMPLIED,
	},
	{ 0x7a, 0x00, M65C02 }, "rla",
	{
		ABS,
	},
	{ 0x2f, 0x27, ILL }, "rla",
	{
		INDX,
	},
	{ 0x23, 0x00, ILL }, "rla", { INDIR, DUMY }, { 0x33, 0x00, ILL }, "rla",
	{ ABS, DUMX }, { 0x3f, 0x37, ILL }, "rla", { ABS, DUMY },
	{ 0x3b, 0x00, ILL }, "rmb", { WBIT, ZPAGE }, { 0x00, 0x07, WDC02 },
	"rmb0", { ZPAGE }, { 0x00, 0x07, WDC02 }, "rmb1", { ZPAGE },
	{ 0x00, 0x17, WDC02 }, "rmb2", { ZPAGE }, { 0x00, 0x27, WDC02 }, "rmb3",
	{ ZPAGE }, { 0x00, 0x37, WDC02 }, "rmb4", { ZPAGE },
	{ 0x00, 0x47, WDC02 }, "rmb5", { ZPAGE }, { 0x00, 0x57, WDC02 }, "rmb6",
	{ ZPAGE }, { 0x00, 0x67, WDC02 }, "rmb7", { ZPAGE },
	{ 0x00, 0x77, WDC02 }, "rol",
	{
		ACCU,
	},
	{ 0x2a, 0x00, M6502 }, "rol",
	{
		ABS,
	},
	{ 0x2e, 0x26, M6502 }, "rol",
	{
		IMPLIED,
	},
	{ 0x2a, 0x00, M6502 }, "rol", { ABS, DUMX }, { 0x3e, 0x36, M6502 },
	"ror",
	{
		ACCU,
	},
	{ 0x6a, 0x00, M6502 }, "ror",
	{
		ABS,
	},
	{ 0x6e, 0x66, M6502 }, "ror",
	{
		IMPLIED,
	},
	{ 0x6a, 0x00, M6502 }, "ror", { ABS, DUMX }, { 0x7e, 0x76, M6502 },
	"rra",
	{
		ABS,
	},
	{ 0x6f, 0x67, ILL }, "rra",
	{
		INDX,
	},
	{ 0x63, 0x00, ILL }, "rra", { INDIR, DUMY }, { 0x73, 0x00, ILL }, "rra",
	{ ABS, DUMX }, { 0x7f, 0x77, ILL }, "rra", { ABS, DUMY },
	{ 0x7b, 0x00, ILL }, "rti",
	{
		IMPLIED,
	},
	{ 0x40, 0x00, M6502 }, "rts",
	{
		IMPLIED,
	},
	{ 0x60, 0x00, M6502 }, "sac",
	{
		IMMED,
	},
	{ 0x32, 0x00, DTV }, "sax",
	{
		IMMED,
	},
	{ 0xcb, 0x00, ILL }, "sax",
	{
		ABS,
	},
	{ 0x8f, 0x87, ILL }, "sax",
	{
		INDX,
	},
	{ 0x83, 0x00, ILL }, "sax", { ABS, DUMY }, { 0x00, 0x97, ILL }, "sax",
	{
		IMPLIED,
	},
	{ 0x22, 0x00, HU6280 }, "say", { ABS, DUMX }, { 0x9c, 0x00, ILL },
	"say",
	{
		IMPLIED,
	},
	{ 0x42, 0x00, HU6280 }, "sbc",
	{
		IMMED,
	},
	{ 0xe9, 0x00, M6502 }, "sbc",
	{
		ABS,
	},
	{ 0xed, 0xe5, M6502 }, "sbc",
	{
		INDX,
	},
	{ 0xe1, 0x00, M6502 }, "sbc",
	{
		DPINDIR,
	},
	{ 0xf2, 0x00, M65C02 }, "sbc", { INDIR, DUMY }, { 0xf1, 0x00, M6502 },
	"sbc", { ABS, DUMX }, { 0xfd, 0xf5, M6502 }, "sbc", { ABS, DUMY },
	{ 0xf9, 0x00, M6502 }, "sbc2",
	{
		IMMED,
	},
	{ 0xeb, 0x00, ILL }, "sec",
	{
		IMPLIED,
	},
	{ 0x38, 0x00, M6502 }, "sed",
	{
		IMPLIED,
	},
	{ 0xf8, 0x00, M6502 }, "sei",
	{
		IMPLIED,
	},
	{ 0x78, 0x00, M6502 }, "set",
	{
		IMPLIED,
	},
	{ 0xf4, 0x00, HU6280 }, "shx", { ABS, DUMY }, { 0x9e, 0x00, ILL },
	"shy", { ABS, DUMX }, { 0x9c, 0x00, ILL }, "sir",
	{
		IMMED,
	},
	{ 0x42, 0x00, DTV }, "slo",
	{
		ABS,
	},
	{ 0x0f, 0x07, ILL }, "slo",
	{
		INDX,
	},
	{ 0x03, 0x00, ILL }, "slo", { INDIR, DUMY }, { 0x13, 0x00, ILL }, "slo",
	{ ABS, DUMX }, { 0x1f, 0x17, ILL }, "slo", { ABS, DUMY },
	{ 0x1b, 0x00, ILL }, "smb", { WBIT, ZPAGE }, { 0x00, 0x87, WDC02 },
	"smb0", { ZPAGE }, { 0x00, 0x87, WDC02 }, "smb1", { ZPAGE },
	{ 0x00, 0x97, WDC02 }, "smb2", { ZPAGE }, { 0x00, 0xa7, WDC02 }, "smb3",
	{ ZPAGE }, { 0x00, 0xb7, WDC02 }, "smb4", { ZPAGE },
	{ 0x00, 0xc7, WDC02 }, "smb5", { ZPAGE }, { 0x00, 0xd7, WDC02 }, "smb6",
	{ ZPAGE }, { 0x00, 0xe7, WDC02 }, "smb7", { ZPAGE },
	{ 0x00, 0xf7, WDC02 }, "sre",
	{
		ABS,
	},
	{ 0x4f, 0x47, ILL }, "sre",
	{
		INDX,
	},
	{ 0x43, 0x00, ILL }, "sre", { INDIR, DUMY }, { 0x53, 0x00, ILL }, "sre",
	{ ABS, DUMX }, { 0x5f, 0x57, ILL }, "sre", { ABS, DUMY },
	{ 0x5b, 0x00, ILL }, "st0",
	{
		IMMED,
	},
	{ 0x03, 0x00, HU6280 }, "st1",
	{
		IMMED,
	},
	{ 0x13, 0x00, HU6280 }, "st2",
	{
		IMMED,
	},
	{ 0x23, 0x00, HU6280 }, "sta",
	{
		ABS,
	},
	{ 0x8d, 0x85, M6502 }, "sta",
	{
		INDX,
	},
	{ 0x81, 0x00, M6502 }, "sta",
	{
		DPINDIR,
	},
	{ 0x92, 0x00, M65C02 }, "sta", { INDIR, DUMY }, { 0x91, 0x00, M6502 },
	"sta", { ABS, DUMX }, { 0x9d, 0x95, M6502 }, "sta", { ABS, DUMY },
	{ 0x99, 0x00, M6502 }, "stp",
	{
		IMPLIED,
	},
	{ 0xdb, 0x00, WDC02 }, "stx",
	{
		ABS,
	},
	{ 0x8e, 0x86, M6502 }, "stx", { ABS, DUMY }, { 0x00, 0x96, M6502 },
	"sty",
	{
		ABS,
	},
	{ 0x8c, 0x84, M6502 }, "sty", { ABS, DUMX }, { 0x00, 0x94, M6502 },
	"stz",
	{
		ABS,
	},
	{ 0x9c, 0x64, M65C02 }, "stz", { ABS, DUMX }, { 0x9e, 0x74, M65C02 },
	"sxy",
	{
		IMPLIED,
	},
	{ 0x02, 0x00, HU6280 }, "tai", { ABS, ABS, ABS },
	{ 0xf3, 0x00, HU6280 }, "tam",
	{
		IMMED,
	},
	{ 0x53, 0x00, HU6280 }, "tas", { ABS, DUMY }, { 0x9b, 0x00, ILL },
	"tax",
	{
		IMPLIED,
	},
	{ 0xaa, 0x00, M6502 }, "tay",
	{
		IMPLIED,
	},
	{ 0xa8, 0x00, M6502 }, "tdd", { ABS, ABS, ABS }, { 0xc3, 0x00, HU6280 },
	"tia", { ABS, ABS, ABS }, { 0xe3, 0x00, HU6280 }, "tii",
	{ ABS, ABS, ABS }, { 0x73, 0x00, HU6280 }, "tin", { ABS, ABS, ABS },
	{ 0xd3, 0x00, HU6280 }, "tma",
	{
		IMMED,
	},
	{ 0x43, 0x00, HU6280 }, "trb",
	{
		ABS,
	},
	{ 0x1c, 0x14, M65C02 }, "tsb",
	{
		ABS,
	},
	{ 0x0c, 0x04, M65C02 }, "tst", { IMMED, ABS }, { 0x93, 0x83, HU6280 },
	"tst", { IMMED, ABS, DUMX }, { 0xb3, 0xa3, HU6280 }, "tsx",
	{
		IMPLIED,
	},
	{ 0xba, 0x00, M6502 }, "txa",
	{
		IMPLIED,
	},
	{ 0x8a, 0x00, M6502 }, "txs",
	{
		IMPLIED,
	},
	{ 0x9a, 0x00, M6502 }, "tya",
	{
		IMPLIED,
	},
	{ 0x98, 0x00, M6502 }, "wai",
	{
		IMPLIED,
	},
	{ 0xcb, 0x00, WDC02 }, "xaa",
	{
		IMMED,
	},
	{ 0x8b, 0x00, ILL }, "xas", { ABS, DUMY }, { 0x9e, 0x00, ILL },
