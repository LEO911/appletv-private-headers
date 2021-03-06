/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRPhotoProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_collections;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
}
@property(retain) id controlFactory;	// G=0x293a59; S=0x293a1d; converted property
+ (id)providerWithCollections:(id)collections controlFactory:(id)factory;	// 0x293901
- (id)initWithCollections:(id)collections controlFactory:(id)factory;	// 0x293941
// converted property getter: - (id)controlFactory;	// 0x293a59
- (id)dataAtIndex:(long)index;	// 0x293a89
- (long)dataCount;	// 0x293a69
- (void)dealloc;	// 0x2939b9
- (id)hashForDataAtIndex:(long)index;	// 0x293ad5
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x293a1d
@end

