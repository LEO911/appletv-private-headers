/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "QuickLook-Structs.h"
#import "NSMutableCopying.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RTFNSParagraphStyle : NSObject <NSCopying, NSMutableCopying> {
	unsigned _alignment;	// 4 = 0x4
	float _headIndent;	// 8 = 0x8
	float _tailIndent;	// 12 = 0xc
	float _firstLineHeadIndent;	// 16 = 0x10
	NSArray *_textBocks;	// 20 = 0x14
	int _baseWritingDirection;	// 24 = 0x18
}
@property(readonly, assign) unsigned alignment;	// G=0x332a479d; converted property
@property(readonly, assign) int baseWritingDirection;	// G=0x332a47dd; converted property
@property(readonly, assign) float firstLineHeadIndent;	// G=0x332a47cd; converted property
@property(readonly, assign) float headIndent;	// G=0x332a47ad; converted property
@property(readonly, assign) float tailIndent;	// G=0x332a47bd; converted property
- (id)init;	// 0x332a460d
- (id)_initWithParagraphStyle:(id)paragraphStyle;	// 0x332a4639
// converted property getter: - (unsigned)alignment;	// 0x332a479d
// converted property getter: - (int)baseWritingDirection;	// 0x332a47dd
- (id)copyWithZone:(NSZone *)zone;	// 0x332a46f1
- (void)dealloc;	// 0x332a4751
// converted property getter: - (float)firstLineHeadIndent;	// 0x332a47cd
// converted property getter: - (float)headIndent;	// 0x332a47ad
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x332a4701
// converted property getter: - (float)tailIndent;	// 0x332a47bd
@end

