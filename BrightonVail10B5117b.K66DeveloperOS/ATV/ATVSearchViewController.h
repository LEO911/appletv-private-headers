/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "ATVSearchViewDelegate.h"
#import "BRViewController.h"

@class ATVSearchView, NSCache, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVSearchViewController : BRViewController <ATVSearchViewDelegate, BRTextFieldDelegate> {
	NSTimer *_delayedLoadTimer;	// 104 = 0x68
	NSCache *_resultsCache;	// 108 = 0x6c
	NSString *_latestSearchString;	// 112 = 0x70
	BOOL _textDidEndEditing;	// 116 = 0x74
	NSString *_latestSearchStringWithResults;	// 120 = 0x78
}
@property(readonly, assign) NSString *latestSearchStringWithResults;	// G=0x11d899; @synthesize=_latestSearchStringWithResults
@property(readonly, assign) ATVSearchView *searchView;	// G=0x11d569; @dynamic
- (id)init;	// 0x11d3f9
- (void)_handleDelayedLoad:(id)load;	// 0x11da2d
- (id)_latestSearchString;	// 0x11d8ad
- (id)_latestSearchStringWithResults;	// 0x11daf1
- (void)_restoreLatestSearchStringWithResults;	// 0x11dbb9
- (void)_setDelayedLoadTimer:(id)timer;	// 0x11da01
- (void)_setLatestSearchString:(id)string;	// 0x11d8c1
- (void)_setResults:(id)results forSearch:(id)search;	// 0x11d811
- (void)_updateLatestSearchStringWithResults:(id)results;	// 0x11db01
- (void)dealloc;	// 0x11d4dd
// declared property getter: - (id)latestSearchStringWithResults;	// 0x11d899
// declared property getter: - (id)searchView;	// 0x11d569
- (void)searchView:(id)view focusDidChangeToControl:(int)focus;	// 0x11d5f5
- (void)searchWithString:(id)string;	// 0x11d579
- (void)textDidChange:(id)text;	// 0x11d62d
- (void)textDidEndEditing:(id)text;	// 0x11d769
@end
