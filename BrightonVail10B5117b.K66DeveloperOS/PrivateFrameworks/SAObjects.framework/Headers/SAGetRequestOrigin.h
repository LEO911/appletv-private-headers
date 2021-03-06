/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *desiredAccuracy;	// G=0x355baf0d; S=0x355baf29; 
@property(copy, nonatomic) NSNumber *maxAge;	// G=0x355baf79; S=0x355baf95; 
@property(copy, nonatomic) NSNumber *searchTimeout;	// G=0x355bafe5; S=0x355bb001; 
+ (id)getRequestOrigin;	// 0x355bae7d
+ (id)getRequestOriginWithDictionary:(id)dictionary context:(id)context;	// 0x355baec1
// declared property getter: - (id)desiredAccuracy;	// 0x355baf0d
- (id)encodedClassName;	// 0x355bae71
- (id)groupIdentifier;	// 0x355bae61
// declared property getter: - (id)maxAge;	// 0x355baf79
- (BOOL)requiresResponse;	// 0x355bb051
// declared property getter: - (id)searchTimeout;	// 0x355bafe5
// declared property setter: - (void)setDesiredAccuracy:(id)accuracy;	// 0x355baf29
// declared property setter: - (void)setMaxAge:(id)age;	// 0x355baf95
// declared property setter: - (void)setSearchTimeout:(id)timeout;	// 0x355bb001
@end

