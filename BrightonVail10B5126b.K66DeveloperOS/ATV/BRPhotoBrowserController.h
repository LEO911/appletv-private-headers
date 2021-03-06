/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRFullScreenPhotoControllerDelegate.h"

@class NSString, BRCursorControl, NSDateFormatter, NSTimer, BRScrollControl, BRWaitSpinnerControl, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl, BRTextControl, BRGridControl;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserController : BRController <BRFullScreenPhotoControllerDelegate> {
	id<BRProvider> _provider;	// 100 = 0x64
	int _style;	// 104 = 0x68
	NSString *_subtitleKey;	// 108 = 0x6c
	NSDateFormatter *_formatter;	// 112 = 0x70
	long _providerDataCount;	// 116 = 0x74
	BRGridControl *_grid;	// 120 = 0x78
	BRWaitSpinnerControl *_spinner;	// 124 = 0x7c
	BRCursorControl *_cursorControl;	// 128 = 0x80
	BRScrollControl *_scroller;	// 132 = 0x84
	BRTextControl *_noContentMessageControl;	// 136 = 0x88
	NSTimer *_noContentMessageTimer;	// 140 = 0x8c
	BOOL _isNetworkDependent;	// 144 = 0x90
	BOOL _isValidWithZeroData;	// 145 = 0x91
	BOOL _useCorkBoardBackground;	// 146 = 0x92
	id _screenSaverSetCollectionBlock;	// 148 = 0x94
	double noContentErrorDisplayDelay;	// 152 = 0x98
	BRPhotoBrowserBannerButton *_useForScreensaverButton;	// 160 = 0xa0
	id _onUpdateButtons;	// 164 = 0xa4
	BRPhotoBrowserHeaderControl *_header;	// 168 = 0xa8
	BRPhotoBrowserBannerButton *_slideshowButton;	// 172 = 0xac
	BRPhotoBrowserBannerButton *_settingsButton;	// 176 = 0xb0
}
@property(assign) int columnCount;	// G=0x348e5d; S=0x348e11; converted property
@property(assign) int cursorStyle;	// G=0x348dd1; S=0x348db1; converted property
@property(assign) BOOL displaysCount;	// G=0x348c0d; S=0x348bd1; converted property
@property(retain, nonatomic) BRPhotoBrowserHeaderControl *header;	// G=0x3498e9; S=0x3498f9; @synthesize=_header
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x348e31; S=0x348df1; converted property
@property(retain) id icon;	// G=0x348c6d; S=0x348c31; converted property
@property(assign) XXStruct_qlg9jA iconVerticalOffset;	// G=0x348cc9; S=0x348c8d; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x349345; S=0x349335; converted property
@property(assign) BOOL isValidWithZeroData;	// G=0x349365; S=0x349355; converted property
@property(assign, nonatomic) double noContentErrorDisplayDelay;	// G=0x349879; S=0x349891; @synthesize
@property(copy, nonatomic) id onUpdateButtons;	// G=0x3498c5; S=0x3498d9; @synthesize=_onUpdateButtons
@property(retain) id provider;	// G=0x3483e5; S=0x3482f1; converted property
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x348bb1; S=0x348b91; 
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x349855; S=0x349869; @synthesize=_screenSaverSetCollectionBlock
@property(retain, nonatomic) BRPhotoBrowserBannerButton *settingsButton;	// G=0x349929; S=0x349939; @synthesize=_settingsButton
@property(retain, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x349909; S=0x349919; @synthesize=_slideshowButton
@property(assign) int style;	// G=0x3489a9; S=0x348665; converted property
@property(retain) id subtitle;	// G=0x348d31; S=0x348cf5; converted property
@property(retain) NSString *subtitleKey;	// G=0x348da1; S=0x348d51; converted property
@property(retain) id title;	// G=0x348a41; S=0x3489b9; converted property
@property(retain, nonatomic) BRPhotoBrowserBannerButton *useForScreensaverButton;	// G=0x3498a5; S=0x3498b5; @synthesize=_useForScreensaverButton
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x348e9d; S=0x348e7d; converted property
+ (id)controllerForProvider:(id)provider;	// 0x347ddd
+ (id)controllerForProvider:(id)provider style:(int)style;	// 0x347e3d
- (id)initWithProvider:(id)provider;	// 0x347e29
- (id)initWithProvider:(id)provider style:(int)style;	// 0x347e8d
- (id)_containerCollection;	// 0x349eb1
- (void)_focusChanged:(id)changed;	// 0x34acb5
- (void)_handleDeletePhotoStreamItemSelection:(id)selection;	// 0x34ab81
- (void)_handleProviderDataCountChange;	// 0x34a149
- (void)_handleSelection:(id)selection;	// 0x34a3b1
- (void)_handleSlideshowSelection:(id)selection;	// 0x34a7a5
- (void)_handleUseForScreensaverSelection:(id)screensaverSelection;	// 0x34a93d
- (void)_hideNoContentMessage;	// 0x349fb5
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inCollection:(id)collection withOptions:(id)options;	// 0x34a051
- (id)_mediaItemInContainingControl:(id)containingControl;	// 0x34a311
- (void)_noContentTimerFired:(id)fired;	// 0x349ff1
- (void)_playerStateChanged:(id)changed;	// 0x34ad09
- (void)_providerUpdated:(id)updated;	// 0x34acf9
- (void)_screensaverPhotosDidChange:(id)_screensaverPhotos;	// 0x34ae1d
- (void)_setupControls;	// 0x349949
- (void)_showNoContentMessage;	// 0x349f01
- (void)_slideshowPlayerAssetChanged:(id)changed;	// 0x34ada5
- (id)_subtitleStringForKey:(id)key;	// 0x349cb9
- (id)accessibilityLabel;	// 0x3495ed
- (BOOL)brEventAction:(id)action;	// 0x349375
// converted property getter: - (int)columnCount;	// 0x348e5d
- (void)controlWasActivated;	// 0x3484e9
- (void)controlWasDeactivated;	// 0x3485d5
// converted property getter: - (int)cursorStyle;	// 0x348dd1
- (void)dealloc;	// 0x348185
// converted property getter: - (BOOL)displaysCount;	// 0x348c0d
// declared property getter: - (id)header;	// 0x3498e9
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x348e31
// converted property getter: - (id)icon;	// 0x348c6d
// converted property getter: - (XXStruct_qlg9jA)iconVerticalOffset;	// 0x348cc9
// converted property getter: - (BOOL)isNetworkDependent;	// 0x349345
- (BOOL)isValidAfterDataUpdate;	// 0x348629
// converted property getter: - (BOOL)isValidWithZeroData;	// 0x349365
- (void)layoutSubcontrols;	// 0x348fbd
// declared property getter: - (double)noContentErrorDisplayDelay;	// 0x349879
// declared property getter: - (id)onUpdateButtons;	// 0x3498c5
- (void)photoPlaybackWillStartForPlayer:(id)photoPlayback;	// 0x34961d
// converted property getter: - (id)provider;	// 0x3483e5
- (id)providersForContextMenu;	// 0x3496ad
// declared property getter: - (id)rightJustifiedText;	// 0x348bb1
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x349855
// converted property setter: - (void)setColumnCount:(int)count;	// 0x348e11
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x348db1
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x348bd1
// declared property setter: - (void)setHeader:(id)header;	// 0x3498f9
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x348df1
// converted property setter: - (void)setIcon:(id)icon;	// 0x348c31
// converted property setter: - (void)setIconVerticalOffset:(XXStruct_qlg9jA)offset;	// 0x348c8d
- (void)setIndex:(unsigned)index;	// 0x348a61
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x349335
// converted property setter: - (void)setIsValidWithZeroData:(BOOL)zeroData;	// 0x349355
- (void)setLastViewedSlideIndex:(int)index;	// 0x34960d
// declared property setter: - (void)setNoContentErrorDisplayDelay:(double)delay;	// 0x349891
// declared property setter: - (void)setOnUpdateButtons:(id)buttons;	// 0x3498d9
// converted property setter: - (void)setProvider:(id)provider;	// 0x3482f1
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x348b91
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x349869
// declared property setter: - (void)setSettingsButton:(id)button;	// 0x349939
// declared property setter: - (void)setSlideshowButton:(id)button;	// 0x349919
// converted property setter: - (void)setStyle:(int)style;	// 0x348665
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x348cf5
// converted property setter: - (void)setSubtitleKey:(id)key;	// 0x348d51
// converted property setter: - (void)setTitle:(id)title;	// 0x3489b9
// declared property setter: - (void)setUseForScreensaverButton:(id)screensaverButton;	// 0x3498b5
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x348e7d
// declared property getter: - (id)settingsButton;	// 0x349929
// declared property getter: - (id)slideshowButton;	// 0x349909
// converted property getter: - (int)style;	// 0x3489a9
// converted property getter: - (id)subtitle;	// 0x348d31
// converted property getter: - (id)subtitleKey;	// 0x348da1
// converted property getter: - (id)title;	// 0x348a41
// declared property getter: - (id)useForScreensaverButton;	// 0x3498a5
- (id)useForScreensaverButtonForCollection:(id)collection preHandler:(id)handler isCurrentlySet:(BOOL *)set;	// 0x348ec9
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x348e9d
- (void)wasBuried;	// 0x348449
- (void)wasExhumed;	// 0x348499
- (void)wasPushed;	// 0x3483f5
@end

