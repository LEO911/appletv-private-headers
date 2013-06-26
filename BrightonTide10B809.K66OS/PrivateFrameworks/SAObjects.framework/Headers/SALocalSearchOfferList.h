/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SALocalSearchOfferList : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *offers;	// G=0x35401e6d; S=0x35401ee9; 
@property(copy, nonatomic) NSString *providerId;	// G=0x35401f51; S=0x35401f6d; 
+ (id)offerList;	// 0x35401ddd
+ (id)offerListWithDictionary:(id)dictionary context:(id)context;	// 0x35401e21
- (id)encodedClassName;	// 0x35401dd1
- (id)groupIdentifier;	// 0x35401dc1
// declared property getter: - (id)offers;	// 0x35401e6d
// declared property getter: - (id)providerId;	// 0x35401f51
// declared property setter: - (void)setOffers:(id)offers;	// 0x35401ee9
// declared property setter: - (void)setProviderId:(id)anId;	// 0x35401f6d
@end
