/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListDataSourceAspectDelegate.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import "ATVSearchViewController.h"

@class RUIYTSearchResultsLoader, RUIYTListDataSourceAspect, RUIYTDocumentLoader;

__attribute__((visibility("hidden")))
@interface RUIYTSearchController : ATVSearchViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 120 = 0x78
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 124 = 0x7c
	RUIYTSearchResultsLoader *_searchResultsLoader;	// 128 = 0x80
}
- (id)init;	// 0x26c191
- (void).cxx_destruct;	// 0x26d169
- (BOOL)_search:(id)search;	// 0x26cdd1
- (void)_searchResultsDidLoad:(id)_searchResults;	// 0x26d1b1
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x26cee1
- (void)dealloc;	// 0x26c4ed
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x26c979
- (BOOL)isNetworkDependent;	// 0x26c911
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x26cb2d
- (void)searchView:(id)view focusDidChangeToControl:(int)focus;	// 0x26c915
- (void)wasPushed;	// 0x26c58d
@end

