/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class <BSSettingDescriptionProvider>, NSMapTable, NSString;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding> {
    <BSSettingDescriptionProvider> *_descriptionProvider;
    NSMapTable *_settingToFlagMap;
    NSMapTable *_settingToObjectMap;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property <BSSettingDescriptionProvider> * descriptionProvider;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(id)arg1;
- (void)_enumerateSettingsForObjectsWithBlock:(id)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(id)arg2;
- (id)_keyDescriptionForSetting:(unsigned int)arg1;
- (id)_newMapTable;
- (void)_setFlag:(int)arg1 forSetting:(unsigned int)arg2;
- (void)_setObject:(id)arg1 forSetting:(unsigned int)arg2;
- (id)_valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (BOOL)boolForSetting:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionProvider;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)enumerateFlagsWithBlock:(id)arg1;
- (void)enumerateObjectsWithBlock:(id)arg1;
- (int)flagForSetting:(unsigned int)arg1;
- (unsigned int)hash;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUIApplicationClientSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForSetting:(unsigned int)arg1;
- (void)setDescriptionProvider:(id)arg1;

@end
