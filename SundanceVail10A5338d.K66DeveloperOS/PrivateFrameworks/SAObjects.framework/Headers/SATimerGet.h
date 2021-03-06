/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerGet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x379579e1; S=0x37957a5d; 
+ (id)get;	// 0x37957951
+ (id)getWithDictionary:(id)dictionary context:(id)context;	// 0x37957995
- (id)encodedClassName;	// 0x37957945
- (id)groupIdentifier;	// 0x37957935
- (BOOL)requiresResponse;	// 0x37957abd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x37957a5d
// declared property getter: - (id)targetAppId;	// 0x379579e1
@end

