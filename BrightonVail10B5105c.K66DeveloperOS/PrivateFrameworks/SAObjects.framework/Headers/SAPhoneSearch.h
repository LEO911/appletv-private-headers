/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSDate, NSURL, NSNumber;

@interface SAPhoneSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x3039b435; S=0x3039b451; 
@property(copy, nonatomic) NSString *incomingPhoneNumber;	// G=0x3039b4a1; S=0x3039b4bd; 
@property(copy, nonatomic) NSNumber *limit;	// G=0x3039b50d; S=0x3039b529; 
@property(assign, nonatomic) BOOL missed;	// G=0x3039b579; S=0x3039b5f1; 
@property(copy, nonatomic) NSString *outgoingPhoneNumber;	// G=0x3039b635; S=0x3039b651; 
@property(copy, nonatomic) NSDate *start;	// G=0x3039b6a1; S=0x3039b6bd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3039b359; S=0x3039b3d5; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x3039b70d; S=0x3039b729; 
+ (id)search;	// 0x3039b2c9
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x3039b30d
- (id)encodedClassName;	// 0x3039b2bd
// declared property getter: - (id)end;	// 0x3039b435
- (id)groupIdentifier;	// 0x3039b2ad
// declared property getter: - (id)incomingPhoneNumber;	// 0x3039b4a1
// declared property getter: - (id)limit;	// 0x3039b50d
// declared property getter: - (BOOL)missed;	// 0x3039b579
// declared property getter: - (id)outgoingPhoneNumber;	// 0x3039b635
- (BOOL)requiresResponse;	// 0x3039b779
// declared property setter: - (void)setEnd:(id)end;	// 0x3039b451
// declared property setter: - (void)setIncomingPhoneNumber:(id)number;	// 0x3039b4bd
// declared property setter: - (void)setLimit:(id)limit;	// 0x3039b529
// declared property setter: - (void)setMissed:(BOOL)missed;	// 0x3039b5f1
// declared property setter: - (void)setOutgoingPhoneNumber:(id)number;	// 0x3039b651
// declared property setter: - (void)setStart:(id)start;	// 0x3039b6bd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3039b3d5
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x3039b729
// declared property getter: - (id)start;	// 0x3039b6a1
// declared property getter: - (id)targetAppId;	// 0x3039b359
// declared property getter: - (id)timeZoneId;	// 0x3039b70d
@end
