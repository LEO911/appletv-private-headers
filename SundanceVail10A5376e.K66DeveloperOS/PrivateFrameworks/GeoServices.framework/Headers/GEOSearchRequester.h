/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOSearchRequester : NSObject {
	NSMapTable *_pendingSearches;	// 4 = 0x4
	NSLock *_pendingSearchesLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedSearchRequester;	// 0x379e1acd
- (id)init;	// 0x379e1b01
- (void)cancelSearch:(id)search;	// 0x37a2aabd
- (void)completions:(id)completions timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x379fabc9
- (void)dealloc;	// 0x37a2a565
- (void)registerProvider:(Class)provider;	// 0x379e1be1
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x379fe3a1
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x379fe3e1
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error isCompletions:(BOOL)completions;	// 0x379fac05
- (void)search:(id)search useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x37a2a5dd
@end

