/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextSelectionRect.h"

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectImpl : UITextSelectionRect {
	WebSelectionRect *webRect;	// 4 = 0x4
}
@property(retain, nonatomic) WebSelectionRect *webRect;	// G=0x32da8a29; S=0x32da89d9; @synthesize
+ (id)rectWithWebRect:(id)webRect;	// 0x32da8941
+ (id)rectsWithWebRects:(id)webRects;	// 0x32e4c5a1
- (id)initWithWebRect:(id)webRect;	// 0x32da898d
- (BOOL)containsEnd;	// 0x32e4d59d
- (BOOL)containsStart;	// 0x32e4d2ed
- (void)dealloc;	// 0x32dac005
- (BOOL)isVertical;	// 0x32e4d315
- (id)range;	// 0x32f94eb9
- (CGRect)rect;	// 0x32da89e9
// declared property setter: - (void)setWebRect:(id)rect;	// 0x32da89d9
// declared property getter: - (id)webRect;	// 0x32da8a29
- (int)writingDirection;	// 0x32e4d349
@end

