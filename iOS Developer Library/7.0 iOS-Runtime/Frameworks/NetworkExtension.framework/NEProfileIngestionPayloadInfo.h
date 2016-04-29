/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString;

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    BOOL _applicationCreated;
    BOOL _isSetAside;
    NSString *_payloadOrganization;
    NSString *_payloadProtocolType;
    NSString *_payloadUUID;
    NSString *_profileIdentifier;
    NSString *_profileOrganization;
    NSString *_profileUUID;
}

@property BOOL applicationCreated;
@property BOOL isSetAside;
@property(copy) NSString * payloadOrganization;
@property(copy) NSString * payloadProtocolType;
@property(copy) NSString * payloadUUID;
@property(copy) NSString * profileIdentifier;
@property(copy) NSString * profileOrganization;
@property(copy) NSString * profileUUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)applicationCreated;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isSetAside;
- (id)payloadOrganization;
- (id)payloadProtocolType;
- (id)payloadUUID;
- (id)profileIdentifier;
- (id)profileOrganization;
- (id)profileUUID;
- (void)setApplicationCreated:(BOOL)arg1;
- (void)setIsSetAside:(BOOL)arg1;
- (void)setPayloadOrganization:(id)arg1;
- (void)setPayloadProtocolType:(id)arg1;
- (void)setPayloadUUID:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setProfileOrganization:(id)arg1;
- (void)setProfileUUID:(id)arg1;

@end
