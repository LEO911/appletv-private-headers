/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library

@class AccountsManager, NSArray, NoteContext;

@interface AccountUtilities : NSObject {
	AccountsManager *_accountsManager;	// 4 = 0x4
	NSArray *_syncableAccounts;	// 8 = 0x8
	NoteContext *_noteContext;	// 12 = 0xc
}
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x30cb1a35; converted property
+ (id)sharedAccountUtilities;	// 0x30cb19e1
- (id)init;	// 0x30cb1b8d
- (void).cxx_destruct;	// 0x30cb2a5d
- (void)accountsChanged;	// 0x30cb1a75
// converted property getter: - (id)accountsManager;	// 0x30cb1a35
- (id)allDisplayAccounts;	// 0x30cb1d01
- (id)allSyncableAccounts;	// 0x30cb1cc1
- (void)dealloc;	// 0x30cb1c85
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)desiredSyncId;	// 0x30cb2335
- (BOOL)isDeviceLocalAccount:(id)account;	// 0x30cb2785
- (BOOL)localNotesExist;	// 0x30cb2809
- (id)syncAccountIdForDisplayAccountId:(id)displayAccountId;	// 0x30cb20c9
@end

