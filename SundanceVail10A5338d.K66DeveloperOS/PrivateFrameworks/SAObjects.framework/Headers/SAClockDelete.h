/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAClockDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *clockIds;	// G=0x37955a4d; S=0x37955aed; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x37955971; S=0x379559ed; 
+ (id)delete;	// 0x379558e1
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x37955925
// declared property getter: - (id)clockIds;	// 0x37955a4d
- (id)encodedClassName;	// 0x379558d5
- (id)groupIdentifier;	// 0x379558c5
- (BOOL)requiresResponse;	// 0x37955b6d
// declared property setter: - (void)setClockIds:(id)ids;	// 0x37955aed
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x379559ed
// declared property getter: - (id)targetAppId;	// 0x37955971
@end

