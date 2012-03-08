/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSObject.h"


@protocol MPUbiquitousLRUDictionaryObserver <NSObject>
- (void)ubiquitousLRUStorageDidChangeExternally:(id)ubiquitousLRUStorage changedEntries:(id)entries;
- (void)ubiquitousLRUStorageDidCommitLocalChanges:(id)ubiquitousLRUStorage;
- (void)ubiquitousLRUStorageWillCommitLocalChanges:(id)ubiquitousLRUStorage;
@end
