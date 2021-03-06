/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, ASAccount;

@interface ASFolderHierarchy : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSMutableDictionary *_folderCache;	// 8 = 0x8
	NSMutableDictionary *_folderByIdCache;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *folderCache;	// G=0x36e5a939; S=0x36e5be0d; converted property
@property(retain) id folderIdsThatExternalClientsCareAbout;	// G=0x36e5c041; S=0x36e5c1c5; converted property
+ (id)_folderCacheFilenameWithId:(id)anId;	// 0x36e5a45d
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x36e5be55
- (id)initWithAccount:(id)account;	// 0x36e5a2ad
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;	// 0x36e5b8f5
- (id)_deviceIdInCache;	// 0x36e5a671
- (id)_folderCacheFilename;	// 0x36e5a4c1
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)about;	// 0x36e5b611
- (id)_pathForFolder:(id)folder usingCache:(id)cache foldersById:(id)anId;	// 0x36e5b36d
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;	// 0x36e5b981
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;	// 0x36e5c275
- (id)_savedFolderPathsThatExternalClientsCareAbout;	// 0x36e5afdd
- (void)_setFolderByIdCacheFromCurrentCache;	// 0x36e5a509
- (void)_setFolderCache:(id)cache;	// 0x36e5bad5
- (void)_setFolderPathsFromCurrentCache;	// 0x36e5b01d
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)about;	// 0x36e5affd
- (void)blowAwayFolderCache;	// 0x36e5b951
- (void)clearLocalCache;	// 0x36e5af8d
- (void)dealloc;	// 0x36e5a3e9
- (id)description;	// 0x36e5a38d
// converted property getter: - (id)folderCache;	// 0x36e5a939
- (id)folderForID:(id)anId;	// 0x36e5aee5
// converted property getter: - (id)folderIdsThatExternalClientsCareAbout;	// 0x36e5c041
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x36e5c075
- (id)folders;	// 0x36e5af25
- (id)foldersTag;	// 0x36e5af59
- (id)foldersUnderFolderWithID:(id)anId;	// 0x36e5b205
- (void)setDelegate:(id)delegate;	// 0x36e5a44d
// converted property setter: - (void)setFolderCache:(id)cache;	// 0x36e5be0d
// converted property setter: - (void)setFolderIdsThatExternalClientsCareAbout:(id)about;	// 0x36e5c1c5
@end

