/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"
#import "AppleTV-Structs.h"

@class BRAsyncTaskContext, PlayHandler, NSString;

__attribute__((visibility("hidden")))
@interface MusicSearchAgent : ATVSearchAgent {
@private
	NSString *_initialSearchTerm;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	ATVMediaQueryRef _artistQuery;	// 20 = 0x14
	ATVMediaQueryRef _albumQuery;	// 24 = 0x18
	ATVMediaQueryRef _playlistQuery;	// 28 = 0x1c
	ATVMediaQueryRef _songQuery;	// 32 = 0x20
	int _pendingQueryCount;	// 36 = 0x24
	BRAsyncTaskContext *_taskContext;	// 40 = 0x28
	PlayHandler *_playHandler;	// 44 = 0x2c
	ATVDataClientRef dataClient;	// 48 = 0x30
	unsigned long clientType;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned long clientType;	// G=0x367b7379; S=0x367b7389; @synthesize
@property(retain, nonatomic) ATVDataClientRef dataClient;	// G=0x367b7345; S=0x367b7355; @synthesize
+ (id)searchAgent;	// 0x367b6f69
- (id)init;	// 0x367b6fa1
- (void)_addMediaTypeFilterForQuery:(ATVMediaQueryRef)query;	// 0x367b84e1
- (void)_addSearchTermFilterForQuery:(ATVMediaQueryRef)query operator:(int)anOperator;	// 0x367b849d
- (ATVMediaQueryRef)_createAlbumQuery;	// 0x367b8385
- (ATVMediaQueryRef)_createArtistQuery;	// 0x367b8221
- (ATVMediaQueryRef)_createPlaylistQuery;	// 0x367b8311
- (ATVMediaQueryRef)_createSongQuery;	// 0x367b8411
- (void)_dataClientSearch;	// 0x367b74d5
- (void)_dataClientSearchComplete;	// 0x367b7cbd
- (id)_filterData:(id)data forSearchTerm:(id)searchTerm;	// 0x367b7a91
- (id)_filterExistingResultsForSearchTerm:(id)searchTerm;	// 0x367b7721
- (void)_postSearchResults:(id)results searchTerm:(id)term;	// 0x367b81a5
- (id)_providerForSearchResults:(id)searchResults title:(id)title label:(id)label;	// 0x367b8611
- (void)_queryComplete;	// 0x367b8701
- (void)_search;	// 0x367b7399
- (void)_searchFilteringComplete:(id)complete;	// 0x367b7995
- (void)_searchForMultiCharFirstSearchTerm;	// 0x367b7409
- (void)_setAlbumQuery:(ATVMediaQueryRef)query;	// 0x367b85a9
- (void)_setArtistQuery:(ATVMediaQueryRef)query;	// 0x367b8541
- (void)_setPlaylistQuery:(ATVMediaQueryRef)query;	// 0x367b8575
- (void)_setSongQuery:(ATVMediaQueryRef)query;	// 0x367b85dd
- (void)_startSearchTask;	// 0x367b7419
- (long)cacheSize;	// 0x367b7341
// declared property getter: - (unsigned long)clientType;	// 0x367b7379
- (id)contextMenuUtility;	// 0x367b72a1
// declared property getter: - (ATVDataClientRef)dataClient;	// 0x367b7345
- (void)dealloc;	// 0x367b701d
- (BOOL)handlePlayForObject:(id)object;	// 0x367b72bd
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x367b715d
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0x367b7389
// declared property setter: - (void)setDataClient:(ATVDataClientRef)client;	// 0x367b7355
- (BOOL)showRecentSearches;	// 0x367b7159
@end

