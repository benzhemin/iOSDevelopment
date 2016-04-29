/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSIndexSet, NSString;

@interface _PLKnownAdjustment : NSObject {
    NSString *_identifier;
    id _settingsExtractionBlock;
    int _supportLevel;
    NSIndexSet *_supportedVersions;
}

@property(copy) NSString * identifier;
@property(copy) id settingsExtractionBlock;
@property int supportLevel;
@property(copy) NSIndexSet * supportedVersions;

- (void)dealloc;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setSettingsExtractionBlock:(id)arg1;
- (void)setSupportLevel:(int)arg1;
- (void)setSupportedVersions:(id)arg1;
- (id)settingsExtractionBlock;
- (int)supportLevel;
- (id)supportedVersions;

@end
