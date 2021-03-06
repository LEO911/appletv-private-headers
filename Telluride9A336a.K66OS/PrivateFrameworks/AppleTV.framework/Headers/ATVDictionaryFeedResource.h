/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVReadWriteFeedResource.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVDictionaryFeedResource : NSObject <ATVReadWriteFeedResource> {
@private
	NSMutableDictionary *_prefs;	// 4 = 0x4
	NSLock *_prefsLock;	// 8 = 0x8
}
- (id)init;	// 0x33a2c6f9
- (void)clearFeedResources;	// 0x33a2c8e9
- (void)dealloc;	// 0x33a2c775
- (id)feedResourceNamed:(id)named;	// 0x33a2c7d5
- (void)setFeedResource:(id)resource named:(id)named;	// 0x33a2c861
@end

