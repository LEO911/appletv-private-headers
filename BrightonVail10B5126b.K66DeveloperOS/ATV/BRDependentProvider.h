/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRProviderGroup;

__attribute__((visibility("hidden")))
@interface BRDependentProvider : XXUnknownSuperclass <BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRProviderGroup *_providerGroup;	// 8 = 0x8
	long _threshold;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
}
@property(readonly, assign) long threshold;	// G=0x35e4b9; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x35e10d
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x35e165
- (void)_groupDataCountChanged:(id)changed;	// 0x35e4c9
- (void)_providerDataSetChanged:(id)changed;	// 0x35e575
- (void)_providerItemsModified:(id)modified;	// 0x35e5d1
- (id)controlFactory;	// 0x35e3dd
- (id)dataAtIndex:(long)index;	// 0x35e431
- (long)dataCount;	// 0x35e3fd
- (void)dealloc;	// 0x35e34d
- (id)hashForDataAtIndex:(long)index;	// 0x35e465
- (id)providers;	// 0x35e499
// converted property getter: - (long)threshold;	// 0x35e4b9
@end

