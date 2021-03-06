/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0x114f7d
- (id)initWithController:(id)controller;	// 0x114fc9
- (long)cacheSize;	// 0x115161
- (void)dealloc;	// 0x115011
- (BOOL)handlePlayForObject:(id)object;	// 0x115169
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x115051
- (BOOL)showRecentSearches;	// 0x115165
@end

