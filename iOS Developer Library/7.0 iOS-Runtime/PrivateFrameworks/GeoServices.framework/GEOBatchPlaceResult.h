/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceResult;

@interface GEOBatchPlaceResult : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    } _has;
    GEOPlaceResult *_placeResult;
    int _statusCode;
}

@property(readonly) BOOL hasPlaceResult;
@property BOOL hasStatusCode;
@property(retain) GEOPlaceResult * placeResult;
@property int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceResult;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeResult;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setPlaceResult:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
