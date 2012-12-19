/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableTextStyle, OADTableCellStyle;

@interface OADTablePartStyle : NSObject {
	OADTableTextStyle *mTextStyle;	// 4 = 0x4
	OADTableCellStyle *mCellStyle;	// 8 = 0x8
}
@property(retain) id cellStyle;	// G=0x349922a5; S=0x3493a241; converted property
@property(retain) id textStyle;	// G=0x34992471; S=0x3493a859; converted property
+ (id)defaultStyle;	// 0x34a520cd
- (void)applyOverridesFrom:(id)from;	// 0x34a52235
// converted property getter: - (id)cellStyle;	// 0x349922a5
- (void)dealloc;	// 0x34941cf5
// converted property setter: - (void)setCellStyle:(id)style;	// 0x3493a241
// converted property setter: - (void)setTextStyle:(id)style;	// 0x3493a859
- (id)shallowCopy;	// 0x34a52171
// converted property getter: - (id)textStyle;	// 0x34992471
@end
