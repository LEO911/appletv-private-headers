/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x355a7c9d; S=0x355a7d19; 
+ (id)personSearchCompleted;	// 0x355a7b91
+ (id)personSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x355a7bd5
+ (id)personSearchCompletedWithResults:(id)results;	// 0x355a7c21
- (id)initWithResults:(id)results;	// 0x355a7c69
- (id)encodedClassName;	// 0x355a7b85
- (id)groupIdentifier;	// 0x355a7b75
// declared property getter: - (id)results;	// 0x355a7c9d
// declared property setter: - (void)setResults:(id)results;	// 0x355a7d19
@end
