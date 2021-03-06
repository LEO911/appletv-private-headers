/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRMenuItemLayerFactory : BRSingleton {
	NSArray *_populators;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x32f5cd
+ (id)singleton;	// 0x32f5bd
- (id)init;	// 0x32f5dd
- (id)_populatorForObject:(id)object;	// 0x32fa09
- (void)dealloc;	// 0x32f699
- (id)menuItemForObject:(id)object;	// 0x32f925
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x32f961
- (float)menuItemHeightForObject:(id)object;	// 0x32f939
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x32f999
- (void)registerPopulator:(Class)populator;	// 0x32f6e5
- (id)titleForObject:(id)object;	// 0x32f94d
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x32f9d1
@end

