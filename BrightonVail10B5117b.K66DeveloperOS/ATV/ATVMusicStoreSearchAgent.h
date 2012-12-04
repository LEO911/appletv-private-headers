/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchAgent.h"

@class NSString, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreSearchAgent : ATVSearchAgent {
	NSString *_baseURLString;	// 12 = 0xc
	BRMerchant *_merchant;	// 16 = 0x10
}
- (id)initWithBaseURLString:(id)baseURLString merchant:(id)merchant;	// 0x208db5
- (void)_loadSearchURL:(id)url forSearchTerm:(id)searchTerm;	// 0x20905d
- (void)_searchComplete:(id)complete forSearchTerm:(id)searchTerm;	// 0x2092ed
- (void)_searchRequestProcessed:(id)processed;	// 0x2091b9
- (void)dealloc;	// 0x208e2d
- (BOOL)isNetworkDependent;	// 0x209059
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x208ebd
- (BOOL)showRecentSearches;	// 0x209055
@end
