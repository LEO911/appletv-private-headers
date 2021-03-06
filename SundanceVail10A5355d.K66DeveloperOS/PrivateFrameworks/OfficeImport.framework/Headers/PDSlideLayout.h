/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {
	int mSlideLayoutType;	// 40 = 0x28
	PDSlideMaster *mSlideMaster;	// 44 = 0x2c
}
@property(assign) int slideLayoutType;	// G=0x31bf57e5; S=0x31bf316d; converted property
@property(retain) id slideMaster;	// G=0x31bf3219; S=0x31bf315d; converted property
- (id)initWithSlideMaster:(id)slideMaster;	// 0x31bf305d
- (void)dealloc;	// 0x31c0d285
- (id)defaultTheme;	// 0x31bff001
- (void)doneWithContent;	// 0x31e099c1
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31bf3549
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31bf34a9
- (id)parentSlideBase;	// 0x31bf5b35
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31bf3229
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x31bf317d
- (id)parentTextStyleForTables;	// 0x31d14f69
// converted property setter: - (void)setSlideLayoutType:(int)type;	// 0x31bf316d
// converted property setter: - (void)setSlideMaster:(id)master;	// 0x31bf315d
// converted property getter: - (int)slideLayoutType;	// 0x31bf57e5
// converted property getter: - (id)slideMaster;	// 0x31bf3219
@end

