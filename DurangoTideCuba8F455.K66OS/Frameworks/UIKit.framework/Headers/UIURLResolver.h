/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIURLResolver : NSObject {
}
+ (void)invalidate;	// 0x3023b9ed
+ (id)sharedResolver;	// 0x30180191
+ (id)urlCacheChangedNotificationName;	// 0x3023a6c9
+ (id)urlCacheName;	// 0x3023a6c5
- (id)init;	// 0x3023a7dd
- (id)initWithDictionary:(id)dictionary;	// 0x3018040d
- (id)_copyRegularExpressionsFromArray:(id)array;	// 0x30180485
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x30183d0d
- (BOOL)_url:(id)url matchesHostPatterns:(id)patterns pathPatterns:(id)patterns3;	// 0x30183c55
- (BOOL)_url:(id)url matchesHostWhitelist:(id)whitelist;	// 0x30180655
- (void)dealloc;	// 0x3023b991
@end

