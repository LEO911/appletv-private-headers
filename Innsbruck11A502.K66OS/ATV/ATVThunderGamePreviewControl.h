/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class ATVThunderGameCourtView, ATVThunderLineScoreView;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewControl : BRControl {
	ATVThunderLineScoreView *_lineScore;	// 84 = 0x54
	ATVThunderGameCourtView *_gameCourt;	// 88 = 0x58
}
- (id)initWithDictionary:(id)dictionary;	// 0x26cbed
- (id)accessibilityLabel;	// 0x26ce7d
- (void)dealloc;	// 0x26ccf1
- (void)layoutSubcontrols;	// 0x26cd55
@end

