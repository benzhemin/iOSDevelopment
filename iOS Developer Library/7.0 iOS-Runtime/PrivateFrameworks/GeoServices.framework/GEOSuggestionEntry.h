/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSData, NSMutableArray, NSString;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {
    NSString *_calloutTitle;
    NSMutableArray *_displayLines;
    NSString *_iconID;
    GEOLatLng *_latlng;
    NSMutableArray *_namedFeatures;
    NSString *_searchQueryDisplayString;
    NSData *_suggestionEntryMetadata;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } *_textHighlights;
    unsigned int _textHighlightsCount;
    unsigned int _textHighlightsSpace;
}

@property(retain) NSString * calloutTitle;
@property(retain) NSMutableArray * displayLines;
@property(readonly) BOOL hasCalloutTitle;
@property(readonly) BOOL hasIconID;
@property(readonly) BOOL hasLatlng;
@property(readonly) BOOL hasSearchQueryDisplayString;
@property(readonly) BOOL hasSuggestionEntryMetadata;
@property(retain) NSString * iconID;
@property(retain) GEOLatLng * latlng;
@property(retain) NSMutableArray * namedFeatures;
@property(retain) NSString * searchQueryDisplayString;
@property(retain) NSData * suggestionEntryMetadata;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }* textHighlights;
@property(readonly) unsigned int textHighlightsCount;

- (void)addDisplayLine:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addTextHighlights:(struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (id)calloutTitle;
- (void)clearDisplayLines;
- (void)clearNamedFeatures;
- (void)clearTextHighlights;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLineAtIndex:(unsigned int)arg1;
- (id)displayLines;
- (unsigned int)displayLinesCount;
- (BOOL)hasCalloutTitle;
- (BOOL)hasIconID;
- (BOOL)hasLatlng;
- (BOOL)hasSearchQueryDisplayString;
- (BOOL)hasSuggestionEntryMetadata;
- (unsigned int)hash;
- (id)iconID;
- (BOOL)isEqual:(id)arg1;
- (id)latlng;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatureAtIndex:(unsigned int)arg1;
- (id)namedFeatures;
- (unsigned int)namedFeaturesCount;
- (BOOL)readFrom:(id)arg1;
- (id)searchQueryDisplayString;
- (void)setCalloutTitle:(id)arg1;
- (void)setDisplayLines:(id)arg1;
- (void)setIconID:(id)arg1;
- (void)setLatlng:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setSearchQueryDisplayString:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setTextHighlights:(struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (id)suggestionEntryMetadata;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)textHighlights;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })textHighlightsAtIndex:(unsigned int)arg1;
- (unsigned int)textHighlightsCount;
- (void)writeTo:(id)arg1;

@end
