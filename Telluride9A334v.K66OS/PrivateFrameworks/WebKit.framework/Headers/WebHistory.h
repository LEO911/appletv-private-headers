/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
@private
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x339ee81d; S=0x339ee83d; converted property
@property(assign) int historyItemLimit;	// G=0x339ee861; S=0x339ee881; converted property
+ (void)_removeAllVisitedLinks;	// 0x339eecd9
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x339eecdd
+ (id)optionalSharedHistory;	// 0x339ac0d1
+ (void)setOptionalSharedHistory:(id)history;	// 0x339974ed
- (id)init;	// 0x3399736d
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x339af605
- (id)_data;	// 0x339b3dad
- (id)_itemForURLString:(id)urlstring;	// 0x339ba795
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x339acb71
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x339ac0e1
- (void)addItems:(id)items;	// 0x339ee915
- (id)allItems;	// 0x339eecb9
- (BOOL)containsURL:(id)url;	// 0x339ee8ed
- (void)dealloc;	// 0x339eea1d
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x339ee81d
// converted property getter: - (int)historyItemLimit;	// 0x339ee861
- (id)itemForURL:(id)url;	// 0x339ae685
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x339a1edd
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x339bd071
- (id)orderedLastVisitedDays;	// 0x339bd105
- (void)removeAllItems;	// 0x339ee961
- (void)removeItems:(id)items;	// 0x339ee9c9
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x339ee8a5
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x339ee83d
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x339ee881
@end

