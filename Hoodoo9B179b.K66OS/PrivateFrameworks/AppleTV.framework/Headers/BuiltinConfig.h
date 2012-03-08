/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NetflixConfigProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BuiltinConfig : NSObject <NetflixConfigProtocol> {
@private
	BOOL deviceSupported_;	// 4 = 0x4
	BOOL login_;	// 5 = 0x5
	NSString *country_;	// 8 = 0x8
	NSString *geolocation_;	// 12 = 0xc
	NSString *geolocation_status_;	// 16 = 0x10
	NSString *geolocation_language_;	// 20 = 0x14
	NSString *geolocation_country_;	// 24 = 0x18
	NSString *geolocation_locale_;	// 28 = 0x1c
	NSString *uiBootUrl_;	// 32 = 0x20
	NSString *genericFeedUrl_;	// 36 = 0x24
	NSString *netflixApiHost_;	// 40 = 0x28
	BOOL testEnvironment_;	// 44 = 0x2c
	NSString *testNccpDataUrl_;	// 48 = 0x30
	NSString *testNccpIdentityUrl_;	// 52 = 0x34
	NSString *testNccpLoggingUrl_;	// 56 = 0x38
	NSString *nccpServerUrl_;	// 60 = 0x3c
	double timePeriodForReconfiguration_;	// 64 = 0x40
	BOOL supportDD5_1_;	// 72 = 0x48
	unsigned cdnRankingMethod_;	// 76 = 0x4c
	unsigned cdnMeasurementMethod_;	// 80 = 0x50
	BOOL supportPlaylist302Redirects_;	// 84 = 0x54
	BOOL dfxpUrlsRequireRangeRequest_;	// 85 = 0x55
}
@property(assign) unsigned cdnMeasurementMethod;	// G=0x304f93a9; S=0x304f93b9; @synthesize=cdnMeasurementMethod_
@property(assign) unsigned cdnRankingMethod;	// G=0x304f9389; S=0x304f9399; @synthesize=cdnRankingMethod_
@property(copy) NSString *country;	// G=0x304f9009; S=0x304f901d; @synthesize=country_
@property(assign) BOOL deviceSupported;	// G=0x304f8fc9; S=0x304f8fd9; @synthesize=deviceSupported_
@property(assign) BOOL dfxpUrlsRequireRangeRequest;	// G=0x304f93e9; S=0x304f93f9; @synthesize=dfxpUrlsRequireRangeRequest_
@property(retain) id env;	// G=0x304f8431; S=0x304f8471; converted property
@property(copy) NSString *genericFeedUrl;	// G=0x304f9191; S=0x304f91a5; @synthesize=genericFeedUrl_
@property(copy) NSString *geolocation;	// G=0x304f9041; S=0x304f9055; @synthesize=geolocation_
@property(copy) NSString *geolocation_country;	// G=0x304f90e9; S=0x304f90fd; @synthesize=geolocation_country_
@property(copy) NSString *geolocation_language;	// G=0x304f90b1; S=0x304f90c5; @synthesize=geolocation_language_
@property(copy) NSString *geolocation_locale;	// G=0x304f9121; S=0x304f9135; @synthesize=geolocation_locale_
@property(copy) NSString *geolocation_status;	// G=0x304f9079; S=0x304f908d; @synthesize=geolocation_status_
@property(assign) BOOL login;	// G=0x304f8fe9; S=0x304f8ff9; @synthesize=login_
@property(retain) id loginWithString;	// G=0x304f84c9; S=0x304f8509; converted property
@property(copy) NSString *nccpServerUrl;	// G=0x304f92c9; S=0x304f92dd; @synthesize=nccpServerUrl_
@property(copy) NSString *netflixApiHost;	// G=0x304f91c9; S=0x304f91dd; @synthesize=netflixApiHost_
@property(assign) BOOL supportDD5_1;	// G=0x304f9369; S=0x304f9379; @synthesize=supportDD5_1_
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x304f93c9; S=0x304f93d9; @synthesize=supportPlaylist302Redirects_
@property(assign) BOOL testEnvironment;	// G=0x304f9201; S=0x304f9211; @synthesize=testEnvironment_
@property(copy) NSString *testNccpDataUrl;	// G=0x304f9221; S=0x304f9235; @synthesize=testNccpDataUrl_
@property(copy) NSString *testNccpIdentityUrl;	// G=0x304f9259; S=0x304f926d; @synthesize=testNccpIdentityUrl_
@property(copy) NSString *testNccpLoggingUrl;	// G=0x304f9291; S=0x304f92a5; @synthesize=testNccpLoggingUrl_
@property(assign) double timePeriodForReconfiguration;	// G=0x304f9301; S=0x304f9335; @synthesize=timePeriodForReconfiguration_
@property(copy) NSString *uiBootUrl;	// G=0x304f9159; S=0x304f916d; @synthesize=uiBootUrl_
- (id)init;	// 0x304f8209
// declared property getter: - (unsigned)cdnMeasurementMethod;	// 0x304f93a9
// declared property getter: - (unsigned)cdnRankingMethod;	// 0x304f9389
// declared property getter: - (id)country;	// 0x304f9009
- (void)dealloc;	// 0x304f8299
// declared property getter: - (BOOL)deviceSupported;	// 0x304f8fc9
// declared property getter: - (BOOL)dfxpUrlsRequireRangeRequest;	// 0x304f93e9
// converted property getter: - (id)env;	// 0x304f8431
// declared property getter: - (id)genericFeedUrl;	// 0x304f9191
// declared property getter: - (id)geolocation;	// 0x304f9041
// declared property getter: - (id)geolocation_country;	// 0x304f90e9
// declared property getter: - (id)geolocation_language;	// 0x304f90b1
// declared property getter: - (id)geolocation_locale;	// 0x304f9121
// declared property getter: - (id)geolocation_status;	// 0x304f9079
// declared property getter: - (BOOL)login;	// 0x304f8fe9
// converted property getter: - (id)loginWithString;	// 0x304f84c9
// declared property getter: - (id)nccpServerUrl;	// 0x304f92c9
// declared property getter: - (id)netflixApiHost;	// 0x304f91c9
- (id)parsableItems;	// 0x304f851d
// declared property setter: - (void)setCdnMeasurementMethod:(unsigned)method;	// 0x304f93b9
// declared property setter: - (void)setCdnRankingMethod:(unsigned)method;	// 0x304f9399
// declared property setter: - (void)setCountry:(id)country;	// 0x304f901d
// declared property setter: - (void)setDeviceSupported:(BOOL)supported;	// 0x304f8fd9
// declared property setter: - (void)setDfxpUrlsRequireRangeRequest:(BOOL)request;	// 0x304f93f9
// converted property setter: - (void)setEnv:(id)env;	// 0x304f8471
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x304f91a5
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x304f9055
// declared property setter: - (void)setGeolocation_country:(id)country;	// 0x304f90fd
// declared property setter: - (void)setGeolocation_language:(id)language;	// 0x304f90c5
// declared property setter: - (void)setGeolocation_locale:(id)locale;	// 0x304f9135
// declared property setter: - (void)setGeolocation_status:(id)status;	// 0x304f908d
// declared property setter: - (void)setLogin:(BOOL)login;	// 0x304f8ff9
// converted property setter: - (void)setLoginWithString:(id)string;	// 0x304f8509
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x304f92dd
// declared property setter: - (void)setNetflixApiHost:(id)host;	// 0x304f91dd
// declared property setter: - (void)setSupportDD5_1:(BOOL)a1;	// 0x304f9379
// declared property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x304f93d9
// declared property setter: - (void)setTestEnvironment:(BOOL)environment;	// 0x304f9211
// declared property setter: - (void)setTestNccpDataUrl:(id)url;	// 0x304f9235
// declared property setter: - (void)setTestNccpIdentityUrl:(id)url;	// 0x304f926d
// declared property setter: - (void)setTestNccpLoggingUrl:(id)url;	// 0x304f92a5
// declared property setter: - (void)setTimePeriodForReconfiguration:(double)reconfiguration;	// 0x304f9335
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x304f916d
// declared property getter: - (BOOL)supportDD5_1;	// 0x304f9369
// declared property getter: - (BOOL)supportPlaylist302Redirects;	// 0x304f93c9
// declared property getter: - (BOOL)testEnvironment;	// 0x304f9201
// declared property getter: - (id)testNccpDataUrl;	// 0x304f9221
// declared property getter: - (id)testNccpIdentityUrl;	// 0x304f9259
// declared property getter: - (id)testNccpLoggingUrl;	// 0x304f9291
// declared property getter: - (double)timePeriodForReconfiguration;	// 0x304f9301
// declared property getter: - (id)uiBootUrl;	// 0x304f9159
@end
