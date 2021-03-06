/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerPause : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x355a884d; S=0x355a88c9; 
+ (id)pause;	// 0x355a87bd
+ (id)pauseWithDictionary:(id)dictionary context:(id)context;	// 0x355a8801
- (id)encodedClassName;	// 0x355a87b1
- (id)groupIdentifier;	// 0x355a87a1
- (BOOL)requiresResponse;	// 0x355a8929
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x355a88c9
// declared property getter: - (id)targetAppId;	// 0x355a884d
@end

