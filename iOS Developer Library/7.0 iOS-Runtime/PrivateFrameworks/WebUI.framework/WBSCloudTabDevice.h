/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSDate, NSDictionary, NSString;

@interface WBSCloudTabDevice : NSObject <NSCopying> {
    BOOL _closeRequestSupported;
    BOOL _hasDuplicateName;
    NSDate *_lastModified;
    NSString *_name;
    NSArray *_tabs;
    NSString *_uuid;
}

@property(getter=isCloseRequestSupported,readonly) BOOL closeRequestSupported;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) BOOL hasDuplicateName;
@property(readonly) NSDate * lastModified;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSArray * tabs;
@property(copy,readonly) NSString * uuid;

+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4;
+ (id)deviceNameInDictionary:(id)arg1;
+ (BOOL)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (BOOL)isCloudTabDeviceDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (unsigned int)tabCountInDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceByRemovingTab:(id)arg1;
- (id)deviceByRemovingTabs:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)hasDuplicateName;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;
- (BOOL)isCloseRequestSupported;
- (id)lastModified;
- (id)name;
- (id)tabs;
- (id)uuid;

@end
