/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextPlane : BRControl {
@private
	NSAttributedString *_string;	// 48 = 0x30
	float _pursuitGap;	// 52 = 0x34
	CGSize _cachedNaturalTextSize;	// 56 = 0x38
}
@property(retain) id attributedString;	// G=0x35e0de8d; S=0x35e0ddfd; converted property
+ (Class)layerClass;	// 0x35e0dd95
// converted property getter: - (id)attributedString;	// 0x35e0de8d
- (void)dealloc;	// 0x35e0ddb1
- (void)drawInContext:(CGContextRef)context;	// 0x35e0dfa5
- (CGSize)naturalTextSize;	// 0x35e0df09
// converted property setter: - (void)setAttributedString:(id)string;	// 0x35e0ddfd
- (void)setPursuitGap:(float)gap;	// 0x35e0de9d
- (void)setTileSize:(CGSize)size;	// 0x35e0ded9
@end
