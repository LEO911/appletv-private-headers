/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, BRControl, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVAction : NSObject {
@private
	NSDictionary *_parameters;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRMerchant *_merchant;	// 12 = 0xc
}
@property(retain) BRControl *control;	// G=0x3415eaa1; S=0x3415eab5; @synthesize=_control
@property(retain) BRMerchant *merchant;	// G=0x3415ead9; S=0x3415eaed; @synthesize=_merchant
@property(retain) NSDictionary *parameters;	// G=0x3415ea3d; S=0x3415e9f9; @synthesize=_parameters
+ (id)actionWithName:(id)name;	// 0x3415e8ad
// declared property getter: - (id)control;	// 0x3415eaa1
- (void)dealloc;	// 0x3415e985
- (void)invoke;	// 0x3415ea4d
// declared property getter: - (id)merchant;	// 0x3415ead9
// declared property getter: - (id)parameters;	// 0x3415ea3d
// declared property setter: - (void)setControl:(id)control;	// 0x3415eab5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3415eaed
// declared property setter: - (void)setParameters:(id)parameters;	// 0x3415e9f9
@end

