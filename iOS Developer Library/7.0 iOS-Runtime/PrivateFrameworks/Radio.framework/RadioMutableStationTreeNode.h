/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSDictionary, NSString, RadioArtworkCollection;

@interface RadioMutableStationTreeNode : RadioStationTreeNode {
}

@property(copy) RadioArtworkCollection * artworkCollection;
@property int childNodeLoadingStyle;
@property(copy) NSArray * childNodes;
@property int displayStyle;
@property BOOL hasAdditionalChildNodes;
@property(copy) NSString * name;
@property long long nodeID;
@property(copy) NSDictionary * stationDictionary;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setArtworkCollection:(id)arg1;
- (void)setChildNodeLoadingStyle:(int)arg1;
- (void)setChildNodes:(id)arg1;
- (void)setDisplayStyle:(int)arg1;
- (void)setHasAdditionalChildNodes:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNodeID:(long long)arg1;
- (void)setStationDictionary:(id)arg1;

@end
