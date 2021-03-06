/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVImagePreviewView : BRControl {
	BRAsyncImageControl *image;	// 84 = 0x54
	BRTextControl *instructionsLabel;	// 88 = 0x58
	CGPoint imageOffset;	// 92 = 0x5c
	CGSize imageScale;	// 100 = 0x64
}
@property(retain, nonatomic) BRAsyncImageControl *image;	// G=0x410cc1; S=0x410cd1; @synthesize
@property(assign, nonatomic) CGPoint imageOffset;	// G=0x410d31; S=0x410d49; @synthesize
@property(assign, nonatomic) CGSize imageScale;	// G=0x410d5d; S=0x410d75; @synthesize
@property(retain, nonatomic) BRTextControl *instructionsLabel;	// G=0x410cf9; S=0x410d09; @synthesize
- (id)init;	// 0x410279
- (void).cxx_destruct;	// 0x410d89
- (id)accessibilityLabel;	// 0x410c55
- (void)dealloc;	// 0x41048d
// declared property getter: - (id)image;	// 0x410cc1
// declared property getter: - (CGPoint)imageOffset;	// 0x410d31
// declared property getter: - (CGSize)imageScale;	// 0x410d5d
// declared property getter: - (id)instructionsLabel;	// 0x410cf9
- (void)layoutSubcontrols;	// 0x410565
// declared property setter: - (void)setImage:(id)image;	// 0x410cd1
// declared property setter: - (void)setImageOffset:(CGPoint)offset;	// 0x410d49
- (void)setImageProxy:(id)proxy;	// 0x410a81
- (void)setImageProxy:(id)proxy withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x410aad
// declared property setter: - (void)setImageScale:(CGSize)scale;	// 0x410d75
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0x410bbd
// declared property setter: - (void)setInstructionsLabel:(id)label;	// 0x410d09
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x4104f9
@end

