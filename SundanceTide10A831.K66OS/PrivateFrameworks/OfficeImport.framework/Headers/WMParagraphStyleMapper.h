/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDParagraphProperties, WMParagraphStyle, WDParagraph;

@interface WMParagraphStyleMapper : CMMapper {
	WDParagraphProperties *wdParaProperties;	// 8 = 0x8
	WDParagraph *wdParagraph;	// 12 = 0xc
	WMParagraphStyle *mStyle;	// 16 = 0x10
}
- (id)initWithWDParagraph:(id)wdparagraph parent:(id)parent isInTextFrame:(BOOL)textFrame;	// 0x36ac4239
- (id)bulletLabelAtLevel:(id)level forIndex:(int)index bulletFormat:(int)format listState:(id)state;	// 0x36acdbd5
- (bool)checkListId:(int)anId level:(int)level;	// 0x36acd561
- (void)dealloc;	// 0x36ac7945
- (void)destyleEmptyParagraph;	// 0x36ac7739
- (BOOL)isListItem;	// 0x36ac5859
- (id)labelStringWithGap:(id)gap;	// 0x36ba011d
- (void)mapAt:(id)at withState:(id)state;	// 0x36ac7829
- (void)mapBulletAt:(id)at forLevel:(id)level forIndex:(int)index listState:(id)state isOutline:(BOOL)outline;	// 0x36acd8b9
- (void)mapListStyleAt:(id)at state:(id)state;	// 0x36ac58e5
@end

