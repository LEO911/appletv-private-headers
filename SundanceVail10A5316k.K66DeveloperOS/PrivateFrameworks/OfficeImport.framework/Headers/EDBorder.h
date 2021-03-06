/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EDColorReference;

__attribute__((visibility("hidden")))
@interface EDBorder : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mDiagonalType;	// 16 = 0x10
}
@property(assign) int diagonalType;	// G=0x311bb32d; S=0x31229671; converted property
@property(assign) int type;	// G=0x310c9535; S=0x31229661; converted property
+ (id)borderWithType:(int)type color:(id)color diagonalType:(int)type3 resources:(id)resources;	// 0x31229601
+ (id)borderWithType:(int)type color:(id)color resources:(id)resources;	// 0x312295a1
+ (id)borderWithType:(int)type colorReference:(id)reference diagonalType:(int)type3 resources:(id)resources;	// 0x3109cb85
+ (id)borderWithType:(int)type colorReference:(id)reference resources:(id)resources;	// 0x3109ca81
+ (id)borderWithType:(int)type resources:(id)resources;	// 0x3109cac1
- (id)initWithResources:(id)resources;	// 0x3109cb1d
- (id)color;	// 0x310c9655
- (id)colorReference;	// 0x311bb31d
- (void)dealloc;	// 0x310a70c5
// converted property getter: - (int)diagonalType;	// 0x311bb32d
- (unsigned)hash;	// 0x31229635
- (BOOL)isEqual:(id)equal;	// 0x3109cdd5
- (BOOL)isEqualToBorder:(id)border;	// 0x3109ce31
// converted property setter: - (void)setDiagonalType:(int)type;	// 0x31229671
// converted property setter: - (void)setType:(int)type;	// 0x31229661
// converted property getter: - (int)type;	// 0x310c9535
@end

