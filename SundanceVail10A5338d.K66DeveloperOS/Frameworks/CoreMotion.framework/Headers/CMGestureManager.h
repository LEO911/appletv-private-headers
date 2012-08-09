/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library


@interface CMGestureManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(copy) id gestureHandler;	// G=0x33f33bf1; S=0x33f33b1d; 
+ (BOOL)isGestureServiceEnabled;	// 0x33f33cfd
+ (void)setGestureServiceEnabled:(BOOL)enabled;	// 0x33f33d19
- (id)init;	// 0x33f339d9
- (id)initWithPriority:(int)priority;	// 0x33f339ed
- (void)dealloc;	// 0x33f33a5d
// declared property getter: - (id)gestureHandler;	// 0x33f33bf1
// declared property setter: - (void)setGestureHandler:(id)handler;	// 0x33f33b1d
@end
