/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SAReminderListSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *name;	// G=0x355c2379; S=0x355c2395; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x355c229d; S=0x355c2319; 
+ (id)listSearch;	// 0x355c220d
+ (id)listSearchWithDictionary:(id)dictionary context:(id)context;	// 0x355c2251
- (id)encodedClassName;	// 0x355c2201
- (id)groupIdentifier;	// 0x355c21f1
// declared property getter: - (id)name;	// 0x355c2379
- (BOOL)requiresResponse;	// 0x355c23e5
// declared property setter: - (void)setName:(id)name;	// 0x355c2395
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x355c2319
// declared property getter: - (id)targetAppId;	// 0x355c229d
@end
