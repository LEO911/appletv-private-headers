/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

@interface BRIconPreviewController : BRControl {
@private
	BRTextControl *_message;	// 48 = 0x30
	BRTextControl *_instruction;	// 52 = 0x34
	BRImageControl *_image;	// 56 = 0x38
	float _iconHeightFactor;	// 60 = 0x3c
	float _horizontalPosition;	// 64 = 0x40
	float _verticalPosition;	// 68 = 0x44
	float _messageVerticalPosition;	// 72 = 0x48
}
- (id)init;	// 0x3423afa9
- (id)accessibilityLabel;	// 0x3423b7bd
- (void)dealloc;	// 0x3423b0c9
- (void)layoutSubcontrols;	// 0x3423b13d
- (void)setIconHeightFactor:(float)factor;	// 0x3423b75d
- (void)setIconHorizontalPosition:(float)position;	// 0x3423b77d
- (void)setIconVerticalPosition:(float)position;	// 0x3423b79d
- (void)setImage:(id)image;	// 0x3423b6a1
- (void)setInstructions:(id)instructions;	// 0x3423b6c1
- (void)setMessage:(id)message;	// 0x3423b5e5
- (void)setMessageVerticalPosition:(float)position;	// 0x3423b681
@end
