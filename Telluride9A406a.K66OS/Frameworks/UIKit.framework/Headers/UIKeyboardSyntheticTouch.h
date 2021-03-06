/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject {
@private
	double timestamp;	// 4 = 0x4
	int phase;	// 12 = 0xc
	unsigned tapCount;	// 16 = 0x10
	UIWindow *window;	// 20 = 0x14
	CGPoint locationInWindow;	// 24 = 0x18
	unsigned char _pathIndex;	// 32 = 0x20
	unsigned char _pathIdentity;	// 33 = 0x21
	float _pathMajorRadius;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned char _pathIdentity;	// G=0x3592164d; @synthesize
@property(readonly, assign, nonatomic) unsigned char _pathIndex;	// G=0x3592163d; @synthesize
@property(assign, nonatomic) float _pathMajorRadius;	// G=0x3592165d; S=0x3592166d; @synthesize
@property(assign, nonatomic) CGPoint locationInWindow;	// G=0x35921621; S=0x3592158d; @synthesize
@property(assign, nonatomic) int phase;	// G=0x359215cd; S=0x35813f3d; @synthesize
@property(assign, nonatomic) unsigned tapCount;	// G=0x359215dd; S=0x359215ed; @synthesize
@property(assign, nonatomic) double timestamp;	// G=0x359215a1; S=0x359215b9; @synthesize
@property(retain, nonatomic) UIWindow *window;	// G=0x35813f2d; S=0x359215fd; @synthesize
+ (id)syntheticTouchWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x35813e45
- (id)initWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x35813ea1
// declared property getter: - (unsigned char)_pathIdentity;	// 0x3592164d
// declared property getter: - (unsigned char)_pathIndex;	// 0x3592163d
// declared property getter: - (float)_pathMajorRadius;	// 0x3592165d
- (CGPoint)getLocationInWindow;	// 0x35921571
- (CGPoint)locationInView:(id)view;	// 0x35813f4d
// declared property getter: - (CGPoint)locationInWindow;	// 0x35921621
// declared property getter: - (int)phase;	// 0x359215cd
- (CGPoint)previousLocationInView:(id)view;	// 0x3592150d
// declared property setter: - (void)setLocationInWindow:(CGPoint)window;	// 0x3592158d
// declared property setter: - (void)setPhase:(int)phase;	// 0x35813f3d
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x359215ed
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x359215b9
// declared property setter: - (void)setWindow:(id)window;	// 0x359215fd
// declared property setter: - (void)set_pathMajorRadius:(float)radius;	// 0x3592166d
// declared property getter: - (unsigned)tapCount;	// 0x359215dd
// declared property getter: - (double)timestamp;	// 0x359215a1
// declared property getter: - (id)window;	// 0x35813f2d
@end

