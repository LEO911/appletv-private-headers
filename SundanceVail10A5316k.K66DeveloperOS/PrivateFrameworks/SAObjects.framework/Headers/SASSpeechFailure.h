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
@property(assign, nonatomic) int reason;	// G=0x32f31cb9; S=0x32f31ce1; 
@property(copy, nonatomic) NSString *reasonDescription;	// G=0x32f31d11; S=0x32f31d2d; 
+ (id)speechFailure;	// 0x32f31c29
+ (id)speechFailureWithDictionary:(id)dictionary context:(id)context;	// 0x32f31c6d
- (id)encodedClassName;	// 0x32f31c1d
- (id)groupIdentifier;	// 0x32f31c0d
// declared property getter: - (int)reason;	// 0x32f31cb9
// declared property getter: - (id)reasonDescription;	// 0x32f31d11
- (BOOL)requiresResponse;	// 0x32f31d7d
// declared property setter: - (void)setReason:(int)reason;	// 0x32f31ce1
// declared property setter: - (void)setReasonDescription:(id)description;	// 0x32f31d2d
@end
