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
+ (CGSize)defaultSize;	// 0x32b325a9
+ (id)grabberImage;	// 0x32b32615
- (id)initWithTableViewCell:(id)tableViewCell;	// 0x32c8da95
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32c8de4d
- (void)cancelTrackingWithEvent:(id)event;	// 0x32da0d19
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32da0c9d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32c8f449
- (id)grabberImage;	// 0x32c8dd5d
- (void)layoutSubviews;	// 0x32c8dca5
- (void)setFrame:(CGRect)frame;	// 0x32c8dc5d
- (BOOL)shouldTrack;	// 0x32c8de49
@end
