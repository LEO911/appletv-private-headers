/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPLoadPredefinedQueue : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int mediaItemType;	// G=0x32533b85; S=0x32533bad; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32533aa9; S=0x32533b25; 
+ (id)loadPredefinedQueue;	// 0x32533a19
+ (id)loadPredefinedQueueWithDictionary:(id)dictionary context:(id)context;	// 0x32533a5d
- (id)encodedClassName;	// 0x32533a0d
- (id)groupIdentifier;	// 0x325339fd
// declared property getter: - (int)mediaItemType;	// 0x32533b85
- (BOOL)requiresResponse;	// 0x32533bdd
// declared property setter: - (void)setMediaItemType:(int)type;	// 0x32533bad
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32533b25
// declared property getter: - (id)targetAppId;	// 0x32533aa9
@end

