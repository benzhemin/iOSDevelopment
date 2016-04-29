/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableArray, NSString;

@interface YTSearchSuggestionsRequest : YTXMLHTTPRequest {
    id _delegate;
    NSString *_query;
    NSMutableArray *_suggestions;
}

- (id)_suggestionsURLForQuery:(id)arg1;
- (void)clearDelegate;
- (void)dealloc;
- (void)didAuthenticate:(id)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (int)parseData:(id)arg1;
- (void)requestSuggestionsWithDelegate:(id)arg1 query:(id)arg2;

@end
