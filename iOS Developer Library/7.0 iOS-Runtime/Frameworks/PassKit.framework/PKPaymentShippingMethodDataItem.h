/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKShippingMethod;

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem {
}

@property(readonly) PKShippingMethod * shippingMethod;

+ (int)dataType;

- (BOOL)isValidWithError:(id*)arg1;
- (id)shippingMethod;

@end
