/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDTableCell;

@interface WMTableCellMapper : CMMapper {
    unsigned int mColSpan;
    double mHeight;
    double mLeftPadding;
    double mRightPadding;
    WDTableCell *mWdTableCell;
    double mWidth;
}

- (unsigned int)colSpan;
- (id)initWithWDTableCell:(id)arg1 atIndex:(unsigned int)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapCellStyleAt:(id)arg1;
- (id)tableMapper;

@end
