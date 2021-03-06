/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject {
@private
	NSString *thingToResolve;	// 4 = 0x4
	int resolveType;	// 8 = 0x8
	dispatch_queue_s *resolveQueue;	// 12 = 0xc
	dispatch_queue_s *cacheAccessQueue;	// 16 = 0x10
	dispatch_queue_s *callbackQueue;	// 20 = 0x14
	BOOL startedResolving;	// 24 = 0x18
}
@property(readonly, assign) dispatch_queue_s *cacheAccessQueue;	// G=0x336bcf29; @synthesize
@property(readonly, assign) dispatch_queue_s *callbackQueue;	// G=0x336bcf39; @synthesize
@property(readonly, assign) dispatch_queue_s *resolveQueue;	// G=0x336bcf19; @synthesize
@property(assign, nonatomic) int resolveType;	// G=0x336bcec5; S=0x336bced5; @synthesize
@property(assign) BOOL startedResolving;	// G=0x336bcf49; S=0x336bcf59; @synthesize
@property(retain, nonatomic) NSString *thingToResolve;	// G=0x336bcee5; S=0x336bcef5; @synthesize
- (id)init;	// 0x336bcd61
// declared property getter: - (dispatch_queue_s *)cacheAccessQueue;	// 0x336bcf29
// declared property getter: - (dispatch_queue_s *)callbackQueue;	// 0x336bcf39
- (void)cleanup;	// 0x336bcde5
- (void)dealloc;	// 0x336bce65
- (void)finalize;	// 0x336bce25
// declared property getter: - (dispatch_queue_s *)resolveQueue;	// 0x336bcf19
// declared property getter: - (int)resolveType;	// 0x336bcec5
// declared property setter: - (void)setResolveType:(int)type;	// 0x336bced5
// declared property setter: - (void)setStartedResolving:(BOOL)resolving;	// 0x336bcf59
// declared property setter: - (void)setThingToResolve:(id)resolve;	// 0x336bcef5
// declared property getter: - (BOOL)startedResolving;	// 0x336bcf49
// declared property getter: - (id)thingToResolve;	// 0x336bcee5
@end

