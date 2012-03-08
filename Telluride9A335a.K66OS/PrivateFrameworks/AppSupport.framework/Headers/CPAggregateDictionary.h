/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPAggregateDictionary : NSObject {
}
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3406dca1; 
+ (id)sharedAggregateDictionary;	// 0x3406dca5
- (void)addValue:(long long)value forKey:(id)key;	// 0x3406dc2d
- (void)clearDistributionKey:(id)key;	// 0x3406dc61
- (void)clearScalarKey:(id)key;	// 0x3406dbd9
- (int)commit;	// 0x3406dbc9
- (void)decrementKey:(id)key;	// 0x3406dc15
- (void)incrementKey:(id)key;	// 0x3406dc01
// declared property getter: - (BOOL)isEnabled;	// 0x3406dca1
- (void)pushValue:(double)value forKey:(id)key;	// 0x3406dc89
- (void)setValue:(double)value forDistributionKey:(id)distributionKey;	// 0x3406dc71
- (void)setValue:(long long)value forScalarKey:(id)scalarKey;	// 0x3406dbe9
- (void)significantTimeChanged;	// 0x3406dbb9
- (void)subtractValue:(long long)value forKey:(id)key;	// 0x3406dc45
@end
