/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextControl.h"


__attribute__((visibility("hidden")))
@interface BRAlignmentAdjustingTextControl : BRTextControl {
	int _singleLineAlignment;	// 88 = 0x58
	int _multiLineAlignment;	// 92 = 0x5c
}
@property(assign) int multiLineAlignment;	// G=0x2fdd4d; S=0x2fdd61; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x2fdd21; S=0x2fdd35; @synthesize=_singleLineAlignment
- (id)init;	// 0x2fda45
- (void)_updateAttributes;	// 0x2fda95
- (void)layoutSubcontrols;	// 0x2fdc95
// declared property getter: - (int)multiLineAlignment;	// 0x2fdd4d
- (void)setAttributedString:(id)string;	// 0x2fdc51
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x2fdd61
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x2fdd35
// declared property getter: - (int)singleLineAlignment;	// 0x2fdd21
@end

