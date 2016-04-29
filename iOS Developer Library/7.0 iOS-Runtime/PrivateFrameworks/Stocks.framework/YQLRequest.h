/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface YQLRequest : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    NSURLRequest *_request;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(BOOL)arg1;
+ (BOOL)shouldGenerateOfflineData;

- (void).cxx_destruct;
- (id)YQLCountryCode;
- (id)YQLLanguageCode;
- (id)_yahooDoppelganger_connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (id)aggregateDictionaryDomain;
- (id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(BOOL)arg3;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
- (void)didParseData;
- (void)failToParseWithData:(id)arg1;
- (void)failWithError:(id)arg1;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;
- (id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3;
- (id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
- (void)parseData:(id)arg1;

@end
