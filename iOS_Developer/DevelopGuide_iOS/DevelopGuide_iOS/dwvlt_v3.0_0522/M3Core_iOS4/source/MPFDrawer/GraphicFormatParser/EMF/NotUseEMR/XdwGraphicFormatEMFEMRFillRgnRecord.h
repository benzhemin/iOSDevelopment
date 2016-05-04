/**
 * @file  XdwGraphicFormatEMFEMRFillRgnRecord.h
 * @brief XdwGraphicFormat::EMF::EMR::FillRgnRecordクラスの定義
 *
 * @author DPCS 商開統 S開 S開部 第3S開発 TDG Yasuhiro Ito(Yasuhiro.Ito@fujixerox.co.jp)
 * @date 2004-01-29
 * @version 1.0
 * $Id:
 *
 * Copyright (C) 2002 Fuji Xerox Co., Ltd.
 */

#ifndef _XDW_GRAPHICFORMAT_EMF_EMR_FILL_RGN_RECORD_H_
#define _XDW_GRAPHICFORMAT_EMF_EMR_FILL_RGN_RECORD_H_

/* パッケージを記述するためのIncludeファイル */
#include "XdwGraphicFormatEMFEMR.h"

/* 親クラスのIncludeファイル */
//#include "XdwGraphicFormatEMFEMRRecord.h"
#include "XdwGraphicFormatEMFEMRRectRecord.h"
/* 集約するクラスのIncludeファイル */
//#include "XdwGraphicFormatGDISize.h"
/**
 * @brief EMR_CREATEPALETTEを規定するクラス
 *
 */
class XdwGraphicFormat::EMF::EMR::FillRgnRecord : public XdwGraphicFormat::EMF::EMR::RectRecord
{
public:
    
    /********************************************/
    /* メソッド */

    /**
     * @brief デフォルトコンストラクタ
     *
     * @param generator 大きなバイナリデータを作成するクラス
     */
    FillRgnRecord();

    /**
     * @brief デストラクタ
     */
    virtual ~FillRgnRecord();
    
    /**
     * @brief EMRCREATEPEN構造体をパースする
     *
     * パレット属性を読み込んで、Imagerにセットする
     *
     * @return XdwErrorCode参照
     */
    virtual XdwErrorCode Parse();
 /**
     * @brief インスタンスを初期化する
     *
     * @param binary EMFが格納されているバイナリデータ管理インターフェースのインスタンス
     * @param bridge Imagerへアクセスするためのインターフェースのインスタンス
     *
     * @return XdwErrorCode参照
     */
    virtual XdwErrorCode Initialize(XdwDocuWorks::BinaryInterface* binary, XdwBridgeDrawIF* bridge);
        
protected:
    
    /********************************************/
    /* 集約 */
	long fMode;
    /*! 矩形 */
    XdwGraphicFormat::GDI::Rectangle fBoundRect;
    /********************************************/
    /* メソッド */
    
    /**
     * @brief インスタンスを初期化する
     *
     * LOGPALETTE構造体を規定するクラスを初期化する
     *
     * @return XdwErrorCode参照
     */
    virtual XdwErrorCode Initialize();
};

#endif