/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVReadWriteFeedResource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVDictionaryFeedResource : XXUnknownSuperclass <ATVReadWriteFeedResource> {
	NSMutableDictionary *_prefs;	// 4 = 0x4
	NSLock *_prefsLock;	// 8 = 0x8
}
- (id)init;	// 0x145639
- (void)clearFeedResources;	// 0x145831
- (void)dealloc;	// 0x1456b9
- (id)feedResourceNamed:(id)named;	// 0x14571d
- (void)setFeedResource:(id)resource named:(id)named;	// 0x1457a1
@end

