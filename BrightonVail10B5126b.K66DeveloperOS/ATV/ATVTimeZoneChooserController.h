/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import "ATVSearchController.h"
#import "BRSelectionHandler.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
	NSArray *_matchedCities;	// 172 = 0xac
}
+ (void)initialize;	// 0x135b39
- (id)init;	// 0x135bcd
- (void)_runInitialSearch;	// 0x135d91
- (id)controlFactory;	// 0x135e6d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x135ee9
- (id)dataAtIndex:(long)index;	// 0x135e91
- (long)dataCount;	// 0x135e71
- (void)dealloc;	// 0x135ce1
- (BOOL)handleSelectionForControl:(id)control;	// 0x136001
- (id)hashForDataAtIndex:(long)index;	// 0x135eb1
- (void)setMatchedCities:(id)cities;	// 0x135e31
- (void)wasPopped;	// 0x135ddd
- (void)wasPushed;	// 0x135d2d
@end

