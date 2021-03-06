/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLTableRowElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x331b0341; S=0x331b04b5; 
@property(copy) NSString *bgColor;	// G=0x331b05ed; S=0x331b0761; 
@property(readonly, assign) DOMHTMLCollection *cells;	// G=0x331b020d; 
@property(copy) NSString *ch;	// G=0x331b0899; S=0x331b0a0d; 
@property(copy) NSString *chOff;	// G=0x331b0b45; S=0x331b0cb9; 
@property(readonly, assign) int rowIndex;	// G=0x331b002d; 
@property(readonly, assign) int sectionRowIndex;	// G=0x331b011d; 
@property(copy) NSString *vAlign;	// G=0x331b0df1; S=0x331b0f65; 
// declared property getter: - (id)align;	// 0x331b0341
// declared property getter: - (id)bgColor;	// 0x331b05ed
// declared property getter: - (id)cells;	// 0x331b020d
// declared property getter: - (id)ch;	// 0x331b0899
// declared property getter: - (id)chOff;	// 0x331b0b45
- (void)deleteCell:(int)cell;	// 0x331b11ed
- (id)insertCell:(int)cell;	// 0x331b109d
// declared property getter: - (int)rowIndex;	// 0x331b002d
// declared property getter: - (int)sectionRowIndex;	// 0x331b011d
// declared property setter: - (void)setAlign:(id)align;	// 0x331b04b5
// declared property setter: - (void)setBgColor:(id)color;	// 0x331b0761
// declared property setter: - (void)setCh:(id)ch;	// 0x331b0a0d
// declared property setter: - (void)setChOff:(id)off;	// 0x331b0cb9
// declared property setter: - (void)setVAlign:(id)align;	// 0x331b0f65
// declared property getter: - (id)vAlign;	// 0x331b0df1
@end

