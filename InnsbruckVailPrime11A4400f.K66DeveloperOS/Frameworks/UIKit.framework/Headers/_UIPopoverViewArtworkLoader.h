/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewArtworkLoader : NSObject {
	int _backgroundStyle;	// 4 = 0x4
	NSString *_backgroundSelector;	// 8 = 0x8
}
+ (id)backgroundSelectorForBackgroundStyle:(int)backgroundStyle;	// 0x2f872859
- (id)initWithBackgroundStyle:(int)backgroundStyle;	// 0x2f872799
- (float)arrowBase;	// 0x2f872d19
- (float)arrowHeight;	// 0x2f872ced
- (float)arrowTopGradientEnd;	// 0x2f872db9
- (id)bottomArrowLeftEndCapView;	// 0x2f874ec9
- (id)bottomArrowPinnedView;	// 0x2f874bf1
- (id)bottomArrowRightEndCapView;	// 0x2f875165
- (id)bottomArrowView;	// 0x2f874939
- (float)bottomEndCapHeight;	// 0x2f872e3d
- (float)capCornerRadius;	// 0x2f872e11
- (float)clampArrowBase;	// 0x2f872d8d
- (CGRect)contentRectForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x2f872a3d
- (CGRect)contentsCenterForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x2f872a79
- (void)dealloc;	// 0x2f87280d
- (BOOL)modern;	// 0x2f8728c1
- (float)noArrowTopGradientEnd;	// 0x2f872de5
- (id)rightArrowBottomEndCapView;	// 0x2f874615
- (id)rightArrowPinnedBottomView;	// 0x2f873f39
- (id)rightArrowPinnedTopView;	// 0x2f873ca1
- (id)rightArrowTopEndCapView;	// 0x2f87420d
- (id)rightArrowView;	// 0x2f873a0d
- (float)shortArtArrowTopGradientEnd;	// 0x2f872e95
- (float)shortArtNoArrowTopGradientEnd;	// 0x2f872e69
- (float)shortArtRightArrowBase;	// 0x2f872ec1
- (id)shortBottomArrowLeftEndCapView;	// 0x2f87662d
- (id)shortBottomArrowPinnedView;	// 0x2f876355
- (id)shortBottomArrowRightEndCapView;	// 0x2f8768c9
- (id)shortBottomArrowView;	// 0x2f87609d
- (id)shortRightArrowView;	// 0x2f875d69
- (id)shortTopArrowLeftEndCapView;	// 0x2f875a2d
- (id)shortTopArrowPinnedView;	// 0x2f875771
- (id)shortTopArrowRightEndCapView;	// 0x2f875cad
- (id)shortTopArrowView;	// 0x2f8754dd
- (float)sideArrowStart;	// 0x2f872d61
- (id)templateImageForDirection:(id)direction shortArtwork:(BOOL)artwork;	// 0x2f8728e1
- (id)topArrowLeftEndCapView;	// 0x2f87343d
- (id)topArrowPinnedView;	// 0x2f873181
- (id)topArrowRightEndCapView;	// 0x2f8736b5
- (float)topArrowStart;	// 0x2f872d35
- (id)topArrowView;	// 0x2f872eed
- (id)viewWithContentsImage:(id)contentsImage rect:(CGRect)rect center:(CGRect)center antialiasingMask:(unsigned)mask directionSelector:(id)selector;	// 0x2f872b05
@end
