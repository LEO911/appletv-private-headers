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
- (id)init;	// 0x3ba109
- (id)accessibilityLabel;	// 0x3ba91d
- (void)dealloc;	// 0x3ba221
- (void)layoutSubcontrols;	// 0x3ba299
- (void)setIconHeightFactor:(float)factor;	// 0x3ba8bd
- (void)setIconHorizontalPosition:(float)position;	// 0x3ba8dd
- (void)setIconVerticalPosition:(float)position;	// 0x3ba8fd
- (void)setImage:(id)image;	// 0x3ba805
- (void)setInstructions:(id)instructions;	// 0x3ba825
- (void)setMessage:(id)message;	// 0x3ba74d
- (void)setMessageVerticalPosition:(float)position;	// 0x3ba7e5
@end
