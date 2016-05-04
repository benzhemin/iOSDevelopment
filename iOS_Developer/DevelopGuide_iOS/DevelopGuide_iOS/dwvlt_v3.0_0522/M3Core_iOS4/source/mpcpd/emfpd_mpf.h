// $Archive: /DocuWorks/70/Source/mpcpd/pd3mf.h $
//
// Copyright (c) 1999-2004 Fuji Xerox Co., Ltd. All rights reserved. 
//
// $Author: chikyu $
// $Date: 2009/12/22 08:11:24 $
// $Revision: 1.8 $

#ifndef MPCPD_EMFPD_LINUX_H_
#define MPCPD_EMFPD_LINUX_H_

#include "mpc_pd.h"
#include "ifmtattr.h"
#include "imgshk.h"


enum DWImageCompressLevel {
	COMPLEVEL_LOSSLESS			= 1,
	COMPLEVEL_HIGHQUALITY		= 2,
	COMPLEVEL_STANDARD			= 3,
	COMPLEVEL_HIGHCOMPRESSION	= 4,
	COMPLEVEL_MINVALUE	= 1,
	COMPLEVEL_MAXVALUE	= 4,
};

struct MFImageData;
struct MPCSession;

// -----------------------------------------------------------------------------------------------
// MetaFile PD
// -----------------------------------------------------------------------------------------------

#define MFPD_PLAY_UNIT_MIN	10000
#define MFPD_PLAY_UNIT_MAX	20000
#define MFPD_PLAY_TIME		  500 // 描画間隔(時間、ms)

enum MFPD_Output {	//メタファイル出力先
	MFPD_OUTPUT_NIL = 0,
	MFPD_OUTPUT_DISPLAY,
	MFPD_OUTPUT_PRINTER,
};
enum MFPD_Apl {		//生成アプリ識別子
	MFPD_APL_NIL = 0,
	MFPD_APL_MS_WORD,
	MFPD_APL_MS_EXCEL,
	MFPD_APL_MS_POWERPOINT,
	MFPD_APL_LOTUS_123,
	MFPD_APL_LOTUS_FREELANS,
	MFPD_APL_ICHITARO6,
	MFPD_APL_ICHITARO7,
	MFPD_APL_ICHITARO8,
	MFPD_APL_OASYS
};

// AR12815対応 描画矯正フラグ
// ビットフラグを用いるため、追加するときにはビットが被らないようにすること。
// フラグをセットするときには"|="を用いる。
// フラグをクリアするときには"&= ~"を用いる。
// フラグを確認するときには"&"を用いる。
const DWORD MFPD_REFORM_NIL			= (0x00000000L);
const DWORD MFPD_REFORM_THINPOLYGON	= (0x00000001L);

// 外部JPEGデータ
struct MFJpegData {
	DWORD cbData;
	DWORD iType;
	DWORD cxDest;
	DWORD cyDest;
};

struct MFPD_WindowInfo { // ウィンドウの情報
	int		mm;		//マップモード
	POINT	worg;	//WindowOrg
	SIZE	wext;	//WindowExt
	POINT	vorg;	//ViewportOrg
	SIZE	vext;	//ViewportExt
	XFORM	xform;	//NT用
};

class MP_ImplEMFPD;

class ImplEMFPD : public MP_PD
{
public:
	ImplEMFPD(MPCSession* session);
	virtual ~ImplEMFPD();
	
	STDMETHOD(Destroy)() ;

	HRESULT Create(HENHMETAFILE_XD hemf);
	HRESULT Load(IStgObject* stgobj, const MP_AName* aname, MP_Octet* his_adata, MP_Integer his_asize);
	STDMETHOD(Save)(IStgObject* stgobj, const MP_AName* aname = NULL) ;

	STDMETHOD_(void*,GetInterface)(MP_RefInterfaceID riid, HRESULT* phres=NULL) ;

	// AR5442対応：実装を.cppファイルに移動
	STDMETHOD(OnDraw)(MP_Canvas* canvas, MP_Integer bPart = 0);
	STDMETHOD(OnPrint)(MP_Canvas* canvas, MPC_AdvCancelInfo* info = NULL);

	STDMETHOD_(MP_PD*, CreateIconPD)(HRESULT* phres);
	STDMETHOD_(void, DeletePDCash)(HRESULT* phres) ;

	STDMETHOD(CanRotate)(MP_Integer degree) { return MP_S_OK; }
	STDMETHOD(Rotate)(MP_Integer degree);
	STDMETHOD(GetPDInfo)(MP_Integer* org, MP_Integer* compLevel, MP_Integer* depth, MP_Dim* mdim);
	STDMETHOD_(void, SetAplID)(MP_Integer id) {m_apl = (MFPD_Apl)id;};
	STDMETHOD_(void, SetRecordNum)(MP_Integer num) {m_recordNum = num;};

	STDMETHOD(ConvertToDIBHeader)(BITMAPINFOHEADER* bmiHeader) { return MP_E_NOTIMPL; }
	STDMETHOD(ConvertToDIBHandle)(HGLOBAL hDIB=NULL)  {return MP_E_NOTIMPL;};
	STDMETHOD(ConvertToDIBFile)(MP_Path* dibfilepath)  {return MP_E_NOTIMPL;};

	//n
	STDMETHOD(ConvertToDIBHandleAdv)(HGLOBAL hDIB = NULL, BOOL_XD bRotate = TRUE, MPC_AdvCancelInfo* info = NULL) {return MP_E_NOTIMPL;};
	STDMETHOD(ConvertToDIBFileAdv)(MP_Path* dibfilepath, BOOL_XD bRotate = TRUE, MPC_AdvCancelInfo* info = NULL) {return MP_E_NOTIMPL;};
	STDMETHOD(ConvertToDIBHeaderAdv)(BITMAPINFOHEADER* bmiHeader, BOOL_XD bRotate = TRUE) {return MP_E_NOTIMPL;};
	STDMETHOD(GetCompDataToFile)(MP_Path* dstPath, MP_Integer* compDataType = NULL) {return MP_E_NOTIMPL;};
	STDMETHOD(GetCompDataToHandle)(HGLOBAL hData = NULL, MP_Integer* compDataType = NULL) {return MP_E_NOTIMPL;};
	STDMETHOD(CompressImage)(MP_Integer level);
	STDMETHOD(ThinImage)(MP_Integer level, MP_Integer specifiedResolution = 0);
	STDMETHOD_(MP_Integer, GetColorType)(BOOL_XD bCheck = TRUE);

	STDMETHOD(RotateOnMem)(MP_Integer degree) { return MP_E_NOTIMPL; }

	STDMETHOD(ConvertToDIBFileW)(const MP_WPath* dibfilepath) { return MP_E_NOTIMPL; }
	STDMETHOD(ConvertToDIBFileAdvW)(const MP_WPath* dibfilepath, BOOL_XD bRotate = TRUE, MPC_AdvCancelInfo* info = NULL) { return MP_E_NOTIMPL; }
	STDMETHOD(GetCompDataToFileW)(const MP_WPath* dstPath, MP_Integer* compDataType = NULL) { return MP_E_NOTIMPL; }

	//MP_EMFPDのI/F
	STDMETHOD_(HENHMETAFILE_XD,GetEMFHandle)() ;
	STDMETHOD(SetEMF)(HENHMETAFILE_XD hemf);

private:
	MPCSession*		m_session;
	IStgObject*		m_stgobj;
	MP_AName*		m_aname;
	MP_ImplEMFPD*	m_mp_emfpd_if;
	MP_Integer		m_colorType;	// カラー/モノクロ判定

	// PDの属性
	HENHMETAFILE_XD	m_hemf;		//拡張メタファイルハンドル
	long			m_xExt;		//PDの幅(0.01mm単位)
	long			m_yExt;		//PDの高さ(0.01mm単位)
	long			m_opaque;
	MP_Integer		m_level;		// イメージの圧縮レベル

	// コンテントの属性
	MP_Integer		m_degree;		// 回転角
	MFPD_Apl		m_apl;
	MP_Integer		m_recordNum;
	MP_Integer		m_resolution ;	// 解像度		//解像度変換 追加

	// OnDraw用

	// WinMobile分割描画対応
	// 09/10/06 M.Chikyu
	void *			m_hParser;
	// WinMobile分割描画対応 ここまで

	RECT			m_rect;
	MFPD_WindowInfo	m_winInfo;

	STDMETHOD(DrawInternal)(MP_Canvas* canvas, long isPrint, MP_Integer bPart=0, MPC_AdvCancelInfo* info=NULL) ;
	STDMETHOD(DrawToPrinter)(MP_Canvas* canvas, long isPrint, MPC_AdvCancelInfo* info) ;
	STDMETHOD_(MP_Integer, GetDegree)() ;
	STDMETHOD_(void, ClearBackGround)(HDC_XD hDC, MP_Rect* rect);

	// 表示関連
	STDMETHOD(DrawToDisplay)(MP_Canvas* canvas, MP_Integer bPart) ;
	STDMETHOD(DrawToDisplayDirect)(MP_Canvas* canvas);

	// WinMobile分割描画対応
	// 09/10/06 M.Chikyu
	STDMETHOD(DrawToDisplayFirst)(MP_Canvas* canvas);
	STDMETHOD(DrawToDisplaySecond)(MP_Canvas* canvas);
	// WinMobile分割描画対応 ここまで

	STDMETHOD_(SIZE, CalcMFLogicalSize)(MP_Canvas* canvas);
	STDMETHOD_(SIZE, CalcMFDeviceSize)(MP_Canvas* canvas);
	STDMETHOD_(POINT, CalcMFLogicalPoint)(MP_Canvas* canvas);
	STDMETHOD_(POINT, CalcMFDevicePoint)(MP_Canvas* canvas);

	STDMETHOD(LoadImageData)();
	STDMETHOD(SaveImageData)(IStgObject* stgobj, const MP_AName* aname);

	MPC_BigAlloc*	m_allocator;
	STDMETHOD_(void*, MPBigAlloc)(unsigned int nSize) {
		if (nSize <= 0 || m_allocator == NULL) return NULL;
		return m_allocator->Allocate(nSize);
	};
	STDMETHOD(MPBigFree)(void* p) {
		if (m_allocator == NULL) return MP_E_INVALIDARG;
		return m_allocator->Free(p);
	};
	
	// 09.07.14 - M.Chikyu UNICODE対応
	/*
	char * m_pszTempEmfPath; // V506 AR8283
	STDMETHOD_(BOOL_XD, GetTempEmfPath)(char * pDst);
	*/
	MP_WPath * m_pszTempEmfPathW; // V506 AR8283
	STDMETHOD_(BOOL_XD, GetTempEmfPathW)(MP_WPath * pDst);

	STDMETHOD_(HENHMETAFILE_XD, SetEnhMetaFileBitsFromFile)(ULONG length, void * ptr);

	//17%サムネールと同じように、大きく描いて縮小、エッジ強調する
	HRESULT DrawLargeThenShrink(MP_Canvas* canvas);
};

static const double			RATE_DPI_TO_DPM = 0.254 ;	//dot per inch から dot per meter への変換率
static const int			RESOLUTION_CONVERSION = 1 ;	//解像度変換 識別

#endif

