/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import </libobjc.A.h>
#import "PowerlogCoreLoggers-Structs.h"

@class NSDictionary;

@interface PLProcessNetworkStat : NSObject {
	NSDictionary *desc;	// 4 = 0x4
	NSDictionary *counts;	// 8 = 0x8
	NStatSource *source;	// 12 = 0xc
}
@property(copy, nonatomic) NSDictionary *counts;	// G=0x32429361; S=0x32429375; @synthesize
@property(copy, nonatomic) NSDictionary *desc;	// G=0x3242933d; S=0x32429351; @synthesize
@property(assign, nonatomic) NStatSource *source;	// G=0x32429385; S=0x32429395; @synthesize
// declared property getter: - (id)counts;	// 0x32429361
- (void)dealloc;	// 0x32429185
// declared property getter: - (id)desc;	// 0x3242933d
- (id)description;	// 0x324291e9
// declared property setter: - (void)setCounts:(id)counts;	// 0x32429375
// declared property setter: - (void)setDesc:(id)desc;	// 0x32429351
// declared property setter: - (void)setSource:(NStatSource *)source;	// 0x32429395
// declared property getter: - (NStatSource *)source;	// 0x32429385
@end

