/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton : UIButton {
	SEL m_action;	// 180 = 0xb4
	int m_position;	// 184 = 0xb8
	int m_type;	// 188 = 0xbc
	UITextReplacement *m_textReplacement;	// 192 = 0xc0
	float m_contentWidth;	// 196 = 0xc4
	float m_contentScale;	// 200 = 0xc8
	float m_additionalContentHeight;	// 204 = 0xcc
	float m_dividerOffset;	// 208 = 0xd0
	float m_imageVerticalAdjust;	// 212 = 0xd4
	int m_page;	// 216 = 0xd8
	BOOL m_isText;	// 220 = 0xdc
	BOOL m_configured;	// 221 = 0xdd
	BOOL m_single;	// 222 = 0xde
	BOOL m_padLeft;	// 223 = 0xdf
	BOOL m_padRight;	// 224 = 0xe0
	BOOL m_dontDismiss;	// 225 = 0xe1
	BOOL forceFlash;	// 226 = 0xe2
}
@property(readonly, assign, nonatomic) SEL action;	// G=0x31cf8ead; @synthesize=m_action
@property(readonly, assign, nonatomic) float additionalContentHeight;	// G=0x31d4f7dd; @synthesize=m_additionalContentHeight
@property(readonly, assign, nonatomic) float contentScale;	// G=0x31eb23cd; @synthesize=m_contentScale
@property(readonly, assign, nonatomic) float contentWidth;	// G=0x31d4f7cd; @synthesize=m_contentWidth
@property(assign, nonatomic) float dividerOffset;	// G=0x31d51245; S=0x31d50db5; @synthesize=m_dividerOffset
@property(assign, nonatomic) BOOL dontDismiss;	// G=0x31eb241d; S=0x31cf6c55; @synthesize=m_dontDismiss
@property(assign, nonatomic) BOOL forceFlash;	// G=0x31cf8d8d; S=0x31eb23fd; @synthesize
@property(assign, nonatomic) float imageVerticalAdjust;	// G=0x31eb240d; S=0x31cf6c65; @synthesize=m_imageVerticalAdjust
@property(assign, nonatomic) int page;	// G=0x31d50a35; S=0x31cf8e6d; @synthesize=m_page
@property(retain, nonatomic) UITextReplacement *textReplacement;	// G=0x31eb23ed; S=0x31d98c3d; @synthesize=m_textReplacement
@property(readonly, assign, nonatomic) int type;	// G=0x31eb23dd; @synthesize=m_type
+ (id)buttonWithImage:(id)image action:(SEL)action type:(int)type inView:(id)view;	// 0x31cf68dd
+ (id)buttonWithTitle:(id)title action:(SEL)action type:(int)type inView:(id)view;	// 0x31cf6afd
+ (id)buttonWithTitle:(id)title subtitle:(id)subtitle maxWidth:(float)width action:(SEL)action type:(int)type inView:(id)view;	// 0x31eb1b2d
- (void)_commonSetupWithAction:(SEL)action type:(int)type;	// 0x31cf6a0d
// declared property getter: - (SEL)action;	// 0x31cf8ead
// declared property getter: - (float)additionalContentHeight;	// 0x31d4f7dd
- (CGRect)adjustRectForPosition:(CGRect)position scaleRect:(BOOL)rect;	// 0x31cf95cd
- (void)cancelFlash;	// 0x31eb22d5
- (void)configureForLeftPosition:(int)leftPosition;	// 0x31d50aed
- (void)configureForMiddlePosition;	// 0x31eb21d1
- (void)configureForRightPosition:(int)rightPosition;	// 0x31d50dc5
- (void)configureForSingle:(int)single;	// 0x31d98c69
- (void)configureLabel;	// 0x31cf9745
// declared property getter: - (float)contentScale;	// 0x31eb23cd
// declared property getter: - (float)contentWidth;	// 0x31d4f7cd
- (void)dealloc;	// 0x31eb212d
// declared property getter: - (float)dividerOffset;	// 0x31d51245
// declared property getter: - (BOOL)dontDismiss;	// 0x31eb241d
- (void)fadeAndSendAction;	// 0x31eb227d
- (void)flash;	// 0x31eb2339
// declared property getter: - (BOOL)forceFlash;	// 0x31cf8d8d
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x31cf9519
// declared property getter: - (float)imageVerticalAdjust;	// 0x31eb240d
- (void)layoutSubviews;	// 0x31cf94b1
// declared property getter: - (int)page;	// 0x31d50a35
- (void)removeFromSuperview;	// 0x31eb218d
- (void)setContentScale:(float)scale;	// 0x31d50a45
// declared property setter: - (void)setDividerOffset:(float)offset;	// 0x31d50db5
// declared property setter: - (void)setDontDismiss:(BOOL)dismiss;	// 0x31cf6c55
// declared property setter: - (void)setForceFlash:(BOOL)flash;	// 0x31eb23fd
- (void)setHighlighted:(BOOL)highlighted;	// 0x31cf8cf9
// declared property setter: - (void)setImageVerticalAdjust:(float)adjust;	// 0x31cf6c65
// declared property setter: - (void)setPage:(int)page;	// 0x31cf8e6d
// declared property setter: - (void)setTextReplacement:(id)replacement;	// 0x31d98c3d
- (void)setupWithImage:(id)image action:(SEL)action type:(int)type;	// 0x31cf693d
- (void)setupWithTitle:(id)title action:(SEL)action type:(int)type;	// 0x31cf6b61
- (void)setupWithTitle:(id)title subtitle:(id)subtitle maxWidth:(float)width action:(SEL)action type:(int)type;	// 0x31eb1ba1
// declared property getter: - (id)textReplacement;	// 0x31eb23ed
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x31cf9665
// declared property getter: - (int)type;	// 0x31eb23dd
@end

