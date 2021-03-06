/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

@interface MFPFont : NSObject {
	float mSize;	// 4 = 0x4
	int mUnit;	// 8 = 0x8
	unsigned long mFlags;	// 12 = 0xc
	NSString *mName;	// 16 = 0x10
}
@property(assign) unsigned long flags;	// G=0x34afd62d; S=0x34afd63d; converted property
@property(retain) id name;	// G=0x34afd64d; S=0x34afd65d; converted property
@property(assign) float size;	// G=0x34afd5ed; S=0x34afd5fd; converted property
@property(assign) int unit;	// G=0x34afd60d; S=0x34afd61d; converted property
- (CTFontRef)createCTFontWithGraphics:(id)graphics;	// 0x34afd69d
- (void)dealloc;	// 0x34afd5a1
// converted property getter: - (unsigned long)flags;	// 0x34afd62d
// converted property getter: - (id)name;	// 0x34afd64d
// converted property setter: - (void)setFlags:(unsigned long)flags;	// 0x34afd63d
// converted property setter: - (void)setName:(id)name;	// 0x34afd65d
// converted property setter: - (void)setSize:(float)size;	// 0x34afd5fd
// converted property setter: - (void)setUnit:(int)unit;	// 0x34afd61d
// converted property getter: - (float)size;	// 0x34afd5ed
// converted property getter: - (int)unit;	// 0x34afd60d
@end

