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
@property(copy, nonatomic) NSString *groupName;	// G=0x303aa589; S=0x303aa5a5; 
@property(retain, nonatomic) SASource *groupSource;	// G=0x303aa5f5; S=0x303aa649; 
+ (id)contactGroup;	// 0x303aa4f9
+ (id)contactGroupWithDictionary:(id)dictionary context:(id)context;	// 0x303aa53d
- (id)encodedClassName;	// 0x303aa4ed
- (id)groupIdentifier;	// 0x303aa4dd
// declared property getter: - (id)groupName;	// 0x303aa589
// declared property getter: - (id)groupSource;	// 0x303aa5f5
// declared property setter: - (void)setGroupName:(id)name;	// 0x303aa5a5
// declared property setter: - (void)setGroupSource:(id)source;	// 0x303aa649
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x303aa685
@end

