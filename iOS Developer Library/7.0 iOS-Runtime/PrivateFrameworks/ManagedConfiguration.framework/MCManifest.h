/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MCManifest : NSObject {
    NSMutableDictionary *_manifest;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (void)_setManifestPath:(id)arg1;
+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)sharedManifest;

- (void).cxx_destruct;
- (id)_manifest;
- (void)_setManifest:(id)arg1;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (id)allInstalledProfileIdentifiers;
- (void)dealloc;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (id)init;
- (id)installedProfileWithIdentifier:(id)arg1;
- (void)invalidateCache;
- (id)manifest;
- (void)removeIdentifierFromManifest:(id)arg1;

@end
