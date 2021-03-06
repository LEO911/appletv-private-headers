/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRIconPreviewController : BRControl {
	BRTextControl *_message;	// 84 = 0x54
	BRTextControl *_instruction;	// 88 = 0x58
	BRImageControl *_image;	// 92 = 0x5c
	float _iconHeightFactor;	// 96 = 0x60
	float _horizontalPosition;	// 100 = 0x64
	float _verticalPosition;	// 104 = 0x68
	float _messageVerticalPosition;	// 108 = 0x6c
}
- (id)init;	// 0x322351
- (id)accessibilityLabel;	// 0x322b6d
- (void)dealloc;	// 0x322469
- (void)layoutSubcontrols;	// 0x3224e1
- (void)setIconHeightFactor:(float)factor;	// 0x322b0d
- (void)setIconHorizontalPosition:(float)position;	// 0x322b2d
- (void)setIconVerticalPosition:(float)position;	// 0x322b4d
- (void)setImage:(id)image;	// 0x322a55
- (void)setInstructions:(id)instructions;	// 0x322a75
- (void)setMessage:(id)message;	// 0x32299d
- (void)setMessageVerticalPosition:(float)position;	// 0x322a35
@end

