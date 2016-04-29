/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSString;

@interface PRPinyinModification : PRModification {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _additionalSyllableRange;
    BOOL _isTemporary;
    unsigned char _letters[7];
    double _modificationScore;
    unsigned int _modificationType;
    BOOL _producesPartialSyllable;
    } _range;
    NSString *_replacementString;
    unsigned int _syllableCountScore;
    } _syllableRange;
}

+ (id)finalModificationsForInputString:(id)arg1;
+ (id)modificationsForInputString:(id)arg1;

- (BOOL)_shouldAppendLetter:(unsigned char)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })additionalSyllableRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })combinedSyllableRange;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 additionalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned int)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(BOOL)arg9 isTemporary:(BOOL)arg10;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 additionalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned int)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 additionalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 modificationScore:(double)arg6;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5 isTemporary:(BOOL)arg6;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned int)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(BOOL)arg8 isTemporary:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned int)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(BOOL)arg8;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 modificationScore:(double)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporary;
- (double)modificationScore;
- (unsigned int)modificationType;
- (BOOL)producesPartialSyllable;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)replacementString;
- (unsigned int)syllableCountScore;
- (struct _NSRange { unsigned int x1; unsigned int x2; })syllableRange;

@end
