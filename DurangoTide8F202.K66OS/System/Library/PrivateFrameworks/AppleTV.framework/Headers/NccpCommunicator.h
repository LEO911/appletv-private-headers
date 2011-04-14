/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableArray, NccpTransactionResult;
@protocol NccpHandlerDelegate;

__attribute__((visibility("hidden")))
@interface NccpCommunicator : NSObject {
@private
	NSObject<NccpHandlerDelegate> *mNccpHandlerDelegate;	// 4 = 0x4
	BOOL mNeedRegister;	// 8 = 0x8
	BOOL mNeedsCredentials;	// 9 = 0x9
	int fujiTarget;	// 12 = 0xc
	unsigned maxDownloadables;	// 16 = 0x10
	unsigned maxCdns;	// 20 = 0x14
	NccpTransactionResult *lastTransactionResult;	// 24 = 0x18
	NSMutableArray *rankedCDNList;	// 28 = 0x1c
	NSMutableArray *nccpRequestMetrics;	// 32 = 0x20
	BOOL mNeedCredentials;	// 36 = 0x24
}
@property(readonly, retain) NccpTransactionResult *lastTransactionResult;	// G=0x338504cc; @synthesize
@property(readonly, assign, nonatomic) unsigned maxCdns;	// G=0x3384f310; @synthesize
@property(readonly, assign, nonatomic) unsigned maxDownloadables;	// G=0x3384f324; @synthesize
@property(readonly, assign) BOOL needCredentials;	// G=0x3384f338; @synthesize=mNeedCredentials
@property(readonly, assign) BOOL needRegister;	// G=0x3384f34c; @synthesize=mNeedRegister
+ (id)NFErrToNWErr:(unsigned)nwerr;	// 0x3384f488
+ (id)NFErrToString:(unsigned)string;	// 0x3384f66c
+ (id)buildEsn:(int)esn;	// 0x338515b4
+ (void)cleanUp;	// 0x33852f54
+ (BOOL)createWithDelegate:(id)delegate withTarget:(int)target useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x3384fefc
+ (id)deviceUserAgent;	// 0x3384f1e4
+ (void)enableOutputtingOfNCCPTransactionResponse:(BOOL)nccptransactionResponse;	// 0x33850da4
+ (void)enterShutdown;	// 0x3384f1bc
+ (const char *)esnPrefix:(int)prefix;	// 0x33850bf8
+ (id)esnPrefixAsNSString:(int)string;	// 0x33850008
+ (void)inactivePurgeSystemDataFiles;	// 0x3385074c
+ (id)instance;	// 0x3384f1f4
+ (BOOL)instantiated;	// 0x3384f218
+ (BOOL)isNccpLoggingToConsole;	// 0x33850be8
+ (void)setDeviceUserAgent:(id)agent;	// 0x33850124
+ (void)setNccpLogToConsole:(BOOL)console;	// 0x33850bcc
+ (void)setOSVersion:(id)version;	// 0x33851054
+ (void)setUIVersion:(id)version;	// 0x338511d0
+ (void)setUniqueIdentifier:(id)identifier;	// 0x33850198
+ (id)uniqueIdentifier;	// 0x3384f1d4
- (id)initWithDelegate:(id)delegate;	// 0x33850e90
- (BOOL)buildRankedCDNList:(AuthResponseData *)list withErrorMsg:(id *)errorMsg;	// 0x338523d0
- (id)cdnDownloadDataWithCdnId:(unsigned)cdnId;	// 0x3384fa58
- (void)cleanUp;	// 0x338508c4
- (void)dealloc;	// 0x3384fdcc
- (void)doBookmarkTh;	// 0x3384fc48
- (void)doRuntimeTh;	// 0x3384f850
- (id)extractClientHash:(id)hash;	// 0x3385054c
- (void)fillLicenseResponseData:(LicenseResponseData *)data;	// 0x33850b34
- (int)getAuthorizationET;	// 0x3384f15c
- (unsigned)getBookmark:(unsigned)bookmark;	// 0x338576a4
- (unsigned)getBookmarkTh:(unsigned)th;	// 0x3384fd20
- (int)getCdnSelectionET;	// 0x3384f1ac
- (id)getCurrentMovieTitle;	// 0x33850dc0
- (unsigned)getDownloadableIdForLicenseReq;	// 0x3384f2e8
- (unsigned)getLastTriedAuthMovieId;	// 0x3384f280
- (id)getLicense;	// 0x3384f2d8
- (int)getLicenseET;	// 0x3384f16c
- (int)getMetaDataET;	// 0x3384f17c
- (id)getNccpRequestMetrics;	// 0x3384f26c
- (int)getNccpRequestMetricsTotalTime;	// 0x338509c8
- (id)getRankedCDNList;	// 0x3384f258
- (int)getRegisterET;	// 0x3384f18c
- (double)getRunTime:(unsigned)time;	// 0x33855790
- (unsigned)getRunTimeTh:(unsigned)th;	// 0x3384f934
- (int)getUserMetaDataET;	// 0x3384f19c
- (void)initializeForPlaylistGeneration;	// 0x3384f708
- (void)invalidateAllResponseData;	// 0x3384fd98
- (void)invalidateAuthorizationResponseData;	// 0x3384f230
- (void)invalidateLicenseResponseData;	// 0x3384f9dc
- (BOOL)is3GPlaybackAllowed;	// 0x3384f294
// declared property getter: - (id)lastTransactionResult;	// 0x338504cc
// declared property getter: - (unsigned)maxCdns;	// 0x3384f310
// declared property getter: - (unsigned)maxDownloadables;	// 0x3384f324
// declared property getter: - (BOOL)needCredentials;	// 0x3384f338
// declared property getter: - (BOOL)needRegister;	// 0x3384f34c
- (BOOL)netflixIdsMatch:(id)match :(id)arg2;	// 0x338500b4
- (void)purgeUserRegistration;	// 0x33850874
- (void)removePreviousUserStoredData;	// 0x33850960
- (BOOL)resendAuthorization;	// 0x33852200
- (void)saveShopperId;	// 0x33851920
- (void)selectCdnByCdnId:(unsigned)anId;	// 0x33850e00
- (BOOL)sendAuthorization:(unsigned)authorization trackId:(int)anId withContentProfiles:(id)contentProfiles;	// 0x33856c58
- (BOOL)sendLicense:(id)license;	// 0x33855d8c
- (BOOL)sendPing;	// 0x33853ac4
- (BOOL)sendRegister:(id)aRegister;	// 0x33853280
- (void)setCDNMeasurementMethod:(int)method;	// 0x3384f2c8
- (void)setCDNRankingMethod:(int)method;	// 0x3384f2b8
- (void)setCDNValue:(int)value;	// 0x3384f2a8
- (void)setNccpUrls:(int)urls useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp;	// 0x33853f50
- (void)setNeedCredentials;	// 0x3384f2f8
- (void)setNeedRegister;	// 0x3384f9ac
- (bool)startNrdpWithServer:(int)server useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x33854294
- (void)triggerGetBookmark:(unsigned)bookmark;	// 0x3384fb74
- (void)triggerGetRuntime:(unsigned)runtime;	// 0x3384f77c
- (BOOL)updateAuthorizationResponseData:(AuthResponseData *)data withErrorMsg:(id *)errorMsg;	// 0x3384fb20
- (BOOL)updateCTicket:(unsigned long long)ticket;	// 0x3385646c
- (BOOL)updateId:(id)anId idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x33851aec
- (void)updateLicenseResponseData:(LicenseResponseData *)data;	// 0x3384fa10
- (void)updateOSVersion;	// 0x33851480
- (void)updateUIVersion;	// 0x3385134c
@end
