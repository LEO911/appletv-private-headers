/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSArray;

@interface BRMenuItemLayerFactory : BRSingleton {
@private
	NSArray *_populators;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x3325df85
+ (id)singleton;	// 0x3325df75
- (id)init;	// 0x3325df95
- (id)_populatorForObject:(id)object;	// 0x3325e3bd
- (void)dealloc;	// 0x3325e04d
- (id)menuItemForObject:(id)object;	// 0x3325e2c9
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x3325e305
- (float)menuItemHeightForObject:(id)object;	// 0x3325e2dd
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x3325e33d
- (void)registerPopulator:(Class)populator;	// 0x3325e099
- (id)titleForObject:(id)object;	// 0x3325e2f1
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3325e381
@end
