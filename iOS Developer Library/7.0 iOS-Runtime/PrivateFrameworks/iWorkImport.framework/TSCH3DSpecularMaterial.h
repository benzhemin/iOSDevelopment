/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCH3DSpecularMaterial : TSCH3DTexturesMaterial {
}

+ (id)instanceWithArchive:(const struct Chart3DSpecularMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DTexturesMaterialArchive {} *x3; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;

- (struct MaterialShaderVariables { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; })defaultShaderVariables;
- (id)initWithArchive:(const struct Chart3DSpecularMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DTexturesMaterialArchive {} *x3; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DSpecularMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DTexturesMaterialArchive {} *x3; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;

@end
