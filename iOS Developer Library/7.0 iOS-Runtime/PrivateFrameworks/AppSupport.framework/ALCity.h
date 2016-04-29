/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSDictionary, NSString;

@interface ALCity : NSObject {
    NSString *_countryName;
    NSString *_countryOverride;
    int _identifier;
    NSString *_identifierForCPCity;
    float _latitude;
    NSString *_localeCode;
    BOOL _localizationAttempted;
    float _longitude;
    NSString *_name;
    NSString *_timeZone;
    NSString *_unlocalizedCountryName;
    NSString *_unlocalizedCountryOverride;
    NSString *_unlocalizedName;
    NSString *_yahooCode;
}

@property(readonly) NSString * classicIdentifier;
@property(retain) NSString * countryName;
@property(retain) NSString * countryOverride;
@property int identifier;
@property float latitude;
@property(retain) NSString * localeCode;
@property float longitude;
@property(retain) NSString * name;
@property(readonly) NSDictionary * properties;
@property(retain) NSString * timeZone;
@property(retain) NSString * unlocalizedCountryName;
@property(retain) NSString * unlocalizedCountryOverride;
@property(retain) NSString * unlocalizedName;
@property(retain) NSString * yahooCode;

- (id)classicIdentifier;
- (id)countryName;
- (id)countryOverride;
- (void)dealloc;
- (id)description;
- (id)displayNameIncludingCountry:(BOOL)arg1 withFormat:(id)arg2;
- (id)displayNameIncludingCountry:(BOOL)arg1;
- (void)ensureLocalized;
- (unsigned int)hash;
- (int)identifier;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (id)initWithSQLRow:(char **)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)latitude;
- (id)localeCode;
- (float)longitude;
- (id)name;
- (id)properties;
- (void)setCountryName:(id)arg1;
- (void)setCountryOverride:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLocaleCode:(id)arg1;
- (void)setLongitude:(float)arg1;
- (void)setName:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (void)setUnlocalizedCountryOverride:(id)arg1;
- (void)setUnlocalizedName:(id)arg1;
- (void)setYahooCode:(id)arg1;
- (id)timeZone;
- (id)unlocalizedCountryName;
- (id)unlocalizedCountryOverride;
- (id)unlocalizedName;
- (id)yahooCode;

@end
