/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"

@class WDParagraph, WXState, NSMutableDictionary;

@interface WXOAVState : OAVState {
	WXState *mWxState;	// 28 = 0x1c
	WDParagraph *mParagraph;	// 32 = 0x20
	NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;	// 36 = 0x24
}
@property(retain) id currentParagraph;	// G=0x36c87be9; S=0x36abae7d; converted property
- (id)initWithWXState:(id)wxstate;	// 0x36aa3115
// converted property getter: - (id)currentParagraph;	// 0x36c87be9
- (void)dealloc;	// 0x36ac0de1
- (id)nextVmlShapeIdToTextBoxMap;	// 0x36ac0949
// converted property setter: - (void)setCurrentParagraph:(id)paragraph;	// 0x36abae7d
- (id)wxState;	// 0x36abfa61
@end
