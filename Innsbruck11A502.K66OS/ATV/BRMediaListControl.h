/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRListControl, NSTimer, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface BRMediaListControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	BRControl *_preview;	// 88 = 0x58
	float _previewDelay;	// 92 = 0x5c
	NSTimer *_previewDelayTimer;	// 96 = 0x60
	BOOL _shareItemArtwork;	// 100 = 0x64
	BRHeaderControl *_header;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x37bf49; @synthesize=_header
@property(readonly, assign, nonatomic) BRListControl *list;	// G=0x37bf89; @synthesize=_list
@property(retain) id listProviders;	// G=0x37bb1d; S=0x37bae1; converted property
@property(readonly, assign, nonatomic) BRControl *preview;	// G=0x37bf99; @synthesize=_preview
@property(assign) long selection;	// G=0x37be75; S=0x37be39; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x37bf59; S=0x37bf71; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x37bc65; S=0x37bc21; converted property
@property(retain) id title;	// G=0x37bb81; S=0x37bb3d; converted property
@property(retain) id titleImage;	// G=0x37bc01; S=0x37bba1; converted property
+ (BOOL)_wantsHeader;	// 0x37bfa9
- (id)init;	// 0x37b5c1
- (void)_cleanupPreviewDelayTimer;	// 0x37c06d
- (void)_previewDelayTimerHandler:(id)handler;	// 0x37c099
- (void)_scrollWillStart:(id)_scroll;	// 0x37bfad
- (void)_scrollWillStop:(id)_scroll;	// 0x37bfbd
- (void)_updatePreviewWithDelay;	// 0x37bfcd
- (id)accessibilityLabel;	// 0x37bf09
- (id)accessibilityScreenContent;	// 0x37bf29
- (void)controlWasActivated;	// 0x37b969
- (void)controlWasDeactivated;	// 0x37ba29
- (void)dealloc;	// 0x37b6f1
// declared property getter: - (id)header;	// 0x37bf49
- (long)itemCount;	// 0x37be95
- (void)layoutSubcontrols;	// 0x37b795
// declared property getter: - (id)list;	// 0x37bf89
- (id)listProviderRequester;	// 0x37be29
// converted property getter: - (id)listProviders;	// 0x37bb1d
// declared property getter: - (id)preview;	// 0x37bf99
- (void)reload;	// 0x37becd
// converted property getter: - (long)selection;	// 0x37be75
// converted property setter: - (void)setListProviders:(id)providers;	// 0x37bae1
// converted property setter: - (void)setSelection:(long)selection;	// 0x37be39
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x37bf71
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x37bc21
// converted property setter: - (void)setTitle:(id)title;	// 0x37bb3d
// converted property setter: - (void)setTitleImage:(id)image;	// 0x37bba1
// declared property getter: - (BOOL)shareItemArtwork;	// 0x37bf59
// converted property getter: - (id)subtitle;	// 0x37bc65
// converted property getter: - (id)title;	// 0x37bb81
// converted property getter: - (id)titleImage;	// 0x37bc01
- (void)updatePreview;	// 0x37bc85
@end
