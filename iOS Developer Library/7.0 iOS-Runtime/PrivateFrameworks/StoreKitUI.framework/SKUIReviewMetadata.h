/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying> {
    NSString *_body;
    unsigned int _bodyMaxLength;
    NSString *_nickname;
    unsigned int _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned int _titleMaxLength;
}

@property(copy) NSString * body;
@property(readonly) unsigned int bodyMaxLength;
@property(copy) NSString * nickname;
@property(readonly) unsigned int nicknameMaxLength;
@property float rating;
@property(readonly) NSURL * submitURL;
@property(copy) NSString * title;
@property(readonly) unsigned int titleMaxLength;

- (void).cxx_destruct;
- (id)body;
- (unsigned int)bodyMaxLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithReviewDictionary:(id)arg1;
- (id)nickname;
- (unsigned int)nicknameMaxLength;
- (float)rating;
- (void)setBody:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setTitle:(id)arg1;
- (id)submitURL;
- (id)title;
- (unsigned int)titleMaxLength;

@end
