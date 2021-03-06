/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView {
@private
	UIImageView *_leftImageView;	// 48 = 0x30
	UIImageView *_middleImageView;	// 52 = 0x34
	UIImageView *_rightImageView;	// 56 = 0x38
	NSArray *_activeImages;	// 60 = 0x3c
	NSArray *_inactiveImages;	// 64 = 0x40
	unsigned _isActive : 1;	// 68 = 0x44
	unsigned _centerHandleEnabled : 1;	// 68 = 0x44
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x33c1d551; S=0x33c1d415; 
- (id)initWithFrame:(CGRect)frame;	// 0x33c1ca7d
- (float)_bounceValueForFraction:(float)fraction;	// 0x33c1da4d
- (void)bounce;	// 0x33c1d565
- (void)dealloc;	// 0x33c1ce8d
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x33c1d061
// declared property getter: - (BOOL)isEditing;	// 0x33c1d551
- (CGRect)leftHandleBounds;	// 0x33c1d26d
- (CGRect)leftHandleFrame;	// 0x33c1d289
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x33c1cfd9
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x33c1cf15
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x33c1cf5d
- (CGRect)rightHandleBounds;	// 0x33c1d30d
- (CGRect)rightHandleFrame;	// 0x33c1d369
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x33c1ceed
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x33c1d415
@end

