/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAPhoneCallStarted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *phoneLogId;	// G=0x353c0c75; S=0x353c0cf1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)callStarted;	// 0x353c0be5
+ (id)callStartedWithDictionary:(id)dictionary context:(id)context;	// 0x353c0c29
- (id)encodedClassName;	// 0x353c0bd9
- (id)groupIdentifier;	// 0x353c0bc9
// declared property getter: - (id)phoneLogId;	// 0x353c0c75
// declared property setter: - (void)setPhoneLogId:(id)anId;	// 0x353c0cf1
@end
