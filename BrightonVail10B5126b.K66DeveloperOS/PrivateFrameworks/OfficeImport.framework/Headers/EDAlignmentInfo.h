/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
	int mHorizontalAlignment;	// 4 = 0x4
	int mVerticalAlignment;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	int mTextRotation;	// 16 = 0x10
	bool mTextWrapped;	// 20 = 0x14
	bool mHorizontalAlignOverridden;	// 21 = 0x15
	bool mVerticalAlignOverridden;	// 22 = 0x16
	bool mIndentOverridden;	// 23 = 0x17
	bool mTextWrappedOveridden;	// 24 = 0x18
	bool mDoNotModify;	// 25 = 0x19
}
@property(assign) int horizontalAlignment;	// G=0x348ba92d; S=0x34898039; converted property
@property(assign) int indent;	// G=0x348bbd0d; S=0x348980b5; converted property
@property(assign) int textRotation;	// G=0x348bc321; S=0x34898125; converted property
@property(assign, getter=isTextWrapped) bool textWrapped;	// G=0x348bbd1d; S=0x348980ed; converted property
@property(assign) int verticalAlignment;	// G=0x348bbcbd; S=0x3489807d; converted property
+ (id)alignmentInfo;	// 0x34897f21
- (id)init;	// 0x34897f69
- (id)copyWithZone:(NSZone *)zone;	// 0x34a24f21
- (unsigned)hash;	// 0x34a24f45
// converted property getter: - (int)horizontalAlignment;	// 0x348ba92d
// converted property getter: - (int)indent;	// 0x348bbd0d
- (BOOL)isEqual:(id)equal;	// 0x34898fe1
- (BOOL)isEqualToAlignmentInfo:(id)alignmentInfo;	// 0x3489903d
- (bool)isHorizontalAlignOverridden;	// 0x348ba919
- (bool)isIndentOverridden;	// 0x348c5a05
// converted property getter: - (bool)isTextWrapped;	// 0x348bbd1d
- (bool)isTextWrappedOverridden;	// 0x348bc449
- (bool)isVerticalAlignOverridden;	// 0x348bbca9
- (void)setDoNotModify:(bool)modify;	// 0x348981cd
// converted property setter: - (void)setHorizontalAlignment:(int)alignment;	// 0x34898039
// converted property setter: - (void)setIndent:(int)indent;	// 0x348980b5
// converted property setter: - (void)setTextRotation:(int)rotation;	// 0x34898125
// converted property setter: - (void)setTextWrapped:(bool)wrapped;	// 0x348980ed
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x3489807d
// converted property getter: - (int)textRotation;	// 0x348bc321
// converted property getter: - (int)verticalAlignment;	// 0x348bbcbd
@end

