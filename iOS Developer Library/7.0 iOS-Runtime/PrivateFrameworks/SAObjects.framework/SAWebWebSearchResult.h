/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString;

@interface SAWebWebSearchResult : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSArray * imageResults;
@property(copy) NSArray * newsResults;
@property(copy) NSArray * relatedSearchResults;
@property(readonly) Class superclass;
@property(copy) NSNumber * totalImageResults;
@property(copy) NSNumber * totalNewsResults;
@property(copy) NSNumber * totalVideoResults;
@property(copy) NSNumber * totalWebResults;
@property(copy) NSArray * videoResults;
@property(copy) NSArray * webResults;

+ (id)webSearchResult;
+ (id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResults;
- (id)newsResults;
- (id)relatedSearchResults;
- (void)setImageResults:(id)arg1;
- (void)setNewsResults:(id)arg1;
- (void)setRelatedSearchResults:(id)arg1;
- (void)setTotalImageResults:(id)arg1;
- (void)setTotalNewsResults:(id)arg1;
- (void)setTotalVideoResults:(id)arg1;
- (void)setTotalWebResults:(id)arg1;
- (void)setVideoResults:(id)arg1;
- (void)setWebResults:(id)arg1;
- (id)totalImageResults;
- (id)totalNewsResults;
- (id)totalVideoResults;
- (id)totalWebResults;
- (id)videoResults;
- (id)webResults;

@end
