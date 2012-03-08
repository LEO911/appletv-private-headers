/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <NSCopying> {
@private
	NSString *mName;	// 4 = 0x4
	NSString *mSecondName;	// 8 = 0x8
	int mFontFamily;	// 12 = 0xc
	int mCharacterSet;	// 16 = 0x10
	int mPitch;	// 20 = 0x14
}
@property(assign) int characterSet;	// G=0x34e0abd9; S=0x34c9a035; converted property
@property(assign) int fontFamily;	// G=0x34e0abc9; S=0x34c9a025; converted property
@property(retain) id name;	// G=0x34cb4fbd; S=0x34e0abf9; converted property
@property(assign) int pitch;	// G=0x34e0abe9; S=0x34c9a015; converted property
@property(retain) id secondName;	// G=0x34e0abb9; S=0x34ca0b21; converted property
- (id)init;	// 0x34e0ae95
- (id)initWithName:(id)name;	// 0x34c99f5d
// converted property getter: - (int)characterSet;	// 0x34e0abd9
- (id)copyWithZone:(NSZone *)zone;	// 0x34e0ac39
- (void)dealloc;	// 0x34c20785
// converted property getter: - (int)fontFamily;	// 0x34e0abc9
- (unsigned)hash;	// 0x34e0ae25
- (BOOL)isEqual:(id)equal;	// 0x34e0aced
// converted property getter: - (id)name;	// 0x34cb4fbd
// converted property getter: - (int)pitch;	// 0x34e0abe9
// converted property getter: - (id)secondName;	// 0x34e0abb9
// converted property setter: - (void)setCharacterSet:(int)set;	// 0x34c9a035
// converted property setter: - (void)setFontFamily:(int)family;	// 0x34c9a025
// converted property setter: - (void)setName:(id)name;	// 0x34e0abf9
// converted property setter: - (void)setPitch:(int)pitch;	// 0x34c9a015
// converted property setter: - (void)setSecondName:(id)name;	// 0x34ca0b21
@end
