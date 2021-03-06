/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTabControl, BRTextControl, BRVideoChapterProvider, BRCoverArtPreviewControl, BRMediaPlayer, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
	BRVideoChapterProvider *_chapterProvider;	// 84 = 0x54
	BRCoverArtPreviewControl *_preview;	// 88 = 0x58
	BRControl *_csaPicker;	// 92 = 0x5c
	BRTabControl *_tabControl;	// 96 = 0x60
	BRTextControl *_titleControl;	// 100 = 0x64
	BRMediaPlayer *_player;	// 104 = 0x68
	BRControl *_currentContentControl;	// 108 = 0x6c
	BRWaitPromptControl *_spinner;	// 112 = 0x70
	BRTextControl *_subtitleExplanatoryTextcontrol;	// 116 = 0x74
	BOOL _controlWasActivated;	// 120 = 0x78
	BOOL _controlWasDeactivated;	// 121 = 0x79
	BOOL _playbackShouldRemainPaused;	// 122 = 0x7a
	BOOL _subtitleListNeedsReload;	// 123 = 0x7b
}
+ (id)controlWithPlayer:(id)player;	// 0x34dfa1
- (id)init;	// 0x34e005
- (void).cxx_destruct;	// 0x34edb5
- (void)_addCSAPicker;	// 0x350d59
- (void)_animatePreviewBackToScreenshot;	// 0x350a35
- (BOOL)_chapterPreviewsAvailable;	// 0x34f36d
- (void)_createCSAPicker;	// 0x350b0d
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x350d99
- (void)_loadAudioList;	// 0x350269
- (void)_loadChapters;	// 0x34f6b9
- (void)_loadGraphicalChapterList;	// 0x34f8a5
- (void)_loadSpeakersList;	// 0x3505d1
- (void)_loadSubtitleList;	// 0x34fc19
- (void)_loadTextualChapterList;	// 0x34f6f9
- (void)_selectSpeaker:(id)speaker;	// 0x34f471
- (void)_selectedAudioOptionChanged:(id)changed;	// 0x35098d
- (void)_selectedSubtitleOptionChanged:(id)changed;	// 0x3508e5
- (void)_setAudioOption:(id)option;	// 0x34f269
- (void)_setChapter:(id)chapter;	// 0x34ee75
- (void)_setSubtitleListNeedsReload;	// 0x350135
- (void)_setSubtitleOption:(id)option;	// 0x34f035
- (void)_subtitleOptionsChanged:(id)changed;	// 0x35083d
- (id)_swizzleSubtitleOptionToAutoIfNecessary:(id)autoIfNecessary availableOptions:(id)options;	// 0x35074d
- (id)_titleControlItemLabelAttributes;	// 0x350e59
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34ecfd
- (BOOL)brEventAction:(id)action;	// 0x34eb3d
- (void)controlWasActivated;	// 0x34e7e9
- (void)dealloc;	// 0x34e0bd
- (void)layoutSubcontrols;	// 0x34e841
- (void)orderOut;	// 0x34e795
- (void)setPlayer:(id)player;	// 0x34e149
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x34ec25
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x34ecf5
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x34ecf9
@end

