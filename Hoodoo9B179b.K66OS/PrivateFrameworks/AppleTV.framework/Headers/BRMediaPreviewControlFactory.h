/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@class BRMediaType;

@interface BRMediaPreviewControlFactory : NSObject <BRControlFactory> {
@private
	BRMediaType *_missingType;	// 4 = 0x4
	BOOL _deletterboxArtwork;	// 8 = 0x8
	BOOL _shouldShowMetadata;	// 9 = 0x9
	BOOL _showMetadataImmediately;	// 10 = 0xa
}
@property(retain) BRMediaType *missingType;	// G=0x302756e1; S=0x3027569d; converted property
@property(assign) BOOL previewShouldShowMetadata;	// G=0x30275701; S=0x302756f1; converted property
@property(assign) BOOL previewShouldShowMetadataImmediately;	// G=0x30275721; S=0x30275711; converted property
@property(assign) BOOL shouldDeletterboxArtwork;	// G=0x30275741; S=0x30275731; converted property
+ (id)factory;	// 0x30274e35
+ (id)filterProxies:(id)proxies;	// 0x30274e7d
- (id)init;	// 0x302750b5
- (id)_coverArtControllerForAssets:(id)assets;	// 0x30275855
- (id)_metadataControllerForAsset:(id)asset;	// 0x3027597d
- (id)_paradeControllerForAssets:(id)assets;	// 0x30275a1d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x30275751
- (void)dealloc;	// 0x30275129
// converted property getter: - (id)missingType;	// 0x302756e1
- (id)previewControlForAsset:(id)asset;	// 0x30275175
- (id)previewControlForAssets:(id)assets;	// 0x30275255
- (id)previewControlForImageProxies:(id)imageProxies;	// 0x30275521
- (id)previewControlForImageProxy:(id)imageProxy;	// 0x302751b5
// converted property getter: - (BOOL)previewShouldShowMetadata;	// 0x30275701
// converted property getter: - (BOOL)previewShouldShowMetadataImmediately;	// 0x30275721
// converted property setter: - (void)setMissingType:(id)type;	// 0x3027569d
// converted property setter: - (void)setPreviewShouldShowMetadata:(BOOL)showMetadata;	// 0x302756f1
// converted property setter: - (void)setPreviewShouldShowMetadataImmediately:(BOOL)showMetadataImmediately;	// 0x30275711
// converted property setter: - (void)setShouldDeletterboxArtwork:(BOOL)deletterboxArtwork;	// 0x30275731
// converted property getter: - (BOOL)shouldDeletterboxArtwork;	// 0x30275741
@end
