/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class BRTextControl, NSString, BRImage, BRReflectionControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
@private
	BRImage *_backgroundImage;	// 44 = 0x2c
	BRTextControl *_titleControl;	// 48 = 0x30
	BRImage *_overlayImage;	// 52 = 0x34
	BRReflectionControl *_reflectionControl;	// 56 = 0x38
	BRTableView *_tableView;	// 60 = 0x3c
	float headerHeight;	// 64 = 0x40
	float _headerHeight;	// 68 = 0x44
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x306d3969; S=0x306d39ad; 
@property(assign, nonatomic) float headerHeight;	// G=0x306d398d; S=0x306d399d; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x306d397d; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x306d3a45; S=0x306d3c41; 
- (id)init;	// 0x306d3b05
- (id)accessibilityLabel;	// 0x306d3cb9
// declared property getter: - (id)backgroundImage;	// 0x306d3969
- (void)dealloc;	// 0x306d3a75
- (void)drawInContext:(CGContextRef)context;	// 0x306d3cf9
// declared property getter: - (float)headerHeight;	// 0x306d398d
- (BOOL)isAccessibilityElement;	// 0x306d3979
- (void)layoutSubcontrols;	// 0x306d3ddd
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x306d39ad
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x306d399d
// declared property setter: - (void)setTitle:(id)title;	// 0x306d3c41
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x306d3c89
// declared property getter: - (id)tableView;	// 0x306d397d
// declared property getter: - (id)title;	// 0x306d3a45
@end
