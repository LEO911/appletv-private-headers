/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import "WebBookmarks-Structs.h"
#import <NSObject.h> // Unknown library

@class TIWordTokenizer, WebBookmark;

@interface WebBookmarkCollection : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	CFLocaleRef _locale;	// 8 = 0x8
	TIWordTokenizer *_wordTokenizer;	// 12 = 0xc
	WebBookmark *_rootBookmark;	// 16 = 0x10
	BOOL _merging;	// 20 = 0x14
	BOOL _dirty;	// 21 = 0x15
}
@property(assign, nonatomic, getter=isMerging) BOOL merging;	// G=0x322f89b5; S=0x322f89c5; @synthesize=_merging
@property(readonly, retain) WebBookmark *rootBookmark;	// G=0x322f67a9; converted property
+ (void)_postBookmarksChangedSyncNotification;	// 0x322fa289
+ (id)_uniqueExternalUUID;	// 0x322fa2dd
+ (BOOL)isLockedSync;	// 0x322fa179
+ (BOOL)lockSync;	// 0x322fa191
+ (id)readingListArchivesDirectoryPath;	// 0x322f5ee1
+ (id)safariBookmarkCollection;	// 0x322f610d
+ (id)safariBookmarkCollectionCheckingIntegrity:(BOOL)integrity;	// 0x322f6039
+ (id)safariDirectoryPath;	// 0x322f5fa5
+ (void)unlockSync;	// 0x322fa235
- (id)initWithPath:(id)path;	// 0x322f5ba9
- (id)initWithPath:(id)path checkIntegrity:(BOOL)integrity;	// 0x322f58c1
- (id)initWithPath:(id)path migratingBookmarksPlist:(id)plist syncAnchorPlist:(id)plist3;	// 0x322f5ebd
- (id)initWithPath:(id)path migratingBookmarksPlist:(id)plist syncAnchorPlist:(id)plist3 checkIntegrity:(BOOL)integrity;	// 0x322f5e65
- (int)_DAVGeneration;	// 0x32300b0d
- (BOOL)_addBookmarkWithTitle:(id)title address:(id)address parentID:(unsigned)anId orderIndex:(unsigned)index isFolder:(BOOL)folder externalUUID:(id)uuid associatedBookmark:(id)bookmark reorderSiblings:(BOOL)siblings updateParentChildCount:(BOOL)count updateAncestorEntries:(BOOL)entries;	// 0x322fd661
- (BOOL)_addChildrenOfID:(unsigned)anId toCollection:(id)collection recursive:(BOOL)recursive error:(id *)error;	// 0x322f8eb1
- (id)_bookmarkDictionaryForSqliteRow:(sqlite3_stmt *)sqliteRow recursive:(BOOL)recursive error:(id *)error;	// 0x322f8c5d
- (unsigned)_bookmarkIDForServerID:(id)serverID;	// 0x322fe9e9
- (id)_bookmarkWithServerID:(id)serverID;	// 0x322feb31
- (id)_bookmarkWithSpecialID:(unsigned)specialID;	// 0x322fa3d5
- (id)_bookmarksFromStatementSelectingIDs:(const char *)statementSelectingIDs withQuery:(id)query;	// 0x322f7c1d
- (id)_bookmarksInListWhere:(id)listWhere fromIndex:(unsigned)index toIndex:(unsigned)index3;	// 0x322faa05
- (id)_changeList;	// 0x3230081d
- (BOOL)_clearAllDAVSyncData;	// 0x322fd28d
- (BOOL)_clearAllSyncKeys;	// 0x322fd1ad
- (BOOL)_clearAllTombstones;	// 0x322fd069
- (void)_clearAndCreateAncestorTable;	// 0x32301541
- (void)_clearAndCreateBookmarksTables;	// 0x322fae09
- (void)_clearAndCreateBookmarksTitleWordTable;	// 0x322fad99
- (BOOL)_clearChangeList;	// 0x323008ed
- (BOOL)_clearSyncKeysUnderBookmarkID:(unsigned)anId isFolder:(BOOL)folder;	// 0x322fd099
- (BOOL)_clearTitleWordsForBookmarkID:(unsigned)bookmarkID;	// 0x323000ad
- (void)_collectChangesOfType:(int)type withClause:(id)clause intoArray:(id)array;	// 0x32300631
- (void)_createSchema;	// 0x322fac05
- (id)_databaseTitleForSpecialID:(unsigned)specialID;	// 0x322fdce5
- (BOOL)_deleteAncestorTableEntriesForBookmarkID:(unsigned)bookmarkID;	// 0x322fff79
- (BOOL)_deleteBookmark:(id)bookmark leaveTombstone:(BOOL)tombstone;	// 0x322fd3d9
- (BOOL)_deleteRecursively:(unsigned)recursively;	// 0x322fd54d
- (BOOL)_deleteSyncPropertyForKey:(id)key;	// 0x322f9945
- (id)_errorForMostRecentSQLiteError;	// 0x322fc9cd
- (int)_executeSQL:(id)sql;	// 0x322fcaa1
- (int)_executeSQLWithCString:(const char *)cstring;	// 0x322fcab9
- (int)_finalizeStatementIfNotNull:(sqlite3_stmt *)null;	// 0x322fc9bd
- (id)_firstBookmarkWithURLMatchingString:(id)urlmatchingString prefixMatch:(BOOL)match inParent:(unsigned)parent;	// 0x322fa51d
- (BOOL)_importBookmarksPlist:(id)plist;	// 0x32300d91
- (BOOL)_importSyncAnchorPlist:(id)plist;	// 0x32300df1
- (BOOL)_incrementDAVGeneration;	// 0x32300b2d
- (BOOL)_incrementGeneration;	// 0x32300605
- (BOOL)_indexAllTitleWords;	// 0x32300469
- (BOOL)_indexBookmarkID:(unsigned)anId title:(id)title;	// 0x323000fd
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned)bookmarkID withAncestorIDs:(id)ancestorIDs;	// 0x323015c5
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned)bookmarkID withParentID:(unsigned)parentID;	// 0x322ffdb9
- (BOOL)_insertTombstoneWithServerID:(id)serverID;	// 0x322fcf55
- (int)_intFromExecutingSQL:(id)executingSQL;	// 0x322fcad1
- (BOOL)_markBookmarkID:(unsigned)anId added:(BOOL)added;	// 0x32300a09
- (BOOL)_markBookmarkID:(unsigned)anId withSpecialID:(unsigned)specialID;	// 0x322fe7d5
- (BOOL)_markSpecialBookmarks;	// 0x322f9695
- (id)_mergeCandidateBookmarkWithAddress:(id)address parent:(unsigned)parent;	// 0x322fa889
- (id)_mergeCandidateFolderWithTitle:(id)title parent:(unsigned)parent;	// 0x322fa70d
- (BOOL)_mergeChildrenOfID:(unsigned)anId referencingBase:(id)base error:(id *)error;	// 0x322f94f9
- (BOOL)_migrateBookmarksPlist:(id)plist syncAnchorPlist:(id)plist2;	// 0x322fc5e9
- (void)_migrateSchemaVersion0ToVersion1;	// 0x322faef9
- (void)_migrateSchemaVersion10ToVersion11;	// 0x322fb3dd
- (void)_migrateSchemaVersion11And12And13ToVersion14;	// 0x322fb43d
- (void)_migrateSchemaVersion14ToVersion15;	// 0x322fb4ad
- (void)_migrateSchemaVersion15ToVersion16;	// 0x322fb5fd
- (void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;	// 0x322fb65d
- (void)_migrateSchemaVersion19And20ToVersion21;	// 0x322fb6bd
- (void)_migrateSchemaVersion1And2ToVersion3;	// 0x322fafa1
- (void)_migrateSchemaVersion21ToVersion22;	// 0x322fb889
- (void)_migrateSchemaVersion22ToVersion23;	// 0x322fbd85
- (void)_migrateSchemaVersion23ToVersion24;	// 0x322fbee1
- (void)_migrateSchemaVersion24ToVersion25;	// 0x322fbf51
- (void)_migrateSchemaVersion25ToVersion26;	// 0x322fbfc1
- (void)_migrateSchemaVersion26ToVersion27;	// 0x322fbff9
- (void)_migrateSchemaVersion27ToVersion28;	// 0x322fc045
- (void)_migrateSchemaVersion28ToVersion29;	// 0x322fc081
- (void)_migrateSchemaVersion3ToVersion4;	// 0x322fb049
- (void)_migrateSchemaVersion4ToVersion5;	// 0x322fb0dd
- (void)_migrateSchemaVersion5ToVersion6;	// 0x322fb191
- (void)_migrateSchemaVersion6ToVersion7;	// 0x322fb1f1
- (void)_migrateSchemaVersion7ToVersion8;	// 0x322fb299
- (void)_migrateSchemaVersion8ToVersion9;	// 0x322fb2f9
- (void)_migrateSchemaVersion9ToVersion10;	// 0x322fb37d
- (void)_migrateToCurrentSchema;	// 0x322fc3b1
- (BOOL)_moveBookmark:(id)bookmark toFolderWithID:(unsigned)anId;	// 0x322fcae9
- (BOOL)_moveBookmark:(id)bookmark toIndex:(unsigned)index;	// 0x322f7489
- (void)_normalizeDatabaseURLs;	// 0x32300e5d
- (void)_normalizeSearchString:(CFStringRef)string;	// 0x3230007d
- (BOOL)_openDatabaseAtPath:(id)path checkIntegrity:(BOOL)integrity error:(id *)error;	// 0x322f5bbd
- (BOOL)_orderChildrenWithServerIDs:(id)serverIDs inFolderWithServerID:(id)serverID;	// 0x322ffce9
- (int)_orderIndexForBookmarkInsertedIntoParent:(unsigned)bookmarkInsertedIntoParent insertAtBeginning:(BOOL)beginning;	// 0x322fa31d
- (void)_postBookmarksFolderContentsDidChangeNotification:(unsigned)_postBookmarksFolderContents;	// 0x32300c3d
- (void)_postBookmarksSpecialFoldersDidChangeNotification;	// 0x32300cd1
- (void)_postDistributedBookmarksDidReloadNotification;	// 0x32300bd9
- (void)_postDistributedBookmarksDidReloadNotificationIfChangesWereMade;	// 0x32300c15
- (sqlite3_stmt *)_prefixSearch:(id)search usingColumns:(const char *)columns maxCount:(unsigned)count;	// 0x322f7879
- (BOOL)_rebuildAncestorTable;	// 0x322ffd71
- (void)_registerForSyncBookmarksFileChangedNotification;	// 0x32300b5d
- (BOOL)_reindexBookmarkID:(unsigned)anId title:(id)title;	// 0x32300421
- (void)_rerunMigrationsIfNecessary;	// 0x322fc0e1
- (BOOL)_restoreBookmarkBarIfMissing;	// 0x322fc7b9
- (BOOL)_restoreMissingSpecialBookmarks;	// 0x322fc8c1
- (void)_restoreOrMergeReadingListFolderWithChangeNotification:(BOOL)changeNotification;	// 0x323010a5
- (BOOL)_saveBookmark:(id)bookmark withSpecialID:(unsigned)specialID updateGeneration:(BOOL)generation;	// 0x322fdd41
- (sqlite3_stmt *)_selectBookmarksWhere:(id)where;	// 0x322fc911
- (sqlite3_stmt *)_selectBookmarksWhere:(id)where countOnly:(BOOL)only;	// 0x322fc925
- (id)_serverIDAtOrderIndex:(int)orderIndex inFolderWithServerID:(id)serverID;	// 0x322ff565
- (id)_serverIDForBookmarkID:(unsigned)bookmarkID;	// 0x322fe891
- (id)_serverIDsInFolderWithServerID:(id)serverID;	// 0x322ff3c1
- (BOOL)_setServerID:(id)anId forBookmark:(id)bookmark;	// 0x322fecc9
- (BOOL)_setSyncData:(id)data forBookmark:(id)bookmark;	// 0x322fefb9
- (BOOL)_setSyncKey:(id)key forBookmark:(id)bookmark;	// 0x322fee41
- (unsigned)_specialIDForBookmarkBeingSaved:(id)bookmarkBeingSaved;	// 0x322fdc15
- (unsigned)_specialIDForBookmarkTitle:(id)bookmarkTitle;	// 0x322fdb21
- (void)_startReadingListFetcher;	// 0x32300d1d
- (BOOL)_syncAdd:(id)add toParent:(unsigned)parent withOrderIndex:(unsigned)orderIndex error:(id *)error;	// 0x322f93d1
- (id)_syncKeysForServerIDs:(id)serverIDs;	// 0x322ff149
- (BOOL)_syncPropertyExistsForKey:(id)key;	// 0x322f9815
- (BOOL)_unsafeOrderChildrenWithServerIDs:(id)serverIDs inFolderWithServerID:(id)serverID;	// 0x322ff735
- (BOOL)_updateCachedChildCountForParentID:(unsigned)parentID inDirection:(int)direction;	// 0x322fe82d
- (BOOL)_updateHiddenAncestorCountForBookmarksUnderFolderID:(unsigned)bookmarksUnderFolderID addingOffset:(int)offset;	// 0x323018a5
- (int)_userVersion;	// 0x322fabe9
- (BOOL)beginSyncTransaction;	// 0x322fa071
- (id)bookmarkAtPath:(id)path;	// 0x322f63b9
- (id)bookmarkWithID:(unsigned)anId;	// 0x322f61fd
- (id)bookmarkWithUUID:(id)uuid;	// 0x322f62d5
- (id)bookmarksBarBookmark;	// 0x322f6391
- (id)bookmarksBarList;	// 0x322f6aa5
- (id)bookmarksDictionary;	// 0x322f90c5
- (id)bookmarksMatchingString:(id)string;	// 0x322f7a6d
- (id)bookmarksWithTitlesMatchingString:(id)titlesMatchingString;	// 0x322f7f0d
- (id)bookmarksWithURLsMatchingString:(id)urlsMatchingString;	// 0x322f7f55
- (void)commitSyncTransaction;	// 0x322fa141
- (void)dealloc;	// 0x322f6121
- (BOOL)deleteBookmark:(id)bookmark;	// 0x322f7299
- (BOOL)deleteBookmark:(id)bookmark postChangeNotification:(BOOL)notification;	// 0x322f70d1
- (id)firstReadingListBookmarkNotAvailableOffline;	// 0x322f81e9
- (id)firstReadingListBookmarkWithIconDataWithBaseURL:(id)baseURL;	// 0x322f7fd9
- (id)firstReadingListBookmarkWithURLMatchingString:(id)urlmatchingString prefixMatch:(BOOL)match;	// 0x322f7f9d
- (unsigned)generation;	// 0x322f97f9
- (unsigned)indexOfReadingListBookmark:(id)readingListBookmark countingOnlyUnread:(BOOL)unread;	// 0x322f87f5
// declared property getter: - (BOOL)isMerging;	// 0x322f89b5
- (id)listWithID:(unsigned)anId;	// 0x322f68f1
- (id)listWithID:(unsigned)anId skipOffset:(unsigned)offset;	// 0x322f6991
- (id)listWithID:(unsigned)anId skipOffset:(unsigned)offset includeHidden:(BOOL)hidden;	// 0x322f69b5
- (id)listWithSpecialID:(unsigned)specialID;	// 0x322f6905
- (void)localeSettingsChanged;	// 0x322f61dd
- (BOOL)mergeWithBookmarksDictionary:(id)bookmarksDictionary clearHidden:(BOOL)hidden error:(id *)error;	// 0x322f96d9
- (BOOL)moveBookmark:(id)bookmark toFolderWithID:(unsigned)anId;	// 0x322f72b1
- (id)readingList;	// 0x322f6bd9
- (id)readingListBookmarksNotAvailableOfflineLimitingToVisibleItemCount:(unsigned)visibleItemCount;	// 0x322f8345
- (id)readingListBookmarksNotAvailableOfflineLocallyAddedOnly:(BOOL)only;	// 0x322f8625
- (id)readingListFolder;	// 0x322f63a5
- (unsigned)readingListFolderBookmarkID;	// 0x322f6bed
- (id)readingListItemsWithIconData:(BOOL)iconData unreadOnly:(BOOL)only;	// 0x322f6c59
- (id)readingListWithUnreadOnly:(BOOL)unreadOnly;	// 0x322f6ab9
- (BOOL)reorderBookmark:(id)bookmark toIndex:(unsigned)index;	// 0x322f7709
- (BOOL)reorderList:(id)list moveBookmarkAtIndex:(unsigned)index toIndex:(unsigned)index3;	// 0x322f77a9
- (void)rollbackSyncTransaction;	// 0x322fa15d
// converted property getter: - (id)rootBookmark;	// 0x322f67a9
- (id)rootList;	// 0x322f6a91
- (BOOL)saveBookmark:(id)bookmark;	// 0x322f6e69
// declared property setter: - (void)setMerging:(BOOL)merging;	// 0x322f89c5
- (BOOL)setSyncData:(id)data forKey:(id)key;	// 0x322f9d51
- (id)subfoldersOfID:(unsigned)anId;	// 0x322f67f1
- (id)syncDataForKey:(id)key;	// 0x322f9f11
- (BOOL)syncSetString:(id)string forKey:(id)key;	// 0x322f9a61
- (id)syncStringForKey:(id)key;	// 0x322f9c01
- (BOOL)vacuum;	// 0x322f61b1
@end
