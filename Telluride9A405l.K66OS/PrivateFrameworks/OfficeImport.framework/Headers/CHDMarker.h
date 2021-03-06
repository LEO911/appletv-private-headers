/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDMarker : NSObject {
@private
	unsigned mSize;	// 4 = 0x4
	int mStyle;	// 8 = 0x8
	OADGraphicProperties *mGraphicProperties;	// 12 = 0xc
}
@property(retain) id graphicProperties;	// G=0x30d50b69; S=0x30d4f409; converted property
@property(assign) unsigned size;	// G=0x30d50ba9; S=0x30d50bb9; converted property
@property(assign) int style;	// G=0x30d50bc9; S=0x30d50bfd; converted property
- (id)init;	// 0x30d4f1d5
- (void)dealloc;	// 0x30d5cd75
// converted property getter: - (id)graphicProperties;	// 0x30d50b69
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x30d4f409
// converted property setter: - (void)setSize:(unsigned)size;	// 0x30d50bb9
// converted property setter: - (void)setStyle:(int)style;	// 0x30d50bfd
// converted property getter: - (unsigned)size;	// 0x30d50ba9
// converted property getter: - (int)style;	// 0x30d50bc9
@end

