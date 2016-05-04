/*
 * Copyright(C) 2001 by Fuji Xerox Co.Ltd.All rights reserved.
 * 
 * File: IMG_RopSequence1Step.h - 1ステップROP描画シーケンスクラスの定義
 * Yozo Kashima 20.Jul.2001
 *
 */

#ifndef INC_IMG_RopSequence1Step_h
#define INC_IMG_RopSequence1Step_h

#include "IMG_Builtin.h"
#include "IMG_Context.h"
#include "IMG_Common.h"
#include "IMG_ClassPointer.h"
#include "IMG_RopSequence.h"

/*
 * IMG_RopSequence1Stepクラスの定義
 */

typedef struct img_ropsequence1step {
	IMG_RopSequence		super;		/* SuperClass */
	/*
	 * 関連
	 */
} IMG_RopSequence1Step;

/*
 * ファクトリー関数
 */
extern int IMG_RopSequence1Step_CreateObjects(
	IMG_Context					*context,			/* コンテキスト */
	IMG_RopReducerPtr			reducer,			/* RopReducer */
	IMG_CommandSequencePtr		initStep,			/* 第1ステップ */
	IMG_RopSequencePtr			*objects,			/* RopSequenceオブジェクトの配列 */
	IMG_INT32					size);				/* 配列のサイズ */

extern int IMG_RopSequence1Step_Reconstruct(
	IMG_RopSequencePtr		self);

extern IMG_BOOL IMG_RopSequence1Step_IsValid(
	IMG_RopSequencePtr			self);

extern IMG_BOOL IMG_RopSequence1Step_IsSupported(
	IMG_RopMode					ropMode,	/* ROPシーケンスの最初のステップのROPモード(+) */
	IMG_UINT32					ropCode);	/* ROPシーケンスの最初のステップのROPコード(+) */

#endif /* INC_IMG_RopSequence1Step_h */

/*
 * Log
 * 10.Oct.2001 Yozo Kashima NOP対応のために新規作成(Win2K-085-P4,wd0020i2-20)
 * 20.Jul.2003 Yozo Kashima Hakugin対応(対応候補オブジェクトの多重化対応)
 */

/* end of IMG_RopSequence1Step.h */

