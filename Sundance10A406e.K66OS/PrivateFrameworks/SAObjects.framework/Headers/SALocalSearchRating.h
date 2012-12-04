/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int count;	// G=0x32533e3d; S=0x32533ead; 
@property(copy, nonatomic) NSString *description;	// G=0x32533ef1; S=0x32533f0d; 
@property(assign, nonatomic) double maxValue;	// G=0x32533f61; S=0x32533fe1; 
@property(copy, nonatomic) NSString *providerId;	// G=0x32534025; S=0x32534041; 
@property(assign, nonatomic) double value;	// G=0x32534091; S=0x32534111; 
+ (id)rating;	// 0x32533dad
+ (id)ratingWithDictionary:(id)dictionary context:(id)context;	// 0x32533df1
// declared property getter: - (int)count;	// 0x32533e3d
// declared property getter: - (id)description;	// 0x32533ef1
- (id)encodedClassName;	// 0x32533da1
- (id)groupIdentifier;	// 0x32533d91
// declared property getter: - (double)maxValue;	// 0x32533f61
// declared property getter: - (id)providerId;	// 0x32534025
// declared property setter: - (void)setCount:(int)count;	// 0x32533ead
// declared property setter: - (void)setDescription:(id)description;	// 0x32533f0d
// declared property setter: - (void)setMaxValue:(double)value;	// 0x32533fe1
// declared property setter: - (void)setProviderId:(id)anId;	// 0x32534041
// declared property setter: - (void)setValue:(double)value;	// 0x32534111
// declared property getter: - (double)value;	// 0x32534091
@end
