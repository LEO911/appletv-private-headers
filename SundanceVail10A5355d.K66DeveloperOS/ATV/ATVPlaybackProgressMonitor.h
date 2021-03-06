/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, NSMutableDictionary, AVPlayerItem, NSMutableArray, NSTimer;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVPlaybackProgressMonitor : XXUnknownSuperclass {
	AVPlayerItem *_playerItem;	// 4 = 0x4
	id<BRMediaAsset> _mediaAsset;	// 8 = 0x8
	NSString *_mediaQuality;	// 12 = 0xc
	NSString *_sessionID;	// 16 = 0x10
	NSString *_cachedNetworkInterface;	// 20 = 0x14
	BOOL _shouldSaveAccessLogs;	// 24 = 0x18
	BOOL _shouldDisplayBitRate;	// 25 = 0x19
	BOOL _isCaching;	// 26 = 0x1a
	BOOL _monitorActive;	// 27 = 0x1b
	double _startTime;	// 28 = 0x1c
	NSTimer *_sampleTimer;	// 36 = 0x24
	double _sampleInterval;	// 40 = 0x28
	unsigned _sampleNumber;	// 48 = 0x30
	NSMutableArray *_wifiEvents;	// 52 = 0x34
	NSMutableDictionary *_progressDescription;	// 56 = 0x38
	NSMutableArray *_progressEvents;	// 60 = 0x3c
	NSString *_latestSampledServerIPAddress;	// 64 = 0x40
	NSString *_mostRecentServerIP;	// 68 = 0x44
	double _bandwidth;	// 72 = 0x48
	double _mostRecentBandwidth;	// 80 = 0x50
	double _meanBandwidth;	// 88 = 0x58
	double _peakBandwidth;	// 96 = 0x60
	double _varBandwidth;	// 104 = 0x68
	double _sumSquaresBandwidth;	// 112 = 0x70
	double _duration;	// 120 = 0x78
	double _elapsedTime;	// 128 = 0x80
	unsigned long long _totalBytesRead;	// 136 = 0x88
	unsigned _samplesUsed;	// 144 = 0x90
	int _currentPlayerState;	// 148 = 0x94
	int _previousPlayerState;	// 152 = 0x98
	int _previousPlusOnePlayerState;	// 156 = 0x9c
	BOOL _didSkipTimeRecently;	// 160 = 0xa0
	NSTimer *_timeSkippedTimer;	// 164 = 0xa4
	NSString *_baseBeaconURLString;	// 168 = 0xa8
	BOOL _shouldSendBeaconsForSession;	// 172 = 0xac
	WiFiDeviceClient *_airportDevice;	// 176 = 0xb0
	unsigned _playbackStallCount;	// 180 = 0xb4
}
@property(assign) WiFiDeviceClient *airportDevice;	// G=0x202b01; S=0x202b15; @synthesize=_airportDevice
@property(assign) BOOL isCaching;	// G=0x202c1d; S=0x202c35; @synthesize=_isCaching
@property(retain) id<BRMediaAsset> mediaAsset;	// G=0x202bd5; S=0x202be9; @synthesize=_mediaAsset
@property(retain) NSString *mediaQuality;	// G=0x202c71; S=0x202c85; @synthesize=_mediaQuality
@property(assign) BOOL monitorActive;	// G=0x202aa5; S=0x202abd; @synthesize=_monitorActive
@property(assign) double mostRecentBandwidth;	// G=0x202a3d; S=0x202a71; @synthesize=_mostRecentBandwidth
@property(copy) NSString *mostRecentServerIP;	// G=0x202c4d; S=0x202c61; @synthesize=_mostRecentServerIP
@property(assign) unsigned playbackStallCount;	// G=0x202b61; S=0x202b75; @synthesize=_playbackStallCount
@property(assign) AVPlayerItem *playerItem;	// G=0x202ad5; S=0x202ae9; @synthesize=_playerItem
@property(retain) NSMutableDictionary *progressDescription;	// G=0x202bf9; S=0x202c0d; @synthesize=_progressDescription
@property(retain) NSMutableArray *progressEvents;	// G=0x202bb1; S=0x202bc5; @synthesize=_progressEvents
@property(readonly, assign) double sampleInterval;	// G=0x202b2d; @synthesize=_sampleInterval
@property(assign) unsigned sampleNumber;	// G=0x202c95; S=0x202ca9; @synthesize=_sampleNumber
@property(assign) NSTimer *sampleTimer;	// G=0x202a11; S=0x202a25; @synthesize=_sampleTimer
@property(assign) unsigned long long totalBytesRead;	// G=0x2029a9; S=0x2029dd; @synthesize=_totalBytesRead
@property(retain) NSMutableArray *wifiEvents;	// G=0x202b8d; S=0x202ba1; @synthesize=_wifiEvents
+ (void)_initializeLogCache;	// 0x20018d
+ (id)availableLogs;	// 0x200509
+ (void)initialize;	// 0x200071
+ (id)loadLogsToBeUploaded;	// 0x200349
+ (id)nextLogPath;	// 0x2002a1
+ (id)progressMonitorForPlayerItem:(id)playerItem andMediaAsset:(id)asset createIfNecessary:(BOOL)necessary;	// 0x200619
+ (void)resetLogs;	// 0x200519
- (void)_disconnectProgressMonitor;	// 0x201b5d
- (id)_gatherAdditionalMetrics;	// 0x2029a1
- (id)_gatherMetrics;	// 0x20310d
- (void)_gatherNetworkInterface:(id)interface;	// 0x203b65
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x202cc1
- (id)_mediaQualityStringFromMediaAsset:(id)mediaAsset;	// 0x202549
- (void)_playerStateChanged:(id)changed;	// 0x203bed
- (void)_playerTimeSkipped:(id)skipped;	// 0x203cb9
- (void)_requestCompleted:(id)completed;	// 0x2036f1
- (void)_sendPlaybackEvent:(id)event withValues:(id)values;	// 0x2037a1
- (id)_shortPlayerStateDescriptionForState:(int)state;	// 0x203dc1
- (void)_submitAdditionalFinalBeacons:(BOOL)beacons;	// 0x2029a5
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x201c79
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x201b59
- (void)_takePeriodicSample:(id)sample;	// 0x200ce9
- (void)_timeSkippedTimerFired:(id)fired;	// 0x203d85
// declared property getter: - (WiFiDeviceClient *)airportDevice;	// 0x202b01
- (void)cachingStarted:(id)started;	// 0x2025e1
- (void)cachingStopped;	// 0x20263d
- (void)dealloc;	// 0x2007e1
- (void)finishPeriodicSample;	// 0x201b55
// declared property getter: - (BOOL)isCaching;	// 0x202c1d
// declared property getter: - (id)mediaAsset;	// 0x202bd5
// declared property getter: - (id)mediaQuality;	// 0x202c71
- (id)mediaTypeString;	// 0x202951
// declared property getter: - (BOOL)monitorActive;	// 0x202aa5
// declared property getter: - (double)mostRecentBandwidth;	// 0x202a3d
// declared property getter: - (id)mostRecentServerIP;	// 0x202c4d
// declared property getter: - (unsigned)playbackStallCount;	// 0x202b61
- (void)playerActivated:(id)activated;	// 0x202651
- (void)playerDeactivated;	// 0x202699
// declared property getter: - (id)playerItem;	// 0x202ad5
- (void)playerItemMonitoringStarted;	// 0x202639
// declared property getter: - (id)progressDescription;	// 0x202bf9
// declared property getter: - (id)progressEvents;	// 0x202bb1
// declared property getter: - (double)sampleInterval;	// 0x202b2d
// declared property getter: - (unsigned)sampleNumber;	// 0x202c95
// declared property getter: - (id)sampleTimer;	// 0x202a11
// declared property setter: - (void)setAirportDevice:(WiFiDeviceClient *)device;	// 0x202b15
// declared property setter: - (void)setIsCaching:(BOOL)caching;	// 0x202c35
// declared property setter: - (void)setMediaAsset:(id)asset;	// 0x202be9
// declared property setter: - (void)setMediaQuality:(id)quality;	// 0x202c85
// declared property setter: - (void)setMonitorActive:(BOOL)active;	// 0x202abd
// declared property setter: - (void)setMostRecentBandwidth:(double)bandwidth;	// 0x202a71
// declared property setter: - (void)setMostRecentServerIP:(id)ip;	// 0x202c61
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x202b75
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x202ae9
// declared property setter: - (void)setProgressDescription:(id)description;	// 0x202c0d
// declared property setter: - (void)setProgressEvents:(id)events;	// 0x202bc5
// declared property setter: - (void)setSampleNumber:(unsigned)number;	// 0x202ca9
// declared property setter: - (void)setSampleTimer:(id)timer;	// 0x202a25
// declared property setter: - (void)setTotalBytesRead:(unsigned long long)read;	// 0x2029dd
// declared property setter: - (void)setWifiEvents:(id)events;	// 0x202ba1
- (void)startPeriodicSample;	// 0x201b51
- (void)startSamplingIfNecessary;	// 0x2009b1
- (id)streamingType;	// 0x202995
// declared property getter: - (unsigned long long)totalBytesRead;	// 0x2029a9
// declared property getter: - (id)wifiEvents;	// 0x202b8d
@end

