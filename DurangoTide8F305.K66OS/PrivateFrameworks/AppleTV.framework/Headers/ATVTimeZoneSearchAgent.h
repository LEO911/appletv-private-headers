/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
@private
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0x307c1055
- (id)initWithController:(id)controller;	// 0x307c0f05
- (long)cacheSize;	// 0x307c0ec1
- (void)dealloc;	// 0x307c0ecd
- (BOOL)handlePlayForObject:(id)object;	// 0x307c0ec9
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x307c0f45
- (BOOL)showRecentSearches;	// 0x307c0ec5
@end

