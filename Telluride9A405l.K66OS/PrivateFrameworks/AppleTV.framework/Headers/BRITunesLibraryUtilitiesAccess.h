/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRITunesUtilities.h"
#import "BRSingleton.h"


@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities> {
@private
	id<BRITunesUtilities> _utilitiesDelegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x35ecab19
+ (id)singleton;	// 0x35ecab09
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x35ecabb5
- (void)dealloc;	// 0x35ecab29
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x35ecabdd
- (void)deleteImportedKeybagData;	// 0x35ecad79
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x35ecac75
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key fallbackSortSelector:(SEL)selector;	// 0x35ecabfd
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x35ecacb9
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x35ecad59
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x35ecad19
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x35ecacf9
- (id)rentalGUID;	// 0x35ecad39
- (void)setITunesUtilitiesDelegate:(id)delegate;	// 0x35ecab75
- (id)sortStringForString:(id)string;	// 0x35ecac99
- (id)urlSuitableForPlayback:(id)playback;	// 0x35ecacd9
@end

