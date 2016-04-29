/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent {
}

@property(retain) NSNumber * accountIdentifier;
@property(retain) NSString * applicationIdentifier;
@property(retain) NSNumber * baseVersion;
@property(retain) NSNumber * clientVersion;
@property(retain) NSString * connection;
@property(retain) NSString * eventType;
@property(retain) NSNumber * eventVersion;
@property(retain) NSString * hostApplicationIdentifier;
@property double originalTime;
@property(retain) NSString * pageContext;
@property(retain) NSString * pageDescription;
@property unsigned long long pageID;
@property(retain) NSString * pageType;
@property(retain) NSString * pageURL;
@property(retain) NSNumber * pixelRatio;
@property(retain) NSNumber * previousClientVersion;
@property(retain) NSNumber * screenHeight;
@property(retain) NSNumber * screenWidth;
@property(retain) NSString * topic;
@property(retain) NSString * userAgent;
@property(retain) NSNumber * windowHeight;
@property(retain) NSString * windowOrientation;
@property(retain) NSNumber * windowWidth;

- (id)accountIdentifier;
- (id)applicationIdentifier;
- (id)baseVersion;
- (id)clientVersion;
- (id)connection;
- (id)decorateReportingURL:(id)arg1;
- (id)description;
- (id)eventType;
- (id)eventVersion;
- (id)hostApplicationIdentifier;
- (id)init;
- (BOOL)isBlacklistedByConfiguration:(id)arg1;
- (double)originalTime;
- (id)pageContext;
- (id)pageDescription;
- (unsigned long long)pageID;
- (id)pageType;
- (id)pageURL;
- (id)pixelRatio;
- (id)previousClientVersion;
- (id)screenHeight;
- (id)screenWidth;
- (void)setAccountIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBaseVersion:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setEventVersion:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setOriginalTime:(double)arg1;
- (void)setOriginalTimeUsingDate:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setPageDescription:(id)arg1;
- (void)setPageID:(unsigned long long)arg1;
- (void)setPageType:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setPixelRatio:(id)arg1;
- (void)setPreviousClientVersion:(id)arg1;
- (void)setScreenHeight:(id)arg1;
- (void)setScreenWidth:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setWindowHeight:(id)arg1;
- (void)setWindowOrientation:(id)arg1;
- (void)setWindowWidth:(id)arg1;
- (id)topic;
- (id)userAgent;
- (id)windowHeight;
- (id)windowOrientation;
- (id)windowWidth;

@end
