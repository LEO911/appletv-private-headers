/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor {
	CIColor *_ciColor;	// 8 = 0x8
	UIColor *_rgbColor;	// 12 = 0xc
}
- (id)initWithCIColor:(id)cicolor;	// 0x30e335a1
- (CGColorRef)CGColor;	// 0x30e3393d
- (id)CIColor;	// 0x30e33965
- (BOOL)_getWhite:(float *)white alpha:(float *)alpha;	// 0x30e33a99
- (id)_rgbColor;	// 0x30e33765
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x30e338b9
- (id)copyWithZone:(NSZone *)zone;	// 0x30e33671
- (void)dealloc;	// 0x30e3360d
- (id)description;	// 0x30e33681
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x30e339fd
- (unsigned)hash;	// 0x30e339dd
- (BOOL)isEqual:(id)equal;	// 0x30e33975
- (void)set;	// 0x30e33841
- (void)setFill;	// 0x30e33869
- (void)setStroke;	// 0x30e33891
@end
