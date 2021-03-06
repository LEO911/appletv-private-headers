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
@property(copy, nonatomic) NSString *name;	// G=0x353e6f71; S=0x353e6f8d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353e6e95; S=0x353e6f11; 
+ (id)listSearch;	// 0x353e6e05
+ (id)listSearchWithDictionary:(id)dictionary context:(id)context;	// 0x353e6e49
- (id)encodedClassName;	// 0x353e6df9
- (id)groupIdentifier;	// 0x353e6de9
// declared property getter: - (id)name;	// 0x353e6f71
- (BOOL)requiresResponse;	// 0x353e6fdd
// declared property setter: - (void)setName:(id)name;	// 0x353e6f8d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353e6f11
// declared property getter: - (id)targetAppId;	// 0x353e6e95
@end

