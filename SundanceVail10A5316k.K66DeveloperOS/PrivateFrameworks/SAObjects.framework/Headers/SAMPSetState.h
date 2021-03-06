/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPSetState : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int state;	// G=0x32f3b295; S=0x32f3b2bd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f3b1b9; S=0x32f3b235; 
+ (id)setState;	// 0x32f3b129
+ (id)setStateWithDictionary:(id)dictionary context:(id)context;	// 0x32f3b16d
- (id)encodedClassName;	// 0x32f3b11d
- (id)groupIdentifier;	// 0x32f3b10d
- (BOOL)requiresResponse;	// 0x32f3b2ed
// declared property setter: - (void)setState:(int)state;	// 0x32f3b2bd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f3b235
// declared property getter: - (int)state;	// 0x32f3b295
// declared property getter: - (id)targetAppId;	// 0x32f3b1b9
@end

