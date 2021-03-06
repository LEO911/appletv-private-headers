/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacAsset.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoAsset : ATVDotMacAsset {
@private
	long _duration;	// 60 = 0x3c
	NSString *_mediaURL;	// 64 = 0x40
	NSString *_description;	// 68 = 0x44
}
@property(assign) long duration;	// G=0x35ccef45; S=0x35ccef55; converted property
@property(retain) NSString *mediaURL;	// G=0x35cceda9; S=0x35ccee75; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x35ccecf1
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x35ccf121
- (void)dealloc;	// 0x35cced49
// converted property getter: - (long)duration;	// 0x35ccef45
- (BOOL)hasVideoContent;	// 0x35ccf11d
- (id)mediaDescription;	// 0x35ccef65
- (id)mediaType;	// 0x35ccf101
// converted property getter: - (id)mediaURL;	// 0x35cceda9
- (void)setDescription:(id)description;	// 0x35ccf031
// converted property setter: - (void)setDuration:(long)duration;	// 0x35ccef55
// converted property setter: - (void)setMediaURL:(id)url;	// 0x35ccee75
@end

