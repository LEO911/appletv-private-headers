/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVDataClient, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixSentry : BRSingleton {
	BOOL _queryPending;	// 4 = 0x4
	ATVDataQuery *_geniusMixSongsQuery;	// 8 = 0x8
	ATVDataClient *_dataClient;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x1d478d
+ (id)singleton;	// 0x1d477d
- (void)_dataClientStatusChanged:(id)changed;	// 0x1d4a21
- (void)_geniusMixSongsQueryComplete;	// 0x1d4b99
- (void)_playerAssetChanged:(id)changed;	// 0x1d4965
- (void)_playerStateChanged:(id)changed;	// 0x1d4921
- (void)_setGeniusMixSongsQuery:(id)query;	// 0x1d4ac9
- (void)_shutdownGeniusMix;	// 0x1d4a61
- (void)dealloc;	// 0x1d479d
- (void)enableWithQuery:(id)query dataClient:(id)client;	// 0x1d482d
@end
