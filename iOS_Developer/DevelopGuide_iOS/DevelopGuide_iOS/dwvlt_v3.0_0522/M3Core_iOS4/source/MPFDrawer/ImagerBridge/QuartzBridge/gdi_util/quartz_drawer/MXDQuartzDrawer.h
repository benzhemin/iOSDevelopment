//
//  MXDQuartzDrawer.h
//
//  Updater : $Author: marumo $
//  Version : $Revision: 1.1 $, $Date: 2006/08/23 03:10:12 $
//  Tag     : $Name: build15 $
//
//  Copyright (c) 2004 Fuji Xerox Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "buildenvironment.h"

@interface MXDQuartzDrawer : NSObject {

}

// 描画用
- (void)actGdiMethod:(CGContextRef)context;

// デバッグ用
- (void)whoAreYou;

@end
