/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDText;

@interface WMSectionContentMapper : CMMapper {
	WDText *wdText;	// 8 = 0x8
}
- (id)initWithWDText:(id)wdtext parent:(id)parent;	// 0x31c7d6ad
- (void)mapAt:(id)at withState:(id)state;	// 0x31c7d6f1
- (void)mapTextFrameAt:(id)at withState:(id)state;	// 0x31cd7add
- (void)mapTextFrameStyleTo:(id)to withState:(id)state;	// 0x31cd7d01
- (id)paragraphAtIndex:(int)index;	// 0x31c7da25
- (void)updateTextFrameState:(id)state atIndex:(int)index;	// 0x31c7d8f5
@end

