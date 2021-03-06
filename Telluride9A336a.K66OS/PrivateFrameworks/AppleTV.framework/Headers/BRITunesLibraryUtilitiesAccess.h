/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "BRITunesUtilities.h"


@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities> {
@private
	id<BRITunesUtilities> _utilitiesDelegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x33b5a6e1
+ (id)singleton;	// 0x33b5a6d1
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x33b5a77d
- (void)dealloc;	// 0x33b5a6f1
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x33b5a7a5
- (void)deleteImportedKeybagData;	// 0x33b5a941
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x33b5a83d
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key fallbackSortSelector:(SEL)selector;	// 0x33b5a7c5
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x33b5a881
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x33b5a921
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x33b5a8e1
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x33b5a8c1
- (id)rentalGUID;	// 0x33b5a901
- (void)setITunesUtilitiesDelegate:(id)delegate;	// 0x33b5a73d
- (id)sortStringForString:(id)string;	// 0x33b5a861
- (id)urlSuitableForPlayback:(id)playback;	// 0x33b5a8a1
@end

