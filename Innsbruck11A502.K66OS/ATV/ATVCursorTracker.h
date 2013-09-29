/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRKeyValueObservingRegistry, BRControl, BRCursorLayer;

__attribute__((visibility("hidden")))
@interface ATVCursorTracker : XXUnknownSuperclass {
	BRCursorLayer *_cursorLayer;	// 4 = 0x4
	BRKeyValueObservingRegistry *_kvoRegistry;	// 8 = 0x8
	BRControl *_trackedControl;	// 12 = 0xc
}
@property(retain, nonatomic) BRCursorLayer *cursorLayer;	// G=0x1001f1; S=0x100201; @synthesize=_cursorLayer
@property(retain, nonatomic) BRKeyValueObservingRegistry *kvoRegistry;	// G=0x100229; S=0x100239; @synthesize=_kvoRegistry
@property(retain, nonatomic) BRControl *trackedControl;	// G=0x100261; S=0x100271; @synthesize=_trackedControl
+ (id)trackerWithCursorLayer:(id)cursorLayer;	// 0xff511
- (id)init;	// 0xff569
- (id)initWithCursorLayer:(id)cursorLayer;	// 0xff575
- (void).cxx_destruct;	// 0x100299
- (void)_focusChanged:(id)changed;	// 0xff931
- (CGRect)_trackedFocusCursorFrame;	// 0xffff1
// declared property getter: - (id)cursorLayer;	// 0x1001f1
- (void)dealloc;	// 0xff6ad
// declared property getter: - (id)kvoRegistry;	// 0x100229
- (void)layoutCursorLayer;	// 0xff719
// declared property setter: - (void)setCursorLayer:(id)layer;	// 0x100201
// declared property setter: - (void)setKvoRegistry:(id)registry;	// 0x100239
// declared property setter: - (void)setTrackedControl:(id)control;	// 0x100271
// declared property getter: - (id)trackedControl;	// 0x100261
@end
