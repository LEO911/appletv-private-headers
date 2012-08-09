/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSNumber;

@interface SASource : SADomainObject {
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x3796dccd; S=0x3796dce9; 
@property(copy, nonatomic) NSString *accountName;	// G=0x3796dd39; S=0x3796dd55; 
@property(copy, nonatomic) NSString *domainIdentifier;	// G=0x3796dda5; S=0x3796ddc1; 
@property(copy, nonatomic) NSNumber *remote;	// G=0x3796de11; S=0x3796de2d; 
+ (id)source;	// 0x3796dc3d
+ (id)sourceWithDictionary:(id)dictionary context:(id)context;	// 0x3796dc81
// declared property getter: - (id)accountIdentifier;	// 0x3796dccd
// declared property getter: - (id)accountName;	// 0x3796dd39
// declared property getter: - (id)domainIdentifier;	// 0x3796dda5
- (id)encodedClassName;	// 0x3796dc31
- (id)groupIdentifier;	// 0x3796dc21
// declared property getter: - (id)remote;	// 0x3796de11
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x3796dce9
// declared property setter: - (void)setAccountName:(id)name;	// 0x3796dd55
// declared property setter: - (void)setDomainIdentifier:(id)identifier;	// 0x3796ddc1
// declared property setter: - (void)setRemote:(id)remote;	// 0x3796de2d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3796de7d
@end
