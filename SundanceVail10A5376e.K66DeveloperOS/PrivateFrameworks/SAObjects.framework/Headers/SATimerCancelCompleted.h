/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SATimerObject, NSString;

@interface SATimerCancelCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x34232e69; S=0x34232ebd; 
+ (id)cancelCompleted;	// 0x34232dd9
+ (id)cancelCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x34232e1d
- (id)encodedClassName;	// 0x34232dcd
- (id)groupIdentifier;	// 0x34232dbd
// declared property setter: - (void)setTimer:(id)timer;	// 0x34232ebd
// declared property getter: - (id)timer;	// 0x34232e69
@end
