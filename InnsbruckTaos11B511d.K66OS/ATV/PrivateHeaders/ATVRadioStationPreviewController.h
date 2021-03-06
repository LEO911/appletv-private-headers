/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataQuery, ATVDataClient, BRMediaPlayer, ATVDataCollection, ATVDataItem, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRadioStationPreviewController : XXUnknownSuperclass {
	BOOL _isRunning;	// 4 = 0x4
	unsigned _preferredNumberOfPreviewItems;	// 8 = 0x8
	ATVDataClient *_dataClient;	// 12 = 0xc
	ATVDataCollection *_collection;	// 16 = 0x10
	id _onStart;	// 20 = 0x14
	id _onProgressUpdate;	// 24 = 0x18
	id _onTrackChanged;	// 28 = 0x1c
	id _onStop;	// 32 = 0x20
	ATVDataQuery *_itemsQuery;	// 36 = 0x24
	BRMediaPlayer *_player;	// 40 = 0x28
	NSArray *_previewItems;	// 44 = 0x2c
	double _preferredPreviewDuration;	// 48 = 0x30
	double _elapsedTime;	// 56 = 0x38
	double _songStartElapsedTimeStamp;	// 64 = 0x40
	double _totalPreviewDuration;	// 72 = 0x48
}
@property(retain, nonatomic) ATVDataCollection *collection;	// G=0x7db21; S=0x7db31; @synthesize=_collection
@property(readonly, assign, nonatomic) ATVDataItem *currentTrack;	// G=0x7c8f5; 
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x7dae9; S=0x7daf9; @synthesize=_dataClient
@property(assign, nonatomic) double elapsedTime;	// G=0x7dc79; S=0x7dc91; @synthesize=_elapsedTime
@property(assign, nonatomic) BOOL isRunning;	// G=0x7db59; S=0x7db69; @synthesize=_isRunning
@property(retain, nonatomic) ATVDataQuery *itemsQuery;	// G=0x7dc09; S=0x7dc19; @synthesize=_itemsQuery
@property(readonly, assign, nonatomic) double maxPreviewDurationPerItem;	// G=0x7ca39; 
@property(readonly, assign, nonatomic) ATVDataItem *nextTrack;	// G=0x7c95d; 
@property(copy, nonatomic) id onProgressUpdate;	// G=0x7db9d; S=0x7dbb1; @synthesize=_onProgressUpdate
@property(copy, nonatomic) id onStart;	// G=0x7db79; S=0x7db8d; @synthesize=_onStart
@property(copy, nonatomic) id onStop;	// G=0x7dbe5; S=0x7dbf9; @synthesize=_onStop
@property(copy, nonatomic) id onTrackChanged;	// G=0x7dbc1; S=0x7dbd5; @synthesize=_onTrackChanged
@property(retain, nonatomic) BRMediaPlayer *player;	// G=0x7dc41; S=0x7dc51; @synthesize=_player
@property(assign, nonatomic) unsigned preferredNumberOfPreviewItems;	// G=0x7da9d; S=0x7daad; @synthesize=_preferredNumberOfPreviewItems
@property(assign, nonatomic) double preferredPreviewDuration;	// G=0x7dabd; S=0x7dad5; @synthesize=_preferredPreviewDuration
@property(retain, nonatomic) NSArray *previewItems;	// G=0x7dcfd; S=0x7dd0d; @synthesize=_previewItems
@property(readonly, assign, nonatomic) float progress;	// G=0x7c789; 
@property(assign, nonatomic) double songStartElapsedTimeStamp;	// G=0x7dca5; S=0x7dcbd; @synthesize=_songStartElapsedTimeStamp
@property(readonly, assign, nonatomic) float subProgress;	// G=0x7c80d; 
@property(assign, nonatomic) double totalPreviewDuration;	// G=0x7dcd1; S=0x7dce9; @synthesize=_totalPreviewDuration
- (id)initWithCollection:(id)collection dataClient:(id)client;	// 0x7c661
- (void).cxx_destruct;	// 0x7dd35
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x7da29
- (void)_playerMediaCued:(id)cued;	// 0x7d541
- (void)_playerProgressChanged:(id)changed;	// 0x7d831
- (void)_playerStateChanged:(id)changed;	// 0x7d729
- (void)_runItemsQuery;	// 0x7cd11
- (void)_startPlayback;	// 0x7d2f1
// declared property getter: - (id)collection;	// 0x7db21
// declared property getter: - (id)currentTrack;	// 0x7c8f5
// declared property getter: - (id)dataClient;	// 0x7dae9
- (void)dealloc;	// 0x7c731
// declared property getter: - (double)elapsedTime;	// 0x7dc79
// declared property getter: - (BOOL)isRunning;	// 0x7db59
// declared property getter: - (id)itemsQuery;	// 0x7dc09
// declared property getter: - (double)maxPreviewDurationPerItem;	// 0x7ca39
// declared property getter: - (id)nextTrack;	// 0x7c95d
// declared property getter: - (id)onProgressUpdate;	// 0x7db9d
// declared property getter: - (id)onStart;	// 0x7db79
// declared property getter: - (id)onStop;	// 0x7dbe5
// declared property getter: - (id)onTrackChanged;	// 0x7dbc1
// declared property getter: - (id)player;	// 0x7dc41
// declared property getter: - (unsigned)preferredNumberOfPreviewItems;	// 0x7da9d
// declared property getter: - (double)preferredPreviewDuration;	// 0x7dabd
// declared property getter: - (id)previewItems;	// 0x7dcfd
// declared property getter: - (float)progress;	// 0x7c789
// declared property setter: - (void)setCollection:(id)collection;	// 0x7db31
// declared property setter: - (void)setDataClient:(id)client;	// 0x7daf9
// declared property setter: - (void)setElapsedTime:(double)time;	// 0x7dc91
// declared property setter: - (void)setIsRunning:(BOOL)running;	// 0x7db69
// declared property setter: - (void)setItemsQuery:(id)query;	// 0x7dc19
// declared property setter: - (void)setOnProgressUpdate:(id)update;	// 0x7dbb1
// declared property setter: - (void)setOnStart:(id)start;	// 0x7db8d
// declared property setter: - (void)setOnStop:(id)stop;	// 0x7dbf9
// declared property setter: - (void)setOnTrackChanged:(id)changed;	// 0x7dbd5
// declared property setter: - (void)setPlayer:(id)player;	// 0x7dc51
// declared property setter: - (void)setPreferredNumberOfPreviewItems:(unsigned)previewItems;	// 0x7daad
// declared property setter: - (void)setPreferredPreviewDuration:(double)duration;	// 0x7dad5
// declared property setter: - (void)setPreviewItems:(id)items;	// 0x7dd0d
// declared property setter: - (void)setSongStartElapsedTimeStamp:(double)stamp;	// 0x7dcbd
// declared property setter: - (void)setTotalPreviewDuration:(double)duration;	// 0x7dce9
// declared property getter: - (double)songStartElapsedTimeStamp;	// 0x7dca5
- (void)start;	// 0x7ca49
- (void)stop;	// 0x7cb19
// declared property getter: - (float)subProgress;	// 0x7c80d
// declared property getter: - (double)totalPreviewDuration;	// 0x7dcd1
@end

