/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_MFSearchResultsConsumer>;

@interface _MFSearchProcessResultsOperation : NSOperation {
    id _completionBlock;
    <_MFSearchResultsConsumer> *_consumer;
    unsigned int _type;
}

+ (id)operationWithResultsOfType:(unsigned int)arg1 completion:(id)arg2 consumer:(id)arg3;

- (void)dealloc;
- (void)main;

@end
