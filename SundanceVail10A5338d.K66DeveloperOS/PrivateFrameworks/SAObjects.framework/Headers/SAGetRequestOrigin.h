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
@property(copy, nonatomic) NSString *desiredAccuracy;	// G=0x3796a2ed; S=0x3796a309; 
@property(copy, nonatomic) NSNumber *maxAge;	// G=0x3796a359; S=0x3796a375; 
@property(copy, nonatomic) NSNumber *searchTimeout;	// G=0x3796a3c5; S=0x3796a3e1; 
+ (id)getRequestOrigin;	// 0x3796a25d
+ (id)getRequestOriginWithDictionary:(id)dictionary context:(id)context;	// 0x3796a2a1
// declared property getter: - (id)desiredAccuracy;	// 0x3796a2ed
- (id)encodedClassName;	// 0x3796a251
- (id)groupIdentifier;	// 0x3796a241
// declared property getter: - (id)maxAge;	// 0x3796a359
- (BOOL)requiresResponse;	// 0x3796a431
// declared property getter: - (id)searchTimeout;	// 0x3796a3c5
// declared property setter: - (void)setDesiredAccuracy:(id)accuracy;	// 0x3796a309
// declared property setter: - (void)setMaxAge:(id)age;	// 0x3796a375
// declared property setter: - (void)setSearchTimeout:(id)timeout;	// 0x3796a3e1
@end

