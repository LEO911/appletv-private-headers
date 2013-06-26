/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SASyncFinished : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)finished;	// 0x353ff101
+ (id)finishedWithDictionary:(id)dictionary context:(id)context;	// 0x353ff145
- (id)encodedClassName;	// 0x353ff0f5
- (id)groupIdentifier;	// 0x353ff0e5
@end
