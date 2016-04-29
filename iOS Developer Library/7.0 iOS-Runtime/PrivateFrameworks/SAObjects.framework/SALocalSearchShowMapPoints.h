/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, SALocalSearchMapItem, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand {
}

@property(copy) NSString * directionsType;
@property(retain) SALocalSearchMapItem * itemDestination;
@property(retain) SALocalSearchMapItem * itemSource;
@property(copy) NSString * language;
@property(copy) NSNumber * regionOfInterestRadiusInMiles;
@property(retain) SALocalSearchMapItemList * searchItems;
@property BOOL showDirections;
@property BOOL showTraffic;

+ (id)showMapPoints;
+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;

- (id)directionsType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)itemDestination;
- (id)itemSource;
- (id)language;
- (id)regionOfInterestRadiusInMiles;
- (BOOL)requiresResponse;
- (id)searchItems;
- (void)setDirectionsType:(id)arg1;
- (void)setItemDestination:(id)arg1;
- (void)setItemSource:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRegionOfInterestRadiusInMiles:(id)arg1;
- (void)setSearchItems:(id)arg1;
- (void)setShowDirections:(BOOL)arg1;
- (void)setShowTraffic:(BOOL)arg1;
- (BOOL)showDirections;
- (BOOL)showTraffic;

@end
