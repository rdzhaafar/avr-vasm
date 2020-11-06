{"adc",    {REG_ALL  , REG_ALL  }, {0x1c00    , 1}},
{"add",    {REG_ALL  , REG_ALL  }, {0x0c00    , 1}},
{"adiw",   {WREG_ALL , DATA8    }, {0x9600    , 1}},
{"and",    {REG_ALL  , REG_ALL  }, {0x2000    , 1}},
{"andi",   {REG_ALL  , DATA8    }, {0x7000    , 1}},
{"asr",    {REG_ALL             }, {0x9405    , 1}},
{"bclr",   {BIT_N               }, {0x9488    , 1}},
{"bld",    {REG_ALL  , BIT_N    }, {0xf800    , 1}},
{"brbc",   {BIT_N    , BRA      }, {0xf400    , 1}},
{"brbs",   {BIT_N    , BRA      }, {0xf000    , 1}},
{"brcc",   {BRA,                }, {0xf400    , 1}},
{"brcs",   {BRA,                }, {0xf000    , 1}},
{"break",  {NONE                }, {0x9598    , 1}},
{"breq",   {BRA                 }, {0xf001    , 1}},
{"brge",   {BRA                 }, {0xf404    , 1}},
{"brhc",   {BRA                 }, {0xf405    , 1}},
{"brhs",   {BRA                 }, {0xf005    , 1}},
{"brid",   {BRA                 }, {0xf407    , 1}},
{"brie",   {BRA                 }, {0xf007    , 1}},
{"brlo",   {BRA                 }, {0xf000    , 1}},
{"brlt",   {BRA                 }, {0xf004    , 1}},
{"brmi",   {BRA                 }, {0xf002    , 1}},
{"brne",   {BRA                 }, {0xf401    , 1}},
{"brpl",   {BRA                 }, {0xf402    , 1}},
{"brsh",   {BRA                 }, {0xf400    , 1}},
{"brtc",   {BRA                 }, {0xf406    , 1}},
{"brts",   {BRA                 }, {0xf006    , 1}},
{"brvc",   {BRA                 }, {0xf403    , 1}},
{"brvs",   {BRA                 }, {0xf003    , 1}},
{"bset",   {BIT_N               }, {0x9408    , 1}},
{"bst",    {REG_ALL  , BIT_N    }, {0xfa00    , 1}},
{"call",   {ADDR                }, {0x940e<<16, 2}},
{"cbi",    {IOREG_LO , BIT_N    }, {0x9800    , 1}},
{"cbr",    {REG_HI   , DATA8    }, {0x7000    , 1}},
{"clc",    {NONE                }, {0x9488    , 1}},
{"clh",    {NONE                }, {0x94d8    , 1}},
{"cli",    {NONE                }, {0x94f8    , 1}},
{"cln",    {NONE                }, {0x94a8    , 1}},
{"clr",    {REG_ALL             }, {0x2400    , 1}},
{"cls",    {NONE                }, {0x94c8    , 1}},
{"clt",    {NONE                }, {0x94e8    , 1}},
{"clv",    {NONE                }, {0x94b8    , 1}},
{"clz",    {NONE                }, {0x9498    , 1}},
{"com",    {REG_ALL             }, {0x9400    , 1}},
{"cp",     {REG_ALL  , REG_ALL  }, {0x1400    , 1}},
{"cpc",    {REG_ALL  , REG_ALL  }, {0x0400    , 1}},
{"cpi",    {REG_HI   , DATA8    }, {0x3000    , 1}},
{"cpse",   {REG_ALL  , REG_ALL  }, {0x1000    , 1}},
{"dec",    {REG_ALL             }, {0x940a    , 1}},
{"des",    {DES                 }, {0x940b    , 1}},
{"eicall", {NONE                }, {0x9519    , 1}},
{"eijmp",  {NONE                }, {0x9419    , 1}},
{"elpm",   {REG_ALL  , Z        }, {0x9006    , 1}}, /* elpm z          */
{"elpm",   {REG_ALL  , Z_PL     }, {0x9007    , 1}}, /* elpm z+         */
{"elpm",   {NONE                }, {0x95d8    , 1}}, /* elpm r0 implied */
{"eor",    {REG_ALL  , REG_ALL  }, {0x2400    , 1}}, /* MISTAKE IN DOCUMENTATION */
{"fmul",   {REG_FMUL , REG_FMUL }, {0x0308    , 1}},
{"fmuls",  {REG_FMUL , REG_FMUL }, {0x0380    , 1}},
{"fmulsu", {REG_FMUL , REG_FMUL }, {0x0388    , 1}},
{"icall",  {NONE                }, {0x9509    , 1}},
{"ijmp",   {NONE                }, {0x9409    , 1}},
{"in",     {REG_ALL  , IOREG_ALL}, {0xb000    , 1}},
{"inc",    {REG_ALL             }, {0x9403    , 1}},
{"jmp",    {ADDR                }, {0x940c<<16, 2}},
{"lac",    {Z        , REG_ALL  }, {0x9206    , 1}},
{"las",    {Z        , REG_ALL  }, {0x9205    , 1}},
{"lat",    {Z        , REG_ALL  }, {0x9207    , 1}},
{"ld",     {REG_ALL  , X        }, {0x900c    , 1}}, /* ld x   */
{"ld",     {REG_ALL  , X_PL     }, {0x900d    , 1}}, /* ld x+  */
{"ld",     {REG_ALL  , MI_X     }, {0x900e    , 1}}, /* ld -x  */
{"ld",     {REG_ALL  , Y        }, {0x8008    , 1}}, /* ld y   */
{"ld",     {REG_ALL  , Y_PL     }, {0x9009    , 1}}, /* ld y+  */
{"ld",     {REG_ALL  , MI_Y     }, {0x900a    , 1}}, /* ld -y  */
{"ld",     {REG_ALL  , Y_Q      }, {0x8008    , 1}}, /* ld y+q */
{"ld",     {REG_ALL  , Z        }, {0x8000    , 1}}, /* ld z   */
{"ld",     {REG_ALL  , Z_PL     }, {0x9001    , 1}}, /* ld z+  */
{"ld",     {REG_ALL  , MI_Z     }, {0x9002    , 1}}, /* ld -z  */
{"ld",     {REG_ALL  , Z_Q      }, {0x8000    , 1}}, /* ld z+q */
{"ldi",    {REG_HI   , DATA8    }, {0xe000    , 1}},
{"lds",    {REG_ALL  , ADDR     }, {0x9000<<16, 2}}, /* lds 32-bit */
{"lds",    {REG_HI   , DATA7    }, {0xa000    , 1}}, /* lds 16-bit */
{"lpm",    {NONE                }, {0x95c8    , 1}}, /* lpm r0 implied */
{"lpm",    {REG_ALL  , Z        }, {0x9004    , 1}}, /* lpm z          */
{"lpm",    {REG_ALL  , Z_PL     }, {0x9005    , 1}}, /* lpm z+         */
{"lsl",    {REG_ALL             }, {0x0c00    , 1}},
{"lsr",    {REG_ALL             }, {0x9406    , 1}},
{"mov",    {REG_ALL  , REG_ALL  }, {0x2c00    , 1}},
{"movw",   {WREG_ALL , WREG_ALL }, {0x0100    , 1}}, /* using different syntax than the manual */
{"mul",    {REG_ALL  , REG_ALL  }, {0x9c00    , 1}},
{"muls",   {REG_HI   , REG_HI   }, {0x0200    , 1}}, /* starting to hate this arch right about now */
{"mulsu",  {REG_FMUL , REG_FMUL }, {0x0300    , 1}},
{"neg",    {REG_ALL             }, {0x9401    , 1}},
{"nop",    {NONE                }, {0x0000    , 1}},
{"or",     {REG_ALL  , REG_ALL  }, {0x2800    , 1}},
{"ori",    {REG_HI   , DATA8    }, {0x6000    , 1}},
{"out",    {REG_ALL  , IOREG_ALL}, {0xb800    , 1}},
{"pop",    {REG_ALL             }, {0x900f    , 1}},
{"push",   {REG_ALL             }, {0x920f    , 1}},
{"rcall",  {ADDR                }, {0xd000    , 1}}, /* only +/-2K words */
{"ret",    {NONE                }, {0x9508    , 1}},
{"reti",   {NONE                }, {0x9518    , 1}},
{"rjmp",   {ADDR                }, {0xc000    , 1}}, /* also +/-2K words */
{"rol",    {REG_ALL             }, {0x1c00    , 1}},
{"ror",    {REG_ALL             }, {0x9407    , 1}},
{"sbc",    {REG_ALL  , REG_ALL  }, {0x0800    , 1}},
{"sbci",   {REG_HI   , DATA8    }, {0x4000    , 1}},
{"sbi",    {IOREG_LO , BIT_N    }, {0x9a00    , 1}},
{"sbic",   {IOREG_LO , BIT_N    }, {0x9900    , 1}},
{"sbis",   {IOREG_LO , BIT_N    }, {0x9b00    , 1}},
{"sbiw",   {WREG_HI  , DATA6    }, {0x9700    , 1}},
{"sbr",    {REG_HI   , DATA8    }, {0x6000    , 1}},
{"sbrc",   {REG_ALL  , BIT_N    }, {0xfc00    , 1}},
{"sbrs",   {REG_ALL  , BIT_N    }, {0xfe00    , 1}},
{"sec",    {NONE                }, {0x9408    , 1}},
{"seh",    {NONE                }, {0x9458    , 1}},
{"sei",    {NONE                }, {0x9478    , 1}},
{"sen",    {NONE                }, {0x9428    , 1}},
{"ser",    {NONE                }, {0xef0f    , 1}},
{"ses",    {NONE                }, {0x9448    , 1}},
{"set",    {NONE                }, {0x9468    , 1}},
{"sev",    {NONE                }, {0x9438    , 1}},
{"sez",    {NONE                }, {0x9418    , 1}},
{"sleep",  {NONE                }, {0x9588    , 1}},
{"spm",    {NONE                }, {0x95e8    , 1}}, /* spm    */
{"spm",    {Z_PL                }, {0x95ef    , 1}}, /* spm z+ */
{"st",     {X        , REG_ALL  }, {0x920c    , 1}}, /* st x   */
{"st",     {X_PL     , REG_ALL  }, {0x920d    , 1}}, /* st x+  */
{"st",     {MI_X     , REG_ALL  }, {0x920e    , 1}}, /* st -x  */
{"st",     {Y        , REG_ALL  }, {0x8208    , 1}}, /* st y   */
{"st",     {Y_PL     , REG_ALL  }, {0x9209    , 1}}, /* st y+  */
{"st",     {MI_Y     , REG_ALL  }, {0x920a    , 1}}, /* st -y  */
{"st",     {Y_Q      , REG_ALL  }, {0x8208    , 1}}, /* st y+q */
{"st",     {Z        , REG_ALL  }, {0x8200    , 1}}, /* st z   */
{"st",     {Z_PL     , REG_ALL  }, {0x9201    , 1}}, /* st z+  */
{"st",     {MI_Z     , REG_ALL  }, {0x9202    , 1}}, /* st -z  */
{"st",     {Z_Q      , REG_ALL  }, {0x8200    , 1}}, /* st z+q */
{"sts",    {ADDR     , REG_ALL  }, {0x9200<<16, 2}}, /* sts 32-bit */
{"sts",    {ADDR     , REG_ALL  }, {0xa800    , 1}}, /* sts 16-bit */
{"sub",    {REG_ALL  , REG_ALL  }, {0x1800    , 1}},
{"subi",   {REG_HI   , DATA8    }, {0x5000    , 1}},
{"swap",   {REG_ALL             }, {0x9402    , 1}},
{"tst",    {REG_ALL             }, {0x2000    , 1}},
{"wdr",    {NONE                }, {0x95a8    , 1}},
{"xch",    {Z        , REG_ALL  }, {0x9204    , 1}}