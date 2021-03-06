/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixConfigProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BuiltinConfig : XXUnknownSuperclass <NetflixConfigProtocol> {
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
	BOOL supportDashFairplayStreams_;	// 86 = 0x56
	BOOL supportTrickPlayForDash_;	// 87 = 0x57
}
@property(assign) unsigned cdnMeasurementMethod;	// G=0x511a79; S=0x511a8d; @synthesize=cdnMeasurementMethod_
@property(assign) unsigned cdnRankingMethod;	// G=0x511a4d; S=0x511a61; @synthesize=cdnRankingMethod_
@property(copy) NSString *country;	// G=0x5117b1; S=0x5117c5; @synthesize=country_
@property(assign) BOOL deviceSupported;	// G=0x511751; S=0x511769; @synthesize=deviceSupported_
@property(assign) BOOL dfxpUrlsRequireRangeRequest;	// G=0x511ad5; S=0x511aed; @synthesize=dfxpUrlsRequireRangeRequest_
@property(retain) id env;	// G=0x510d7d; S=0x510dbd; converted property
@property(copy) NSString *genericFeedUrl;	// G=0x5118ad; S=0x5118c1; @synthesize=genericFeedUrl_
@property(copy) NSString *geolocation;	// G=0x5117d5; S=0x5117e9; @synthesize=geolocation_
@property(copy) NSString *geolocation_country;	// G=0x511841; S=0x511855; @synthesize=geolocation_country_
@property(copy) NSString *geolocation_language;	// G=0x51181d; S=0x511831; @synthesize=geolocation_language_
@property(copy) NSString *geolocation_locale;	// G=0x511865; S=0x511879; @synthesize=geolocation_locale_
@property(copy) NSString *geolocation_status;	// G=0x5117f9; S=0x51180d; @synthesize=geolocation_status_
@property(assign) BOOL login;	// G=0x511781; S=0x511799; @synthesize=login_
@property(retain) id loginWithString;	// G=0x510e11; S=0x510e51; converted property
@property(copy) NSString *nccpServerUrl;	// G=0x511991; S=0x5119a5; @synthesize=nccpServerUrl_
@property(copy) NSString *netflixApiHost;	// G=0x5118d1; S=0x5118e5; @synthesize=netflixApiHost_
@property(assign) BOOL supportDD5_1;	// G=0x511a1d; S=0x511a35; @synthesize=supportDD5_1_
@property(assign) BOOL supportDashFairplayStreams;	// G=0x511b05; S=0x511b1d; @synthesize=supportDashFairplayStreams_
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x511aa5; S=0x511abd; @synthesize=supportPlaylist302Redirects_
@property(assign) BOOL supportTrickPlayForDash;	// G=0x511b35; S=0x511b4d; @synthesize=supportTrickPlayForDash_
@property(assign) BOOL testEnvironment;	// G=0x5118f5; S=0x51190d; @synthesize=testEnvironment_
@property(copy) NSString *testNccpDataUrl;	// G=0x511925; S=0x511939; @synthesize=testNccpDataUrl_
@property(copy) NSString *testNccpIdentityUrl;	// G=0x511949; S=0x51195d; @synthesize=testNccpIdentityUrl_
@property(copy) NSString *testNccpLoggingUrl;	// G=0x51196d; S=0x511981; @synthesize=testNccpLoggingUrl_
@property(assign) double timePeriodForReconfiguration;	// G=0x5119b5; S=0x5119e9; @synthesize=timePeriodForReconfiguration_
@property(copy) NSString *uiBootUrl;	// G=0x511889; S=0x51189d; @synthesize=uiBootUrl_
- (id)init;	// 0x510b51
// declared property getter: - (unsigned)cdnMeasurementMethod;	// 0x511a79
// declared property getter: - (unsigned)cdnRankingMethod;	// 0x511a4d
// declared property getter: - (id)country;	// 0x5117b1
- (void)dealloc;	// 0x510bfd
// declared property getter: - (BOOL)deviceSupported;	// 0x511751
// declared property getter: - (BOOL)dfxpUrlsRequireRangeRequest;	// 0x511ad5
// converted property getter: - (id)env;	// 0x510d7d
// declared property getter: - (id)genericFeedUrl;	// 0x5118ad
// declared property getter: - (id)geolocation;	// 0x5117d5
// declared property getter: - (id)geolocation_country;	// 0x511841
// declared property getter: - (id)geolocation_language;	// 0x51181d
// declared property getter: - (id)geolocation_locale;	// 0x511865
// declared property getter: - (id)geolocation_status;	// 0x5117f9
// declared property getter: - (BOOL)login;	// 0x511781
// converted property getter: - (id)loginWithString;	// 0x510e11
// declared property getter: - (id)nccpServerUrl;	// 0x511991
// declared property getter: - (id)netflixApiHost;	// 0x5118d1
- (id)parsableItems;	// 0x510e65
// declared property setter: - (void)setCdnMeasurementMethod:(unsigned)method;	// 0x511a8d
// declared property setter: - (void)setCdnRankingMethod:(unsigned)method;	// 0x511a61
// declared property setter: - (void)setCountry:(id)country;	// 0x5117c5
// declared property setter: - (void)setDeviceSupported:(BOOL)supported;	// 0x511769
// declared property setter: - (void)setDfxpUrlsRequireRangeRequest:(BOOL)request;	// 0x511aed
// converted property setter: - (void)setEnv:(id)env;	// 0x510dbd
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x5118c1
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x5117e9
// declared property setter: - (void)setGeolocation_country:(id)country;	// 0x511855
// declared property setter: - (void)setGeolocation_language:(id)language;	// 0x511831
// declared property setter: - (void)setGeolocation_locale:(id)locale;	// 0x511879
// declared property setter: - (void)setGeolocation_status:(id)status;	// 0x51180d
// declared property setter: - (void)setLogin:(BOOL)login;	// 0x511799
// converted property setter: - (void)setLoginWithString:(id)string;	// 0x510e51
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x5119a5
// declared property setter: - (void)setNetflixApiHost:(id)host;	// 0x5118e5
// declared property setter: - (void)setSupportDD5_1:(BOOL)a1;	// 0x511a35
// declared property setter: - (void)setSupportDashFairplayStreams:(BOOL)streams;	// 0x511b1d
// declared property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x511abd
// declared property setter: - (void)setSupportTrickPlayForDash:(BOOL)dash;	// 0x511b4d
// declared property setter: - (void)setTestEnvironment:(BOOL)environment;	// 0x51190d
// declared property setter: - (void)setTestNccpDataUrl:(id)url;	// 0x511939
// declared property setter: - (void)setTestNccpIdentityUrl:(id)url;	// 0x51195d
// declared property setter: - (void)setTestNccpLoggingUrl:(id)url;	// 0x511981
// declared property setter: - (void)setTimePeriodForReconfiguration:(double)reconfiguration;	// 0x5119e9
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x51189d
// declared property getter: - (BOOL)supportDD5_1;	// 0x511a1d
// declared property getter: - (BOOL)supportDashFairplayStreams;	// 0x511b05
// declared property getter: - (BOOL)supportPlaylist302Redirects;	// 0x511aa5
// declared property getter: - (BOOL)supportTrickPlayForDash;	// 0x511b35
// declared property getter: - (BOOL)testEnvironment;	// 0x5118f5
// declared property getter: - (id)testNccpDataUrl;	// 0x511925
// declared property getter: - (id)testNccpIdentityUrl;	// 0x511949
// declared property getter: - (id)testNccpLoggingUrl;	// 0x51196d
// declared property getter: - (double)timePeriodForReconfiguration;	// 0x5119b5
// declared property getter: - (id)uiBootUrl;	// 0x511889
@end

