/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, MTLResourceAllocationInfo, NSString;

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {
}

@property(readonly) MTLResourceAllocationInfo * cachedAllocationInfo;
@property(readonly) unsigned int cpuCacheMode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned int hash;
@property(copy) NSString * label;
@property int responsibleProcess;
@property(readonly) MTLResourceAllocationInfo * sharedAllocationInfo;
@property(readonly) Class superclass;

- (id)cachedAllocationInfo;
- (unsigned int)cpuCacheMode;
- (id)device;
- (BOOL)isPurgeable;
- (id)label;
- (int)responsibleProcess;
- (void)setLabel:(id)arg1;
- (unsigned int)setPurgeableState:(unsigned int)arg1;
- (void)setResponsibleProcess:(int)arg1;
- (id)sharedAllocationInfo;

@end
