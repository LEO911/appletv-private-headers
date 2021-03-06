/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSArray;

@interface SASRecognition : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *phrases;	// G=0x3423cb5d; S=0x3423cbd9; 
+ (id)recognition;	// 0x3423cacd
+ (id)recognitionWithDictionary:(id)dictionary context:(id)context;	// 0x3423cb11
- (id)encodedClassName;	// 0x3423cac1
- (id)groupIdentifier;	// 0x3423cab1
// declared property getter: - (id)phrases;	// 0x3423cb5d
// declared property setter: - (void)setPhrases:(id)phrases;	// 0x3423cbd9
@end

