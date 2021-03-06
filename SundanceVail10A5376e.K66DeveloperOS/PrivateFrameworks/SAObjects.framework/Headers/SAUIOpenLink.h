/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *ref;	// G=0x34222dfd; S=0x34222e79; 
+ (id)openLink;	// 0x34222d6d
+ (id)openLinkWithDictionary:(id)dictionary context:(id)context;	// 0x34222db1
- (id)encodedClassName;	// 0x34222d61
- (id)groupIdentifier;	// 0x34222d51
// declared property getter: - (id)ref;	// 0x34222dfd
- (BOOL)requiresResponse;	// 0x34222ed9
// declared property setter: - (void)setRef:(id)ref;	// 0x34222e79
@end

