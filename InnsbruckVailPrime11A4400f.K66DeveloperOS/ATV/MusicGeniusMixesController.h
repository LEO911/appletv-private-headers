/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class ATVDataQuery, NSArray, NSTimer, ATVDataClient, BRPageStripView;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixesController : BRViewController {
	BRPageStripView *_geniusMixesView;	// 104 = 0x68
	unsigned _dataClientType;	// 108 = 0x6c
	ATVDataClient *_dataClient;	// 112 = 0x70
	NSArray *_data;	// 116 = 0x74
	ATVDataQuery *_dataQuery;	// 120 = 0x78
	ATVDataQuery *_geniusMixSongsQuery;	// 124 = 0x7c
	NSTimer *_spinnerTimer;	// 128 = 0x80
	BOOL _showingSpinner;	// 132 = 0x84
	BOOL _handlingDataClientUpdate;	// 133 = 0x85
	BOOL _refreshNeeded;	// 134 = 0x86
	int _geniusQueryIndex;	// 136 = 0x88
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x19837d
- (void)_dataClientStatusChanged:(id)changed;	// 0x198d35
- (void)_dataClientUpdated:(id)updated;	// 0x198cd1
- (void)_dataQueryComplete;	// 0x1991a1
- (void)_executeDataQuery;	// 0x198f8d
- (id)_filterDataQueryResults:(id)results;	// 0x1993f1
- (void)_geniusMixSongsQueryComplete;	// 0x199509
- (void)_setDataQuery:(id)query;	// 0x199155
- (void)_showSpinner:(BOOL)spinner;	// 0x198ed5
- (void)_spinnerTimerFired;	// 0x198d9d
- (id)accessibilityLabel;	// 0x1986d1
- (void)dealloc;	// 0x19854d
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x1986f1
- (id)pageStripView:(id)view detailedPageAtIndex:(long)index;	// 0x1988c1
- (void)pageStripView:(id)view didPlayPageAtIndex:(long)index;	// 0x198cc1
- (void)pageStripView:(id)view didSelectPageAtIndex:(long)index;	// 0x198a8d
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x198711
- (void)wasExhumed;	// 0x19866d
- (void)wasPushed;	// 0x19862d
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x198a69
- (float)yDetailedPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x198a81
- (float)yPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x198a75
@end

