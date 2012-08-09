/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, _UIImageViewPretiledImageCacheKey;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageWrapper : NSObject {
	UIImage *_pretiledImage;	// 4 = 0x4
	_UIImageViewPretiledImageCacheKey *_cacheKey;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) UIImage *pretiledImage;	// G=0x30fc7889; @synthesize=_pretiledImage
+ (id)cacheValueWithPretiledImage:(id)pretiledImage cacheKey:(id)key;	// 0x30fc76c1
- (void)dealloc;	// 0x30fc7741
- (id)description;	// 0x30fc782d
- (unsigned)hash;	// 0x30fc77b9
- (BOOL)isEqual:(id)equal;	// 0x30fc77d9
// declared property getter: - (id)pretiledImage;	// 0x30fc7889
@end
