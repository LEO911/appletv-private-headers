/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDSheet.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet {
@private
	CHDChart *mMainChart;	// 60 = 0x3c
	bool mIsBoundsSet;	// 64 = 0x40
	CGRect mBounds;	// 68 = 0x44
}
@property(assign) CGRect bounds;	// G=0x32c3c1cd; S=0x32c29189; converted property
@property(retain) id mainChart;	// G=0x32c3c339; S=0x32c38265; converted property
- (void)addDrawable:(id)drawable;	// 0x32c477a9
- (bool)areBoundsSet;	// 0x32cf067d
// converted property getter: - (CGRect)bounds;	// 0x32c3c1cd
// converted property getter: - (id)mainChart;	// 0x32c3c339
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x32c29189
// converted property setter: - (void)setMainChart:(id)chart;	// 0x32c38265
- (void)teardown;	// 0x32c48b01
@end

