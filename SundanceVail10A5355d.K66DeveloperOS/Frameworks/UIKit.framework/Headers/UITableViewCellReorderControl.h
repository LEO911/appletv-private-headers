/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl {
	UITableViewCell *_cell;	// 108 = 0x6c
	CGPoint _downPoint;	// 112 = 0x70
}
+ (CGSize)defaultSize;	// 0x33a512e9
+ (id)grabberImage;	// 0x33a51355
- (id)initWithTableViewCell:(id)tableViewCell;	// 0x33b1fd4d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33b200d1
- (void)cancelTrackingWithEvent:(id)event;	// 0x33c83c09
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33b22599
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33b229f9
- (id)grabberImage;	// 0x33b20015
- (void)layoutSubviews;	// 0x33b1ff5d
- (void)setFrame:(CGRect)frame;	// 0x33b1ff15
- (BOOL)shouldTrack;	// 0x33b200cd
@end

