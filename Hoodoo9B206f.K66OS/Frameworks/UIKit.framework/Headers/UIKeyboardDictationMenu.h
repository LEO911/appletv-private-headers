/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView {
}
+ (id)activeInstance;	// 0x356ccaf5
+ (id)sharedInstance;	// 0x356cca99
- (id)initWithFrame:(CGRect)frame;	// 0x356cc95d
- (BOOL)centerPopUpOverKey;	// 0x356ccb35
- (void)cleanupForFadeOrHide;	// 0x356cd1b5
- (void)fade;	// 0x356cd23d
- (void)fadeWithDelay:(double)delay;	// 0x356cd27d
- (void)hide;	// 0x356cd2c5
- (void)performShowAnimation;	// 0x356ccbf1
- (CGSize)preferredSize;	// 0x356ccb05
- (void)setKeyboardDimmedForDictation:(BOOL)dictation;	// 0x356ccb39
- (void)show;	// 0x356cd121
- (BOOL)usesTable;	// 0x356ccb31
@end

