/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFeedTextTableDataSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedUniformTextTableViewController : XXUnknownSuperclass {
	int _cachedColumnCount;	// 4 = 0x4
	ATVFeedTextTableDataSet *_dataSet;	// 8 = 0x8
	NSDictionary *_headerTextAttributes;	// 12 = 0xc
	NSDictionary *_cellTextAttributes;	// 16 = 0x10
	float _cellHeight;	// 20 = 0x14
	float _cellWidth;	// 24 = 0x18
	float _headerHeight;	// 28 = 0x1c
	float _headerWidth;	// 32 = 0x20
}
@property(assign) float cellHeight;	// G=0x11dad1; S=0x11dae5; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x11daad; S=0x11dac1; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x11dafd; S=0x11db11; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x11d6b1; S=0x11d65d; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x11db29; S=0x11db3d; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x11da89; S=0x11da9d; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x11db55; S=0x11db69; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x11dad1
// declared property getter: - (id)cellTextAttributes;	// 0x11daad
// declared property getter: - (float)cellWidth;	// 0x11dafd
// declared property getter: - (id)dataSet;	// 0x11d6b1
- (void)dealloc;	// 0x11d5e5
// declared property getter: - (float)headerHeight;	// 0x11db29
- (float)headerHeightForTableView:(id)tableView;	// 0x11da69
// declared property getter: - (id)headerTextAttributes;	// 0x11da89
// declared property getter: - (float)headerWidth;	// 0x11db55
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x11d6f9
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x11d7c5
- (long)numberOfRowsInTableView:(id)tableView;	// 0x11d6c1
// declared property setter: - (void)setCellHeight:(float)height;	// 0x11dae5
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x11dac1
// declared property setter: - (void)setCellWidth:(float)width;	// 0x11db11
// declared property setter: - (void)setDataSet:(id)set;	// 0x11d65d
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x11db3d
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x11da9d
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x11db69
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x11d909
- (float)tableView:(id)view heightForRow:(long)row;	// 0x11da59
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x11d7fd
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x11da49
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x11da79
@end

