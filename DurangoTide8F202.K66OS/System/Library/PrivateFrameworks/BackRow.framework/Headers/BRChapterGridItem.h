/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRAsyncImageControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
@private
	BRAsyncImageControl *_imageControl;	// 44 = 0x2c
	BRMarqueeTextControl *_chapterTitleControl;	// 48 = 0x30
	NSDictionary *_chapterInfo;	// 52 = 0x34
}
@property(retain) NSDictionary *chapterInfo;	// G=0x328ef43d; S=0x328ef5b9; converted property
- (id)init;	// 0x328ef565
// converted property getter: - (id)chapterInfo;	// 0x328ef43d
- (void)controlWasFocused;	// 0x328ef495
- (void)controlWasUnfocused;	// 0x328ef44d
- (void)dealloc;	// 0x328ef4f9
- (void)layoutSubcontrols;	// 0x328ef8a1
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x328ef5b9
@end

