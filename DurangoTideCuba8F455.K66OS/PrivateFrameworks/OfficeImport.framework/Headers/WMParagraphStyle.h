/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


__attribute__((visibility("hidden")))
@interface WMParagraphStyle : WMStyle {
@private
	BOOL mIsInTextFrame;	// 12 = 0xc
}
+ (BOOL)isShadingNull:(id)null;	// 0x32c12509
- (id)initWithWDParagraphProperties:(id)wdparagraphProperties isInTextFrame:(BOOL)textFrame;	// 0x32cc22e5
- (id)initWithWDStyle:(id)wdstyle isInTextFrame:(BOOL)textFrame;	// 0x32bacb75
- (void)addListProperties:(id)properties;	// 0x32bb0935
- (void)addParagraphProperties:(id)properties;	// 0x32bacc31
- (void)addParagraphStyleCharacterProperties:(id)properties;	// 0x32bb12f9
- (void)mapBorders:(id)borders;	// 0x32bad74d
@end

