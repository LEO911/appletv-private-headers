/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CTCarrier : NSObject {
	NSString *_carrierName;	// 4 = 0x4
	NSString *_mobileCountryCode;	// 8 = 0x8
	NSString *_mobileNetworkCode;	// 12 = 0xc
	NSString *_isoCountryCode;	// 16 = 0x10
	BOOL _allowsVOIP;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL allowsVOIP;	// G=0x324d4fa1; S=0x324d4fb1; @synthesize=_allowsVOIP
@property(retain, nonatomic) NSString *carrierName;	// G=0x324d4ed1; S=0x324d4ee1; @synthesize=_carrierName
@property(retain, nonatomic) NSString *isoCountryCode;	// G=0x324d4f6d; S=0x324d4f7d; @synthesize=_isoCountryCode
@property(retain, nonatomic) NSString *mobileCountryCode;	// G=0x324d4f05; S=0x324d4f15; @synthesize=_mobileCountryCode
@property(retain, nonatomic) NSString *mobileNetworkCode;	// G=0x324d4f39; S=0x324d4f49; @synthesize=_mobileNetworkCode
- (id)init;	// 0x324d4c49
// declared property getter: - (BOOL)allowsVOIP;	// 0x324d4fa1
// declared property getter: - (id)carrierName;	// 0x324d4ed1
- (void)dealloc;	// 0x324d4cc1
- (id)description;	// 0x324d4ba5
- (BOOL)isEqual:(id)equal;	// 0x324d4d6d
// declared property getter: - (id)isoCountryCode;	// 0x324d4f6d
// declared property getter: - (id)mobileCountryCode;	// 0x324d4f05
// declared property getter: - (id)mobileNetworkCode;	// 0x324d4f39
// declared property setter: - (void)setAllowsVOIP:(BOOL)voip;	// 0x324d4fb1
// declared property setter: - (void)setCarrierName:(id)name;	// 0x324d4ee1
// declared property setter: - (void)setIsoCountryCode:(id)code;	// 0x324d4f7d
// declared property setter: - (void)setMobileCountryCode:(id)code;	// 0x324d4f15
// declared property setter: - (void)setMobileNetworkCode:(id)code;	// 0x324d4f49
@end

