/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"
#import "LTITunesDownloadTestManager.h"

@class NSHTTPCookie, NSDateFormatter, ATVNetworkStatisticsMonitor, NSArray, NSMutableArray, NSDictionary, NSString, NSMutableDictionary, LTDownloadTestConnection;

__attribute__((visibility("hidden")))
@interface LTITunesDownloadTestManager : XXUnknownSuperclass <LTNetworkTestDownloadDelegate, ATVITunesMetricsUploaderConnectionDelegate> {
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
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x3926d; converted property
- (id)init;	// 0x38b81
- (void).cxx_destruct;	// 0x3a545
- (void)cancelNetworkSpeedTest;	// 0x399fd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x39ea1
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x39c59
- (void)connectionDidFinishLoading:(id)connection;	// 0x3a015
- (void)dealloc;	// 0x38a3d
- (long)downloadCapBytes;	// 0x390d1
- (int)downloadCapTime;	// 0x38f39
- (BOOL)networkDiagnosticsAvailable;	// 0x38d91
// converted property getter: - (BOOL)networkTestInProgress;	// 0x3926d
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x3925d
- (void)setSessionDownloadCapTime:(int)time;	// 0x390c1
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x38e65
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3927d
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x39311
@end

@interface LTITunesDownloadTestManager (Private)
- (id)_avDownloads;	// 0x3b89d
- (id)_homeShareTestURLs;	// 0x3bac5
- (id)_httpDownloads;	// 0x3b7a5
- (void)_pauseAllDownloads;	// 0x3adb1
- (void)_resetManager;	// 0x3be2d
- (void)_resumeAllDownloads;	// 0x3af95
- (BOOL)_startNextAVDownloadTest;	// 0x3aa01
- (BOOL)_startNextDownloadTest;	// 0x3a619
- (void)_uploadNetworkSamplingData;	// 0x3b14d
@end

@interface LTITunesDownloadTestManager (UploadDiagnostics)
- (id)dictionaryForDownload:(id)download;	// 0x3bec1
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x3bf5d
@end
