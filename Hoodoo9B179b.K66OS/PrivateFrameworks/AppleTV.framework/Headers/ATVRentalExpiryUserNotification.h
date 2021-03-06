/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRTextControl, BRReflectedImageControl;
@protocol BRMediaAsset;

@interface ATVRentalExpiryUserNotification : BRControl {
@private
	BRControl *_dialogBox;	// 48 = 0x30
	BRReflectedImageControl *_imageControl;	// 52 = 0x34
	BRTextControl *_titleControl;	// 56 = 0x38
	id<BRMediaAsset> _asset;	// 60 = 0x3c
}
+ (void)postExpiryNotificationForAsset:(id)asset;	// 0x301a1ea1
- (id)init;	// 0x301a1f39
- (void)_playAsset;	// 0x301a27d9
- (void)_setAsset:(id)asset;	// 0x301a2519
- (BOOL)brEventAction:(id)action;	// 0x301a2299
- (void)dealloc;	// 0x301a2239
- (void)layoutSubcontrols;	// 0x301a234d
@end

