/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperation, NSURL, BRURLImageProxy;
@protocol ATVRadioStationImageLoaderDelegate;

__attribute__((visibility("hidden")))
@interface ATVRadioStationImageLoader : XXUnknownSuperclass {
	id<ATVRadioStationImageLoaderDelegate> _delegate;	// 4 = 0x4
	NSURL *_artworkURL;	// 8 = 0x8
	unsigned _style;	// 12 = 0xc
	BRURLImageProxy *_originalImageProxy;	// 16 = 0x10
	NSOperation *_decorationOperation;	// 20 = 0x14
}
@property(retain) NSURL *artworkURL;	// G=0x4a729d; S=0x4a72b1; @synthesize=_artworkURL
@property(retain, nonatomic) NSOperation *decorationOperation;	// G=0x4a7325; S=0x4a7335; @synthesize=_decorationOperation
@property(assign, nonatomic) __weak id<ATVRadioStationImageLoaderDelegate> delegate;	// G=0x4a7269; S=0x4a7289; @synthesize=_delegate
@property(retain, nonatomic) BRURLImageProxy *originalImageProxy;	// G=0x4a72ed; S=0x4a72fd; @synthesize=_originalImageProxy
@property(assign) unsigned style;	// G=0x4a72c1; S=0x4a72d5; @synthesize=_style
+ (id)_attributesForImageAtIndex:(unsigned)index withStyle:(unsigned)style;	// 0x4a5aed
+ (id)decorateOriginalImage:(id)image withStyle:(unsigned)style forItemAtIndex:(unsigned)index;	// 0x4a5c4d
+ (id)processingQueue;	// 0x4a5a5d
- (id)initWithStation:(id)station style:(unsigned)style;	// 0x4a612d
- (void).cxx_destruct;	// 0x4a735d
- (void)_createStackImagesWithOriginalImage:(id)originalImage;	// 0x4a68cd
- (id)_decoratedImagesFromCacheForOperation:(id)operation;	// 0x4a6785
- (void)_didLoadImages:(id)images;	// 0x4a6551
- (void)_imageNotAvailable:(id)available;	// 0x4a7145
- (void)_imageUpdated:(id)updated;	// 0x4a6fbd
- (void)_loadOriginalImage;	// 0x4a63dd
- (id)_nameForDecoratedImageAtIndex:(unsigned)index;	// 0x4a6605
- (unsigned)_numberOfImages;	// 0x4a6229
// declared property getter: - (id)artworkURL;	// 0x4a729d
- (void)dealloc;	// 0x4a61bd
// declared property getter: - (id)decorationOperation;	// 0x4a7325
// declared property getter: - (id)delegate;	// 0x4a7269
// declared property getter: - (id)originalImageProxy;	// 0x4a72ed
// declared property setter: - (void)setArtworkURL:(id)url;	// 0x4a72b1
// declared property setter: - (void)setDecorationOperation:(id)operation;	// 0x4a7335
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4a7289
// declared property setter: - (void)setOriginalImageProxy:(id)proxy;	// 0x4a72fd
// declared property setter: - (void)setStyle:(unsigned)style;	// 0x4a72d5
- (void)startLoadingImages;	// 0x4a622d
- (void)stopLoadingImages;	// 0x4a62a9
// declared property getter: - (unsigned)style;	// 0x4a72c1
@end
