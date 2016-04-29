/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSMutableData;

@interface ATMessageParser : NSObject {
    unsigned int _curObjectLength;
    Class _messageClass;
    id _objectParsedBlock;
    NSMutableData *_parserData;
    NSError *_parserError;
}

@property(readonly) Class messageClass;
@property(copy) id objectParsedBlock;
@property(readonly) NSError * parserError;

- (void).cxx_destruct;
- (BOOL)_parseObjectFromData:(id)arg1;
- (BOOL)_parseObjects:(BOOL)arg1;
- (id)initWithMessageClass:(Class)arg1;
- (Class)messageClass;
- (id)objectParsedBlock;
- (id)parserError;
- (BOOL)processData:(id)arg1;
- (void)setObjectParsedBlock:(id)arg1;

@end
