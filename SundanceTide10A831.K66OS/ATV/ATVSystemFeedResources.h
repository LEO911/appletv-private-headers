/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVSystemFeedResources : XXUnknownSuperclass {
	NSDictionary *_bundlesByNamespace;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x166925
- (id)init;	// 0x166989
- (id)_computedResourceNamed:(id)named;	// 0x166db1
- (id)_resourceNamed:(id)named inBundles:(id)bundles;	// 0x166cf5
- (void)dealloc;	// 0x166c09
- (id)feedResourceNamed:(id)named inNamespace:(id)aNamespace;	// 0x166c55
@end
