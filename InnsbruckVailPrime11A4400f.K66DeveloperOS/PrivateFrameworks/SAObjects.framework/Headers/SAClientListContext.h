/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString, NSArray;

@interface SAClientListContext : SADomainObject {
}
@property(copy, nonatomic) NSString *appId;	// G=0x326e0c35; S=0x326e0c51; 
@property(copy, nonatomic) NSArray *domainObjects;	// G=0x326e0ca1; S=0x326e0d09; 
@property(copy, nonatomic) NSNumber *selectedItemIndex;	// G=0x326e0d71; S=0x326e0d8d; 
+ (id)clientListContext;	// 0x326e0ba5
+ (id)clientListContextWithDictionary:(id)dictionary context:(id)context;	// 0x326e0be9
// declared property getter: - (id)appId;	// 0x326e0c35
// declared property getter: - (id)domainObjects;	// 0x326e0ca1
- (id)encodedClassName;	// 0x326e0b99
- (id)groupIdentifier;	// 0x326e0b89
// declared property getter: - (id)selectedItemIndex;	// 0x326e0d71
// declared property setter: - (void)setAppId:(id)anId;	// 0x326e0c51
// declared property setter: - (void)setDomainObjects:(id)objects;	// 0x326e0d09
// declared property setter: - (void)setSelectedItemIndex:(id)index;	// 0x326e0d8d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326e0ddd
@end
