/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLDisplayBundle.h"
#import "QuickLook-Structs.h"

@class UITextView, UIImageView, UILabel, UIView, NSError;

@interface QLGenericDisplayBundle : QLDisplayBundle {
	UIView *_containerView;	// 272 = 0x110
	UIImageView *_iconView;	// 276 = 0x114
	UILabel *_titleLabel;	// 280 = 0x118
	UITextView *_subtitleLabel;	// 284 = 0x11c
	NSError *_error;	// 288 = 0x120
}
@property(retain) NSError *error;	// G=0x341e1095; S=0x341e10a9; @synthesize=_error
- (void)_loadPreviewItemInfos;	// 0x341e0d09
- (void)_relayout;	// 0x341e0a05
- (void)_showLoadingProgress:(BOOL)progress;	// 0x341e1091
// declared property getter: - (id)error;	// 0x341e1095
- (void)loadView;	// 0x341e0671
- (void)loadWithHints:(id)hints;	// 0x341e1061
// declared property setter: - (void)setError:(id)error;	// 0x341e10a9
@end

