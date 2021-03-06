/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x35089485; S=0x35089465; converted property
@property(assign) int historyItemLimit;	// G=0x35089445; S=0x35089425; converted property
+ (void)_removeAllVisitedLinks;	// 0x350894d1
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x350894c5
+ (id)optionalSharedHistory;	// 0x350480a9
+ (void)setOptionalSharedHistory:(id)history;	// 0x3503b0f5
- (id)init;	// 0x3503af2d
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x3504bca5
- (id)_data;	// 0x350372d9
- (id)_itemForURLString:(id)urlstring;	// 0x35054829
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x35048b7d
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x350480b9
- (void)addItems:(id)items;	// 0x3508936d
- (id)allItems;	// 0x350894a5
- (BOOL)containsURL:(id)url;	// 0x350893b9
- (void)dealloc;	// 0x350891b9
- (void)finalize;	// 0x35089245
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x35089485
// converted property getter: - (int)historyItemLimit;	// 0x35089445
- (id)itemForURL:(id)url;	// 0x350450ed
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x35035361
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x3505716d
- (id)orderedLastVisitedDays;	// 0x35056dc1
- (void)removeAllItems;	// 0x35089309
- (void)removeItems:(id)items;	// 0x350892b5
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x350893dd
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x35089465
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x35089425
- (void)timeZoneChanged:(id)changed;	// 0x35089199
@end

