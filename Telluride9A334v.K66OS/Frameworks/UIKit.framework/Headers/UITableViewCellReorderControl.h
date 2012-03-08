/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl {
@private
	UITableViewCell *_cell;	// 72 = 0x48
	CGPoint _downPoint;	// 76 = 0x4c
}
+ (CGSize)defaultSize;	// 0x30090805
+ (id)grabberImage;	// 0x3009087d
- (id)initWithTableViewCell:(id)tableViewCell;	// 0x3016c1c5
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3016c555
- (void)cancelTrackingWithEvent:(id)event;	// 0x302d745d
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3016eb0d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3016ef75
- (id)grabberImage;	// 0x3016c4a1
- (void)layoutSubviews;	// 0x3016c3e1
- (void)setFrame:(CGRect)frame;	// 0x3016c399
- (BOOL)shouldTrack;	// 0x3016c551
@end
