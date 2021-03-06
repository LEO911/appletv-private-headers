/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "BRViewController.h"

@class RUIYTListDataSourceAspect, RUIYTDocumentLoader, RUIYTHistoryManager, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RUIYTHistoryController : BRViewController <RUIYTDocumentLoaderDelegate> {
	RUIYTHistoryManager *_historyManager;	// 104 = 0x68
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 108 = 0x6c
	NSMutableArray *_assets;	// 112 = 0x70
	RUIYTDocumentLoader *_documentLoader;	// 116 = 0x74
}
@property(retain, nonatomic) NSMutableArray *assets;	// G=0x265271; S=0x265281; @synthesize=_assets
@property(retain, nonatomic) RUIYTDocumentLoader *documentLoader;	// G=0x2652a9; S=0x2652b9; @synthesize=_documentLoader
- (id)initWithHistoryManager:(id)historyManager;	// 0x2649e9
- (void).cxx_destruct;	// 0x2652e1
- (void)_assetWasPlayedNotification:(id)notification;	// 0x265b2d
- (void)_clearHistory;	// 0x2654c9
- (void)_reloadList:(id)list;	// 0x265595
- (id)_sections;	// 0x26533d
- (void)_setupView;	// 0x2656b5
// declared property getter: - (id)assets;	// 0x265271
- (void)dealloc;	// 0x264b31
// declared property getter: - (id)documentLoader;	// 0x2652a9
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x264e81
- (id)identifier;	// 0x264bd1
- (BOOL)isNetworkDependent;	// 0x264c61
// declared property setter: - (void)setAssets:(id)assets;	// 0x265281
// declared property setter: - (void)setDocumentLoader:(id)loader;	// 0x2652b9
- (void)wasPushed;	// 0x264c65
@end

