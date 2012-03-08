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
@property(retain) BRMediaType *missingType;	// G=0x341c85dd; S=0x341c8599; converted property
@property(assign) BOOL previewShouldShowMetadata;	// G=0x341c85fd; S=0x341c85ed; converted property
@property(assign) BOOL previewShouldShowMetadataImmediately;	// G=0x341c861d; S=0x341c860d; converted property
@property(assign) BOOL shouldDeletterboxArtwork;	// G=0x341c863d; S=0x341c862d; converted property
+ (id)factory;	// 0x341c7d29
+ (id)filterProxies:(id)proxies;	// 0x341c7d71
- (id)init;	// 0x341c7fa9
- (id)_coverArtControllerForAssets:(id)assets;	// 0x341c8751
- (id)_metadataControllerForAsset:(id)asset;	// 0x341c8879
- (id)_paradeControllerForAssets:(id)assets;	// 0x341c8919
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x341c864d
- (void)dealloc;	// 0x341c801d
// converted property getter: - (id)missingType;	// 0x341c85dd
- (id)previewControlForAsset:(id)asset;	// 0x341c8069
- (id)previewControlForAssets:(id)assets;	// 0x341c8149
- (id)previewControlForImageProxies:(id)imageProxies;	// 0x341c8415
- (id)previewControlForImageProxy:(id)imageProxy;	// 0x341c80a9
// converted property getter: - (BOOL)previewShouldShowMetadata;	// 0x341c85fd
// converted property getter: - (BOOL)previewShouldShowMetadataImmediately;	// 0x341c861d
// converted property setter: - (void)setMissingType:(id)type;	// 0x341c8599
// converted property setter: - (void)setPreviewShouldShowMetadata:(BOOL)showMetadata;	// 0x341c85ed
// converted property setter: - (void)setPreviewShouldShowMetadataImmediately:(BOOL)showMetadataImmediately;	// 0x341c860d
// converted property setter: - (void)setShouldDeletterboxArtwork:(BOOL)deletterboxArtwork;	// 0x341c862d
// converted property getter: - (BOOL)shouldDeletterboxArtwork;	// 0x341c863d
@end
