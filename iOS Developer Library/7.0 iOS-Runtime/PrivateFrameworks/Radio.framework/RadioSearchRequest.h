/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, SSMetricsConfiguration, SSMetricsPageEvent, SSURLConnectionRequest;

@interface RadioSearchRequest : RadioRequest {
    BOOL _excludeFeaturedStations;
    SSMetricsConfiguration *_metricsConfiguration;
    SSMetricsPageEvent *_metricsPageEvent;
    unsigned int _numberOfSearchResults;
    SSURLConnectionRequest *_request;
    int _searchCategory;
    unsigned int _searchResultsOffset;
    NSString *_searchTerm;
    BOOL _shouldProcessCategories;
}

@property BOOL excludeFeaturedStations;
@property(retain,readonly) SSMetricsConfiguration * metricsConfiguration;
@property(copy,readonly) SSMetricsPageEvent * metricsPageEvent;
@property unsigned int numberOfSearchResults;
@property int searchCategory;
@property unsigned int searchResultsOffset;
@property(readonly) NSString * searchTerm;
@property BOOL shouldProcessCategories;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (BOOL)excludeFeaturedStations;
- (id)init;
- (id)initWithSearchTerm:(id)arg1;
- (id)metricsConfiguration;
- (id)metricsPageEvent;
- (unsigned int)numberOfSearchResults;
- (int)searchCategory;
- (unsigned int)searchResultsOffset;
- (id)searchTerm;
- (void)setExcludeFeaturedStations:(BOOL)arg1;
- (void)setNumberOfSearchResults:(unsigned int)arg1;
- (void)setSearchCategory:(int)arg1;
- (void)setSearchResultsOffset:(unsigned int)arg1;
- (void)setShouldProcessCategories:(BOOL)arg1;
- (BOOL)shouldProcessCategories;
- (void)startWithSearchCompletionHandler:(id)arg1;

@end
