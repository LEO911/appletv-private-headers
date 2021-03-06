/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVITunesTouchRemoteManager.h"
#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface METouchRemoteManager : BRSingleton <ATVITunesTouchRemoteManager> {
	NSTimer *_updateTimer;	// 4 = 0x4
}
+ (id)_atvFilterWithQueueFilterType:(id)queueFilterType filterValue:(id)value;	// 0x659b1
+ (BOOL)_connectToDataServer:(id *)dataServer withRequest:(ATVServerRequestRef)request arguments:(id)arguments machineID:(unsigned long long *)anId;	// 0x65249
+ (int)_daapSortTypeFromSortStr:(id)sortStr;	// 0x65875
+ (id)_dataClientForRequestArguments:(id)requestArguments dataServer:(id)server;	// 0x651d9
+ (id)_dataClientWithMachineID:(unsigned long long)machineID;	// 0x65931
+ (id)_dataServerForRequestArguments:(id)requestArguments;	// 0x64f45
+ (id)_dmapItemIDFromQueueQueryStr:(id)queueQueryStr dmapKey:(id *)key;	// 0x65b11
+ (void)_filterType:(id *)type andValue:(id *)value fromString:(id)string;	// 0x65c91
+ (void)_startPlaybackWithItems:(id)items initialIndex:(long)index shuffleMode:(unsigned long)mode repeatMode:(unsigned long)mode4;	// 0x6561d
+ (void)addNowPlayingSpecToBuffer:(id)buffer;	// 0x5e839
+ (id)albumForMedia:(id)media;	// 0x64eb1
+ (id)argumentsForRequest:(ATVServerRequestRef)request;	// 0x64ca1
+ (unsigned long)availableRepeatStates;	// 0x6429d
+ (unsigned long)availableShuffleStates;	// 0x6420d
+ (BOOL)connectHomeShareWithMachineID:(unsigned long long)machineID;	// 0x64a3d
+ (void)dacpGeniusItemsQueryCompleted:(id)completed;	// 0x63c51
+ (void)dacpPlayRequestQueryCompleted:(id)completed;	// 0x631e5
+ (id)dataServerWithMachineID:(unsigned long long)machineID;	// 0x6492d
+ (void)handleBonjourSourcesUpdateRequest:(ATVServerRequestRef)request;	// 0x60681
+ (void)handleControlInterfacesRequest:(ATVServerRequestRef)request;	// 0x5e249
+ (void)handleDACPRequest:(ATVServerRequestRef)request;	// 0x5df1d
+ (void)handleGeniusSeedRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x6186d
+ (void)handleGetPropertyRequest:(ATVServerRequestRef)request;	// 0x609ed
+ (void)handleNowPlayingArtworkRequest:(ATVServerRequestRef)request;	// 0x63d99
+ (void)handlePlayOrCueRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x614fd
+ (void)handlePlayQueueContentsRequest:(ATVServerRequestRef)request;	// 0x5ef5d
+ (void)handlePlayQueueEditAddRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x61b65
+ (void)handlePlayQueueEditClearRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5ff0d
+ (void)handlePlayQueueEditMoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5fcad
+ (void)handlePlayQueueEditPlayNowRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x6001d
+ (void)handlePlayQueueEditRemoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5fbad
+ (void)handlePlayQueueEditRequest:(ATVServerRequestRef)request;	// 0x5f98d
+ (void)handlePlayQueueEditStartGeniusRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x600d9
+ (void)handlePlayRequest:(ATVServerRequestRef)request;	// 0x61411
+ (BOOL)handlePlayRequestWithMachineID:(unsigned long long)machineID containerName:(id)name playlistKind:(unsigned long)kind containerID:(unsigned long long)anId containerItemID:(unsigned long long)anId5 querySpecifier:(id)specifier queryCriteria:(SearchCriteriaList *)criteria sortType:(int)type isInvertedSort:(BOOL)sort index:(long)index shuffleState:(unsigned long)state repeatState:(unsigned long)state12;	// 0x62c25
+ (void)handlePlayStatusUpdateRequest:(ATVServerRequestRef)request;	// 0x5e4d5
+ (unsigned long)handleSetPropertyRequest:(ATVServerRequestRef)request;	// 0x60f75
+ (BOOL)isNowPlayingAssetScrubbable;	// 0x6482d
+ (unsigned long)mediaKindForMedia:(id)media;	// 0x64485
+ (id)newItemsQuery;	// 0x653dd
+ (unsigned long)nowPlayingMediaKind;	// 0x64429
+ (unsigned long)nowPlayingRemainingTime;	// 0x64389
+ (unsigned long)nowPlayingStopTime;	// 0x642e9
+ (unsigned char)playerState;	// 0x64165
+ (unsigned char)repeatState;	// 0x64259
+ (void)setSingleton:(id)singleton;	// 0x5d921
+ (unsigned char)shuffleState;	// 0x641d1
+ (id)singleton;	// 0x5d931
+ (id)transportDataProvider;	// 0x648c9
+ (long)volume;	// 0x64871
- (id)init;	// 0x5d941
- (void)_clearUpdateTimer;	// 0x65ec1
- (void)_coverArtChanged:(id)changed;	// 0x65e11
- (void)_dataClientConnectionHandler:(id)handler;	// 0x66179
- (void)_dataServerConnectionHandler:(id)handler;	// 0x66285
- (void)_iTunesPlaybackMetadataChanged:(id)changed;	// 0x65e81
- (void)_nowPlayingUpdated:(id)updated;	// 0x65df1
- (void)_playerStateChanged:(id)changed;	// 0x65d81
- (void)_playerTimeChanged:(id)changed;	// 0x65d09
- (void)_playerTimeSkipped:(id)skipped;	// 0x65e41
- (void)_playerVolumeChanged:(id)changed;	// 0x65e61
- (void)_processPendingRequestsWithDataServer:(id)dataServer;	// 0x663c5
- (void)_queueChanged:(id)changed;	// 0x65ea1
- (void)_scaleImage:(id)image;	// 0x65fa5
- (void)_updateNowPlayingArtworkWithInfo:(id)info;	// 0x660b9
- (void)_updateTimerFired:(id)fired;	// 0x65f95
- (void)_updateTouchRemotes;	// 0x65ef5
- (void)_updateTouchRemotesWithDelay:(double)delay;	// 0x65f2d
- (void)dealloc;	// 0x5db21
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x5dd69
- (id)pairableTouchRemotes;	// 0x5dd09
- (id)pairedTouchRemotes;	// 0x5db91
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x5dd0d
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x5ddc5
@end

