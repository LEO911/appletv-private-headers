/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPLCDView.h"

@class TPButton, TPWellButtonView;

@interface TPLCDDoubleButtonView : TPLCDView {
	TPWellButtonView *_leftWellButtonView;	// 80 = 0x50
	TPWellButtonView *_rightWellButtonView;	// 84 = 0x54
}
@property(readonly, retain, nonatomic) TPButton *leftButton;	// G=0x3142484d; 
@property(readonly, retain, nonatomic) TPButton *rightButton;	// G=0x3142486d; 
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x31424a81
- (CGRect)_leftWellFrame;	// 0x3142488d
- (CGRect)_rightWellFrame;	// 0x314248cd
- (void)dealloc;	// 0x31424981
- (CGRect)fullSizedContentViewFrame;	// 0x314249e1
// declared property getter: - (id)leftButton;	// 0x3142484d
// declared property getter: - (id)rightButton;	// 0x3142486d
- (BOOL)shouldCenterContentView;	// 0x31424845
- (BOOL)shouldCenterText;	// 0x31424841
- (BOOL)showImageViewOnLeftSide;	// 0x31424849
@end
