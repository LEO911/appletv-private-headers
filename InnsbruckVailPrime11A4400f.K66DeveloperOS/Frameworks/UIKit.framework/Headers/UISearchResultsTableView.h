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
	UISearchDisplayController *_controller;	// 836 = 0x344
	float _offsetForNoResultsMessage;	// 840 = 0x348
	UIView *_topShadowView;	// 844 = 0x34c
}
@property(retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;	// G=0x2f528ce5; S=0x2f5230fd; 
@property(assign, nonatomic) UISearchDisplayController *controller;	// G=0x2f725711; S=0x2f4a5fe1; @synthesize=_controller
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x2f4a5f89
- (void)_numberOfRowsDidChange;	// 0x2f522be1
- (float)_offsetForNoResultsMessage;	// 0x2f7254d5
- (void)_setOffsetForNoResultsMessage:(float)noResultsMessage;	// 0x2f7254c5
// declared property setter: - (void)_setTopShadowView:(id)view;	// 0x2f5230fd
// declared property getter: - (id)_topShadowView;	// 0x2f528ce5
// declared property getter: - (id)controller;	// 0x2f725711
- (void)setContentOffset:(CGPoint)offset;	// 0x2f522e71
// declared property setter: - (void)setController:(id)controller;	// 0x2f4a5fe1
@end

