/*!
  @file  XdwBridgeTextSearch.h
  @brief XdwBridgeTextSearchクラスの定義を記述したIncludeファイル

  @author Tomohiro Yamada (Fuji Xelox Co., Ltd. DPC DS&S STD) <Tomohiro.Yamada@fujixerox.co.jp>
  @date 2002-04-24
  @version 0.1
 
  Copyright (C) Fuji Xerox Co., Ltd. DPC CS&S STD Toshio Yamazaki<br>
  Created:	2002-04-24	Tomohiro Yamada<br>
 */
#ifndef _XDW_BRIDGE_TEXT_SEARCH_H_
#define _XDW_BRIDGE_TEXT_SEARCH_H_

/* 列挙型の定義のためのIncludeファイル */
#include "XdwError.h"

/* インターフェースの定義のためのIncludeファイル */
#include "XdwBridgeDrawIF.h"

/* 集約するクラスのIncludeファイル */
#include "XdwCharacter.h"
#include "XdwBridgeObjectManager.h"

/* 関連するクラスの宣言 */
class XdwCharacterComparison;

/**
 * @brief DocuWorksデコーダから渡されるテキスト情報から一致する文字列が存在するか確認するクラス
 */
class XdwBridgeTextSearch : public XdwBridgeDrawIF
{
public:
    /*! コンストラクタ
      コンストラクタでは，動的メモリの確保は行われない．
      ただし，ポインタのNULL初期化は行われる．
     */
    XdwBridgeTextSearch();
    /*! デストラクタ
      XdwBridgeが動的に確保したメモリ領域のみFreeされる．
      他のクラスにおいて生成したと思われる領域のFreeは行わない．
     */
    virtual ~XdwBridgeTextSearch();
    
    /**
     * @brief インスタンスを初期化する
     *
     * @param text 検索する文字列
     * @param comparison 文字比較クラス
     *
     * @recutn XdwErrorCode参照
     */
    virtual XdwErrorCode Initialize(XdwCharacterVector text, XdwCharacterComparison* comparison);
    
    /**
     * @brief 一致したかの確認
     *
     * @retval true 一致した
     * @retval false 一致していない
     */
    virtual bool IsHitted();
    
    /***************************************************/
    /*! @name 初期化I/F
     * 描画関連の初期化を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    /*!初期化メソッド
      プライベートメンバ変数を初期化し，プライベートメンバ変数を設定する．
      クライアントは必ずこのメソッドを呼ばなければならない．<br>
      また，動的確保されるメモリ領域は，このメソッドが呼ばれることにより，
      初めて確保されるので，クライアントはこのメソッドを呼ぶことにより，
      XdwBridgeクラス生成時のエラーを判定する．<br>
      必要であれば，Bridge以下のクラス (Imagerモジュール等) に対して，
      初期化を実行する．
      @retval XDW_ERRORCODE_SUCCESS 正常終了
      @retval XDW_ERRORCODE_INSUFFICINET_MEMORY メモリ確保が不可能
      @attention Viewerへの対応は未検討．
      @attention 渡されるポインタが何であるかは具象クラスに依存する．
      @attention 初期化されたパラメータ値はXdwBridgeDrawIF::InitializeDrawParameter()と等しくなる．
     */
    virtual XdwErrorCode InitializeDrawIF( void );

    /*! パラメータの初期化
      パラメータの初期化を行う．XdwBridgeDrawIF::InitializeDrawIF()が呼ばれた際にも，
      内部から呼ばれる．
      <center>
      <br>初期化されるパラメータの値<br><br>
      <table>
          <tr><td><center>パラメータ名</center></td><td><center>値</center></td><td><center>注釈</center></td></tr>
          <tr><td>色空間</td><td>XDW_COLORSPACEID_RGB</td><td>デフォルトはRGB</td></tr>
          <tr><td>Foreground色値</td><td>黒 (0x00000000)</td><td>暫定</td></tr>
          <tr><td>Background色値</td><td>白 (0xFFFFFFFF)</td><td>暫定</td></tr>
          <tr><td>背景描画モード</td><td>XDW_GSTATEBGM_OPAQUE</td><td>暫定</td></tr>
          <tr><td>Pen色</td><td>Solid Color and Foreground色値</td><td>暫定</td></tr>
          <tr><td>Brush色</td><td>Solid Color and Background色値</td><td>暫定</td></tr>
          <tr><td>Current Transfer Matrix </td><td>システム依存</td><td>ただし，拡縮無しでデバイス空間と一致する</td></tr>
          <tr><td>線幅</td><td>1.0</td><td>ユーザー空間における線幅</td></tr>
          <tr><td>Pen Type</td><td>XDW_PENSTYLE_SOLID (実線)</td><td>暫定</td></tr>
          <tr><td>Join Type</td><td>XDW_JOINTYPE_MITER</td><td>暫定</td></tr>
          <tr><td>Cap Type</td><td>XDW_JOINTYPE_BUTT</td><td>暫定</td></tr>
          <tr><td>Cliping領域</td><td>デバイス上ページのBounding Box</td><td>暫定</td></tr>
          <tr><td>Cliping Logic</td><td>XDW_GSTATECL_AND</td><td>暫定</td></tr>
          <tr><td>ROP Mode and Code</td><td>Mode 2, COPY</td><td>暫定</td></tr>
          <tr><td>Fill Rule</td><td>Even-Odd</td><td>暫定</td></tr>
          <tr><td>Fill Mode</td><td>Fill</td><td>暫定</td></tr>
      </table>
      </center>
      <br>
      @retval XDW_ERRORCODE_SUCCESS 正常終了
      @retval XDW_ERRORCODE_INSUFFICINET_MEMORY メモリ確保が不可能
      @attention Viewerへの対応は未検討．
     */
    virtual XdwErrorCode InitializeDrawParameter( void );
    /*@}*/

    /***************************************************/
    /*! @name 描画オブジェクト系I/F
     * 描画オブジェクト(フォント、ペン、ブラシ)の設定をI/Fである。
     */
    /***************************************************/
    /*@{*/

    /**
     * @brief 描画オブジェクト(フォント、ペン、ブラシ)を選択する
     *
     * 描画オブジェクトのカレントの描画属性として選択する
     * @param handle 選択される描画オブジェクトのハンドル
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode SelectObject( const unsigned long& handle );

    /**
     * @brief 描画オブジェクト(フォント、ペン、ブラシ、パレット)を削除する
     *
     * 指定された描画オブジェクトを完全に破棄する
     * @param handle 削除する描画オブジェクトのハンドル
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode DeleteObject( const unsigned long& handle );
    
    /*@}*/
    
    /***************************************************/
    /*! @name Font系I/F
     * Fontの制御を行うI/Fである．
     */
    /***************************************************/
    /*@{*/

    /**
     * @brief フォントを作成する
     *
     * 以後のフォント描画は，作成されたフォントのハンドルを
     * XdwBridgeDrawIF::SelectObject()メソッドで選択しなければ、有効ではない。<br>
     * 指定されたフォントが存在しない場合，似たフォントへの置換が実施されるが，
     * 置換されるフォントが何になるかは実装依存であり，
     * クライアントから制御することはできない．
     * @param font 作成するフォントの属性
     * @param handle 作成されたフォントのハンドル
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode CreateFont( const XdwFontInfo &font ,
                                     unsigned long& handle );

    /**
     * @brief Font Alignの設定
     *
     * カレントFontAlignを指定する．
     * 以後のText(フォント)描画は，指定されたAlignによって描画矩形内で整列する．
     * @param align カレントTextAlignを指定する
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode SetFontAlign( XdwTextAlign align );

    /**
     * @brief Font Extraの設定
     *
     * 現在選択されているフォントに対して文字間隔を設定する。<br>
     * 1行のテキストを描画する場合、各文字に対して、文字間隔が追加される
     * @param 各文字に追加するスペースの大きさ
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode SetFontExtra( const long& extra );

    /**
     * @brief 文字列中の区切り文字に対するスペースの大きさの設定
     *
     * @param extra 出力される行に追加する合計スペース量
     * @param count 行に含まれる区切り文字数
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode SetFontJustification( const long& extra,
                                               const long& count );

    /*@}*/

    /***************************************************/
    /*! @name Pattern 設定系I/F
     * Pattern設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/

    /**
     * @brief パターン(ペン,ブラシ)のオフセットの設定
     *
     * @param offset オフセット
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetPatternOffset( const XdwPoint &offset );

    /*@}*/
    
    /***************************************************/
    /*! @name Pen属性系I/F
     * Pen属性の設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    
    /**
     * @brief ペンを作成する
     *
     * 以後のStroke描画は，作成されたペンのハンドルを
     * XdwBridgeDrawIF::SelectObject()メソッドで選択しなければ、有効ではない。<br>
     * Strokeによって描画されるPen (線) の属性を全て設定する．
     * @param para Pen属製
     * @param pattern Stroke時の描画パターン
     * @param image image属性<br>
     *              ラスタパターンのペンで場合は、無視される
     * @param imagedata imageデータ<br>
     *                  ラスタパターンのペンで場合は、無視される
     * @param offset imageデータまでのオフセット<br>
     * @param size imageデータのサイズ<br>
     * @param handle 作成されたペンのハンドル
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @attention imagedataが示すImageの実体は変更されないが，
     *            XdwDataObject::Binaryの内部状態は変更される
     */
    virtual XdwErrorCode CreatePen( const XdwPenAttribute &para ,
                                    const XdwPatternAttribute &pattern,
                                    const XdwRasterImageAttribute &image,
                                    XdwDataObject::Binary *imagedata,
                                    const long& offset,
                                    const long& size,
                                    unsigned long& handle );
    
    /**
     * @brief マイター制限値の設定
     *
     * @param limit マイター制限値
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode SetMiterLimit( double limit );
    
    /*@}*/

    /***************************************************/
    /*! @name Brush属性系I/F
     * Brush属性の設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/

    /**
     * @brief ブラシの作成
     *
     * 以後のFill描画は，作成されたブラシのハンドルを
     * XdwBridgeDrawIF::SelectObject()メソッドで選択しなければ、有効ではない。<br>
     * Fillによって描画されるBrush (塗りつぶし) の属性を全て設定する．
     * @param pattern Fill時の描画パターン
     * @param image image属性<br>
     *              ラスターパターンのブラシ以外は無視される
     * @param imagedata imageデータ<br>
     *                  ラスターパターンのブラシ以外は無視される
     * @param offset imageデータまでのオフセット<br>
     * @param size imageデータのサイズ<br>
     * @param handle 作成されたブラシのハンドル
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @attention imagedataが示すImageの実体は変更されないが，
     *            XdwDataObject::Binaryの内部状態は変更される
     */
    virtual XdwErrorCode CreateBrush( const XdwPatternAttribute &pattern,
                                      const XdwRasterImageAttribute &image,
                                      XdwDataObject::Binary *imagedata,
                                      const long& offset,
                                      const long& size,
                                      unsigned long& handle );
    
    /*@}*/

    /***************************************************/
    /*! @name 色属性系I/F
     * 色関連属性の設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    
    /**
     * @brief Foreground整数色値の設定
     *
     * Foregroundに描画されるオブジェクトの色値(フォント,マスクパターン)を指定する．
     * @param colorspace 色空間
     * @param color 整数化された色値<br>
     *              色空間がXDW_COLORSPACEID_RGBの場合には、0x00RRGGBBである
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetFGColor( const XdwTypeUInt32 &color,
                                     XdwColorSpaceID colorspace = XDW_COLORSPACEID_RGB );
    /**
     * @brief Background整数色値の設定
     *
     * Backgroundに描画されるオブジェクトの色値を指定する．
     * @param colorspace 色空間
     * @param color 整数化された色値<br>
     *              色空間がXDW_COLORSPACEID_RGBの場合には、0x00RRGGBBである
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetBGColor( const XdwTypeUInt32 &color,
                                     XdwColorSpaceID colorspace = XDW_COLORSPACEID_RGB );
    
    /*@}*/
    
    /***************************************************/
    /*! @name Palette 設定系I/F
     * Palette設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    
    /**
     * @brief Paletteの作成
     *
     * 以後の描画は、作成したパレットのハンドルを
     * XdwBridgeDrawIF::SelectPalette()メソッドで選択しなければ、有効ではない。<br>
     * @param palette パレット
     * @param handle ハンドル
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode CreatePalette( const XdwColorPalette &palette,
                                        unsigned long& handle );
    
    /**
     * @brief パレットを選択する
     *
     * パレットをカレントのパレットとして選択する
     * @param handle 選択されるパレットのハンドル
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode SelectPalette( const unsigned long &handle ); 
    
    /**
     * @brief Paletteのエントリへの色値設定
     *
     * カレントパレットの指定されたエントリへ色値を設定する．
     * カレントパレットの色空間に合う色値を設定しなければならない．
     * @param position パレットエントリ位置
     * @param color 色値の配列
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetPaletteEntries( const unsigned long& handle,
                                            const long &position,
                                            const XdwUInt32Vector &color );
    
    /**
     * @brief Paletteサイズの変更
     *
     * カレントパレットサイズを変更する．サイズが小さくなる場合は，
     * 後ろから (エントリの大きいほうから) 削除される．
     * サイズが大きくなる場合は，後ろ (エントリの大きい側へ) へ追加される．
     * 追加されたパレットの色値は，色空間において一番暗くて彩度が低い色値
     * (例えば黒)になることが期待されるが，基本的に不定．
     * @param handle 変更するパレットのハンドル
     * @param entries 変更後のエントリー数
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode ResizePalette( const unsigned long& handle,
                                        const long &entries );
    
    /**
     * @brief カレントパレットの更新
     *
     * 現在選択されているパレットをシステムのパレットとして、更新する<br>
     * システムがTrueColorの場合は、無視される
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode RealizePalette( void );
    
    /*@}*/

    /***************************************************/
    /*! @name 座標系I/F
     * 座標形の設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    
    /**
     * @brief カレント座標変換Matrixの設定
     *
     * BridgeI/Fの座標系 (ユーザー座標系) からデバイスの座標系へ
     * 変換するMatrixを設定する．
     * @param matrix 変換マトリクス
     * @param width 設定された座標系の幅
     * @param height 設定された座標系の高さ
     * @param xdpi 設定された座標系のx方向DPI値
     * @param ydpi 設定された座標系のy方向DPI値
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetCurrentTransferMatrix( const XdwMatrix &matrix,
						   unsigned long width,
						   unsigned long height,
						   unsigned long xdpi,
						   unsigned long ydpi );
    
    /**
     * @brief CTMを設定する
     *
     * @param mode XdwTransferMatrixModeを参照
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetTransferMatrixMode( XdwTransferMatrixMode mode );
    
    /**
     * @brief Viewportの表示範囲の拡縮指定
     *
     * Viewportの座標系の表示範囲を拡大or縮小する．
     * CTMは，引数の拡縮小率を乗算したMatrixとなる．
     * @param xscale x軸方向の拡縮値 (%指定ぢゃない)
     * @param yscale y軸方向の拡縮値 (%指定ぢゃない)
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode ScaleViewport( const double &xscale,
                                        const double &yscale );

    /**
     * @brief Viewportの座標系の平行移動指定
     *
     * Viewportの座標系を，平行移動する．<br>
     * CTMは，引数の平行移動成分を加えたMatrixとなる．<br>
     * (指定値はユーザー座標系値なので，実際はデバイス座標系に変換された値になる)
     * @param x x軸方向の平行移動量
     * @param y y軸方向の平行移動量
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode OffsetViewport( const double &x,
                                         const double &y );
    
    /**
     * @brief Viewportの座標系の表示範囲指定
     *
     * Viewportの座標系を，表示範囲を指定する<br>
     * XdwBridgeDrawIF::SetTransferMatrixMode()で
     * XDW_TRANSFER_MATRIX_ISOTROPIC or XDW_TRANSFER_MATRIX_ANISOTROPICを指定していない場合は無視される<br>
     * 軸方向も指定される?
     * @param width x軸方向の表示範囲
     * @param height y軸方向の表示範囲
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode ExtentViewport( const double &width,
                                         const double &height );
    
    /**
     * @brief Windowの表示範囲の拡縮指定
     *
     * Windowの座標系の表示範囲を拡大or縮小する．
     * CTMは，引数の拡縮小率を乗算したMatrixとなる．
     * @param xscale x軸方向の拡縮値 (%指定ぢゃない)
     * @param yscale y軸方向の拡縮値 (%指定ぢゃない)
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode ScaleWindow( const double &xscale,
                                      const double &yscale );

    /**
     * @brief Windowの座標系の平行移動指定
     *
     * Windowの座標系を，平行移動する．<br>
     * CTMは，引数の平行移動成分を加えたMatrixとなる．<br>
     * (指定値はユーザー座標系値なので，実際はデバイス座標系に変換された値になる)
     * @param x x軸方向の平行移動量
     * @param y y軸方向の平行移動量
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode OffsetWindow( const double &x,
                                       const double &y );
    
    /**
     * @brief Windowの座標系の表示範囲指定
     *
     * Windowの座標系を，表示範囲を指定する<br>
     * XdwBridgeDrawIF::SetTransferMatrixMode()で
     * XDW_TRANSFER_MATRIX_ISOTROPIC or XDW_TRANSFER_MATRIX_ANISOTROPICを指定していない場合は無視される<br>
     * 軸方向も指定される?
     * @param width x軸方向の表示範囲
     * @param height y軸方向の表示範囲
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode ExtentWindow( const double &width,
                                       const double &height );
    
    /*@}*/

    /***************************************************/
    /*! @name 描画属性系I/F
     * 描画属性の設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/

    /**
     * @brief 塗りつぶしルールの設定
     *
     * 閉図形がどのように塗りつぶされるか指定する．
     * @param rule 塗りつぶしルール
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetFillRule( XdwGSFillRule rule );

    /**
     * @brief ラスター描画の拡縮方法の設定
     *
     * 解像度が大きい場合には、無視される
     * @param mode 拡縮方法
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetRasterSmoothingMode( XdwRasterSmoothingMode mode );
    
    /**
     * @brief 背景描画の設定
     *
     * 背景が適用される描画の場合，どのように背景が描画されるか指定する．
     * @param mode 背景モード
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetBackGroundMode( XdwGSBackGroundMode mode );

    /**
     * @brief 巻き方向の設定
     *
     * 円弧系の図形において，その図形の巻き方向を指定する．
     * @param mode 巻き方向
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetWiseMode( XdwArcWiseMode mode );

    /**
     * @brief Raster Operation Codeの設定
     *
     * Raster Operation Code (ROP) を設定する．
     * 以下の描画は，ROPコードが適用された描画となる．<br>
     * ROP Mode 3〜4は，Raster Image描画が必須となるため，
     * Raster Image属性側に付加され，このI/Fで有効なのは，
     * ROP Mode 2のみである．
     * @param ropmode Raster Operation Mode
     * @param ropcode Raster Operation Code (MSDNの定義と同じ)
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetRopMode( XdwGSRopMode ropmode,
                                     XdwTypeUInt32 ropcode );

    /**
     * @brief 属性の保存
     *
     * カレント属性を“全て”スタック上へ積む．
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode Save( void );

    /**
     * @brief 属性の復帰
     *
     * スタック上に積まれているカレント属性を設定し，
     * スタックの一番上の属性を破棄する．
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode Restore( void );

    /*@}*/

    /***************************************************/
    /*! @name Clip系I/F
     * Clipの設定を行うI/Fである．
     */
    /***************************************************/
    /*@{*/

    /**
     * @brief 矩形クリッピング領域の指定
     *
     * 矩形のクリッピング領域を指定する．指定された後のクリッピング領域は，
     * カレントクリッピング領域との間にmodeで指定された論理演算を行った後の領域となる．
     * @param rect 矩形
     * @param mode 論理演算モード
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
	virtual XdwErrorCode SetRectangleToClip(const XdwRectangleVector& rect, XdwGSClipLogic mode, bool device_unit = false);

    /**
     * @brief カレントパスをクリッピング領域へ設定する．
     *
     * カレントパスをクリッピング領域へ設定する．指定された後のクリッピング領域は，
     * カレントクリッピング領域との間にmodeで指定された論理演算を行った後の領域となる．
     * @param mode 論理演算モード
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetPathToClip( XdwGSClipLogic mode );

    /**
     * @brief カレントクリップ領域を平行移動する．
     *
     * カレントクリップ領域平行移動する．指定されるオフセット値はユーザー座標系である．
     * @param offset 移動量
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode OffsetClip( const XdwPoint &offset );

    /*@}*/

    /***************************************************/
    /*! @name Path構築系I/F
     * Pathの設定，構築を行うI/Fである．
     */
    /***************************************************/
    /*@{*/

    /**
     * @brief カレントポイントを設定する
     *
     * カレントポイントを設定し，新たなサブパスの構築を開始する．
     * 構築中であったパスは開いたサブパスとなって，カレントパスに残る．<br>
     * 動作は，PostScriptのmovetoと同一．
     * @param p カレントポイント
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode SetCurrentPoint( const XdwPoint &p );

    /**
     * @brief カレントパスを閉じる
     *
     * カレントパスを閉じてパス構築を終了する．<br>
     * 動作は，PostScriptのclosepathと同一．
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode ClosePath( void );
    
    /**
     * @brief カレントパスの設定を開始する
     *
     * 以降、Graphics描画系のメソッドおよびFont描画系のメソッドが
     * カレントパスに登録される
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode BeginPath( void );

    /**
     * @brief カレントパスの設定を終了する
     *
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode EndPath( void );
    
    /*@}*/

    /***************************************************/
    /*! @name Graphics描画系I/F
     * Graphicstの描画を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    
    /**
     * @brief 線分集合の描画
     *
     * 線分の集合を，カレントの描画属性にしたがってStrok描画を行う．
     * @param p 座標値Vector<br>
     *          頂点の集合の意
     * @param update 現在位置の更新の有無
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawLineSet( const XdwPointVector &p,
                                      bool update );
    
    /**
     * @brief 多角形の描画
     *
     * 多角形を，カレントの描画属性にしたがってStrok And Fill描画を行う．<br>
     * 自動的に閉じる
     * @param p 座標値Vector<br>
     *          頂点の集合の意
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawPolygon( const XdwPointVector &p );
    
    /**
     * @brief Bezer線分集合の描画
     *
     * Bezier線分の集合を，カレントの描画属性にしたがってStrok描画を行う．<br>
     * 現在位置を更新しない場合は、
     * Bezierデータの最初の座標点(1番目の)を始点として，2,3番目を制御点，
     * 4番目を終点として，最初のBezier線分を取得する．<br>
     * 以降のBezier線分は直前のBezier線分の終点を始点とし，続く2つの制御点，
     * 1つの終点を取得してBezier線分とする．<br>
     * つまり，最初のBezier線分のみ4点必要であり，
     * 以降のBezier線分は3点必要である．<br>
     * したがって，座標値数は，Bezier線分数×3＋1で
     * なければならない．<br>
     * 現在位置を更新する場合は、
     * Bezierデータの現在位置を始点として，1,2番目を制御点，
     * 2番目を終点として，最初のBezier線分を取得する．<br>
     * 以降のBezier線分は直前のBezier線分の終点を始点とし，続く2つの制御点，
     * 1つの終点を取得してBezier線分とする．<br>
     * したがって，座標値数は，Bezier線分数×3でなければならない．<br>
     * @param p 座標値のVector．頂点の集合の意
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawBezierSet( const XdwPointVector &p,
                                        bool update );

    /**
     * @brief 楕円図形の描画
     *
     * 楕円図形を，カレントの描画属性にしたがってStrok描画またはStrok And Fill描画を行う．
     * @param shape 描画する楕円図形
     * @param mode 描画方法
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawEllipse( const XdwEllipse& shape,
                                      XdwGSDrawMode mode );

    /**
     * @brief 矩形の描画
     *
     * 矩形を，カレントの描画属性にしたがってStrok And Fill描画を行う．
     * @param shape 描画する矩形集合のVector
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawRectangle( const XdwRectangle &shape );

	/**
	* @brief 矩形集合の描画
	*
	* 矩形集合を，カレントの描画属性にしたがってFill描画する．<br>
	* @param ropMode ROPモード，3〜4のみ
	* @param nrect 全矩形数
	* @param nbocks ブロック数
	* @param startY 最初の矩形の左上点のY座標
	* @param lines ライン数
	* @param colums 列数
	* @param height 矩形群の高さ
	* @param x num個の描画開始点のX座標
	* @param width num個の矩形の幅
	* @retval XDW_ERRORCODE_SUCCESS 正常終了
	*/
    virtual XdwErrorCode DrawPolyPolyPatBlt( XdwGSRopMode ropMode, XdwTypeUInt32 ropCode,
									 short nrect, short blocks, short startY,
									 XdwShortVector	&lines,	XdwShortVector	&colums,
									 XdwShortVector	&height, XdwShortVector	&x,	XdwShortVector &width );

    /**
     * @brief 円弧の描画
     *
     * 円弧図形を，カレントの描画属性にしたがってStrok描画を行う．
     * @param shape 描画する円弧
     * @param mode 描画方法
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawArc( const XdwArc& shape );
    
    /**
     * @brief 角丸矩形の描画
     *
     * 角丸矩形を，カレントの描画属性にしたがってStrok And Fill描画を行う．
     * @param shape 描画する角丸矩形
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawRoundRect( const XdwRoundRect& shape );

    /**
     * @brief カレントパスの描画
     *
     * カレントパスを，カレントの描画属性にしたがって指定された描画方法で描画する．
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawPath( XdwGSDrawMode mode );

    /**
     * @brief Pixel単位での描画
     *
     * 指定された座標値を指定された色で、描画する
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     */
    virtual XdwErrorCode DrawPixel( const XdwPoint& point,
                                    const XdwTypeUInt32 &color,
                                    XdwColorSpaceID colorspace = XDW_COLORSPACEID_RGB );
    
    /*@}*/

    /***************************************************/
    /*! @name RasterImage描画系I/F
     * RasterImageの描画を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    
    /**
     * @brief ラスターの描画
     *
     * これから描画するラスターの属性とラスタデータを指定しイメージを描画する．<br>
     * パターン描画のみの場合はimagedataがNULLになる。<br>
     * image描画のみの場合はmask, maskdataがNULLに，
     * mask描画のみの場合はimage, imagedataがNULLになる．<br>
     * もちろん，mask付きimage描画の場合は，
     * 両方に有効なポインタを指定しなければならない．<br>
     * 内部動作としては，XdwDataObjectを介して，Imageを読み込み描画を行う．<br>
     * クライアントは，XdwDataObjectに適切なデータを設定する必要があるが，
     * Imageの分割描画およびCall Back描画等のDecomposerに依存する処理は，
     * Bridge内部で行われる．<br>
     * @param image 描画するイメージの属性
     * @param imagedata 描画するイメージ
     * @param image_offset imageデータまでのオフセット<br>
     * @param image_size imageデータのサイズ<br>
     * @param mask 描画するMask属性
     * @param maskdata 描画するMask
     * @param mask_offset imageデータまでのオフセット<br>
     * @param mask_size imageデータのサイズ<br>
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @attention imagedata, maskedataが示すImageやMaskデータの実体は変更されないが，
     *            XdwDataObject::Binaryの内部状態は変更される<br>
     *            更に、imagedata, maskdataは同一のインスタンスを指す事も考えられ、
     *            データ取得時には注意が必要<br>
     *            データ取得時に先頭位置から、必ずSeekするようにすれば、回避できる。
     */
    virtual XdwErrorCode DrawImage( const XdwRasterImageAttribute &image,
                                    XdwDataObject::Binary *imagedata,
                                    const long& image_offset,
                                    const long& image_size,
                                    const XdwRasterImageAttribute &mask,
                                    XdwDataObject::Binary *maskdata,
                                    const long& mask_offset,
                                    const long& mask_size );

    /**
     * @brief ラスターの分割描画
     *
     * これから描画するラスターの属性とラスタデータを指定する．<br>
     * パターン描画のみの場合はimagedataがNULLになる。<br>
     * image描画のみの場合はmask, maskdataがNULLに，
     * mask描画のみの場合はimage, imagedataがNULLになる．<br>
     * もちろん，mask付きimage描画の場合は，
     * 両方に有効なポインタを指定しなければならない．<br>
     * 内部動作としては，XdwDataObjectを介して，Imageを読み込み描画を行う．<br>
     * クライアントは，XdwDataObjectに適切なデータを設定する必要があるが，
     * Imageの分割描画およびCall Back描画等のDecomposerに依存する処理は，
     * Bridge内部で行われる．<br>
     * @param image 描画するイメージの属性
     * @param imagedata 描画するイメージ
     * @param image_offset imageデータまでのオフセット<br>
     * @param image_size imageデータのサイズ<br>
     * @param mask 描画するMask属性
     * @param maskdata 描画するMask
     * @param mask_offset imageデータまでのオフセット<br>
     * @param mask_size imageデータのサイズ<br>
     * @param nlines　	DrawDividedImage一回あたりの描画ライン数<br>
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_ERROR		なんらかのエラー
     * @attention imagedata, maskedataが示すImageやMaskデータの実体は変更されないが，
     *            XdwDataObject::Binaryの内部状態は変更される<br>
     *            更に、imagedata, maskdataは同一のインスタンスを指す事も考えられ、
     *            データ取得時には注意が必要<br>
     *            データ取得時に先頭位置から、必ずSeekするようにすれば、回避できる。<br>
     *
     */
    virtual XdwErrorCode StartDrawDividedImage( const XdwRasterImageAttribute &image,
                                    XdwDataObject::Binary *imagedata,
                                    const long& image_offset,
                                    const long& image_size,
                                    const XdwRasterImageAttribute &mask,
                                    XdwDataObject::Binary *maskdata,
                                    const long& mask_offset,
                                    const long& mask_size,
				    long nlines );

    /*! MaskとRaster Imageの分割描画
     *
     * StartDrawDividedImageでセットされたイメージとパラメータに従って分割出力する
     *
     * @retval XDW_ERRORCODE_SUCCESS	正常終了
     * @retval XDW_ERRORCODE_CONTINUE	引き続き処理が可能
     * @retval XDW_ERRORCODE_ERROR		なんらかのエラー
     */
    virtual XdwErrorCode DrawDividedImage( void );
    /*! MaskとRaster Imageの分割描画終了
     *
     * StartDrawDividedImage->DrawDividedImageの順で処理される一連のイメージ描画処理を終了する。
     * 処理を中断する場合でも必ず呼ばれなければならない。
     *
     * @retval XDW_ERRORCODE_SUCCESS	正常終了
     * @retval XDW_ERRORCODE_ERROR		なんらかのエラー
     */
    virtual XdwErrorCode EndDrawDividedImage( void );


    /*@}*/

    /***************************************************/
    /*! @name Font描画系I/F
     * Fontの描画を行うI/Fである．
     */
    /***************************************************/
    /*@{*/
    
    /**
     * @brief Textの描画
     *
     * 指定された位置に，指定されたカレントフォントで，Code指定のTextを描画する．
     * @param p 描画位置座標値
     * @param text 描画するText
     * @retval XDW_ERRORCODE_SUCCESS 正常終了
     * @retval XDW_ERRORCODE_INVALID_PARAMETER 不正なパラメータ
     */
    virtual XdwErrorCode DrawFont( const XdwPoint &p,
                                   const XdwCodeText &text );
    
    /*@}*/
    
protected:
    
    /********************************************/
    /* 集約 */
    
    /*! 描画オブジェクト管理クラス */
    XdwBridgeObjectManager fObjectManager;
    
    /*! 検索する文字列 */
    XdwCharacterVector fSearchText;
    /*! 現在の一致文字 */
    XdwCharacterVector::iterator fHittedPosition;
    
    /********************************************/
    /* 関連 */
    
    /*! 文字比較クラス */
    XdwCharacterComparison* fComparison;
    
    /********************************************/
    /* 属性 */
    
    /*! 一致したかの有無 */
    bool fHittedFlag;
    
    /********************************************/
    /* メソッド */

    /**
     * @brief 1文字単位での比較
     *
     * @param character 比較する1文字
     *
     * @retval XDW_ERRORCODE_SUCCESS 一致して終了
     * @retval XDW_ERRORCODE_CONTINUE 一致していないが正常終了
     * @retval その他 XdwErrorCode参照
     */
    virtual XdwErrorCode Compare(XdwCharacter character);
    
    /**
     * @brief ANSI文字コードのテキストの比較
     *
     * @param text 文字列
     * @param length 文字列のbyte数
     *
     * @return XdwErrorCode参照
     */
    virtual XdwErrorCode CompareANSI(unsigned char* text, unsigned long length);

    /**
     * @brief SYMBOL文字コードのテキストの比較
     *
     * @param text 文字列
     * @param length 文字列のbyte数
     *
     * @return XdwErrorCode参照
     */
    virtual XdwErrorCode CompareSymbol(unsigned char* text, unsigned long length);
    
    /**
     * @brief SJIS文字コードのテキストの比較
     *
     * @param text 文字列
     * @param length 文字列のbyte数
     *
     * @return XdwErrorCode参照
     */
    virtual XdwErrorCode CompareSJIS(unsigned char* text, unsigned long length);
    
};

#endif
