/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKObject.h"
#import "EKIdentityProtocol.h"
#import "EventKit-Structs.h"

@class EKCalendar, NSString;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x34ba7339; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x34ba7399; S=0x34ba73b5; 
@property(copy, nonatomic) NSString *externalID;	// G=0x34ba73d1; S=0x34ba73ed; 
@property(copy, nonatomic) NSString *name;	// G=0x34ba7361; S=0x34ba737d; 
@property(readonly, assign, nonatomic) EKCalendar *owner;	// G=0x34ba72f5; 
@property(assign, nonatomic) int shareeAccessLevel;	// G=0x34ba74c9; S=0x34ba7545; 
@property(assign, nonatomic) int shareeStatus;	// G=0x34ba7409; S=0x34ba7485; 
+ (id)shareeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x34ba6e59
+ (id)shareeWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x34ba6e11
- (id)init;	// 0x34ba6f99
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x34ba6f29
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x34ba6e99
- (void *)ABRecordWithAddressBook:(void *)addressBook;	// 0x34ba7589
// declared property getter: - (id)UUID;	// 0x34ba7339
- (id)_persistentSharee;	// 0x34ba7329
- (id)copyWithZone:(NSZone *)zone;	// 0x34ba7005
- (id)description;	// 0x34ba71a1
// declared property getter: - (id)emailAddress;	// 0x34ba7399
// declared property getter: - (id)externalID;	// 0x34ba73d1
- (unsigned)hash;	// 0x34ba7179
- (BOOL)isEqual:(id)equal;	// 0x34ba7101
- (id)lazyLoadRelationForKey:(id)key;	// 0x34ba7265
// declared property getter: - (id)name;	// 0x34ba7361
// declared property getter: - (id)owner;	// 0x34ba72f5
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x34ba73b5
// declared property setter: - (void)setExternalID:(id)anId;	// 0x34ba73ed
// declared property setter: - (void)setName:(id)name;	// 0x34ba737d
// declared property setter: - (void)setShareeAccessLevel:(int)level;	// 0x34ba7545
// declared property setter: - (void)setShareeStatus:(int)status;	// 0x34ba7485
// declared property getter: - (int)shareeAccessLevel;	// 0x34ba74c9
// declared property getter: - (int)shareeStatus;	// 0x34ba7409
@end

