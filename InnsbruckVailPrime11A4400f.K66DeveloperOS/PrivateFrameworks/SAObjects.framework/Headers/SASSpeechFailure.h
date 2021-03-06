/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int errorCode;	// G=0x326a5019; S=0x326a5089; 
@property(assign, nonatomic) int reason;	// G=0x326a50cd; S=0x326a50f5; 
@property(copy, nonatomic) NSString *reasonDescription;	// G=0x326a5125; S=0x326a5141; 
+ (id)speechFailure;	// 0x326a4f89
+ (id)speechFailureWithDictionary:(id)dictionary context:(id)context;	// 0x326a4fcd
- (id)encodedClassName;	// 0x326a4f7d
// declared property getter: - (int)errorCode;	// 0x326a5019
- (id)groupIdentifier;	// 0x326a4f6d
// declared property getter: - (int)reason;	// 0x326a50cd
// declared property getter: - (id)reasonDescription;	// 0x326a5125
- (BOOL)requiresResponse;	// 0x326a5191
// declared property setter: - (void)setErrorCode:(int)code;	// 0x326a5089
// declared property setter: - (void)setReason:(int)reason;	// 0x326a50f5
// declared property setter: - (void)setReasonDescription:(id)description;	// 0x326a5141
@end

