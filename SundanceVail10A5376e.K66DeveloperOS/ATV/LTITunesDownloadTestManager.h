/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDownloadManager.h"
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"

@class NSArray, NSMutableArray, NSDictionary, ATVNetworkStatisticsMonitor, NSHTTPCookie, NSDateFormatter, NSMutableDictionary, LTDownloadTestConnection, NSString;

__attribute__((visibility("hidden")))
@interface LTITunesDownloadTestManager : BRDownloadManager <LTNetworkTestDownloadDelegate, ATVITunesMetricsUploaderConnectionDelegate> {
	NSDictionary *_uploadUserInput;	// 12 = 0xc
	NSArray *_downloadURLs;	// 16 = 0x10
	NSArray *_avDownloadURLs;	// 20 = 0x14
	NSMutableDictionary *_optionalHeadersDictionary;	// 24 = 0x18
	NSString *_speedTestGUID;	// 28 = 0x1c
	unsigned _currentNetworkDownloadDataCount;	// 32 = 0x20
	unsigned _currentNetworkAVDownloadDataCount;	// 36 = 0x24
	unsigned _currentNetworkUploadDataCount;	// 40 = 0x28
	int _sessionDownloadCapTime;	// 44 = 0x2c
	long _sessionDownloadCapBytes;	// 48 = 0x30
	unsigned _totalTestsCount;	// 52 = 0x34
	unsigned _homeShareTestURLsCount;	// 56 = 0x38
	BOOL _networkTestInProgress;	// 60 = 0x3c
	BOOL _networkDownloadInProgress;	// 61 = 0x3d
	BOOL _networkUploadInProgress;	// 62 = 0x3e
	BOOL _shouldUploadLogs;	// 63 = 0x3f
	NSMutableArray *_uploadLogData;	// 64 = 0x40
	LTDownloadTestConnection *_currentDownloadConnection;	// 68 = 0x44
	NSHTTPCookie *_downloadKeyCookie;	// 72 = 0x48
	NSDateFormatter *_dateFormat;	// 76 = 0x4c
	ATVNetworkStatisticsMonitor *_networkMonitor;	// 80 = 0x50
}
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x3ea39; converted property
- (id)init;	// 0x3e311
- (void).cxx_destruct;	// 0x3fc0d
- (id)_avDownloads;	// 0x40f89
- (id)_homeShareTestURLs;	// 0x411c1
- (id)_httpDownloads;	// 0x40e75
- (void)_pauseAllDownloads;	// 0x40445
- (void)_resetManager;	// 0x415d1
- (void)_resumeAllDownloads;	// 0x4061d
- (BOOL)_startNextAVDownloadTest;	// 0x400b9
- (BOOL)_startNextDownloadTest;	// 0x3fce1
- (void)_uploadNetworkSamplingData;	// 0x407cd
- (void)cancelNetworkSpeedTest;	// 0x3f131
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3f5bd
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x3f37d
- (void)connectionDidFinishLoading:(id)connection;	// 0x3f741
- (void)dealloc;	// 0x3e1c9
- (id)dictionaryForDownload:(id)download;	// 0x41665
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x41685
- (long)downloadCapBytes;	// 0x3e881
- (int)downloadCapTime;	// 0x3e6cd
- (BOOL)networkDiagnosticsAvailable;	// 0x3e505
// converted property getter: - (BOOL)networkTestInProgress;	// 0x3ea39
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x3ea29
- (void)setSessionDownloadCapTime:(int)time;	// 0x3e871
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x3e5e9
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3ea49
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x3ea61
@end

