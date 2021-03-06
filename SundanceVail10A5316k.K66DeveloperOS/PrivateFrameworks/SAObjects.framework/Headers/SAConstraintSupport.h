/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;
@protocol SASupportCondition;

@interface SAConstraintSupport : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) id<SASupportCondition> condition;	// G=0x32f5f0d1; S=0x32f5f125; 
@property(copy, nonatomic) NSString *property;	// G=0x32f5f161; S=0x32f5f17d; 
+ (id)constraintSupport;	// 0x32f5f041
+ (id)constraintSupportWithDictionary:(id)dictionary context:(id)context;	// 0x32f5f085
// declared property getter: - (id)condition;	// 0x32f5f0d1
- (id)encodedClassName;	// 0x32f5f035
- (id)groupIdentifier;	// 0x32f5f025
// declared property getter: - (id)property;	// 0x32f5f161
// declared property setter: - (void)setCondition:(id)condition;	// 0x32f5f125
// declared property setter: - (void)setProperty:(id)property;	// 0x32f5f17d
@end

