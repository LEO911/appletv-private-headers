/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSString, EKPersistentCalendarItem, NSData;

@interface EKPersistentEventAction : EKPersistentObject {
}
@property(copy, nonatomic) NSData *externalData;	// G=0x35b95bb5; S=0x35b95bd1; 
@property(copy, nonatomic) NSString *externalFolderID;	// G=0x35b95b0d; S=0x35b95b29; 
@property(copy, nonatomic) NSString *externalID;	// G=0x35b95ad5; S=0x35b95af1; 
@property(copy, nonatomic) NSString *externalModTag;	// G=0x35b95b7d; S=0x35b95b99; 
@property(copy, nonatomic) NSString *externalScheduleID;	// G=0x35b95b45; S=0x35b95b61; 
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x35b95bf1; S=0x35b95c0d; 
+ (id)relations;	// 0x35b95a45
- (int)entityType;	// 0x35b95bed
// declared property getter: - (id)externalData;	// 0x35b95bb5
// declared property getter: - (id)externalFolderID;	// 0x35b95b0d
// declared property getter: - (id)externalID;	// 0x35b95ad5
// declared property getter: - (id)externalModTag;	// 0x35b95b7d
// declared property getter: - (id)externalScheduleID;	// 0x35b95b45
// declared property getter: - (id)owner;	// 0x35b95bf1
// declared property setter: - (void)setExternalData:(id)data;	// 0x35b95bd1
// declared property setter: - (void)setExternalFolderID:(id)anId;	// 0x35b95b29
// declared property setter: - (void)setExternalID:(id)anId;	// 0x35b95af1
// declared property setter: - (void)setExternalModTag:(id)tag;	// 0x35b95b99
// declared property setter: - (void)setExternalScheduleID:(id)anId;	// 0x35b95b61
// declared property setter: - (void)setOwner:(id)owner;	// 0x35b95c0d
@end
