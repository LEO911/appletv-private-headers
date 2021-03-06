/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31896a05; 
@property(copy, nonatomic) NSURL *address;	// G=0x31896f11; S=0x3190bc91; 
@property(copy, nonatomic) NSString *displayName;	// G=0x3190bbcd; S=0x3190bbe9; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x318970d5; S=0x3190bc05; 
@property(copy, nonatomic) NSString *firstName;	// G=0x3190bc21; S=0x3190bc3d; 
@property(copy, nonatomic) NSString *lastName;	// G=0x3190bc59; S=0x3190bc75; 
+ (id)defaultPropertiesToLoad;	// 0x3188e1f9
- (id)init;	// 0x3190bb3d
// declared property getter: - (id)UUID;	// 0x31896a05
// declared property getter: - (id)address;	// 0x31896f11
- (id)copyWithZone:(NSZone *)zone;	// 0x3190bb91
// declared property getter: - (id)displayName;	// 0x3190bbcd
// declared property getter: - (id)emailAddress;	// 0x318970d5
// declared property getter: - (id)firstName;	// 0x3190bc21
- (unsigned)hash;	// 0x318969dd
// declared property getter: - (id)lastName;	// 0x3190bc59
- (id)owner;	// 0x3190bcad
// declared property setter: - (void)setAddress:(id)address;	// 0x3190bc91
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3190bbe9
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3190bc05
// declared property setter: - (void)setFirstName:(id)name;	// 0x3190bc3d
// declared property setter: - (void)setLastName:(id)name;	// 0x3190bc75
@end

