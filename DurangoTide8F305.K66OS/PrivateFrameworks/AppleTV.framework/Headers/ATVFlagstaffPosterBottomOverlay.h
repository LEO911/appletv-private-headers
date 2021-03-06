/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPosterBottomOverlay : BRControl {
@private
	NSString *_centerText;	// 44 = 0x2c
	NSString *_leftText;	// 48 = 0x30
	NSString *_leftDetailedText;	// 52 = 0x34
	NSString *_rightText;	// 56 = 0x38
	NSString *_rightDetailedText;	// 60 = 0x3c
	BRAsyncImageControl *_centerImageControl;	// 64 = 0x40
}
@property(retain, nonatomic) BRAsyncImageControl *centerImageControl;	// G=0x307cc169; S=0x307cc1c9; @synthesize=_centerImageControl
@property(copy, nonatomic) NSString *centerText;	// G=0x307cc1b9; S=0x307cc36d; @synthesize=_centerText
@property(copy, nonatomic) NSString *leftDetailedText;	// G=0x307cc199; S=0x307cc3c5; @synthesize=_leftDetailedText
@property(copy, nonatomic) NSString *leftText;	// G=0x307cc1a9; S=0x307cc399; @synthesize=_leftText
@property(copy, nonatomic) NSString *rightDetailedText;	// G=0x307cc179; S=0x307cc41d; @synthesize=_rightDetailedText
@property(copy, nonatomic) NSString *rightText;	// G=0x307cc189; S=0x307cc3f1; @synthesize=_rightText
- (id)init;	// 0x307cc2f1
// declared property getter: - (id)centerImageControl;	// 0x307cc169
// declared property getter: - (id)centerText;	// 0x307cc1b9
- (void)dealloc;	// 0x307cc24d
- (void)drawInContext:(CGContextRef)context;	// 0x307cc4c9
- (void)layoutSubcontrols;	// 0x307cc449
// declared property getter: - (id)leftDetailedText;	// 0x307cc199
// declared property getter: - (id)leftText;	// 0x307cc1a9
// declared property getter: - (id)rightDetailedText;	// 0x307cc179
// declared property getter: - (id)rightText;	// 0x307cc189
// declared property setter: - (void)setCenterImageControl:(id)control;	// 0x307cc1c9
// declared property setter: - (void)setCenterText:(id)text;	// 0x307cc36d
// declared property setter: - (void)setLeftDetailedText:(id)text;	// 0x307cc3c5
// declared property setter: - (void)setLeftText:(id)text;	// 0x307cc399
// declared property setter: - (void)setRightDetailedText:(id)text;	// 0x307cc41d
// declared property setter: - (void)setRightText:(id)text;	// 0x307cc3f1
@end

