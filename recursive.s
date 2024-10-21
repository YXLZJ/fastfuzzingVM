	.arch armv8.4-a+fp16+sb+ssbs
	.build_version macos,  15, 0
	.text
	.cstring
	.align	3
lC0:
	.ascii "%.*s\12\0"
	.section __TEXT,__text_startup,regular,pure_instructions
	.align	2
	.p2align 5,,15
	.globl _main
_main:
LFB4:
	sub	sp, sp, #112
LCFI0:
	mov	x0, 0
	stp	x29, x30, [sp, 16]
LCFI1:
	add	x29, sp, 16
LCFI2:
	stp	x19, x20, [sp, 32]
	stp	x21, x22, [sp, 48]
	stp	x23, x24, [sp, 64]
LCFI3:
	mov	w23, 0
	mov	w24, 1
	stp	x25, x26, [sp, 80]
LCFI4:
	adrp	x25, _frames@PAGE
	add	x22, x25, _frames@PAGEOFF;
	stp	x27, x28, [sp, 96]
LCFI5:
	adrp	x28, _data@PAGE
	adrp	x27, lC0@PAGE
	add	x28, x28, _data@PAGEOFF;
	bl	_time
	adrp	x1, _frames@PAGE+8000
	mov	w19, w0
	add	x26, x1, _frames@PAGEOFF+8000;
	.p2align 5,,15
L2:
	adrp	x0, _func_5193615984_op0.0@PAGE
	sub	w24, w24, #1
	add	x21, x0, _func_5193615984_op0.0@PAGEOFF;
	mov	w12, 43
	ldr	x0, [x21]
	mov	w11, 116
	mov	w10, 42
	mov	w9, 53
	mov	w8, 52
	mov	w7, 51
	mov	w6, 50
	mov	w5, 49
	mov	w4, 48
	mov	w3, 100
	br	x0
	.p2align 2,,3
L30:
	add	x0, x27, lC0@PAGEOFF;
	str	w23, [sp]
	add	x22, x25, _frames@PAGEOFF;
	str	x28, [sp, 8]
	mov	w23, 0
	bl	_printf
	cbnz	w24, L2
	ldp	x29, x30, [sp, 16]
	mov	w0, 0
	ldp	x19, x20, [sp, 32]
	ldp	x21, x22, [sp, 48]
	ldp	x23, x24, [sp, 64]
	ldp	x25, x26, [sp, 80]
	ldp	x27, x28, [sp, 96]
	add	sp, sp, 112
LCFI6:
	ret
	.p2align 2,,3
L29:
LCFI7:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w12, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L27:
	cmp	x22, x26
	beq	L66
	mov	x2, x21
	adrp	x13, _exp_5193618016.1@PAGE
	add	x21, x13, _exp_5193618016.1@PAGEOFF;
	str	x2, [x22], 8
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L26:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w11, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L25:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w10, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L23:
	cmp	x22, x26
	beq	L38
	mov	x2, x21
	adrp	x13, _exp_5193617696.2@PAGE
	add	x21, x13, _exp_5193617696.2@PAGEOFF;
	str	x2, [x22], 8
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L38:
	mov	w0, 50
	add	w14, w23, 1
	mov	w15, 42
	add	w2, w23, 2
	mov	w13, 116
	strb	w0, [x28, w23, uxtw]
	mov	x0, x21
	strb	w15, [x28, w14, uxtw]
	add	w23, w23, 3
	add	x21, x21, 8
	strb	w13, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L22:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w9, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L21:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w8, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L20:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w7, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L18:
	cmp	x22, x26
	beq	L67
	mov	x2, x21
	adrp	x13, _exp_5193616288.3@PAGE
	add	x21, x13, _exp_5193616288.3@PAGEOFF;
	str	x2, [x22], 8
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L17:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w6, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L16:
	mov	w2, w23
	mov	x0, x21
	add	w23, w23, 1
	add	x21, x21, 8
	strb	w5, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L15:
	mov	w0, w23
	add	w13, w23, 1
	mov	x2, x21
	add	w23, w23, 2
	strb	w4, [x28, w0, uxtw]
	add	x21, x21, 8
	strb	w3, [x28, w13, uxtw]
	ldr	x0, [x2, 8]
	br	x0
	.p2align 2,,3
L10:
	cmp	x22, x26
	beq	L38
; 104 "recursive.c" 1
	eor w19, w19, w19, lsl #13
	eor w19, w19, w19, lsr #17
	eor w19, w19, w19, lsl #5
	
; 0 "" 2
	mov	w20, 43691
	str	x21, [x22], 8
	mov	x0, x21
	movk	w20, 0xaaaa, lsl 16
	umull	x20, w19, w20
	lsr	x20, x20, 33
	add	w20, w20, w20, lsl 1
	sub	w20, w19, w20
	cmp	w20, 1
	beq	L12
	cmp	w20, 2
	beq	L13
	cbnz	w20, L14
	adrp	x21, _func_5193616144_op0.6@PAGE
	add	x21, x21, _func_5193616144_op0.6@PAGEOFF;
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L3:
	cmp	x22, x26
	beq	L68
; 82 "recursive.c" 1
	eor w19, w19, w19, lsl #13
	eor w19, w19, w19, lsr #17
	eor w19, w19, w19, lsl #5
	
; 0 "" 2
	mov	w20, 43691
	str	x21, [x22], 8
	mov	x0, x21
	movk	w20, 0xaaaa, lsl 16
	umull	x20, w19, w20
	lsr	x20, x20, 33
	add	w20, w20, w20, lsl 1
	sub	w20, w19, w20
	cmp	w20, 1
	beq	L7
	cmp	w20, 2
	beq	L8
	cbnz	w20, L14
	adrp	x21, _func_5193614688_op0.9@PAGE
	add	x21, x21, _func_5193614688_op0.9@PAGEOFF;
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L32:
	ldr	x21, [x22, -8]
	sub	x22, x22, #8
	ldr	x0, [x21, 8]
	add	x21, x21, 8
	br	x0
	.p2align 2,,3
L14:
	ldr	x0, [x0]
	br	x0
	.p2align 2,,3
L68:
	mov	w2, w23
	mov	w13, 50
	mov	x0, x21
	add	w23, w23, 1
	strb	w13, [x28, w2, uxtw]
	add	x21, x21, 8
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L66:
	mov	w0, 50
	add	w2, w23, 1
	mov	w16, 43
	add	w13, w23, 2
	strb	w0, [x28, w23, uxtw]
	add	w14, w23, 3
	mov	w15, 42
	strb	w16, [x28, w2, uxtw]
	add	w2, w23, 4
	add	w23, w23, 5
	strb	w0, [x28, w13, uxtw]
	mov	w13, 116
	mov	x0, x21
	strb	w15, [x28, w14, uxtw]
	add	x21, x21, 8
	strb	w13, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L67:
	mov	w2, 50
	add	w0, w23, 1
	mov	w13, 51
	add	w14, w23, 2
	mov	w15, 52
	strb	w2, [x28, w23, uxtw]
	add	w2, w23, 3
	strb	w13, [x28, w0, uxtw]
	mov	w13, 53
	mov	x0, x21
	strb	w15, [x28, w14, uxtw]
	add	w23, w23, 4
	add	x21, x21, 8
	strb	w13, [x28, w2, uxtw]
	ldr	x0, [x0, 8]
	br	x0
	.p2align 2,,3
L8:
	adrp	x21, _func_5193614688_op2.7@PAGE
	add	x21, x21, _func_5193614688_op2.7@PAGEOFF;
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L7:
	adrp	x21, _func_5193614688_op1.8@PAGE
	add	x21, x21, _func_5193614688_op1.8@PAGEOFF;
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L13:
	adrp	x21, _func_5193616144_op2.4@PAGE
	add	x21, x21, _func_5193616144_op2.4@PAGEOFF;
	ldr	x0, [x21]
	br	x0
	.p2align 2,,3
L12:
	adrp	x21, _func_5193616144_op1.5@PAGE
	add	x21, x21, _func_5193616144_op1.5@PAGEOFF;
	ldr	x0, [x21]
	br	x0
LFE4:
	.data
	.align	3
_func_5193615984_op0.0:
	.xword	L10
	.xword	L30
	.align	3
_exp_5193618016.1:
	.xword	L3
	.xword	L29
	.xword	L10
	.xword	L32
	.align	3
_exp_5193617696.2:
	.xword	L3
	.xword	L25
	.xword	L26
	.xword	L32
	.align	3
_exp_5193616288.3:
	.xword	L3
	.xword	L20
	.xword	L21
	.xword	L22
	.xword	L32
	.align	3
_func_5193616144_op2.4:
	.xword	L27
	.xword	L32
	.align	3
_func_5193616144_op1.5:
	.xword	L23
	.xword	L32
	.align	3
_func_5193616144_op0.6:
	.xword	L18
	.xword	L32
	.align	3
_func_5193614688_op2.7:
	.xword	L17
	.xword	L32
	.align	3
_func_5193614688_op1.8:
	.xword	L16
	.xword	L32
	.align	3
_func_5193614688_op0.9:
	.xword	L15
	.xword	L32
	.globl _PC
	.zerofill __DATA,__common,_PC,8,3
	.globl _branch
	.zerofill __DATA,__common,_branch,4,2
	.globl _seed
	.zerofill __DATA,__common,_seed,4,2
	.globl _frames
	.zerofill __DATA,__common,_frames,8000,3
	.globl _data
	.zerofill __DATA,__common,_data,536870912,0
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0
	.byte	0x3
	.ascii "zR\0"
	.uleb128 0x1
	.sleb128 -8
	.uleb128 0x1e
	.uleb128 0x1
	.byte	0x10
	.byte	0xc
	.uleb128 0x1f
	.uleb128 0
	.align	3
LECIE1:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB4-.
	.set L$set$2,LFE4-LFB4
	.quad L$set$2
	.uleb128 0
	.byte	0x4
	.set L$set$3,LCFI0-LFB4
	.long L$set$3
	.byte	0xe
	.uleb128 0x70
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0x9d
	.uleb128 0xc
	.byte	0x9e
	.uleb128 0xb
	.byte	0x4
	.set L$set$5,LCFI2-LCFI1
	.long L$set$5
	.byte	0xc
	.uleb128 0x1d
	.uleb128 0x60
	.byte	0x4
	.set L$set$6,LCFI3-LCFI2
	.long L$set$6
	.byte	0x93
	.uleb128 0xa
	.byte	0x94
	.uleb128 0x9
	.byte	0x95
	.uleb128 0x8
	.byte	0x96
	.uleb128 0x7
	.byte	0x97
	.uleb128 0x6
	.byte	0x98
	.uleb128 0x5
	.byte	0x4
	.set L$set$7,LCFI4-LCFI3
	.long L$set$7
	.byte	0x99
	.uleb128 0x4
	.byte	0x9a
	.uleb128 0x3
	.byte	0x4
	.set L$set$8,LCFI5-LCFI4
	.long L$set$8
	.byte	0x9b
	.uleb128 0x2
	.byte	0x9c
	.uleb128 0x1
	.byte	0x4
	.set L$set$9,LCFI6-LCFI5
	.long L$set$9
	.byte	0xa
	.byte	0xdb
	.byte	0xdc
	.byte	0xd9
	.byte	0xda
	.byte	0xd7
	.byte	0xd8
	.byte	0xd5
	.byte	0xd6
	.byte	0xd3
	.byte	0xd4
	.byte	0xdd
	.byte	0xde
	.byte	0xc
	.uleb128 0x1f
	.uleb128 0
	.byte	0x4
	.set L$set$10,LCFI7-LCFI6
	.long L$set$10
	.byte	0xb
	.align	3
LEFDE1:
	.ident	"GCC: (Homebrew GCC 14.2.0) 14.2.0"
	.subsections_via_symbols
