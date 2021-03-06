/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDSeries.h"
#import "CHDMarkerOwner.h"

@class CHDMarker;

__attribute__((visibility("hidden")))
@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
@private
	CHDMarker *mMarker;	// 64 = 0x40
	bool mSmooth;	// 68 = 0x44
}
@property(retain) id marker;	// G=0x344e290d; S=0x344e1451; converted property
@property(assign, getter=isSmooth) bool smooth;	// G=0x345d9d41; S=0x344e10b9; converted property
- (id)initWithChart:(id)chart;	// 0x344e0f19
- (void)dealloc;	// 0x344eed29
// converted property getter: - (bool)isSmooth;	// 0x345d9d41
// converted property getter: - (id)marker;	// 0x344e290d
// converted property setter: - (void)setMarker:(id)marker;	// 0x344e1451
// converted property setter: - (void)setSmooth:(bool)smooth;	// 0x344e10b9
@end

