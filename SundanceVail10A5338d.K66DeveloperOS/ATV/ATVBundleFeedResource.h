/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVReadOnlyFeedResource.h"

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface ATVBundleFeedResource : XXUnknownSuperclass <ATVReadOnlyFeedResource> {
	NSString *_basePath;	// 4 = 0x4
	NSBundle *_bundle;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x149735; 
+ (void)initialize;	// 0x1495b5
- (id)initWithBundlePath:(id)bundlePath;	// 0x149621
- (void)dealloc;	// 0x1496d1
- (id)feedResourceNamed:(id)named;	// 0x149745
// declared property getter: - (id)path;	// 0x149735
@end

