/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDParagraph, WDParagraphProperties, WMParagraphStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyleMapper : CMMapper {
@private
	WDParagraphProperties *wdParaProperties;	// 8 = 0x8
	WDParagraph *wdParagraph;	// 12 = 0xc
	WMParagraphStyle *mStyle;	// 16 = 0x10
}
- (id)initWithWDParagraph:(id)wdparagraph parent:(id)parent isInTextFrame:(BOOL)textFrame;	// 0x328afe39
- (id)bulletLabelAtLevel:(id)level forIndex:(int)index bulletFormat:(int)format listState:(id)state;	// 0x328be775
- (bool)checkListId:(int)anId level:(int)level;	// 0x328bdda1
- (void)dealloc;	// 0x328aed01
- (void)destyleEmptyParagraph;	// 0x328bd4bd
- (BOOL)isListItem;	// 0x328b11f9
- (id)labelStringWithGap:(id)gap;	// 0x32b0dc05
- (void)mapAt:(id)at withState:(id)state;	// 0x328aeb75
- (void)mapBulletAt:(id)at forLevel:(id)level forIndex:(int)index listState:(id)state isOutline:(BOOL)outline;	// 0x328be41d
- (void)mapListStyleAt:(id)at state:(id)state;	// 0x328b1299
@end

