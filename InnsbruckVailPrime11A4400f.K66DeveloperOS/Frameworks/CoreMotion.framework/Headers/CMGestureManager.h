/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import </libobjc.A.h>


@interface CMGestureManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(copy) id gestureHandler;	// G=0x2d936a01; S=0x2d93692d; 
+ (BOOL)isGestureServiceEnabled;	// 0x2d936b0d
+ (void)setGestureServiceEnabled:(BOOL)enabled;	// 0x2d936b29
- (id)init;	// 0x2d9367e9
- (id)initWithPriority:(int)priority;	// 0x2d9367fd
- (void)dealloc;	// 0x2d93686d
// declared property getter: - (id)gestureHandler;	// 0x2d936a01
// declared property setter: - (void)setGestureHandler:(id)handler;	// 0x2d93692d
@end
