/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSURL;

@interface MCBookmark : NSObject <NSCopying> {
    NSURL *_URL;
    NSString *_path;
    NSString *_title;
}

@property(retain) NSURL * URL;
@property(retain) NSString * path;
@property(retain) NSString * title;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSerializableDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)path;
- (id)serializableDictionary;
- (void)setPath:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
