/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@protocol OCDDelayedNodeContext;

__attribute__((visibility("hidden")))
@interface OCDDelayedNode : NSObject {
@private
	id<OCDDelayedNodeContext> mDelayedContext;	// 4 = 0x4
	bool mLoaded;	// 8 = 0x8
}
@property(retain) id delayedContext;	// G=0x345f404d; S=0x344a798d; converted property
@property(assign, getter=isLoaded) bool loaded;	// G=0x3439d9f5; S=0x343bd81d; converted property
+ (void)disableDelayedLoading;	// 0x345f402d
+ (void)enableDelayedLoading;	// 0x345f403d
- (void)dealloc;	// 0x343c9355
// converted property getter: - (id)delayedContext;	// 0x345f404d
// converted property getter: - (bool)isLoaded;	// 0x3439d9f5
- (bool)load;	// 0x3439da21
// converted property setter: - (void)setDelayedContext:(id)context;	// 0x344a798d
// converted property setter: - (void)setLoaded:(bool)loaded;	// 0x343bd81d
@end

