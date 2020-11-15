/*
1)
____ __rd dddd rrrr
sub:  0 < d < 31, 0 < r < 31
sbc:  0 < d < 31, 0 < r < 31
or:   0 < d < 31, 0 < r < 31
mul:  0 < d < 31, 0 < r < 31
mov:  0 < d < 31, 0 < r < 31
eor:  0 < d < 31, 0 < r < 31
cpse: 0 < d < 31, 0 < r < 31
cpc:  0 < d < 31, 0 < r < 31
cp:   0 < d < 31, 0 < r < 31
com:  0 < d < 31, 0 < r < 31
and:  0 < d < 31, 0 < r < 31
add:  0 < d < 31, 0 < r < 31
adc:  0 < d < 31, 0 < r < 31
*/

/*
2)
____ ____ KKdd KKKK
sbiw: d{24,26,28,30}, 0 < K < 63
adiw: d{24,26,28,30}, 0 < K < 63
*/

/*
3)
____ KKKK dddd KKKK
subi:  16 < d < 31, 0 < K < 255
sbr:   16 < d < 31, 0 < K < 255
sbci:  16 < d < 31, 0 < K < 255
ori:   16 < d < 31, 0 < K < 255
ldi:   16 < d < 31, 0 < K < 255
cpi:   16 < d < 31, 0 < K < 255
andi:  16 < d < 31, 0 < K < 255
*/

/*
4)
____ ___d dddd ____
swap:         0 < d < 31
st(z, Rr):    0 < d < 31
st(z+, Rr):   0 < d < 31
st(-z, Rr):   0 < d < 31
st(y, Rr):    0 < d < 31
st(y+, Rr):   0 < d < 31
st(-y, Rr):   0 < d < 31
st(x, Rr):    0 < d < 31
st(x+, Rr):   0 < d < 31
st(-x, Rr):   0 < d < 31
ror:          0 < d < 31
push:         0 < d < 31
pop:          0 < d < 31
neg:          0 < d < 31
lsr:          0 < d < 31
lpm(Rd, Z):   0 < d < 31
lpm(Rd, Z+):  0 < d < 31
ld(Rd, Z):    0 < d < 31
ld(Rd, Z+):   0 < d < 31
ld(Rd, -Z):   0 < d < 31
ld(Rd, Y):    0 < d < 31
ld(Rd, Y+):   0 < d < 31
ld(Rd, -Y):   0 < d < 31
ld(Rd, X):    0 < d < 31
ld(Rd, X+):   0 < d < 31
ld(Rd, -X):   0 < d < 31
lat:          0 < d < 31
las:          0 < d < 31
lac:          0 < d < 31
inc:          0 < d < 31
elpm(Rd, Z):  0 < d < 31
elpm(Rd, Z+): 0 < d < 31
dec:          0 < d < 31
asr:          0 < d < 31
*/

/*
5)
____ ____ _sss ____
bset: 0 < s < 7
bclr: 0 < s < 7
*/

/*
6)
____ ___d dddd _bbb
sbrs:  0 < d < 31, 0 < b < 7
sbrc:  0 < d < 31, 0 < b < 7
bst:   0 < d < 31, 0 < b < 7
bld:   0 < d < 31, 0 < b < 7
*/

/*
7)
____ __kk kkkk ksss
brbs:  0 < s < 7, -64 < k < 63
brbc:  0 < s < 7, -64 < k < 63
*/

/*
8)
____ __kk kkkk k___
brvs:  -64 < k < 63
brvc:  -64 < k < 63
brts:  -64 < k < 63
brtc:  -64 < k < 63
brsh:  -64 < k < 63
brpl:  -64 < k < 63
brne:  -64 < k < 63
brmi:  -64 < k < 63
brlt:  -64 < k < 63
brlo:  -64 < k < 63
brie:  -64 < k < 63
brid:  -64 < k < 63
brhs:  -64 < k < 63
brhc:  -64 < k < 63
brge:  -64 < k < 63
breq:  -64 < k < 63
brcs:  -64 < k < 63
brcc:  -64 < k < 63
*/

/*
9)
____ ___k kkkk ___k
kkkk kkkk kkkk kkkk
jmp:      0 < k < 4M
call(i):  0 < k < 64K
call(ii): 0 < k < 4M
*/

/*
10)
____ ____ AAAA Abbb
sbis: 0 < A < 31, 0 < b < 7
sbic: 0 < A < 31, 0 < b < 7
sbi:  0 < A < 31, 0 < b < 7
cbi:  0 < A < 31, 0 < b < 7
*/

/*
11)
____ __dd dddd dddd
tst:    0 < d < 31
rol:    0 < d < 31
lsl:    0 < d < 31
clr:    0 < d < 31
*/

/*
12)
____ ____ KKKK ____
des:  0x00 < K < 0x0F
*/

/*
13)
____ ____ _ddd _rrr
mulsu:  16 < d < 23, 16 < r < 23
fmulsu: 16 < d < 23, 16 < r < 23
fmuls:  16 < d < 23, 16 < r < 23
fmul:   16 < d < 23, 16 < r < 23
*/

/*
14)
____ _AAd dddd AAAA
out:   0 < d < 31, 0 < A < 63
in:    0 < d < 31, 0 < A < 63
*/

/*
15)
__q_ qq_d dddd _qqq
st(Z+q, Rr):  0 < r < 31, 0 < q < 63
st(Y+q, Rr):  0 < r < 31, 0 < q < 63
ld(Z+q, Rd):  0 < r < 31, 0 < q < 63
ld(Rd, Y+q):  0 < r < 31, 0 < q < 63
*/

/*
16)
____ ___d dddd ____
kkkk kkkk kkkk kkkk
sts(32):  0 < d < 31, 0 < k < 65535
lds(32):  0 < d < 31, 0 < k < 65535
*/

/*
17)
____ _kkk dddd kkkk
sts(16):  16 < r < 31, 0 < k < 127
lds(16):  16 < r < 31, 0 < k < 127
*/

/*
18)
____ ____ dddd rrrr
muls:  16 < d < 31, 16 < r < 31
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
movw:  d{0,2,...,30}, r{0,2,...,30}
*/

/*
19)
____ kkkk kkkk kkkk
rjmp:   -2K < k < 2K
rcall:  -2K < k < 2K
*/

/*
20)
____ ____ dddd ____
ser:   16 < d < 31
*/