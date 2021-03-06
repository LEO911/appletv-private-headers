/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *confidenceScore;	// G=0x326be851; S=0x326be86d; 
@property(copy, nonatomic) NSNumber *endTime;	// G=0x326be8bd; S=0x326be8d9; 
@property(assign, nonatomic) BOOL removeSpaceAfter;	// G=0x326be929; S=0x326be9a1; 
@property(assign, nonatomic) BOOL removeSpaceBefore;	// G=0x326be9e5; S=0x326bea5d; 
@property(copy, nonatomic) NSNumber *startTime;	// G=0x326beaa1; S=0x326beabd; 
@property(copy, nonatomic) NSString *text;	// G=0x326beb0d; S=0x326beb29; 
+ (id)token;	// 0x326be7c1
+ (id)tokenWithDictionary:(id)dictionary context:(id)context;	// 0x326be805
// declared property getter: - (id)confidenceScore;	// 0x326be851
- (id)encodedClassName;	// 0x326be7b5
// declared property getter: - (id)endTime;	// 0x326be8bd
- (id)groupIdentifier;	// 0x326be7a5
// declared property getter: - (BOOL)removeSpaceAfter;	// 0x326be929
// declared property getter: - (BOOL)removeSpaceBefore;	// 0x326be9e5
// declared property setter: - (void)setConfidenceScore:(id)score;	// 0x326be86d
// declared property setter: - (void)setEndTime:(id)time;	// 0x326be8d9
// declared property setter: - (void)setRemoveSpaceAfter:(BOOL)after;	// 0x326be9a1
// declared property setter: - (void)setRemoveSpaceBefore:(BOOL)before;	// 0x326bea5d
// declared property setter: - (void)setStartTime:(id)time;	// 0x326beabd
// declared property setter: - (void)setText:(id)text;	// 0x326beb29
// declared property getter: - (id)startTime;	// 0x326beaa1
// declared property getter: - (id)text;	// 0x326beb0d
@end

