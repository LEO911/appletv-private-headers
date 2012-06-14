/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncTask, NSString, BRWaitSpinnerControl, BRImage, BRImageControl;
@protocol BRImageProxy;

@interface BRAsyncImageControl : BRControl {
@private
	id<BRImageProxy> _imageProxy;	// 48 = 0x30
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
	BRImage *_image;	// 56 = 0x38
	BRImage *_defaultImage;	// 60 = 0x3c
	BRAsyncTask *_imageProcessingTask;	// 64 = 0x40
	NSString *_imageID;	// 68 = 0x44
	BOOL _cropAndFill;	// 72 = 0x48
	BOOL _useLoadingSpinner;	// 73 = 0x49
	BOOL _loadFailure;	// 74 = 0x4a
	BOOL _imageLoadRequested;	// 75 = 0x4b
	BOOL _useLoadFailureImage;	// 76 = 0x4c
	BOOL _loadOnActivation;	// 77 = 0x4d
	BOOL _okToLoadImage;	// 78 = 0x4e
	BOOL _useFadeInAnimation;	// 79 = 0x4f
	int _requestedSize;	// 80 = 0x50
	BRImageControl *_badgeImageControl;	// 84 = 0x54
	float _badgeUnfocusedOpacity;	// 88 = 0x58
	float _badgeFocusedOpacity;	// 92 = 0x5c
	int _imageContentMode;	// 96 = 0x60
}
@property(retain) BRImage *image;	// G=0x3667ce5d; S=0x3667ce4d; converted property
@property(assign, nonatomic) int imageContentMode;	// G=0x3667d92d; S=0x3667d93d; @synthesize=_imageContentMode
@property(retain) id imageProxy;	// G=0x3667ce15; S=0x3667cdd5; converted property
+ (id)imageControlWithImage:(id)image;	// 0x3667cc0d
+ (id)imageControlWithImageProxy:(id)imageProxy;	// 0x3667cb81
- (id)init;	// 0x3667cc9d
- (id)initWithImage:(id)image;	// 0x3667cc65
- (id)initWithImageProxy:(id)imageProxy;	// 0x3667cbc9
- (void)_checkImageSize:(id)size;	// 0x3667dd01
- (void)_cropImage:(id)image;	// 0x3667e21d
- (void)_enableFadeInAnimation;	// 0x3667d94d
- (void)_enableSpinner;	// 0x3667da15
- (void)_fetchCachedThumbnailImage;	// 0x3667da51
- (void)_fetchPreferredSizeImage;	// 0x3667dba5
- (id)_getImageFromImageManagerNamed:(id)imageManagerNamed withSize:(CGSize)size;	// 0x3667e495
- (id)_imageOfSize:(int)size;	// 0x3667e095
- (void)_imageTaskComplete:(id)complete;	// 0x3667e3e9
- (void)_imageUnavailable:(id)unavailable;	// 0x3667e5cd
- (void)_imageUpdated:(id)updated;	// 0x3667e4fd
- (void)_performDeactivation;	// 0x3667e9bd
- (void)_scaleImage:(id)image;	// 0x3667e309
- (void)_setImage:(id)image;	// 0x3667e6a9
- (void)_setImageID:(id)anId;	// 0x3667e77d
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x3667de15
- (void)_updateContents;	// 0x3667e7bd
- (id)accessibilityLabel;	// 0x3667d629
- (id)accessibilityTraits;	// 0x3667d5f9
- (void)cancelImageLoading;	// 0x3667ce9d
- (void)controlWasActivated;	// 0x3667cf59
- (void)controlWasDeactivated;	// 0x3667d039
- (void)controlWasFocused;	// 0x3667d0e9
- (void)controlWasUnfocused;	// 0x3667d145
- (void)dealloc;	// 0x3667ccf5
// converted property getter: - (id)image;	// 0x3667ce5d
// declared property getter: - (int)imageContentMode;	// 0x3667d92d
// converted property getter: - (id)imageProxy;	// 0x3667ce15
- (BOOL)isAccessibilityElement;	// 0x3667d625
- (void)layoutSubcontrols;	// 0x3667d375
- (void)loadImage;	// 0x3667ce7d
- (void)setBadgeImage:(id)image badgeUnfocusedOpacity:(float)opacity badgeFocusedOpacity:(float)opacity3;	// 0x3667d235
- (void)setCropAndFill:(BOOL)fill;	// 0x3667d205
- (void)setDefaultImage:(id)image;	// 0x3667d1a1
// converted property setter: - (void)setImage:(id)image;	// 0x3667ce4d
// declared property setter: - (void)setImageContentMode:(int)mode;	// 0x3667d93d
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x3667cdd5
- (void)setLoadImageOnActivation:(BOOL)activation;	// 0x3667ce6d
- (void)setUseFadeInAnimation:(BOOL)animation;	// 0x3667d225
- (void)setUseLoadFailureImage:(BOOL)image;	// 0x3667d215
- (void)setUseLoadingSpinner:(BOOL)spinner;	// 0x3667d1f5
- (void)windowMaxBoundsChanged;	// 0x3667d079
@end
