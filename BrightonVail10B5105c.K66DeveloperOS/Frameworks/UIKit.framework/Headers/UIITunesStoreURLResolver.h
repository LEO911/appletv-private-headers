/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIURLResolver.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIITunesStoreURLResolver : UIURLResolver {
	NSArray *_converters;	// 4 = 0x4
}
+ (id)urlCacheChangedNotificationName;	// 0x345f63ed
+ (id)urlCacheName;	// 0x345f5e79
- (id)initWithDictionary:(id)dictionary;	// 0x345f5e85
- (id)_newURLConverterWithHostPatterns:(id)hostPatterns hostWhiteList:(id)list pathPatterns:(id)patterns;	// 0x3478f4b5
- (id)convertedURLForURL:(id)url;	// 0x345f64e5
- (void)dealloc;	// 0x3478f52d
@end
