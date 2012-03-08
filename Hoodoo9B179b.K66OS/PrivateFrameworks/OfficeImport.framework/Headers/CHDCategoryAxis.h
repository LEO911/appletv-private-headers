/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDCategoryAxis : CHDAxis {
@private
	bool mAutomatic;	// 128 = 0x80
	bool mNoMultipleLevelLabel;	// 129 = 0x81
	int mLabelAlignment;	// 132 = 0x84
	int mLabelFrequency;	// 136 = 0x88
}
@property(assign, getter=isAutomatic) bool automatic;	// G=0x32998745; S=0x329191ed; converted property
@property(assign) int labelAlignment;	// G=0x32998775; S=0x32919281; converted property
@property(assign) int labelFrequency;	// G=0x32998785; S=0x328a554d; converted property
- (id)initWithResources:(id)resources;	// 0x328a5485
- (void)adjustAxisPositionForHorizontalChart;	// 0x32932715
// converted property getter: - (bool)isAutomatic;	// 0x32998745
- (bool)isNoMultipleLabellevel;	// 0x32998755
// converted property getter: - (int)labelAlignment;	// 0x32998775
// converted property getter: - (int)labelFrequency;	// 0x32998785
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x329191ed
// converted property setter: - (void)setLabelAlignment:(int)alignment;	// 0x32919281
// converted property setter: - (void)setLabelFrequency:(int)frequency;	// 0x328a554d
- (void)setNoMultipleLevelLabel:(bool)label;	// 0x32998765
@end
