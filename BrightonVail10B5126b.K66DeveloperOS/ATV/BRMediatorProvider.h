/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMediatorProvider : XXUnknownSuperclass <BRControlFactory, BRProvider> {
	NSMutableArray *_activeMediators;	// 4 = 0x4
	NSMutableArray *_mediators;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediators;	// G=0x35eec5; converted property
+ (id)provider;	// 0x35eab9
+ (id)providerWithControl:(id)control identifier:(id)identifier;	// 0x35ec29
+ (id)providerWithControlArray:(id)controlArray;	// 0x35ede1
+ (id)providerWithControls:(id)controls;	// 0x35ed31
+ (id)providerWithControlsAndIdentifiers:(id)controlsAndIdentifiers;	// 0x35ec75
+ (id)providerWithMediator:(id)mediator;	// 0x35eb05
+ (id)providerWithMediatorArray:(id)mediatorArray;	// 0x35ebdd
+ (id)providerWithMediators:(id)mediators;	// 0x35eb51
- (id)init;	// 0x35ea15
- (id)initWithMediators:(id)mediators;	// 0x35e8ed
- (long)_activeInsertIndexForMediator:(id)mediator;	// 0x35f475
- (void)_activeStateChanged:(id)changed;	// 0x35f2f1
- (void)_controlChanged:(id)changed;	// 0x35f3f9
- (void)_insertMediator:(id)mediator atIndex:(long)index;	// 0x35f50d
- (void)_subscribeToNotificationsForMediator:(id)mediator;	// 0x35f1a9
- (void)_unsubscribeToNotificationsForMediator:(id)mediator;	// 0x35f261
- (void)addMediator:(id)mediator;	// 0x35eed5
- (id)controlFactory;	// 0x35f119
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x35f195
- (id)dataAtIndex:(long)index;	// 0x35f13d
- (long)dataCount;	// 0x35f11d
- (void)dealloc;	// 0x35ea29
- (id)hashForDataAtIndex:(long)index;	// 0x35f15d
- (void)insertMediator:(id)mediator after:(id)after;	// 0x35eff1
- (void)insertMediator:(id)mediator before:(id)before;	// 0x35f051
- (id)mediatorWithIdentifier:(id)identifier;	// 0x35f09d
// converted property getter: - (id)mediators;	// 0x35eec5
- (void)removeMediator:(id)mediator;	// 0x35ef15
@end

