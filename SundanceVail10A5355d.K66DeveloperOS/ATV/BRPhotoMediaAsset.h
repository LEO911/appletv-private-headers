/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRBaseMediaAsset.h"

@class NSString, BRImageManager;

__attribute__((visibility("hidden")))
@interface BRPhotoMediaAsset : BRBaseMediaAsset {
	NSString *_thumbURL;	// 8 = 0x8
	NSString *_coverArtURL;	// 12 = 0xc
	NSString *_fullURL;	// 16 = 0x10
	NSString *_artID;	// 20 = 0x14
	double _dateTakenTimerInterval;	// 24 = 0x18
	BOOL _isLocal;	// 32 = 0x20
	NSString *_title;	// 36 = 0x24
}
@property(retain) NSString *artID;	// G=0x286a6d; S=0x286985; converted property
@property(retain) NSString *coverArtURL;	// G=0x286589; S=0x286665; converted property
@property(retain) id dateTaken;	// G=0x28674d; S=0x286795; converted property
@property(retain) NSString *fullURL;	// G=0x286201; S=0x2862dd; converted property
@property(assign) BOOL isLocal;	// G=0x285d19; S=0x285d09; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x286b81; 
@property(retain) NSString *thumbURL;	// G=0x2863c5; S=0x2864a1; converted property
@property(retain) NSString *title;	// G=0x2867c1; S=0x28689d; converted property
- (id)init;	// 0x285b79
// converted property getter: - (id)artID;	// 0x286a6d
- (id)assetID;	// 0x285d49
- (id)coverArt;	// 0x2860a9
- (id)coverArtID;	// 0x285e4d
// converted property getter: - (id)coverArtURL;	// 0x286589
// converted property getter: - (id)dateTaken;	// 0x28674d
- (void)dealloc;	// 0x285bbd
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x286b49
- (id)faces;	// 0x286b6d
- (id)fullSizeArt;	// 0x286145
- (id)fullSizeArtID;	// 0x285f1d
// converted property getter: - (id)fullURL;	// 0x286201
- (unsigned)hash;	// 0x285c5d
- (id)imageProxy;	// 0x285d29
- (BOOL)isEqual:(id)equal;	// 0x285c85
// converted property getter: - (BOOL)isLocal;	// 0x285d19
- (id)mediaType;	// 0x2861e1
// declared property getter: - (id)preferredImageManager;	// 0x286b81
- (id)primaryCollection;	// 0x2861fd
// converted property setter: - (void)setArtID:(id)anId;	// 0x286985
// converted property setter: - (void)setCoverArtURL:(id)url;	// 0x286665
// converted property setter: - (void)setDateTaken:(id)taken;	// 0x286795
// converted property setter: - (void)setFullURL:(id)url;	// 0x2862dd
// converted property setter: - (void)setIsLocal:(BOOL)local;	// 0x285d09
// converted property setter: - (void)setThumbURL:(id)url;	// 0x2864a1
// converted property setter: - (void)setTitle:(id)title;	// 0x28689d
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x286b71
// converted property getter: - (id)thumbURL;	// 0x2863c5
- (id)thumbnailArt;	// 0x28600d
- (id)thumbnailArtID;	// 0x285d7d
// converted property getter: - (id)title;	// 0x2867c1
@end
