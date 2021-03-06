/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import </libobjc.A.h>

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x33979ac5; S=0x33979aa5; converted property
@property(assign) int historyItemLimit;	// G=0x33979a85; S=0x33979a65; converted property
+ (void)_removeAllVisitedLinks;	// 0x33979b11
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x33979b05
+ (id)optionalSharedHistory;	// 0x33942641
+ (void)setOptionalSharedHistory:(id)history;	// 0x339368d9
- (id)init;	// 0x33936711
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x3394534d
- (id)_data;	// 0x33932e59
- (id)_itemForURLString:(id)urlstring;	// 0x3394b5d1
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x33942b7d
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x33942651
- (void)addItems:(id)items;	// 0x339799a9
- (id)allItems;	// 0x33979ae5
- (BOOL)containsURL:(id)url;	// 0x339799f5
- (void)dealloc;	// 0x339797f5
- (void)finalize;	// 0x33979881
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x33979ac5
// converted property getter: - (int)historyItemLimit;	// 0x33979a85
- (id)itemForURL:(id)url;	// 0x3393fcfd
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x33931305
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x3394d24d
- (id)orderedLastVisitedDays;	// 0x3394ce7d
- (void)removeAllItems;	// 0x33979945
- (void)removeItems:(id)items;	// 0x339798f1
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x33979a1d
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x33979aa5
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x33979a65
- (void)timeZoneChanged:(id)changed;	// 0x339797d5
@end

