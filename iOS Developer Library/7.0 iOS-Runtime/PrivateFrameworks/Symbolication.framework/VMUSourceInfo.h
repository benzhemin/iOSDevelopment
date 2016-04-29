/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;

@interface VMUSourceInfo : NSObject {
    NSString *_fileName;
    unsigned int _lineNumber;
    NSString *_path;
}

- (void)dealloc;
- (id)fileName;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1 address:(unsigned long long)arg2;
- (unsigned int)lineNumber;
- (id)path;

@end
