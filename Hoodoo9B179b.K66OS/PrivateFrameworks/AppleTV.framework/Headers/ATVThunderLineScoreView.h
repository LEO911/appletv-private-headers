/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTableView, BRTextControl, BRImageControl, BRAsyncImageControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderLineScoreView : BRControl {
@private
	NSDictionary *_data;	// 48 = 0x30
	BRTextControl *_homeTeamName;	// 52 = 0x34
	BRTextControl *_awayTeamName;	// 56 = 0x38
	BRTextControl *_homeTeamScore;	// 60 = 0x3c
	BRTextControl *_awayTeamScore;	// 64 = 0x40
	BRAsyncImageControl *_homeTeamLogo;	// 68 = 0x44
	BRAsyncImageControl *_awayTeamLogo;	// 72 = 0x48
	BRTextControl *_gamePeriod;	// 76 = 0x4c
	BRTextControl *_gameTime;	// 80 = 0x50
	BRTextControl *_gameState;	// 84 = 0x54
	BRImageControl *_lineScoreBG;	// 88 = 0x58
	BRTableView *_lineScoreTable;	// 92 = 0x5c
}
- (id)initWithDictionary:(id)dictionary;	// 0x301f3681
- (id)_gamePeriodAttributes;	// 0x301f4ca9
- (id)_gameStateAttributes;	// 0x301f4cf1
- (id)_gameTimeAttributes;	// 0x301f4ccd
- (id)_scoreAttributes;	// 0x301f4c85
- (id)_tableCellAttributes;	// 0x301f4d39
- (id)_tableHeaderAttributes;	// 0x301f4d15
- (id)_teamNameAttributes;	// 0x301f4c61
- (id)accessibilityLabel;	// 0x301f4b71
- (void)dealloc;	// 0x301f3df9
- (float)headerHeightForTableView:(id)tableView;	// 0x301f4b65
- (void)layoutSubcontrols;	// 0x301f3f39
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x301f4705
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x301f4709
- (long)numberOfRowsInTableView:(id)tableView;	// 0x301f4701
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x301f3f21
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x301f48c9
- (float)tableView:(id)view heightForRow:(long)row;	// 0x301f4b59
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x301f470d
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x301f4afd
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x301f4b49
@end
