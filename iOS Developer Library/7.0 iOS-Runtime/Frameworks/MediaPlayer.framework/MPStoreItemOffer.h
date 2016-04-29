/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDictionary, NSNumber, NSString;

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {
    NSString *_buyParameters;
    NSString *_formattedPrice;
    NSString *_offerType;
    NSNumber *_price;
    NSDictionary *_typeToActionText;
}

@property(readonly) NSString * buyParameters;
@property(readonly) NSString * formattedPrice;
@property(readonly) NSString * offerType;
@property(readonly) NSNumber * price;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTextForType:(id)arg1;
- (id)buyParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedPrice;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupItemOffer:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)offerType;
- (id)price;

@end
