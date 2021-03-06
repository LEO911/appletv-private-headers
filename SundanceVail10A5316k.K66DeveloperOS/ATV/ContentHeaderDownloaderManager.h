/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ContentHeaderDownloaderProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSCondition, CDNDownloadData, NSLock;

@interface ContentHeaderDownloaderManager : XXUnknownSuperclass <ContentHeaderDownloaderProtocol> {
	NSCondition *downloadsDone_;	// 4 = 0x4
	NSLock *downloadCompletedLock_;	// 8 = 0x8
	NSMutableArray *contentHeaderDownloadables_;	// 12 = 0xc
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 16 = 0x10
	int numActualDownloadables_;	// 20 = 0x14
	CDNDownloadData *selectedCdn_;	// 24 = 0x18
	BOOL aborting_;	// 28 = 0x1c
	int audioEncodingType_;	// 32 = 0x20
}
@property(assign) BOOL aborting;	// G=0x49f2dd; S=0x49f2ed; @synthesize=aborting_
@property(assign) int audioEncodingType;	// G=0x49f2fd; S=0x49f30d; @synthesize=audioEncodingType_
@property(retain) NSMutableArray *contentHeaderDownloadables;	// G=0x49f215; S=0x49f229; @synthesize=contentHeaderDownloadables_
@property(retain) NSLock *downloadCompletedLock;	// G=0x49f1dd; S=0x49f1f1; @synthesize=downloadCompletedLock_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x49f24d; S=0x49f261; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSCondition *downloadsDone;	// G=0x49f1a5; S=0x49f1b9; @synthesize=downloadsDone_
@property(assign) int numActualDownloadables;	// G=0x49f285; S=0x49f295; @synthesize=numActualDownloadables_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x49f2a5; S=0x49f2b9; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x49de39
- (id)init;	// 0x49df19
- (void)abort;	// 0x49f0fd
// declared property getter: - (BOOL)aborting;	// 0x49f2dd
// declared property getter: - (int)audioEncodingType;	// 0x49f2fd
- (void)contentDownloadableFinished:(BOOL)finished bitRate:(unsigned)rate contentProfile:(int)profile cdnId:(unsigned)anId bcp47:(id)a47;	// 0x49eb11
- (void)contentDownloadableForPreferredBitrateFinished:(BOOL)preferredBitrateFinished contentData:(id)data;	// 0x49f015
// declared property getter: - (id)contentHeaderDownloadables;	// 0x49f215
- (void)dealloc;	// 0x49e019
// declared property getter: - (id)downloadCompletedLock;	// 0x49f1dd
- (int)downloadContentHeaders:(int)headers;	// 0x49e0e1
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x49f24d
// declared property getter: - (id)downloadsDone;	// 0x49f1a5
// declared property getter: - (int)numActualDownloadables;	// 0x49f285
- (void)reset;	// 0x49f111
// declared property getter: - (id)selectedCdn;	// 0x49f2a5
// declared property setter: - (void)setAborting:(BOOL)aborting;	// 0x49f2ed
// declared property setter: - (void)setAudioEncodingType:(int)type;	// 0x49f30d
// declared property setter: - (void)setContentHeaderDownloadables:(id)downloadables;	// 0x49f229
// declared property setter: - (void)setDownloadCompletedLock:(id)lock;	// 0x49f1f1
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x49f261
// declared property setter: - (void)setDownloadsDone:(id)done;	// 0x49f1b9
// declared property setter: - (void)setNumActualDownloadables:(int)downloadables;	// 0x49f295
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x49f2b9
@end

