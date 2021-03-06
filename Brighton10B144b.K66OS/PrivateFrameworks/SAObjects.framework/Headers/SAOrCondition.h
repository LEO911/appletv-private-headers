/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASupportCondition.h"
#import "AceObject.h"

@class NSArray;

@interface SAOrCondition : AceObject <SASupportCondition> {
}
@property(copy, nonatomic) NSArray *conditions;	// G=0x353eddc5; S=0x353ede2d; 
+ (id)orCondition;	// 0x353edd35
+ (id)orConditionWithDictionary:(id)dictionary context:(id)context;	// 0x353edd79
// declared property getter: - (id)conditions;	// 0x353eddc5
- (id)encodedClassName;	// 0x353edd29
- (id)groupIdentifier;	// 0x353edd19
// declared property setter: - (void)setConditions:(id)conditions;	// 0x353ede2d
@end

