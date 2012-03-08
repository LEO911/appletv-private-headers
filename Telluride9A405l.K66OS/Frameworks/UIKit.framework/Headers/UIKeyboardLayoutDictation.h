/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayout.h"

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout {
@private
	UIDictationView *_dictationView;	// 72 = 0x48
}
+ (float)landscapeHeight;	// 0x32ffb009
+ (float)portraitHeight;	// 0x32ffafc1
- (id)initWithFrame:(CGRect)frame;	// 0x32ffae29
- (void)dealloc;	// 0x32ffaf75
- (CGRect)dictationLayoutFrameForStandardKeyboardLayoutFrame:(CGRect)standardKeyboardLayoutFrame;	// 0x32ffacdd
- (void)layoutSubviews;	// 0x32ffb219
- (void)setFrame:(CGRect)frame;	// 0x32ffb2b9
- (void)showKeyboardType:(int)type withAppearance:(int)appearance;	// 0x32ffb071
- (BOOL)visible;	// 0x32ffb051
@end
