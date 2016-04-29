/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLatLng : PBCodable <NSCopying> {
    double _lat;
    double _lng;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property double lat;
@property double lng;

- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (double)lat;
- (double)lng;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;
- (void)writeTo:(id)arg1;

@end
