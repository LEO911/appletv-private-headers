/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVRadioHistoryController, ATVDataClient, NSArray, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface ATVRadioHistoryDataSource : XXUnknownSuperclass {
	BOOL _dataRequested;	// 4 = 0x4
	BOOL _dataRequiresUpdate;	// 5 = 0x5
	BOOL _active;	// 6 = 0x6
	ATVDataClient *_dataClient;	// 8 = 0x8
	ATVRadioHistoryController *_historyController;	// 12 = 0xc
	ATVDataQuery *_itemsQuery;	// 16 = 0x10
	NSArray *_historySectionData;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL active;	// G=0x869d9; S=0x85f51; @synthesize=_active
@property(assign, nonatomic) __weak ATVDataClient *dataClient;	// G=0x86901; S=0x86921; @synthesize=_dataClient
@property(assign, nonatomic) __weak ATVRadioHistoryController *historyController;	// G=0x86935; S=0x86955; @synthesize=_historyController
@property(retain, nonatomic) NSArray *historySectionData;	// G=0x869a1; S=0x869b1; @synthesize=_historySectionData
@property(retain, nonatomic) ATVDataQuery *itemsQuery;	// G=0x86969; S=0x86979; @synthesize=_itemsQuery
- (id)initWithDataClient:(id)dataClient historyController:(id)controller;	// 0x85dcd
- (void).cxx_destruct;	// 0x869e9
- (void)_dataClientDataUpdated:(id)updated;	// 0x867dd
- (void)_executeQuery;	// 0x8610d
- (void)_showNoItemsView;	// 0x86641
// declared property getter: - (BOOL)active;	// 0x869d9
// declared property getter: - (id)dataClient;	// 0x86901
- (void)dealloc;	// 0x85ed1
// declared property getter: - (id)historyController;	// 0x86935
// declared property getter: - (id)historySectionData;	// 0x869a1
// declared property getter: - (id)itemsQuery;	// 0x86969
// declared property setter: - (void)setActive:(BOOL)active;	// 0x85f51
// declared property setter: - (void)setDataClient:(id)client;	// 0x86921
// declared property setter: - (void)setHistoryController:(id)controller;	// 0x86955
// declared property setter: - (void)setHistorySectionData:(id)data;	// 0x869b1
// declared property setter: - (void)setItemsQuery:(id)query;	// 0x86979
@end
