/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *identifier;	// G=0x342659a9; S=0x342659c5; 
@property(retain, nonatomic) SAUIAppPunchOut *offerPunchOut;	// G=0x34265a15; S=0x34265a69; 
@property(copy, nonatomic) NSString *title;	// G=0x34265aa5; S=0x34265ac1; 
+ (id)offer;	// 0x34265919
+ (id)offerWithDictionary:(id)dictionary context:(id)context;	// 0x3426595d
- (id)encodedClassName;	// 0x3426590d
- (id)groupIdentifier;	// 0x342658fd
// declared property getter: - (id)identifier;	// 0x342659a9
// declared property getter: - (id)offerPunchOut;	// 0x34265a15
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x342659c5
// declared property setter: - (void)setOfferPunchOut:(id)anOut;	// 0x34265a69
// declared property setter: - (void)setTitle:(id)title;	// 0x34265ac1
// declared property getter: - (id)title;	// 0x34265aa5
@end

