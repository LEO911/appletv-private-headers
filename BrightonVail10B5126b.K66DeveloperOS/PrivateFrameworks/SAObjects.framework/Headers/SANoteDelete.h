/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SANoteDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *identifier;	// G=0x353c8925; S=0x353c89a1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c8849; S=0x353c88c5; 
+ (id)delete;	// 0x353c87b9
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x353c87fd
- (id)encodedClassName;	// 0x353c87ad
- (id)groupIdentifier;	// 0x353c879d
// declared property getter: - (id)identifier;	// 0x353c8925
- (BOOL)requiresResponse;	// 0x353c8a01
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353c89a1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c88c5
// declared property getter: - (id)targetAppId;	// 0x353c8849
@end

