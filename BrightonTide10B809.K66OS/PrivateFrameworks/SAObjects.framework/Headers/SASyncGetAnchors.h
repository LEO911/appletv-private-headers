/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASyncGetAnchors : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *sources;	// G=0x353c70a1; S=0x353c70bd; 
+ (id)getAnchors;	// 0x353c7011
+ (id)getAnchorsWithDictionary:(id)dictionary context:(id)context;	// 0x353c7055
- (id)encodedClassName;	// 0x353c7005
- (id)groupIdentifier;	// 0x353c6ff5
// declared property setter: - (void)setSources:(id)sources;	// 0x353c70bd
// declared property getter: - (id)sources;	// 0x353c70a1
@end

