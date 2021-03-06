/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRKeyValueObservingRegistry, BRCursorLayer, BRControl;

__attribute__((visibility("hidden")))
@interface ATVCursorTracker : XXUnknownSuperclass {
	BRCursorLayer *_cursorLayer;	// 4 = 0x4
	BRKeyValueObservingRegistry *_kvoRegistry;	// 8 = 0x8
	BRControl *_trackedControl;	// 12 = 0xc
}
@property(retain, nonatomic) BRCursorLayer *cursorLayer;	// G=0x3c4fd5; S=0x3c4fe5; @synthesize=_cursorLayer
@property(retain, nonatomic) BRKeyValueObservingRegistry *kvoRegistry;	// G=0x3c500d; S=0x3c501d; @synthesize=_kvoRegistry
@property(retain, nonatomic) BRControl *trackedControl;	// G=0x3c5045; S=0x3c5055; @synthesize=_trackedControl
+ (id)trackerWithCursorLayer:(id)cursorLayer;	// 0x3c43c9
- (id)init;	// 0x3c4421
- (id)initWithCursorLayer:(id)cursorLayer;	// 0x3c442d
- (void).cxx_destruct;	// 0x3c507d
- (void)_focusChanged:(id)changed;	// 0x3c47f5
- (CGRect)_trackedFocusCursorFrame;	// 0x3c4ded
// declared property getter: - (id)cursorLayer;	// 0x3c4fd5
- (void)dealloc;	// 0x3c456d
// declared property getter: - (id)kvoRegistry;	// 0x3c500d
- (void)layoutCursorLayer;	// 0x3c45d9
// declared property setter: - (void)setCursorLayer:(id)layer;	// 0x3c4fe5
// declared property setter: - (void)setKvoRegistry:(id)registry;	// 0x3c501d
// declared property setter: - (void)setTrackedControl:(id)control;	// 0x3c5055
// declared property getter: - (id)trackedControl;	// 0x3c5045
@end

