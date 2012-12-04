/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SALocalSearchPhoneNumber : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *type;	// G=0x304e2429; S=0x304e2445; 
@property(copy, nonatomic) NSString *value;	// G=0x304e2495; S=0x304e24b1; 
+ (id)phoneNumber;	// 0x304e2399
+ (id)phoneNumberWithDictionary:(id)dictionary context:(id)context;	// 0x304e23dd
- (id)encodedClassName;	// 0x304e238d
- (id)groupIdentifier;	// 0x304e237d
// declared property setter: - (void)setType:(id)type;	// 0x304e2445
// declared property setter: - (void)setValue:(id)value;	// 0x304e24b1
// declared property getter: - (id)type;	// 0x304e2429
// declared property getter: - (id)value;	// 0x304e2495
@end
