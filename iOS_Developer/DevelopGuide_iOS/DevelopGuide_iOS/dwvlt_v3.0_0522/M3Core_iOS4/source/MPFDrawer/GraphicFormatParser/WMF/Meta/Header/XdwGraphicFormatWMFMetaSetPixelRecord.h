/**
 * @file  XdwGraphicFormatWMFMetaSetPixelRecord.h
 * @brief XdwGraphicFormat::WMF::Meta::SetPixelRecordクラスの定義
 *
 * @author DPC DS&S STD T31G Tomohiro Yamada <Tomohiro.Yamada@fujiexreox.co.jp>
 * @date 2002-3-28
 * @version 1.0
 * $Id: XdwGraphicFormatWMFMetaSetPixelRecord.h,v 1.4 2009/12/22 08:10:48 chikyu Exp $
 *
 * Copyright (C) 2002 Fuji Xerox Co., Ltd.
 */

#ifndef _XDW_GRAPHICFORMAT_WMF_META_SET_PIXEL_RECORD_H_
#define _XDW_GRAPHICFORMAT_WMF_META_SET_PIXEL_RECORD_H_

/* パッケージを記述するためのIncludeファイル */
#include "XdwGraphicFormatWMFMeta.h"

/* 親クラスのIncludeファイル */
#include "XdwGraphicFormatWMFMetaColorRecord.h"

/**
 * @brief META_SETPIXELのレコードを規定するクラス
 *
 */
class XdwGraphicFormat::WMF::Meta::SetPixelRecord : public XdwGraphicFormat::WMF::Meta::ColorRecord
{
public:
    
    /********************************************/
    /* メソッド */

    /**
     * @brief デフォルトコンストラクタ
     */
    SetPixelRecord();

    /**
     * @brief デストラクタ
     */
    virtual ~SetPixelRecord();
    
    /**
     * @brief META_SETPIXELをパースする
     *
     * 座標値と色を読み込み、描画する
     *
     * @return XdwErrorCode参照
     */
    virtual XdwErrorCode Parse();
    
protected:
};

#endif
