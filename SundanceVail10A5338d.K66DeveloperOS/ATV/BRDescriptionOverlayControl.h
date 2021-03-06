/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRMediaPlayer, NSAttributedString, NSString, BRImage;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRDescriptionOverlayControl : BRControl {
	BRControl *_customOverlay;	// 80 = 0x50
	CGColorRef _fillColor;	// 84 = 0x54
	BRMediaPlayer *_player;	// 88 = 0x58
	id<BRMediaAsset> _asset;	// 92 = 0x5c
	NSString *_imageID;	// 96 = 0x60
	BRImage *_image;	// 100 = 0x64
	BRImage *_ratingImage;	// 104 = 0x68
	NSAttributedString *_title;	// 108 = 0x6c
	NSAttributedString *_publisher;	// 112 = 0x70
	NSAttributedString *_description;	// 116 = 0x74
	NSAttributedString *_pressAndHoldDescription;	// 120 = 0x78
	BOOL _showPressAndHoldDescription;	// 124 = 0x7c
	NSTimer *_fadeTimer;	// 128 = 0x80
}
- (id)init;	// 0x29cc81
- (void)_fadeOverlay:(id)overlay;	// 0x29e641
- (void)_hideOverlay;	// 0x29e565
- (void)_imageUpdated:(id)updated;	// 0x29e479
- (id)_pressAndHoldDescriptionAttributes;	// 0x29e3ad
- (BOOL)_pressAndHoldOptionAvailable;	// 0x29e3cd
- (void)_setImage:(id)image;	// 0x29e35d
- (void)_showOverlay;	// 0x29e5dd
- (void)_showOverlayWithTimeout:(float)timeout;	// 0x29ddbd
- (void)_updateCurrentMediaInfo;	// 0x29de59
- (id)accessibilityLabel;	// 0x29dd0d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x29e769
- (void)dealloc;	// 0x29cd25
- (void)drawRect:(CGRect)rect;	// 0x29d189
- (BOOL)hasContent;	// 0x29cf05
- (void)hideOverlay;	// 0x29cf79
- (BOOL)isAccessibilityElement;	// 0x29ddb9
- (void)layoutSubcontrols;	// 0x29d09d
- (void)setAsset:(id)asset;	// 0x29cea5
- (void)setPlayer:(id)player;	// 0x29ce69
- (void)showOverlayWithLongTimeout;	// 0x29cf89
- (void)showOverlayWithLongTimeoutFromTouchRemote;	// 0x29d041
- (void)showOverlayWithShortTimeout;	// 0x29cfe5
@end

