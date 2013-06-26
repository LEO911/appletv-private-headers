/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableArray, NSDictionary, NSData;

@interface NetflixPlaybackManager : XXUnknownSuperclass {
	BOOL openNotificationSent_;	// 4 = 0x4
	NSDictionary *movieDetails_;	// 8 = 0x8
	NSData *playReadyKey_;	// 12 = 0xc
	IMediaControl *mediaControl_;	// 16 = 0x10
	NetflixMediaControlListener *mediaControlListener_;	// 20 = 0x14
	NSMutableArray *errorStack_;	// 24 = 0x18
	NSDictionary *reportableActionId_;	// 28 = 0x1c
	NSLock *subtitlesProcessingLock_;	// 32 = 0x20
	BOOL subtitlesProcessing_;	// 36 = 0x24
	int subtitlesTrackIndex_;	// 40 = 0x28
	int audioTrackIndex_;	// 44 = 0x2c
	NSLock *playbackCommandLock_;	// 48 = 0x30
	BOOL playbackCommandInProgress_;	// 52 = 0x34
	int state_;	// 56 = 0x38
	unsigned lastKnownMappedVideoBitrate_;	// 60 = 0x3c
	unsigned lastNumAccessLogEvents_;	// 64 = 0x40
	long long totalBytesTransferred_;	// 68 = 0x44
	double observedBitrate_;	// 76 = 0x4c
	BOOL pollNetworkInterface_;	// 84 = 0x54
	long long pollBytesStart_;	// 88 = 0x58
	BwEntry *bwEntry_;	// 96 = 0x60
	double lastBwEntryTime_;	// 100 = 0x64
	long long lastBwEntryBytes_;	// 108 = 0x6c
	int networkInterfaceType_;	// 116 = 0x74
	long long bufferingStartBytes_;	// 120 = 0x78
	double bufferingStartTime_;	// 128 = 0x80
	double sampleReportWindow_;	// 136 = 0x88
	bool stalled_;	// 144 = 0x90
	int totalNumberOfStalls_;	// 148 = 0x94
	BOOL trickplayIsOn_;	// 152 = 0x98
}
@property(assign, nonatomic) int audioTrackIndex;	// G=0x511009; S=0x511019; @synthesize=audioTrackIndex_
@property(readonly, assign, nonatomic) unsigned bitrate;	// G=0x510b31; 
@property(assign, nonatomic) long long bufferingStartBytes;	// G=0x511225; S=0x51123d; @synthesize=bufferingStartBytes_
@property(assign, nonatomic) double bufferingStartTime;	// G=0x511251; S=0x511269; @synthesize=bufferingStartTime_
@property(assign, nonatomic) BwEntry *bwEntry;	// G=0x51118d; S=0x51119d; @synthesize=bwEntry_
@property(readonly, assign, nonatomic) long long bytes;	// G=0x510b75; 
@property(readonly, assign, nonatomic) long long bytesForInterface;	// G=0x510bd9; 
@property(readonly, assign, nonatomic) unsigned currentStreamBitrate;	// G=0x510c99; 
@property(retain, nonatomic) NSMutableArray *errorStack;	// G=0x510f55; S=0x510f65; @synthesize=errorStack_
@property(assign, nonatomic) long long lastBwEntryBytes;	// G=0x5111d9; S=0x5111f1; @synthesize=lastBwEntryBytes_
@property(assign, nonatomic) double lastBwEntryTime;	// G=0x5111ad; S=0x5111c5; @synthesize=lastBwEntryTime_
@property(assign, nonatomic) unsigned lastKnownMappedVideoBitrate;	// G=0x5110a9; S=0x5110b9; @synthesize=lastKnownMappedVideoBitrate_
@property(assign, nonatomic) unsigned lastNumAccessLogEvents;	// G=0x5110c9; S=0x5110d9; @synthesize=lastNumAccessLogEvents_
@property(assign, nonatomic) IMediaControl *mediaControl;	// G=0x510f35; S=0x50c4c9; @synthesize=mediaControl_
@property(assign, nonatomic) NetflixMediaControlListener *mediaControlListener;	// G=0x510f45; S=0x50c5dd; @synthesize=mediaControlListener_
@property(retain) NSDictionary *movieDetails;	// G=0x510eed; S=0x510f01; @synthesize=movieDetails_
@property(assign, nonatomic) int networkInterfaceType;	// G=0x511205; S=0x511215; @synthesize=networkInterfaceType_
@property(assign, nonatomic) double observedBitrate;	// G=0x511115; S=0x51112d; @synthesize=observedBitrate_
@property(assign, nonatomic) BOOL openNotificationSent;	// G=0x510ecd; S=0x510edd; @synthesize=openNotificationSent_
@property(copy) NSData *playReadyKey;	// G=0x510f11; S=0x510f25; @synthesize=playReadyKey_
@property(assign) BOOL playbackCommandInProgress;	// G=0x51104d; S=0x511065; @synthesize=playbackCommandInProgress_
@property(retain) NSLock *playbackCommandLock;	// G=0x511029; S=0x51103d; @synthesize=playbackCommandLock_
@property(assign, nonatomic) long long pollBytesStart;	// G=0x511161; S=0x511179; @synthesize=pollBytesStart_
@property(assign, nonatomic) BOOL pollNetworkInterface;	// G=0x511141; S=0x511151; @synthesize=pollNetworkInterface_
@property(retain, nonatomic) NSDictionary *reportableActionId;	// G=0x510f75; S=0x510f85; @synthesize=reportableActionId_
@property(assign, nonatomic) double sampleReportWindow;	// G=0x51127d; S=0x511295; @synthesize=sampleReportWindow_
@property(assign, nonatomic) bool stalled;	// G=0x5112a9; S=0x5112bd; @synthesize=stalled_
@property(assign) int state;	// G=0x51107d; S=0x511091; @synthesize=state_
@property(assign) BOOL subtitlesProcessing;	// G=0x510fb9; S=0x510fd1; @synthesize=subtitlesProcessing_
@property(retain) NSLock *subtitlesProcessingLock;	// G=0x510f95; S=0x510fa9; @synthesize=subtitlesProcessingLock_
@property(assign, nonatomic) int subtitlesTrackIndex;	// G=0x510fe9; S=0x510ff9; @synthesize=subtitlesTrackIndex_
@property(assign, nonatomic) long long totalBytesTransferred;	// G=0x5110e9; S=0x511101; @synthesize=totalBytesTransferred_
@property(assign, nonatomic) int totalNumberOfStalls;	// G=0x5112cd; S=0x5112dd; @synthesize=totalNumberOfStalls_
@property(assign) BOOL trickplay;	// G=0x510eb5; S=0x510ea5; converted property
@property(assign) BOOL trickplayIsOn;	// G=0x5112ed; S=0x511305; @synthesize=trickplayIsOn_
+ (void)initialize;	// 0x50c1c1
+ (id)sharedInstance;	// 0x50c1c5
- (id)init;	// 0x50c2b1
- (void)audioSelect:(id)select;	// 0x50de9d
- (void)audioSelectAsync:(id)async;	// 0x50ded9
// declared property getter: - (int)audioTrackIndex;	// 0x511009
// declared property getter: - (unsigned)bitrate;	// 0x510b31
- (void)buffering:(double)buffering;	// 0x50cb71
- (void)bufferingComplete:(double)complete;	// 0x50cc89
// declared property getter: - (long long)bufferingStartBytes;	// 0x511225
// declared property getter: - (double)bufferingStartTime;	// 0x511251
// declared property getter: - (BwEntry *)bwEntry;	// 0x51118d
// declared property getter: - (long long)bytes;	// 0x510b75
// declared property getter: - (long long)bytesForInterface;	// 0x510bd9
- (id)capitalizeAudioTracksArray:(id)array;	// 0x50e3b9
- (id)capitalizeSubtitlesForMovieDetails:(id)movieDetails;	// 0x50e4a9
- (id)capitalizeSubtitlesForTrackCombinationArray:(id)trackCombinationArray;	// 0x50e2c9
- (id)capitalizeTrackCombination:(id)combination;	// 0x50e1f5
- (id)capitalizeTracks:(id)tracks;	// 0x50e105
- (void)clearErrorStack;	// 0x510e7d
- (void)close;	// 0x50ca79
- (id)createErrorFromStack;	// 0x50e7f5
// declared property getter: - (unsigned)currentStreamBitrate;	// 0x510c99
- (void)dealloc;	// 0x50c3b5
- (void)end:(double)end reason:(id)reason;	// 0x50c899
// declared property getter: - (id)errorStack;	// 0x510f55
- (int)fetchBookmark:(id)bookmark;	// 0x510841
// declared property getter: - (long long)lastBwEntryBytes;	// 0x5111d9
// declared property getter: - (double)lastBwEntryTime;	// 0x5111ad
// declared property getter: - (unsigned)lastKnownMappedVideoBitrate;	// 0x5110a9
// declared property getter: - (unsigned)lastNumAccessLogEvents;	// 0x5110c9
// declared property getter: - (IMediaControl *)mediaControl;	// 0x510f35
// declared property getter: - (NetflixMediaControlListener *)mediaControlListener;	// 0x510f45
- (void)mediaDidAcquireLicense;	// 0x50ee05
- (void)mediaDidAuthorize;	// 0x50ecd5
- (void)mediaDidBuildPlaylists;	// 0x50ee9d
- (void)mediaDidCdnSelect;	// 0x50ed6d
- (void)mediaDidClose;	// 0x50e641
- (void)mediaDidFailLoadSubtitles:(int)media error:(id)error;	// 0x50f0fd
- (void)mediaDidFailOpen:(id)media;	// 0x50eb4d
- (void)mediaDidFailSelectAudio:(int)media error:(id)error;	// 0x510db5
- (void)mediaDidHandleNccpError:(id)media;	// 0x50e6b5
- (void)mediaDidLoadSubtitles:(id)media;	// 0x50efc9
- (void)mediaDidSelectAudio:(id)media;	// 0x510cd1
- (void)mediaDidSetSpeed:(float)media;	// 0x50eee9
- (void)mediaOpenComplete:(id)complete;	// 0x50e581
- (void)mediaWillAcquireLicense;	// 0x50edb9
- (void)mediaWillAuthorize;	// 0x50ec89
- (void)mediaWillBuildPlaylists;	// 0x50ee51
- (void)mediaWillCdnSelect;	// 0x50ed21
- (void)mediaWillLoadSubtitles;	// 0x50ef7d
// declared property getter: - (id)movieDetails;	// 0x510eed
// declared property getter: - (int)networkInterfaceType;	// 0x511205
- (void)networkSelection:(id)selection;	// 0x50dc8d
- (int)networkTypeStringToType:(id)type;	// 0x50dc19
// declared property getter: - (double)observedBitrate;	// 0x511115
- (void)open:(id)open;	// 0x50c601
- (void)openAsync:(id)async;	// 0x50f571
// declared property getter: - (BOOL)openNotificationSent;	// 0x510ecd
- (void)pause:(double)pause;	// 0x50c6b9
- (void)play:(double)play;	// 0x50c641
// declared property getter: - (id)playReadyKey;	// 0x510f11
// declared property getter: - (BOOL)playbackCommandInProgress;	// 0x51104d
// declared property getter: - (id)playbackCommandLock;	// 0x511029
- (id)playlistForIndicatedBitrate:(double)indicatedBitrate;	// 0x5109c5
- (id)playlistForRequestedM3u8:(id)requestedM3u8;	// 0x50d8a9
// declared property getter: - (long long)pollBytesStart;	// 0x511161
// declared property getter: - (BOOL)pollNetworkInterface;	// 0x511141
- (void)postMediaCloseFailure;	// 0x50f46d
- (void)postMediaOpenFailure:(int)failure;	// 0x50f2bd
- (void)postMediaOpenFailure:(id)failure clearProgress:(BOOL)progress;	// 0x50f395
- (void)postMediaOpenSuccess:(id)success;	// 0x50f221
// declared property getter: - (id)reportableActionId;	// 0x510f75
- (void)reposition:(double)reposition;	// 0x50c7a9
// declared property getter: - (double)sampleReportWindow;	// 0x51127d
- (void)selectedPlaylist:(id)playlist;	// 0x50d9b9
// declared property setter: - (void)setAudioTrackIndex:(int)index;	// 0x511019
// declared property setter: - (void)setBufferingStartBytes:(long long)bytes;	// 0x51123d
// declared property setter: - (void)setBufferingStartTime:(double)time;	// 0x511269
// declared property setter: - (void)setBwEntry:(BwEntry *)entry;	// 0x51119d
// declared property setter: - (void)setErrorStack:(id)stack;	// 0x510f65
// declared property setter: - (void)setLastBwEntryBytes:(long long)bytes;	// 0x5111f1
// declared property setter: - (void)setLastBwEntryTime:(double)time;	// 0x5111c5
// declared property setter: - (void)setLastKnownMappedVideoBitrate:(unsigned)bitrate;	// 0x5110b9
// declared property setter: - (void)setLastNumAccessLogEvents:(unsigned)events;	// 0x5110d9
// declared property setter: - (void)setMediaControl:(IMediaControl *)control;	// 0x50c4c9
// declared property setter: - (void)setMediaControlListener:(NetflixMediaControlListener *)listener;	// 0x50c5dd
// declared property setter: - (void)setMovieDetails:(id)details;	// 0x510f01
// declared property setter: - (void)setNetworkInterfaceType:(int)type;	// 0x511215
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x51112d
// declared property setter: - (void)setOpenNotificationSent:(BOOL)sent;	// 0x510edd
// declared property setter: - (void)setPlayReadyKey:(id)key;	// 0x510f25
// declared property setter: - (void)setPlaybackCommandInProgress:(BOOL)progress;	// 0x511065
// declared property setter: - (void)setPlaybackCommandLock:(id)lock;	// 0x51103d
// declared property setter: - (void)setPollBytesStart:(long long)start;	// 0x511179
// declared property setter: - (void)setPollNetworkInterface:(BOOL)interface;	// 0x511151
// declared property setter: - (void)setReportableActionId:(id)anId;	// 0x510f85
// declared property setter: - (void)setSampleReportWindow:(double)window;	// 0x511295
// declared property setter: - (void)setStalled:(bool)stalled;	// 0x5112bd
// declared property setter: - (void)setState:(int)state;	// 0x511091
// declared property setter: - (void)setSubtitlesProcessing:(BOOL)processing;	// 0x510fd1
// declared property setter: - (void)setSubtitlesProcessingLock:(id)lock;	// 0x510fa9
// declared property setter: - (void)setSubtitlesTrackIndex:(int)index;	// 0x510ff9
// declared property setter: - (void)setTotalBytesTransferred:(long long)transferred;	// 0x511101
// declared property setter: - (void)setTotalNumberOfStalls:(int)stalls;	// 0x5112dd
// converted property setter: - (void)setTrickplay:(BOOL)trickplay;	// 0x510ea5
// declared property setter: - (void)setTrickplayIsOn:(BOOL)on;	// 0x511305
// declared property getter: - (bool)stalled;	// 0x5112a9
// declared property getter: - (int)state;	// 0x51107d
- (void)stop:(double)stop;	// 0x50c821
- (void)streamSelected:(int)selected streamIndex:(int)index;	// 0x50ce29
- (void)subtitlesDisable;	// 0x50db95
- (void)subtitlesDisableAsync;	// 0x510711
// declared property getter: - (BOOL)subtitlesProcessing;	// 0x510fb9
// declared property getter: - (id)subtitlesProcessingLock;	// 0x510f95
- (void)subtitlesSelect:(id)select;	// 0x50db59
- (void)subtitlesSelectAbort;	// 0x50dbd1
- (void)subtitlesSelectAsync:(id)async;	// 0x510309
// declared property getter: - (int)subtitlesTrackIndex;	// 0x510fe9
// declared property getter: - (long long)totalBytesTransferred;	// 0x5110e9
// declared property getter: - (int)totalNumberOfStalls;	// 0x5112cd
- (id)trackWithCapitalizedDescriptionFromTrack:(id)track;	// 0x50e025
// converted property getter: - (BOOL)trickplay;	// 0x510eb5
// declared property getter: - (BOOL)trickplayIsOn;	// 0x5112ed
- (void)unpause:(double)unpause;	// 0x50c731
- (void)updatePts:(double)pts;	// 0x50ceb1
- (void)updatePts:(double)pts accessLogEvents:(id)events;	// 0x50d411
@end
