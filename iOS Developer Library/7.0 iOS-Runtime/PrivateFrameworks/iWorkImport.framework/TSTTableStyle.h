/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSDStroke;

@interface TSTTableStyle : TSSStyle <TSTTableStrokeProviding, TSDMixing> {
}

@property(readonly) TSDStroke * bodyColumnStroke;
@property(readonly) TSDStroke * bodyRowStroke;
@property(readonly) TSDStroke * borderStrokeEvenIfNotVisible;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) TSDStroke * defaultHorizontalBorderStroke;
@property(readonly) TSDStroke * defaultVerticalBorderStroke;
@property(copy,readonly) NSString * description;
@property(readonly) TSDStroke * footerRowBodyColumnStroke;
@property(readonly) TSDStroke * footerRowBodyRowStroke;
@property(readonly) TSDStroke * footerRowBorderStroke;
@property(readonly) TSDStroke * footerRowSeparatorStroke;
@property(readonly) unsigned int hash;
@property(readonly) TSDStroke * headerColumnBodyColumnStroke;
@property(readonly) TSDStroke * headerColumnBodyRowStroke;
@property(readonly) TSDStroke * headerColumnBorderStroke;
@property(readonly) TSDStroke * headerColumnSeparatorStroke;
@property(readonly) TSDStroke * headerRowBodyColumnStroke;
@property(readonly) TSDStroke * headerRowBodyRowStroke;
@property(readonly) TSDStroke * headerRowBorderStroke;
@property(readonly) TSDStroke * headerRowSeparatorStroke;
@property(readonly) Class superclass;

+ (void)initDefaultPropertyMap:(id)arg1 presetID:(unsigned int)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetID:(unsigned int)arg2 colors:(id)arg3;
+ (id)nonEmphasisTableProperties;
+ (id)p_magicMoveProperties;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)styleIDForPreset:(unsigned int)arg1;

- (id)bodyColumnStroke;
- (id)bodyRowStroke;
- (id)borderStrokeEvenIfNotVisible;
- (void)dealloc;
- (id)defaultHorizontalBorderStroke;
- (id)defaultVerticalBorderStroke;
- (id)exteriorStrokeForStrokePreset:(unsigned int)arg1;
- (id)footerRowBodyColumnStroke;
- (id)footerRowBodyRowStroke;
- (id)footerRowBorderStroke;
- (id)footerRowSeparatorStroke;
- (id)headerColumnBodyColumnStroke;
- (id)headerColumnBodyRowStroke;
- (id)headerColumnBorderStroke;
- (id)headerColumnSeparatorStroke;
- (id)headerRowBodyColumnStroke;
- (id)headerRowBodyRowStroke;
- (id)headerRowBorderStroke;
- (id)headerRowSeparatorStroke;
- (id)horizontalStrokeForStrokePreset:(unsigned int)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)loadTableStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TableStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; struct Deprecated_TableStrokeArchive {} *x4; struct Deprecated_TableStrokeArchive {} *x5; struct Deprecated_TableStrokeArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; struct Deprecated_TableStrokeArchive {} *x8; struct Deprecated_TableStrokeArchive {} *x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct Deprecated_TableStrokeArchive {} *x12; struct Deprecated_TableStrokeArchive {} *x13; struct Deprecated_TableStrokeArchive {} *x14; struct Deprecated_TableStrokeArchive {} *x15; boolx16; boolx17; boolx18; boolx19; boolx20; boolx21; boolx22; boolx23; struct Deprecated_TableStrokeArchive {} *x24; struct Deprecated_TableStrokeArchive {} *x25; struct Deprecated_TableStrokeArchive {} *x26; struct Deprecated_TableStrokeArchive {} *x27; struct StrokePresetListArchive {} *x28; boolx29; boolx30; boolx31; boolx32; boolx33; int x34; int x35; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x36; struct StrokeArchive {} *x37; struct StrokeArchive {} *x38; struct StrokeArchive {} *x39; struct StrokeArchive {} *x40; struct StrokeArchive {} *x41; struct StrokeArchive {} *x42; struct StrokeArchive {} *x43; struct StrokeArchive {} *x44; struct StrokeArchive {} *x45; struct StrokeArchive {} *x46; struct StrokeArchive {} *x47; struct StrokeArchive {} *x48; struct StrokeArchive {} *x49; struct StrokeArchive {} *x50; struct StrokeArchive {} *x51; struct StrokeArchive {} *x52; int x53; unsigned int x54[2]; }*)arg2 unarchiver:(id)arg3;
- (SEL)mapThemePropertyMapSelector;
- (unsigned int)maskForStrokePreset:(unsigned int)arg1;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; struct Deprecated_TableStrokeArchive {} *x4; struct Deprecated_TableStrokeArchive {} *x5; struct Deprecated_TableStrokeArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; struct Deprecated_TableStrokeArchive {} *x8; struct Deprecated_TableStrokeArchive {} *x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct Deprecated_TableStrokeArchive {} *x12; struct Deprecated_TableStrokeArchive {} *x13; struct Deprecated_TableStrokeArchive {} *x14; struct Deprecated_TableStrokeArchive {} *x15; boolx16; boolx17; boolx18; boolx19; boolx20; boolx21; boolx22; boolx23; struct Deprecated_TableStrokeArchive {} *x24; struct Deprecated_TableStrokeArchive {} *x25; struct Deprecated_TableStrokeArchive {} *x26; struct Deprecated_TableStrokeArchive {} *x27; struct StrokePresetListArchive {} *x28; boolx29; boolx30; boolx31; boolx32; boolx33; int x34; int x35; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x36; struct StrokeArchive {} *x37; struct StrokeArchive {} *x38; struct StrokeArchive {} *x39; struct StrokeArchive {} *x40; struct StrokeArchive {} *x41; struct StrokeArchive {} *x42; struct StrokeArchive {} *x43; struct StrokeArchive {} *x44; struct StrokeArchive {} *x45; struct StrokeArchive {} *x46; struct StrokeArchive {} *x47; struct StrokeArchive {} *x48; struct StrokeArchive {} *x49; struct StrokeArchive {} *x50; struct StrokeArchive {} *x51; struct StrokeArchive {} *x52; int x53; unsigned int x54[2]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)strokeForStrokePreset:(unsigned int)arg1;
- (void)validate;
- (id)verticalStrokeForStrokePreset:(unsigned int)arg1;

@end
