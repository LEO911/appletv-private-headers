/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@protocol BRMediaCollection;

@interface BRPlaylistDataStore : BRDataStore {
@private
	id<BRMediaCollection> _playlist;	// 40 = 0x28
}
- (id)initWithPlaylist:(id)playlist mediaTypes:(id)types;	// 0x3311bc31
- (void)addObject:(id)object;	// 0x3311bf81
- (void)dealloc;	// 0x3311bc91
- (id)loadData;	// 0x3311bd31
- (void)objectModified:(id)modified;	// 0x3311bf85
- (id)playlist;	// 0x3311bcdd
- (void)removeObject:(id)object;	// 0x3311bfd5
- (BOOL)storeAppliesToObject:(id)object;	// 0x3311bced
@end
