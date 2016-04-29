/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSArray;

@interface NEVPNApp : NEVPN {
    NSArray *_appRules;
}

@property(copy) NSArray * appRules;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appRules;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (id)copyAppRuleIDs;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)removeAppRuleByID:(id)arg1;
- (void)setAppRules:(id)arg1;

@end
