/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTAccount.h"
#import "BRUserPasswordAccount.h"


__attribute__((visibility("hidden")))
@interface RUIYTUserPasswordAccount : BRUserPasswordAccount <RUIYTAccount> {
}
@property(assign) BOOL ytAllowsInappropriate;	// G=0x26f631; S=0x26f675; 
+ (int)_currentVersion;	// 0x26f56d
- (id)initWithCoder:(id)coder;	// 0x26f571
- (id)_keychainAccessGroup;	// 0x26f6e5
// declared property setter: - (void)setYtAllowsInappropriate:(BOOL)inappropriate;	// 0x26f675
- (id)type;	// 0x26f6c9
// declared property getter: - (BOOL)ytAllowsInappropriate;	// 0x26f631
@end

