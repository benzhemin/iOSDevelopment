/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSDGLShaderQualifier : NSObject {
    NSString *_name;
    BOOL _needsUpdate;
    int _uniformLocation;
}

@property(readonly) NSString * name;
@property(readonly) BOOL needsUpdate;
@property int uniformLocation;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)name;
- (BOOL)needsUpdate;
- (void)setGLUniformCheckWithShader:(id)arg1;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setUniformLocation:(int)arg1;
- (int)uniformLocation;
- (void)updateUniformLocationWithShaderProgramObject:(int)arg1;

@end
