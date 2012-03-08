/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRImageControl, BRDividerControl, BRImage, BRReflectionControl, BRHeaderControl, BRTableView, NSString;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsView : BRControl {
@private
	BRDividerControl *_leftDivider;	// 48 = 0x30
	BRImageControl *_leftBackgroundImageControl;	// 52 = 0x34
	BRReflectionControl *_leftReflectionControl;	// 56 = 0x38
	BRDividerControl *_rightDivider;	// 60 = 0x3c
	BRImageControl *_rightBackgroundImageControl;	// 64 = 0x40
	BRReflectionControl *_rightReflectionControl;	// 68 = 0x44
	BRControl *_dimControl;	// 72 = 0x48
	BRHeaderControl *_headerControl;	// 76 = 0x4c
	BRTableView *_leftTable;	// 80 = 0x50
	BRTableView *_rightTable;	// 84 = 0x54
}
@property(retain, nonatomic) BRImage *headerImage;	// G=0x3414cfc5; S=0x3414cf5d; 
@property(retain, nonatomic) BRImage *leftBackgroundImage;	// G=0x3414d029; S=0x3414cfe5; 
@property(readonly, assign, nonatomic) BRTableView *leftTable;	// G=0x3414d63d; @synthesize=_leftTable
@property(retain, nonatomic) BRImage *rightBackgroundImage;	// G=0x3414d08d; S=0x3414d049; 
@property(readonly, assign, nonatomic) BRTableView *rightTable;	// G=0x3414d64d; @synthesize=_rightTable
@property(readonly, assign, nonatomic) float tableWidth;	// G=0x3414d0ad; 
@property(copy, nonatomic) NSString *title;	// G=0x3414cf3d; S=0x3414cf1d; 
- (id)init;	// 0x3414cb8d
- (id)accessibilityLabel;	// 0x3414d5c5
- (id)accessibilityNonFocusableElements;	// 0x3414d5e5
- (void)dealloc;	// 0x3414ce1d
// declared property getter: - (id)headerImage;	// 0x3414cfc5
- (void)layoutSubcontrols;	// 0x3414d0b9
// declared property getter: - (id)leftBackgroundImage;	// 0x3414d029
// declared property getter: - (id)leftTable;	// 0x3414d63d
// declared property getter: - (id)rightBackgroundImage;	// 0x3414d08d
// declared property getter: - (id)rightTable;	// 0x3414d64d
// declared property setter: - (void)setHeaderImage:(id)image;	// 0x3414cf5d
// declared property setter: - (void)setLeftBackgroundImage:(id)image;	// 0x3414cfe5
// declared property setter: - (void)setRightBackgroundImage:(id)image;	// 0x3414d049
// declared property setter: - (void)setTitle:(id)title;	// 0x3414cf1d
// declared property getter: - (float)tableWidth;	// 0x3414d0ad
// declared property getter: - (id)title;	// 0x3414cf3d
@end
