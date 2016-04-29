/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString;

@interface PRSFeedback : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    NSString *_input;
    int _timestamp;
}

@property(readonly) NSString * input;
@property int timestamp;
@property(readonly) NSString * type;

+ (id)JSONDictionaryForFeedbackArray:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)input;
- (id)plist;
- (void)setTimestamp:(int)arg1;
- (int)timestamp;
- (id)type;
- (void)validate;

@end
