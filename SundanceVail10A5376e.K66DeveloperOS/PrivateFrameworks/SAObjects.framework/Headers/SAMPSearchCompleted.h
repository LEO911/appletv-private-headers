/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL;

@interface SAMPSearchCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x3422e499; S=0x3422e515; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3422e3bd; S=0x3422e439; 
+ (id)searchCompleted;	// 0x3422e32d
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3422e371
- (id)encodedClassName;	// 0x3422e321
- (id)groupIdentifier;	// 0x3422e311
- (BOOL)requiresResponse;	// 0x3422e57d
// declared property getter: - (id)results;	// 0x3422e499
// declared property setter: - (void)setResults:(id)results;	// 0x3422e515
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3422e439
// declared property getter: - (id)targetAppId;	// 0x3422e3bd
@end

