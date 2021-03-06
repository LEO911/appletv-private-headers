/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIProgressIndicator, UILabel, UIWindow;

@interface UIProgressHUD : UIView {
	UIProgressIndicator *_progressIndicator;	// 44 = 0x2c
	UILabel *_progressMessage;	// 48 = 0x30
	UIImageView *_doneView;	// 52 = 0x34
	UIWindow *_parentWindow;	// 56 = 0x38
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	} _progressHUDFlags;	// 60 = 0x3c
}
- (id)initWithFrame:(CGRect)frame;	// 0x32126165
- (id)initWithWindow:(id)window;	// 0x32125e81
- (id)_progressIndicator;	// 0x32125e39
- (void)dealloc;	// 0x32125eb9
- (void)done;	// 0x3212641d
- (void)drawRect:(CGRect)rect;	// 0x321260bd
- (void)hide;	// 0x32125f89
- (void)layoutSubviews;	// 0x321264dd
- (void)setFontSize:(int)size;	// 0x32126015
- (void)setShowsText:(BOOL)text;	// 0x32126069
- (void)setText:(id)text;	// 0x321263cd
- (void)show:(BOOL)show;	// 0x32125e49
- (void)showInView:(id)view;	// 0x32125fcd
@end

