/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVFlickrParserDelegate : BRBaseParserDelegate {
@private
	NSMutableDictionary *_errInfo;	// 12 = 0xc
	NSString *_userNSID;	// 16 = 0x10
	NSString *_userRealName;	// 20 = 0x14
	NSString *_userIconServer;	// 24 = 0x18
	NSString *_userIconFarm;	// 28 = 0x1c
	NSMutableArray *_photoInfos;	// 32 = 0x20
	NSMutableArray *_photosetInfos;	// 36 = 0x24
	BOOL _photosetInfoCreated;	// 40 = 0x28
	int _curPhotosetInfoIndex;	// 44 = 0x2c
	NSMutableArray *_contactInfos;	// 48 = 0x30
	NSMutableDictionary *_photoSizeInfo;	// 52 = 0x34
	long _photoCount;	// 56 = 0x38
}
@property(readonly, retain) NSMutableArray *contactInfos;	// G=0x35cd7c21; converted property
@property(readonly, retain) NSMutableDictionary *errInfo;	// G=0x35cd7afd; converted property
@property(readonly, assign) long photoCount;	// G=0x35cd7b4d; converted property
@property(readonly, retain) NSMutableArray *photoInfos;	// G=0x35cd7b5d; converted property
@property(readonly, retain) NSMutableArray *photosetInfos;	// G=0x35cd7b6d; converted property
@property(readonly, retain) NSString *userIconFarm;	// G=0x35cd7b3d; converted property
@property(readonly, retain) NSString *userIconServer;	// G=0x35cd7b2d; converted property
@property(readonly, retain) NSString *userNSID;	// G=0x35cd7b0d; converted property
@property(readonly, retain) NSString *userRealName;	// G=0x35cd7b1d; converted property
+ (id)parserDelegate;	// 0x35cd7065
- (BOOL)_originalImageSizeExceedsMaxSize;	// 0x35cd7ced
// converted property getter: - (id)contactInfos;	// 0x35cd7c21
- (void)dealloc;	// 0x35cd70a9
- (void)endCount;	// 0x35cd7389
- (void)endPhotoset;	// 0x35cd7929
- (void)endRealname;	// 0x35cd7345
- (void)endTitle;	// 0x35cd794d
// converted property getter: - (id)errInfo;	// 0x35cd7afd
- (id)largeImagePath;	// 0x35cd7c31
// converted property getter: - (long)photoCount;	// 0x35cd7b4d
// converted property getter: - (id)photoInfos;	// 0x35cd7b5d
// converted property getter: - (id)photosetInfos;	// 0x35cd7b6d
- (id)photosetInfosAlphabetically;	// 0x35cd7b7d
- (void)startContactWithAttributes:(id)attributes;	// 0x35cd79d9
- (void)startErrWithAttributes:(id)attributes;	// 0x35cd7195
- (void)startPersonWithAttributes:(id)attributes;	// 0x35cd72b9
- (void)startPhotoWithAttributes:(id)attributes;	// 0x35cd740d
- (void)startPhotosWithAttributes:(id)attributes;	// 0x35cd73c1
- (void)startPhotosetWithAttributes:(id)attributes;	// 0x35cd7711
- (void)startSizeWithAttributes:(id)attributes;	// 0x35cd75ed
- (void)startUserWithAttributes:(id)attributes;	// 0x35cd7269
// converted property getter: - (id)userIconFarm;	// 0x35cd7b3d
// converted property getter: - (id)userIconServer;	// 0x35cd7b2d
// converted property getter: - (id)userNSID;	// 0x35cd7b0d
// converted property getter: - (id)userRealName;	// 0x35cd7b1d
@end

