/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRITunesUtilities.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MEITunesUtilities : XXUnknownSuperclass <BRITunesUtilities> {
}
+ (void)_writeJournal:(id)journal;	// 0x2af89
+ (void)checkInJournaledEntries;	// 0x29c95
+ (void)initialize;	// 0x29a79
+ (id)journalObjectForAsset:(id)asset;	// 0x29f49
+ (void)removeJournalForRentalID:(unsigned long long)rentalID;	// 0x2a415
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x2a6ed
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x2a935
- (void)deleteImportedKeybagData;	// 0x2aeb9
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x2aa31
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x2ab29
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x2ada9
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x2ad69
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x2ad61
- (id)rentalGUID;	// 0x2a6b5
- (id)sortStringForString:(id)string;	// 0x2abe5
- (id)urlSuitableForPlayback:(id)playback;	// 0x2ad4d
@end
