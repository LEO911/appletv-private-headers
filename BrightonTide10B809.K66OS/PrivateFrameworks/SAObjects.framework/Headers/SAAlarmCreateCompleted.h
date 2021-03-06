/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *alarmId;	// G=0x353c4e81; S=0x353c4efd; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)createCompleted;	// 0x353c4df1
+ (id)createCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353c4e35
// declared property getter: - (id)alarmId;	// 0x353c4e81
- (id)encodedClassName;	// 0x353c4de5
- (id)groupIdentifier;	// 0x353c4dd5
// declared property setter: - (void)setAlarmId:(id)anId;	// 0x353c4efd
@end

