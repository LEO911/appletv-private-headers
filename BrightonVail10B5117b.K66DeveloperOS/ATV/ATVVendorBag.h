/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVVendorBag : XXUnknownSuperclass {
	NSDictionary *_bag;	// 4 = 0x4
	BOOL _originatesFromStore;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDictionary *appConfiguration;	// G=0x3890bd; 
@property(retain, nonatomic) NSDictionary *bag;	// G=0x3894f1; S=0x389501; @synthesize=_bag
@property(readonly, assign, nonatomic) NSDictionary *feedResources;	// G=0x389095; 
@property(readonly, assign, nonatomic) BOOL isEnabled;	// G=0x389005; 
@property(readonly, assign, nonatomic) BOOL isTrusted;	// G=0x388da9; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x389045; 
@property(readonly, assign, nonatomic) NSDictionary *metadata;	// G=0x38906d; 
@property(assign, nonatomic) BOOL originatesFromStore;	// G=0x389511; S=0x389521; @synthesize=_originatesFromStore
+ (id)vendorBagWithDictionary:(id)dictionary;	// 0x388b31
+ (id)vendorBagsWithDictionaries:(id)dictionaries;	// 0x388a25
- (id)initWithDictionary:(id)dictionary;	// 0x388b6d
- (id)_normalizeBag:(id)bag;	// 0x3891d1
- (BOOL)_originatesFromStore:(id)store;	// 0x389475
- (id)_rehydrateDictionary:(id)dictionary fromBag:(id)bag;	// 0x3890e5
// declared property getter: - (id)appConfiguration;	// 0x3890bd
- (id)appConfigurationForKey:(id)key;	// 0x388d7d
// declared property getter: - (id)bag;	// 0x3894f1
- (void)dealloc;	// 0x388c19
- (id)description;	// 0x388c65
- (id)feedResourceForKey:(id)key;	// 0x388d25
// declared property getter: - (id)feedResources;	// 0x389095
// declared property getter: - (BOOL)isEnabled;	// 0x389005
// declared property getter: - (BOOL)isTrusted;	// 0x388da9
// declared property getter: - (id)merchantID;	// 0x389045
// declared property getter: - (id)metadata;	// 0x38906d
- (id)metadatumForKey:(id)key;	// 0x388d51
// declared property getter: - (BOOL)originatesFromStore;	// 0x389511
// declared property setter: - (void)setBag:(id)bag;	// 0x389501
// declared property setter: - (void)setOriginatesFromStore:(BOOL)store;	// 0x389521
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x388d05
@end

