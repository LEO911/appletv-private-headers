/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject {
}
@property(copy, nonatomic) NSString *groupName;	// G=0x304e0b9d; S=0x304e0bb9; 
@property(retain, nonatomic) SASource *groupSource;	// G=0x304e0c09; S=0x304e0c5d; 
+ (id)contactGroup;	// 0x304e0b0d
+ (id)contactGroupWithDictionary:(id)dictionary context:(id)context;	// 0x304e0b51
- (id)encodedClassName;	// 0x304e0b01
- (id)groupIdentifier;	// 0x304e0af1
// declared property getter: - (id)groupName;	// 0x304e0b9d
// declared property getter: - (id)groupSource;	// 0x304e0c09
// declared property setter: - (void)setGroupName:(id)name;	// 0x304e0bb9
// declared property setter: - (void)setGroupSource:(id)source;	// 0x304e0c5d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x304e0c99
@end

