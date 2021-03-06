/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAFmfVisibilityStateSet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x304e90d9; S=0x304e9155; 
@property(assign, nonatomic) BOOL visible;	// G=0x304e91b5; S=0x304e922d; 
+ (id)visibilityStateSet;	// 0x304e9049
+ (id)visibilityStateSetWithDictionary:(id)dictionary context:(id)context;	// 0x304e908d
- (id)encodedClassName;	// 0x304e903d
- (id)groupIdentifier;	// 0x304e902d
- (BOOL)requiresResponse;	// 0x304e9271
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x304e9155
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x304e922d
// declared property getter: - (id)targetAppId;	// 0x304e90d9
// declared property getter: - (BOOL)visible;	// 0x304e91b5
@end

