/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSIdentityGlyphInfo.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo {
	NSString *_name;	// 16 = 0x10
}
+ (void)initialize;	// 0x32c7828d
- (id)initWithCoder:(id)coder;	// 0x32c783e5
- (id)initWithGlyphName:(id)glyphName glyph:(unsigned)glyph forFont:(id)font baseString:(id)string;	// 0x32c782cd
- (void)dealloc;	// 0x32c7832d
- (id)description;	// 0x32c78481
- (void)encodeWithCoder:(id)coder;	// 0x32c78389
- (id)glyphName;	// 0x32c78379
@end

