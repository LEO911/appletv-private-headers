/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRAsyncImageControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRMarqueeTextControl *_chapterTitleControl;	// 88 = 0x58
	NSDictionary *_chapterInfo;	// 92 = 0x5c
}
@property(retain) NSDictionary *chapterInfo;	// G=0x2c3ba5; S=0x2c3881; converted property
- (id)init;	// 0x2c37ad
// converted property getter: - (id)chapterInfo;	// 0x2c3ba5
- (void)controlWasFocused;	// 0x2c3bb5
- (void)controlWasUnfocused;	// 0x2c3c25
- (void)dealloc;	// 0x2c3809
- (void)layoutSubcontrols;	// 0x2c3c75
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x2c3881
@end

