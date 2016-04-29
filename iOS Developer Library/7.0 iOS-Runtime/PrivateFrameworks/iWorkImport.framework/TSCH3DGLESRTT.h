/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable> {
    unsigned int mTexture;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)bufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1 internalFormat:(unsigned int)arg2 format:(unsigned int)arg3 attachment:(unsigned int)arg4;
+ (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
+ (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)isTexturable;

- (void)bindInSession:(id)arg1;
- (void)deactivateInContext:(id)arg1;
- (void)dealloc;
- (void)destroyResourcesInContext:(id)arg1;
- (id)initWithGLTexture:(unsigned int)arg1;
- (BOOL)valid;

@end
