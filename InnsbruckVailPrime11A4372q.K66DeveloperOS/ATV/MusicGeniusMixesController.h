/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSTimer, ATVDataQuery, BRPageStripView, ATVDataClient, NSArray;

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
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x1a3f1d
- (void)_dataClientStatusChanged:(id)changed;	// 0x1a48d5
- (void)_dataClientUpdated:(id)updated;	// 0x1a4871
- (void)_dataQueryComplete;	// 0x1a4d41
- (void)_executeDataQuery;	// 0x1a4b2d
- (id)_filterDataQueryResults:(id)results;	// 0x1a4f91
- (void)_geniusMixSongsQueryComplete;	// 0x1a50a9
- (void)_setDataQuery:(id)query;	// 0x1a4cf5
- (void)_showSpinner:(BOOL)spinner;	// 0x1a4a75
- (void)_spinnerTimerFired;	// 0x1a493d
- (id)accessibilityLabel;	// 0x1a4271
- (void)dealloc;	// 0x1a40ed
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x1a4291
- (id)pageStripView:(id)view detailedPageAtIndex:(long)index;	// 0x1a4461
- (void)pageStripView:(id)view didPlayPageAtIndex:(long)index;	// 0x1a4861
- (void)pageStripView:(id)view didSelectPageAtIndex:(long)index;	// 0x1a462d
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x1a42b1
- (void)wasExhumed;	// 0x1a420d
- (void)wasPushed;	// 0x1a41cd
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1a4609
- (float)yDetailedPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1a4621
- (float)yPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1a4615
@end

