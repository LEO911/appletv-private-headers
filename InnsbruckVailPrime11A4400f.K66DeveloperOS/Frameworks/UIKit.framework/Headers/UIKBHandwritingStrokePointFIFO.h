/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKBHandwritingPointFIFO.h"
#import "UIKit-Structs.h"

@class TIHandwritingStrokes;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {
	TIHandwritingStrokes *_strokes;	// 8 = 0x8
}
@property(retain, nonatomic) TIHandwritingStrokes *strokes;	// G=0x2f9185ed; S=0x2f9185fd; @synthesize=_strokes
- (id)initWithFIFO:(id)fifo;	// 0x2f918431
- (void)addPoint:(CGPoint)point;	// 0x2f9184f1
- (void)clear;	// 0x2f91859d
- (void)dealloc;	// 0x2f9184a5
- (void)flush;	// 0x2f91854d
// declared property setter: - (void)setStrokes:(id)strokes;	// 0x2f9185fd
// declared property getter: - (id)strokes;	// 0x2f9185ed
@end

