/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewArtworkLoader : NSObject {
@private
	int _backgroundStyle;	// 4 = 0x4
	NSString *_backgroundSelector;	// 8 = 0x8
}
+ (id)backgroundSelectorForBackgroundStyle:(int)backgroundStyle;	// 0x332831dd
- (id)initWithBackgroundStyle:(int)backgroundStyle;	// 0x3328311d
- (id)bottomArrowLeftEndCapView;	// 0x33284879
- (id)bottomArrowPinnedView;	// 0x33284685
- (id)bottomArrowRightEndCapView;	// 0x33284a45
- (id)bottomArrowView;	// 0x332844b5
- (CGRect)contentRectForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x332832a1
- (CGRect)contentsCenterForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x332832dd
- (void)dealloc;	// 0x33283191
- (id)rightArrowBottomEndCapView;	// 0x332842a1
- (id)rightArrowPinnedBottomView;	// 0x33283ee5
- (id)rightArrowPinnedTopView;	// 0x33283d19
- (id)rightArrowTopEndCapView;	// 0x332840d5
- (id)rightArrowView;	// 0x33283b49
- (id)shortBottomArrowLeftEndCapView;	// 0x33285709
- (id)shortBottomArrowPinnedView;	// 0x33285515
- (id)shortBottomArrowRightEndCapView;	// 0x332858d5
- (id)shortBottomArrowView;	// 0x33285345
- (id)shortRightArrowView;	// 0x33285151
- (id)shortTopArrowLeftEndCapView;	// 0x33284ec5
- (id)shortTopArrowPinnedView;	// 0x33284cd1
- (id)shortTopArrowRightEndCapView;	// 0x33285095
- (id)shortTopArrowView;	// 0x33284b01
- (id)templateImageForDirection:(id)direction shortArtwork:(BOOL)artwork;	// 0x33283219
- (id)topArrowLeftEndCapView;	// 0x332838c1
- (id)topArrowPinnedView;	// 0x332836cd
- (id)topArrowRightEndCapView;	// 0x33283a8d
- (id)topArrowView;	// 0x332834fd
- (id)viewWithContentsImage:(id)contentsImage rect:(CGRect)rect center:(CGRect)center antialiasingMask:(unsigned)mask directionSelector:(id)selector;	// 0x33283371
@end
