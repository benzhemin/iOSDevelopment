/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSNumber, TSCH3DLightingModel;

@interface TSCH3DRenderingLightingModel : NSObject {
    BOOL mHasTransparency;
    TSCH3DLightingModel *mLightingModel;
    NSNumber *mPercentage;
}

@property(readonly) BOOL hasTransparency;
@property(readonly) TSCH3DLightingModel * lightingModel;

+ (id)p_lightingModelFromFill:(id)arg1 lightings:(id)arg2 returningTransparency:(BOOL*)arg3;
+ (id)renderingLightingModelWithFill:(id)arg1 lightings:(id)arg2;
+ (id)renderingLightingModelWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3;

- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)dealloc;
- (BOOL)hasTransparency;
- (id)initWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3;
- (id)lightingModel;

@end
