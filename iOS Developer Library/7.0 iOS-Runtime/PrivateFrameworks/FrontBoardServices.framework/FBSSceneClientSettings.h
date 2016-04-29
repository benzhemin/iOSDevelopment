/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSSettings, NSSet;

@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_occlusions;
    BSSettings *_otherSettings;
    int _preferredInterfaceOrientation;
    float _preferredLevel;
}

@property(copy,readonly) NSSet * occlusions;
@property(readonly) int preferredInterfaceOrientation;
@property(readonly) float preferredLevel;

+ (BOOL)_isMutable;
+ (id)settings;

- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (int)preferredInterfaceOrientation;
- (float)preferredLevel;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

@end
