/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDMarkerOwner.h"
#import "CHDSeries.h"

@class CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
	CHDMarker *mMarker;	// 64 = 0x40
	bool mSmooth;	// 68 = 0x44
}
@property(retain) id marker;	// G=0x33afcc51; S=0x33afc939; converted property
@property(assign, getter=isSmooth) bool smooth;	// G=0x33b48b21; S=0x33b00fcd; converted property
- (id)initWithChart:(id)chart;	// 0x33afc561
- (void)dealloc;	// 0x33afdbe5
// converted property getter: - (bool)isSmooth;	// 0x33b48b21
// converted property getter: - (id)marker;	// 0x33afcc51
// converted property setter: - (void)setMarker:(id)marker;	// 0x33afc939
// converted property setter: - (void)setSmooth:(bool)smooth;	// 0x33b00fcd
@end

