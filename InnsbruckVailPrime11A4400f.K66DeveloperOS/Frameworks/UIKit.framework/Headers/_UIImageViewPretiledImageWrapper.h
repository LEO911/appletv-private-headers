/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class _UIImageViewPretiledImageCacheKey, UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageWrapper : NSObject {
	UIImage *_pretiledImage;	// 4 = 0x4
	_UIImageViewPretiledImageCacheKey *_cacheKey;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) UIImage *pretiledImage;	// G=0x2f85d40d; @synthesize=_pretiledImage
+ (id)cacheValueWithPretiledImage:(id)pretiledImage cacheKey:(id)key;	// 0x2f85d225
- (void)dealloc;	// 0x2f85d2b5
- (id)description;	// 0x2f85d3a9
- (unsigned)hash;	// 0x2f85d335
- (BOOL)isEqual:(id)equal;	// 0x2f85d355
// declared property getter: - (id)pretiledImage;	// 0x2f85d40d
@end
