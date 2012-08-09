/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVITunesTouchRemoteManager.h"
#import "BRSingleton.h"
#import "AppleTV-Structs.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface METouchRemoteManager : BRSingleton <ATVITunesTouchRemoteManager> {
	NSTimer *_updateTimer;	// 4 = 0x4
}
+ (void)addNowPlayingSpecToBuffer:(id)buffer;	// 0x57955
+ (id)argumentsForRequest:(ATVServerRequestRef)request;	// 0x5b9ed
+ (unsigned long)availableRepeatStates;	// 0x5b05d
+ (unsigned long)availableShuffleStates;	// 0x5afcd
+ (BOOL)connectHomeShareWithMachineID:(unsigned long long)machineID;	// 0x5b789
+ (void)dacpGeniusItemsQueryCompleted:(id)completed;	// 0x5aa9d
+ (void)dacpPlayRequestQueryCompleted:(id)completed;	// 0x5a025
+ (id)dataServerWithMachineID:(unsigned long long)machineID;	// 0x5b679
+ (void)handleBonjourSourcesUpdateRequest:(ATVServerRequestRef)request;	// 0x57fed
+ (void)handleControlInterfacesRequest:(ATVServerRequestRef)request;	// 0x5740d
+ (void)handleDACPRequest:(ATVServerRequestRef)request;	// 0x57121
+ (void)handleGeniusSeedRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x59d2d
+ (void)handleGetPropertyRequest:(ATVServerRequestRef)request;	// 0x58359
+ (void)handleNowPlayingArtworkRequest:(ATVServerRequestRef)request;	// 0x5abe5
+ (void)handlePlayOrCueRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x5921d
+ (void)handlePlayRequest:(ATVServerRequestRef)request;	// 0x58d7d
+ (BOOL)handlePlayRequestWithMachineID:(unsigned long long)machineID containerName:(id)name playlistKind:(unsigned long)kind containerID:(unsigned long long)anId containerItemID:(unsigned long long)anId5 querySpecifier:(id)specifier queryCriteria:(SearchCriteriaList *)criteria sortType:(int)type isInvertedSort:(BOOL)sort index:(long)index shuffleState:(unsigned long)state repeatState:(unsigned long)state12;	// 0x594fd
+ (void)handlePlayStatusUpdateRequest:(ATVServerRequestRef)request;	// 0x57675
+ (unsigned long)handleSetPropertyRequest:(ATVServerRequestRef)request;	// 0x588e1
+ (unsigned long)nowPlayingMediaKind;	// 0x5b1e9
+ (unsigned long)nowPlayingRemainingTime;	// 0x5b149
+ (unsigned long)nowPlayingStopTime;	// 0x5b0a9
+ (unsigned char)playerState;	// 0x5af25
+ (unsigned char)repeatState;	// 0x5b019
+ (void)setSingleton:(id)singleton;	// 0x56b51
+ (unsigned char)shuffleState;	// 0x5af91
+ (id)singleton;	// 0x56b61
+ (id)transportDataProvider;	// 0x5b615
+ (long)volume;	// 0x5b5bd
- (id)init;	// 0x56b71
- (void)_clearUpdateTimer;	// 0x5bcf9
- (void)_coverArtChanged:(id)changed;	// 0x5bc69
- (void)_dataClientConnectionHandler:(id)handler;	// 0x5bfb1
- (void)_dataServerConnectionHandler:(id)handler;	// 0x5c0bd
- (void)_iTunesPlaybackMetadataChanged:(id)changed;	// 0x5bcd9
- (void)_nowPlayingUpdated:(id)updated;	// 0x5bc49
- (void)_playerStateChanged:(id)changed;	// 0x5bbd9
- (void)_playerTimeChanged:(id)changed;	// 0x5bb61
- (void)_playerTimeSkipped:(id)skipped;	// 0x5bc99
- (void)_playerVolumeChanged:(id)changed;	// 0x5bcb9
- (void)_processPendingRequestsWithDataServer:(id)dataServer;	// 0x5c1fd
- (void)_scaleImage:(id)image;	// 0x5bddd
- (void)_updateNowPlayingArtworkWithInfo:(id)info;	// 0x5bef1
- (void)_updateTimerFired:(id)fired;	// 0x5bdcd
- (void)_updateTouchRemotes;	// 0x5bd2d
- (void)_updateTouchRemotesWithDelay:(double)delay;	// 0x5bd65
- (void)dealloc;	// 0x56d25
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x56f6d
- (id)pairableTouchRemotes;	// 0x56f0d
- (id)pairedTouchRemotes;	// 0x56d95
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x56f11
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x56fc9
@end
