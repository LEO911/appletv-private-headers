/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOfferControl : BRControl {
	BRTextControl *_topLineTextControl;	// 84 = 0x54
	BRTextControl *_bottomLineTextControl;	// 88 = 0x58
	BRImageControl *_hdImageControl;	// 92 = 0x5c
	BRImageControl *_superHDImageControl;	// 96 = 0x60
	BRImageControl *_ddImageControl;	// 100 = 0x64
	BRImageControl *_ccImageControl;	// 104 = 0x68
	BRImageControl *_digitalExtrasControl;	// 108 = 0x6c
	BOOL _displaysBottomLineText;	// 112 = 0x70
}
@property(assign) BOOL displaysBottomLineText;	// G=0x2098a1; S=0x2098b9; @synthesize=_displaysBottomLineText
- (id)init;	// 0x2087c5
- (id)accessibilityLabel;	// 0x209795
- (void)dealloc;	// 0x20880d
// declared property getter: - (BOOL)displaysBottomLineText;	// 0x2098a1
- (void)layoutSubcontrols;	// 0x2090fd
- (void)setClosedCaption:(BOOL)caption;	// 0x208ee9
// declared property setter: - (void)setDisplaysBottomLineText:(BOOL)text;	// 0x2098b9
- (void)setDolbyDigital:(BOOL)digital;	// 0x208e19
- (void)setHasDigitalExtras:(BOOL)extras;	// 0x208fb9
- (void)setWidescreen:(BOOL)widescreen andHD:(BOOL)hd andSuperHD:(BOOL)hd3 and1080p:(BOOL)p;	// 0x2088d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x209089
@end

