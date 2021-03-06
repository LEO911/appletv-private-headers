/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SANoteCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x355a4ac5; S=0x355a4b41; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)createCompleted;	// 0x355a4a35
+ (id)createCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x355a4a79
- (id)encodedClassName;	// 0x355a4a29
- (id)groupIdentifier;	// 0x355a4a19
// declared property getter: - (id)identifier;	// 0x355a4ac5
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x355a4b41
@end

