/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSData, SLRequestMultiPart;

@interface SLRequestMultiPartInputStream : NSInputStream {
    unsigned int _bytesReadInState;
    int _currentState;
    SLRequestMultiPart *_multiPart;
    NSData *_srcData;
    unsigned int _streamStatus;
    unsigned int _totalBytesRead;
}

- (void).cxx_destruct;
- (void)close;
- (int)currentStateRead:(char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int*)arg2;
- (BOOL)hasBytesAvailable;
- (id)initWithMultiPart:(id)arg1;
- (unsigned int)length;
- (void)open;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned int)readStateSourceData:(id)arg1 toBuffer:(char *)arg2 offset:(unsigned int)arg3 maxLength:(unsigned int)arg4;
- (void)transitionState;

@end
