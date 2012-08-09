/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADSubBlip;

@interface OADBlip : NSObject {
	unsigned long mReferenceCount;	// 4 = 0x4
	OADSubBlip *mMainSubBlip;	// 8 = 0x8
	OADSubBlip *mAltSubBlip;	// 12 = 0xc
}
@property(retain) id altSubBlip;	// G=0x31c74535; S=0x31c74545; converted property
@property(retain) id mainSubBlip;	// G=0x31bfcc31; S=0x31b9b505; converted property
+ (id)pathExtensionForBlipType:(int)blipType;	// 0x31dca329
// converted property getter: - (id)altSubBlip;	// 0x31c74535
- (void)dealloc;	// 0x31c0d4ed
- (unsigned)hash;	// 0x31dca269
- (BOOL)isEqual:(id)equal;	// 0x31dca2a9
// converted property getter: - (id)mainSubBlip;	// 0x31bfcc31
- (unsigned *)referenceCount;	// 0x31b9b545
// converted property setter: - (void)setAltSubBlip:(id)blip;	// 0x31c74545
// converted property setter: - (void)setMainSubBlip:(id)blip;	// 0x31b9b505
@end
