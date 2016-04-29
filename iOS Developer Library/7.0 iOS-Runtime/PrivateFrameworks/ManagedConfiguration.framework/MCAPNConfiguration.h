/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCAPNConfiguration : NSObject {
    NSString *_authenticationType;
    NSString *_name;
    NSString *_password;
    NSNumber *_proxyPort;
    NSString *_proxyServer;
    NSString *_username;
}

@property(retain) NSString * authenticationType;
@property(retain) NSString * name;
@property(retain) NSString * password;
@property(retain) NSNumber * proxyPort;
@property(retain) NSString * proxyServer;
@property(retain) NSString * username;

- (void).cxx_destruct;
- (id)authenticationType;
- (id)description;
- (id)initWithDictionary:(id)arg1 outError:(id*)arg2;
- (id)localizedAuthenticationType;
- (id)name;
- (id)password;
- (id)proxyPort;
- (id)proxyServer;
- (void)setAuthenticationType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProxyPort:(id)arg1;
- (void)setProxyServer:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)username;

@end
