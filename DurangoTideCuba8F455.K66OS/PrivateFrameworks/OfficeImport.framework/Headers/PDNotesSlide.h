/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDNotesMaster;

__attribute__((visibility("hidden")))
@interface PDNotesSlide : PDSlideChild {
@private
	PDNotesMaster *mNotesMaster;	// 44 = 0x2c
}
@property(retain) id notesMaster;	// G=0x32c834b5; S=0x32c83411; converted property
- (id)init;	// 0x32c833e5
- (void)dealloc;	// 0x32c85e81
- (void)doneWithContent;	// 0x32d16561
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32c83575
// converted property getter: - (id)notesMaster;	// 0x32c834b5
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32c8353d
- (id)parentSlideBase;	// 0x32c83449
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index;	// 0x32c834f5
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style;	// 0x32c83459
// converted property setter: - (void)setNotesMaster:(id)master;	// 0x32c83411
@end

