/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBZeroingWeakReference, NSString;

@interface BBAssertion : NSObject {
    BBZeroingWeakReference *_delegate;
    NSString *_identifier;
    unsigned int _transactionID;
}

- (void)dealloc;
- (id)identifier;
- (void)increaseOrIgnoreTransactionID:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;
- (unsigned int)transactionID;

@end
