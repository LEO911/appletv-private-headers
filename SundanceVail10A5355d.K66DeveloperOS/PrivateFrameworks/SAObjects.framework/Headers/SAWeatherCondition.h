/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SAWeatherCondition : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *conditionCode;	// G=0x3661d0a5; S=0x3661d0c1; 
@property(assign, nonatomic) int conditionCodeIndex;	// G=0x3661d111; S=0x3661d181; 
+ (id)condition;	// 0x3661d015
+ (id)conditionWithDictionary:(id)dictionary context:(id)context;	// 0x3661d059
// declared property getter: - (id)conditionCode;	// 0x3661d0a5
// declared property getter: - (int)conditionCodeIndex;	// 0x3661d111
- (id)encodedClassName;	// 0x3661d009
- (id)groupIdentifier;	// 0x3661cff9
// declared property setter: - (void)setConditionCode:(id)code;	// 0x3661d0c1
// declared property setter: - (void)setConditionCodeIndex:(int)index;	// 0x3661d181
@end
