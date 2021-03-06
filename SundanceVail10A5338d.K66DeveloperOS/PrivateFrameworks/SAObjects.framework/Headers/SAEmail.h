/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSNumber;

@interface SAEmail : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *emailAddress;	// G=0x3796a0fd; S=0x3796a119; 
@property(copy, nonatomic) NSNumber *favoriteFacetime;	// G=0x3796a169; S=0x3796a185; 
@property(copy, nonatomic) NSString *label;	// G=0x3796a1d5; S=0x3796a1f1; 
+ (id)email;	// 0x3796a06d
+ (id)emailWithDictionary:(id)dictionary context:(id)context;	// 0x3796a0b1
// declared property getter: - (id)emailAddress;	// 0x3796a0fd
- (id)encodedClassName;	// 0x3796a061
// declared property getter: - (id)favoriteFacetime;	// 0x3796a169
- (id)groupIdentifier;	// 0x3796a051
// declared property getter: - (id)label;	// 0x3796a1d5
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3796a119
// declared property setter: - (void)setFavoriteFacetime:(id)facetime;	// 0x3796a185
// declared property setter: - (void)setLabel:(id)label;	// 0x3796a1f1
@end

