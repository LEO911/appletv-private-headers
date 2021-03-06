/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RTF_CMArchiveManager : NSObject {
	BOOL mIsThumbnail;	// 4 = 0x4
	unsigned mPageCount;	// 8 = 0x8
	NSMutableDictionary *mDrawableCache;	// 12 = 0xc
	NSString *mResourcePathPrefix;	// 16 = 0x10
	NSMutableSet *mPausedPaths;	// 20 = 0x14
	int mHeight;	// 24 = 0x18
	int mWidth;	// 28 = 0x1c
}
@property(assign) BOOL isThumbnail;	// G=0x33b1c381; S=0x33b1c371; converted property
@property(assign) unsigned pageCount;	// G=0x33b1c3a1; S=0x33b1c391; converted property
@property(retain) id resourcePathPrefix;	// G=0x33b1c301; S=0x33b1c2c5; converted property
+ (id)hashKeyFor:(id)aFor;	// 0x33b1c339
+ (id)resourceTypeToExtension:(int)extension;	// 0x33b1c455
+ (id)resourceTypeToMIME:(int)mime;	// 0x33b1c3d5
- (id)init;	// 0x33b1becd
- (id)addCssStyle:(id)style;	// 0x33b1c2b9
- (void)addCssStyle:(id)style withName:(id)name;	// 0x33b1c2bd
- (id)addResource:(id)resource withName:(id)name;	// 0x33b1c0cd
- (id)addResource:(id)resource withType:(int)type;	// 0x33b1c059
- (id)addResourceForDrawable:(id)drawable withType:(int)type drawable:(id)drawable3;	// 0x33b1c141
- (id)appendResourcePathToName:(id)name;	// 0x33b1c311
- (id)cachedPathForDrawable:(id)drawable;	// 0x33b1c1c9
- (void)closeResourceAtPath:(id)path;	// 0x33b1c051
- (void)commitDataAtPath:(id)path;	// 0x33b1c055
- (id)cssStylesheetString;	// 0x33b1c2c1
- (void)dealloc;	// 0x33b1bf4d
- (BOOL)isProgressive;	// 0x33b1c3b1
// converted property getter: - (BOOL)isThumbnail;	// 0x33b1c381
- (id)newResourceWithName:(id)name;	// 0x33b1bfb1
- (id)newResourceWithType:(int)type;	// 0x33b1bfb5
// converted property getter: - (unsigned)pageCount;	// 0x33b1c3a1
- (void)pauseProgressiveMappingOnPath:(id)path;	// 0x33b1c211
- (BOOL)progressiveMappingIsPausedOnPath:(id)path;	// 0x33b1c279
- (void)pushCssToPath:(id)path;	// 0x33b1c04d
- (void)pushData:(id)data toPath:(id)path;	// 0x33b1c045
- (void)pushText:(id)text toPath:(id)path;	// 0x33b1c049
- (int)resourceCount;	// 0x33b1c2b5
// converted property getter: - (id)resourcePathPrefix;	// 0x33b1c301
- (void)restartProgressiveMappingOnPath:(id)path;	// 0x33b1c245
- (void)setHTMLHeight:(int)height;	// 0x33b1c3b5
- (void)setHTMLWidth:(int)width;	// 0x33b1c3c5
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x33b1c371
// converted property setter: - (void)setPageCount:(unsigned)count;	// 0x33b1c391
// converted property setter: - (void)setResourcePathPrefix:(id)prefix;	// 0x33b1c2c5
@end

