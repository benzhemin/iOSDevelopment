//
//  MXDConverterTypeT.h
//
//  Updater : $Author: marumo $
//  Version : $Revision: 1.1 $, $Date: 2006/08/23 03:10:12 $
//  Tag     : $Name: build15 $
//
//  Copyright (c) 2004 Fuji Xerox Co., Ltd. All rights reserved.
//

#import "MXDConverter.h"


@interface MXDConverterTypeT : MXDConverter {
	MXDImageData**  _imageDataArray;
	CGRect*			_inRectArray;
	int				_imageCount;
	
	unsigned long   _maskColor;
	
	MXDRegion*		_clipRegion;
}

@end
