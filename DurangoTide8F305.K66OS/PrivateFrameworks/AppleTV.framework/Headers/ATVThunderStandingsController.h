/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRViewController.h> // Unknown library

@class NSDictionary, ATVThunderStandingsView;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsController : BRViewController {
@private
	ATVThunderStandingsView *_standingsView;	// 64 = 0x40
	NSDictionary *_data;	// 68 = 0x44
}
- (id)initWithDictionary:(id)dictionary;	// 0x307b112d
- (float)_headerWidthOfColumn:(long)column forTableView:(id)tableView;	// 0x307b0e09
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x307b0ed1
- (id)accessibilityLabel;	// 0x307b0fb9
- (id)accessibilityNonFocusableElements;	// 0x307b0f99
- (void)dealloc;	// 0x307b10d1
- (float)headerHeightForTableView:(id)tableView;	// 0x307b0dfd
- (BOOL)isAccessibilityElement;	// 0x307b0e05
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x307b1051
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x307b1011
- (long)numberOfRowsInTableView:(id)tableView;	// 0x307b1091
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x307b16e9
- (float)tableView:(id)view heightForRow:(long)row;	// 0x307b0df5
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x307b1421
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x307b0ff5
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x307b0fd9
@end

