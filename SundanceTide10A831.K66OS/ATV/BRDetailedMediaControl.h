/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRDetailedMediaControl : BRControl {
	BRControl *_metadata;	// 84 = 0x54
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 88 = 0x58
	BRControl *_textLine;	// 92 = 0x5c
	BRControl *_previewBrowser;	// 96 = 0x60
	BRActionShelfControl *_actionShelf;	// 100 = 0x64
	BRTextControl *_expiryText;	// 104 = 0x68
	id<BRProvider> _metadataProvider;	// 108 = 0x6c
	id<BRProvider> _textLineProvider;	// 112 = 0x70
	id<BRProvider> _previewBrowserProvider;	// 116 = 0x74
	int _style;	// 120 = 0x78
	BOOL _detailsTogglingEnabled;	// 124 = 0x7c
	BOOL _autoRefreshMetadata;	// 125 = 0x7d
}
@property(retain) id actionProviders;	// G=0x2c9b89; S=0x2c9a01; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x2c9451; S=0x2c9395; converted property
@property(assign) int detailControlStyle;	// G=0x2c9365; S=0x2c9251; converted property
@property(retain) id detailedMetadataControl;	// G=0x2c9841; S=0x2c979d; converted property
@property(retain) id metadataProvider;	// G=0x2c978d; S=0x2c967d; converted property
@property(retain) id previewBrowserProvider;	// G=0x2c9961; S=0x2c9851; converted property
@property(retain) id textLineProvider;	// G=0x2c966d; S=0x2c9461; converted property
- (id)init;	// 0x2c8d89
- (void)_focusedActionChanged:(id)changed;	// 0x2ca1c9
- (id)accessibilityScreenContent;	// 0x2ca1a9
// converted property getter: - (id)actionProviders;	// 0x2c9b89
- (BOOL)brEventAction:(id)action;	// 0x2c9069
// converted property getter: - (id)coverArtPreviewControl;	// 0x2c9451
- (void)dealloc;	// 0x2c8f4d
// converted property getter: - (int)detailControlStyle;	// 0x2c9365
// converted property getter: - (id)detailedMetadataControl;	// 0x2c9841
- (void)enableDetailsToggling;	// 0x2c923d
- (CGRect)focusCursorFrame;	// 0x2c9141
- (void)invokeActionSelectionHandler;	// 0x2c9be1
- (void)layoutSubcontrols;	// 0x2c9cb9
// converted property getter: - (id)metadataProvider;	// 0x2c978d
// converted property getter: - (id)previewBrowserProvider;	// 0x2c9961
- (void)setActionFocusedIndex:(long)index;	// 0x2c9c3d
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x2c9a01
- (void)setActionSelectionHandler:(id)handler;	// 0x2c9bc1
- (void)setActionStyle:(int)style;	// 0x2c9c1d
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x2c99f1
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x2c9395
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x2c9251
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x2c979d
- (void)setExpiryText:(id)text;	// 0x2c9971
- (void)setImageProxy:(id)proxy;	// 0x2c9375
- (void)setMediaType:(id)type;	// 0x2c8f2d
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x2c967d
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x2c9851
- (void)setTextLine:(id)line;	// 0x2c9571
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x2c9461
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c9c89
// converted property getter: - (id)textLineProvider;	// 0x2c966d
@end
