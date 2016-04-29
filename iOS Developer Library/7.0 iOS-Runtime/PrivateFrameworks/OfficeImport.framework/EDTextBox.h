/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDAlignmentInfo, EDProtection, EDString;

@interface EDTextBox : NSObject {
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
    EDString *mText;
}

+ (id)textBox;

- (id)alignmentInfo;
- (void)dealloc;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setProtection:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
