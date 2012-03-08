/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInterstitialGroupProvider.h"
#import "BRXMLMediaAsset.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "BRChapterGroupProvider.h"

@class ATVMerchant, ATVInterstitialGroup, NSMutableArray, NSDictionary, NSNumber, ATVFeedDocument, ATVFeedVideoElement, ATVVideoAssetUpdater, NSDate;

@interface ATVVideoAsset : BRXMLMediaAsset <BRMediaAssetDerivesMediaURL, BRChapterGroupProvider, ATVInterstitialGroupProvider> {
@private
	NSDictionary *_data;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	NSDate *_eventStart;	// 20 = 0x14
	NSMutableArray *_chapterGroups;	// 24 = 0x18
	ATVVideoAssetUpdater *_updater;	// 28 = 0x1c
	ATVFeedDocument *_feedDocument;	// 32 = 0x20
	ATVInterstitialGroup *_interstitials;	// 36 = 0x24
	NSNumber *_bookmarkNetTime;	// 40 = 0x28
	BOOL _startFromStartDate;	// 44 = 0x2c
	ATVFeedVideoElement *_feedElement;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *bookmarkNetTime;	// G=0x33a170c5; S=0x33a170d5; @synthesize=_bookmarkNetTime
@property(readonly, retain) NSMutableArray *chapterGroups;	// G=0x33a16ded; converted property
@property(retain, nonatomic) NSDate *eventStart;	// G=0x33a17081; S=0x33a17091; @synthesize=_eventStart
@property(retain, nonatomic) ATVFeedVideoElement *feedElement;	// G=0x33a17119; S=0x33a17129; @synthesize=_feedElement
@property(readonly, assign, nonatomic) ATVInterstitialGroup *interstitials;	// G=0x33a170b5; @synthesize=_interstitials
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x33a1704d; S=0x33a1705d; @synthesize=_merchant
@property(readonly, assign, nonatomic) NSDictionary *originalPlist;	// G=0x33a166f9; 
@property(assign, nonatomic) BOOL startFromStartDate;	// G=0x33a170f9; S=0x33a17109; @synthesize=_startFromStartDate
- (id)initWithDictionary:(id)dictionary;	// 0x33a161c5
- (id)initWithFeedElement:(id)feedElement;	// 0x33a15d99
- (id)_currentlyPlayingChapter;	// 0x33a1714d
- (id)_fetchEventGroupAtURL:(id)url;	// 0x33a171c5
- (void)addOrReplaceChapterGroup:(id)group;	// 0x33a16c69
// declared property getter: - (id)bookmarkNetTime;	// 0x33a170c5
- (id)chapterGroupAtIndex:(unsigned)index;	// 0x33a16da5
- (unsigned)chapterGroupCount;	// 0x33a16d65
// converted property getter: - (id)chapterGroups;	// 0x33a16ded
- (void)dealloc;	// 0x33a16709
// declared property getter: - (id)eventStart;	// 0x33a17081
// declared property getter: - (id)feedElement;	// 0x33a17119
- (BOOL)hasChapterGroupAtIndex:(unsigned)index;	// 0x33a16d85
- (id)imageProxy;	// 0x33a16e25
- (id)infoOverlayDescriptionAttributes;	// 0x33a1700d
// declared property getter: - (id)interstitials;	// 0x33a170b5
- (id)mediaDescription;	// 0x33a16f79
// declared property getter: - (id)merchant;	// 0x33a1704d
// declared property getter: - (id)originalPlist;	// 0x33a166f9
- (id)resolveMediaURL;	// 0x33a167f5
// declared property setter: - (void)setBookmarkNetTime:(id)time;	// 0x33a170d5
// declared property setter: - (void)setEventStart:(id)start;	// 0x33a17091
// declared property setter: - (void)setFeedElement:(id)element;	// 0x33a17129
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x33a1705d
// declared property setter: - (void)setStartFromStartDate:(BOOL)startDate;	// 0x33a17109
- (id)startDate;	// 0x33a16bfd
// declared property getter: - (BOOL)startFromStartDate;	// 0x33a170f9
- (id)title;	// 0x33a16ed9
@end
