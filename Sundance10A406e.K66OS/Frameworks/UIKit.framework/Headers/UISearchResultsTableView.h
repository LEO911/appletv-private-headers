/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableView.h"

@class UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {
	UISearchDisplayController *_controller;	// 784 = 0x310
	float _offsetForNoResultsMessage;	// 788 = 0x314
	UIView *_topShadowView;	// 792 = 0x318
}
@property(retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;	// G=0x30a1b57d; S=0x30a1584d; 
@property(assign, nonatomic) UISearchDisplayController *controller;	// G=0x30b84875; S=0x30984775; @synthesize=_controller
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x30984719
- (void)_numberOfRowsDidChange;	// 0x30a15175
- (float)_offsetForNoResultsMessage;	// 0x30b84651
- (void)_setOffsetForNoResultsMessage:(float)noResultsMessage;	// 0x30b84641
// declared property setter: - (void)_setTopShadowView:(id)view;	// 0x30a1584d
// declared property getter: - (id)_topShadowView;	// 0x30a1b57d
// declared property getter: - (id)controller;	// 0x30b84875
- (void)setContentOffset:(CGPoint)offset;	// 0x30a15625
// declared property setter: - (void)setController:(id)controller;	// 0x30984775
@end
