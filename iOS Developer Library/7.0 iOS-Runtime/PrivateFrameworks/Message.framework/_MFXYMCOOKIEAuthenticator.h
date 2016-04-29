/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class YahooAccount;

@interface _MFXYMCOOKIEAuthenticator : MFSASLAuthenticator {
    BOOL _smtp;
    YahooAccount *_yahooAccount;
}

@property(getter=isSMTP,readonly) BOOL smtp;
@property(retain) YahooAccount * yahooAccount;

- (BOOL)base64EncodeResponseData;
- (void)dealloc;
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (BOOL)isSMTP;
- (id)responseForServerData:(id)arg1;
- (id)saslName;
- (void)setAuthenticationState:(int)arg1;
- (void)setYahooAccount:(id)arg1;
- (id)yahooAccount;

@end
