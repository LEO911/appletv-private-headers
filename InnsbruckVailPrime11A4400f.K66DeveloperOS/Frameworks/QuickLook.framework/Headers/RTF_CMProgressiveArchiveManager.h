/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RTF_CMProgressiveArchiveManager : RTF_CMArchiveManager {
	const void *mClient;	// 32 = 0x20
	XXStruct_6QhCXB *mCallBacks;	// 36 = 0x24
	NSMutableDictionary *mDataCache;	// 40 = 0x28
	NSMutableDictionary *mStyleCache;	// 44 = 0x2c
	NSMutableString *mCssString;	// 48 = 0x30
	BOOL mMainDataInited;	// 52 = 0x34
	NSMutableString *mHtmlLogString;	// 56 = 0x38
}
- (id)initWithClient:(const void *)client andCallBacks:(XXStruct_6QhCXB *)backs;	// 0x2f2f1991
- (id)addCssStyle:(id)style;	// 0x2f2f1f2d
- (void)addCssStyle:(id)style withName:(id)name;	// 0x2f2f2005
- (void)closeResourceAtPath:(id)path;	// 0x2f2f1ed9
- (void)commitDataAtPath:(id)path;	// 0x2f2f1d81
- (id)cssStylesheetString;	// 0x2f2f214d
- (void)dealloc;	// 0x2f2f1a69
- (BOOL)isProgressive;	// 0x2f2f1b01
- (id)newResourceWithName:(id)name;	// 0x2f2f1b05
- (void)pushCssToPath:(id)path;	// 0x2f2f2061
- (void)pushData:(id)data toPath:(id)path;	// 0x2f2f1c21
- (void)pushText:(id)text toPath:(id)path;	// 0x2f2f1d09
@end
