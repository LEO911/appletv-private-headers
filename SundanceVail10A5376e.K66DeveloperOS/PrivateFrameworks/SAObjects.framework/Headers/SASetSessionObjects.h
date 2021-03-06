/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SASetSessionObjects : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *objects;	// G=0x3426582d; S=0x34265895; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)setSessionObjects;	// 0x3426579d
+ (id)setSessionObjectsWithDictionary:(id)dictionary context:(id)context;	// 0x342657e1
- (id)encodedClassName;	// 0x34265791
- (id)groupIdentifier;	// 0x34265781
// declared property getter: - (id)objects;	// 0x3426582d
// declared property setter: - (void)setObjects:(id)objects;	// 0x34265895
@end

