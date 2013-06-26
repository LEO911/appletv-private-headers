/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
	OADTableTextStyle *mTextStyle;	// 4 = 0x4
	OADTableCellStyle *mCellStyle;	// 8 = 0x8
}
@property(retain) id cellStyle;	// G=0x318620b9; S=0x31836c75; converted property
@property(retain) id textStyle;	// G=0x31862289; S=0x31836f61; converted property
+ (id)defaultStyle;	// 0x318f4f51
- (void)applyOverridesFrom:(id)from;	// 0x318f50b9
// converted property getter: - (id)cellStyle;	// 0x318620b9
- (void)dealloc;	// 0x318381d5
// converted property setter: - (void)setCellStyle:(id)style;	// 0x31836c75
// converted property setter: - (void)setTextStyle:(id)style;	// 0x31836f61
- (id)shallowCopy;	// 0x318f4ff5
// converted property getter: - (id)textStyle;	// 0x31862289
@end
