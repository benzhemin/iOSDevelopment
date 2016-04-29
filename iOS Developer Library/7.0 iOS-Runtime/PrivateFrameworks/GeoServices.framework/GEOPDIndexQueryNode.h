/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {
    NSString *_field;
    NSMutableArray *_operands;
    int _type;
    NSString *_value;
}

@property(retain) NSString * field;
@property(readonly) BOOL hasField;
@property(readonly) BOOL hasValue;
@property(retain) NSMutableArray * operands;
@property int type;
@property(retain) NSString * value;

- (void)addOperand:(id)arg1;
- (void)clearOperands;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (BOOL)hasField;
- (BOOL)hasValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operandAtIndex:(unsigned int)arg1;
- (id)operands;
- (unsigned int)operandsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setField:(id)arg1;
- (void)setOperands:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)value;
- (void)writeTo:(id)arg1;

@end
