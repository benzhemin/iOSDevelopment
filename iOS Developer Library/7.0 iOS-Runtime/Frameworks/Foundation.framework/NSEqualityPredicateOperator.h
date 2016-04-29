/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEqualityPredicateOperator : NSPredicateOperator {
    BOOL _negate;
    unsigned int _options;
}

+ (BOOL)supportsSecureCoding;

- (void)_setOptions:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 negate:(BOOL)arg3 options:(unsigned int)arg4;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 negate:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNegation;
- (unsigned int)options;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (void)setNegation:(BOOL)arg1;

@end
