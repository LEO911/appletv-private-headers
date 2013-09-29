/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRHorizontalDividerControl, BRReflectionControl, BRTextControl, BRAlignmentAdjustingTextControl, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface BRAlertControl : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRHorizontalDividerControl *_divider;	// 88 = 0x58
	int _type;	// 92 = 0x5c
	BRTextControl *_primary;	// 96 = 0x60
	BRAlignmentAdjustingTextControl *_secondary;	// 100 = 0x64
	BRImageControl *_image;	// 104 = 0x68
	BRReflectionControl *_reflection;	// 108 = 0x6c
}
@property(retain) BRImageControl *image;	// G=0x348501; S=0x3484b9; converted property
@property(retain) id primaryText;	// G=0x3483bd; S=0x34833d; converted property
@property(retain) id secondaryText;	// G=0x348445; S=0x3483f5; converted property
@property(retain) id title;	// G=0x34831d; S=0x3482dd; converted property
+ (id)alertForError:(id)error;	// 0x347ee1
+ (id)alertOfType:(int)type;	// 0x347f81
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x347f29
- (id)init;	// 0x347fc9
- (id)initWithType:(int)type;	// 0x347fdd
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x348001
- (id)_controlsForType:(int)type;	// 0x348c61
- (void)_layoutSubcontrolsForAlert;	// 0x3488f9
- (void)_layoutSubcontrolsForInfo;	// 0x348559
- (id)_primaryTextAttibutesForType:(int)type;	// 0x349055
- (id)accessibilityLabel;	// 0x3490b5
- (void)controlWasActivated;	// 0x3481b1
- (void)dealloc;	// 0x3480fd
// converted property getter: - (id)image;	// 0x348501
- (BOOL)isAccessibilityElement;	// 0x3490b1
- (void)layoutSubcontrols;	// 0x348521
// converted property getter: - (id)primaryText;	// 0x3483bd
// converted property getter: - (id)secondaryText;	// 0x348445
// converted property setter: - (void)setImage:(id)image;	// 0x3484b9
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x34833d
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x348381
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x3483f5
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x34847d
// converted property setter: - (void)setTitle:(id)title;	// 0x3482dd
- (void)setType:(int)type;	// 0x3481e5
// converted property getter: - (id)title;	// 0x34831d
@end
