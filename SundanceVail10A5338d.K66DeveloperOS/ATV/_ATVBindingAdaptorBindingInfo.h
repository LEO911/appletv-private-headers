/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVBindingInfo.h"


__attribute__((visibility("hidden")))
@interface _ATVBindingAdaptorBindingInfo : ATVBindingInfo {
	objc_method *_instanceMethodForUpdate;	// 16 = 0x10
}
@property(assign) objc_method *instanceMethodForUpdate;	// G=0x239025; S=0x239039; @synthesize=_instanceMethodForUpdate
- (id)initWithObservedObject:(id)observedObject observedKeyPath:(id)path bindingOptions:(id)options instanceMethodForUpdate:(objc_method *)update;	// 0x238f31
- (id)description;	// 0x238f79
// declared property getter: - (objc_method *)instanceMethodForUpdate;	// 0x239025
// declared property setter: - (void)setInstanceMethodForUpdate:(objc_method *)update;	// 0x239039
@end

