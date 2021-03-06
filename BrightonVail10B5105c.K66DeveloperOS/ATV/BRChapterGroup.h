/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, ATVFeedEventGroupElement, ATVFeedDocument, NSString, NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface BRChapterGroup : XXUnknownSuperclass {
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSString *_groupName;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSString *_refreshURL;	// 16 = 0x10
	unsigned _refreshIntervalInSeconds;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	NSDictionary *_feedDictionary;	// 32 = 0x20
	ATVFeedEventGroupElement *_feedElement;	// 36 = 0x24
}
@property(readonly, assign) NSArray *chapters;	// G=0x37ba79; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x37bb09; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x37bb1d; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x37ba65; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x37bab1; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x37ba8d; S=0x37baa1; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x37bad9; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x37baf1; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x37bac5; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x37b935
- (id)initWithFeedElement:(id)feedElement;	// 0x37b625
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x37b785
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x37bb31
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x37bda1
- (unsigned)chapterCount;	// 0x37ba3d
// declared property getter: - (id)chapters;	// 0x37ba79
- (void)dealloc;	// 0x37b975
// declared property getter: - (id)feedDictionary;	// 0x37bb09
// declared property getter: - (id)feedElement;	// 0x37bb1d
// declared property getter: - (id)groupName;	// 0x37ba65
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x37bab1
// declared property getter: - (id)refreshURL;	// 0x37ba8d
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x37baa1
// declared property getter: - (BOOL)showChapterMarkers;	// 0x37bad9
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x37baf1
// declared property getter: - (id)startDate;	// 0x37bac5
@end

