/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "BRTabControlDelegate.h"
#import "RUIYTListDataSourceAspectDelegate.h"
#import "BRViewController.h"

@class BRMediaMenuView, NSString, RUIYTDocumentLoader, NSMutableDictionary, RUIYTVideosDocumentSpec, NSArray, RUIYTListDataSourceAspect;

__attribute__((visibility("hidden")))
@interface RUIYTSortableVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate, BRTabControlDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	NSMutableDictionary *_assetsInfoDictionary;	// 108 = 0x6c
	NSArray *_timeFilterInfos;	// 112 = 0x70
	NSMutableDictionary *_selectionIndices;	// 116 = 0x74
	RUIYTVideosDocumentSpec *_spec;	// 120 = 0x78
	RUIYTDocumentLoader *_documentLoader;	// 124 = 0x7c
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 128 = 0x80
	NSString *_selectedTimeFilter;	// 132 = 0x84
}
+ (id)_defaultTimeFilterInfos;	// 0x26b8b1
+ (id)controllerWithSpec:(id)spec timeFilter:(id)filter;	// 0x26a5a1
+ (id)controllerWithSpec:(id)spec timeFilter:(id)filter assetsInfoDictionary:(id)dictionary;	// 0x26a5e5
- (id)initWithSpec:(id)spec timeFilter:(id)filter timeFilterInfos:(id)infos assetsInfoDictionary:(id)dictionary;	// 0x26a681
- (void).cxx_destruct;	// 0x26b805
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x26bccd
- (id)_timeFilterFromPreference;	// 0x26ba39
- (BOOL)_validateTimeFilter:(id)filter;	// 0x26bbb5
- (void)dealloc;	// 0x26acf5
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x26b321
- (id)identifier;	// 0x26b121
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x26b141
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x26b515
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x26b72d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x26b801
- (void)wasPushed;	// 0x26ad55
@end

