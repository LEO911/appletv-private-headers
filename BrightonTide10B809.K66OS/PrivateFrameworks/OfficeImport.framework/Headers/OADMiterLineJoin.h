/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADLineJoin.h"
#import "OfficeImport-Structs.h"


@interface OADMiterLineJoin : OADLineJoin {
	float mLimit;	// 12 = 0xc
	unsigned mIsLimitOverridden : 1;	// 16 = 0x10
}
@property(assign) float limit;	// G=0x34a53681; S=0x348ec7dd; converted property
+ (id)defaultProperties;	// 0x348ec74d
- (id)initWithDefaults;	// 0x348ec795
- (id)copyWithZone:(NSZone *)zone;	// 0x34a53609
- (BOOL)isLimitOverridden;	// 0x34a536b1
// converted property getter: - (float)limit;	// 0x34a53681
// converted property setter: - (void)setLimit:(float)limit;	// 0x348ec7dd
@end
