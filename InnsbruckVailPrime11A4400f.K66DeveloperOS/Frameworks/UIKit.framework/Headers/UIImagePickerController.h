/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UINavigationController.h"

@class UIView, NSMutableDictionary, NSArray;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding> {
	int _sourceType;	// 424 = 0x1a8
	id _image;	// 428 = 0x1ac
	CGRect _cropRect;	// 432 = 0x1b0
	NSArray *_mediaTypes;	// 448 = 0x1c0
	NSMutableDictionary *_properties;	// 452 = 0x1c4
	int _previousStatusBarStyle;	// 456 = 0x1c8
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	} _imagePickerFlags;	// 460 = 0x1cc
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x2f6a3979; S=0x2f6a3991; 
@property(assign, nonatomic) BOOL allowsImageEditing;	// G=0x2f6a3951; S=0x2f6a3969; 
@property(assign, nonatomic) int cameraCaptureMode;	// G=0x2f6a4755; S=0x2f6a4821; 
@property(assign, nonatomic) int cameraDevice;	// G=0x2f6a4605; S=0x2f6a4689; 
@property(assign, nonatomic) int cameraFlashMode;	// G=0x2f6a4961; S=0x2f6a49e5; 
@property(retain, nonatomic) UIView *cameraOverlayView;	// G=0x2f6a41b9; S=0x2f6a42ed; 
@property(assign, nonatomic) CGAffineTransform cameraViewTransform;	// G=0x2f6a435d; S=0x2f6a4455; 
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIImagePickerControllerDelegate> delegate;	// @dynamic
@property(copy, nonatomic) NSArray *mediaTypes;	// G=0x2f6a38a5; S=0x2f6a3691; 
@property(assign, nonatomic) BOOL showsCameraControls;	// G=0x2f6a4095; S=0x2f6a4119; 
@property(assign, nonatomic) int sourceType;	// G=0x2f6a3681; S=0x2f6a3435; 
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x2f6a39a1; S=0x2f6a39d5; 
@property(assign, nonatomic) int videoQuality;	// G=0x2f6a3a1d; S=0x2f6a3a51; 
+ (BOOL)_isMediaTypeAvailable:(id)available forSource:(int)source;	// 0x2f6a2b71
+ (BOOL)_reviewCapturedItems;	// 0x2f6a2c09
+ (id)availableCaptureModesForCameraDevice:(int)cameraDevice;	// 0x2f6a2cc1
+ (id)availableMediaTypesForSourceType:(int)sourceType;	// 0x2f6a2c0d
+ (BOOL)isCameraDeviceAvailable:(int)available;	// 0x2f6a2c95
+ (BOOL)isFlashAvailableForCameraDevice:(int)cameraDevice;	// 0x2f6a2dd5
+ (BOOL)isSourceTypeAvailable:(int)available;	// 0x2f6a2b21
- (id)init;	// 0x2f6a2df1
- (id)initWithCoder:(id)coder;	// 0x2f6a2ef5
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x2f6a54a1
- (BOOL)_allowsImageEditing;	// 0x2f6a3b71
- (BOOL)_allowsMultipleSelection;	// 0x2f6a38dd
- (void)_autoDismiss;	// 0x2f6a54ad
- (id)_cameraViewController;	// 0x2f6a4031
- (id)_createInitialController;	// 0x2f6a501d
- (BOOL)_didRevertStatusBar;	// 0x2f6a4df5
- (void)_imagePickerDidCancel;	// 0x2f6a54d9
- (void)_imagePickerDidCompleteWithInfo:(id)_imagePicker;	// 0x2f6a5541
- (void)_imagePickerDidCompleteWithInfoArray:(id)_imagePicker;	// 0x2f6a56f5
- (unsigned)_imagePickerSavingOptions;	// 0x2f6a3fbd
- (id)_initWithSourceImageData:(id)sourceImageData cropRect:(CGRect)rect;	// 0x2f6a30b5
- (void)_initializeProperties;	// 0x2f6a3c01
- (BOOL)_isCameraCaptureModeValid:(int)valid;	// 0x2f6a47d9
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x2f6a4e09
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x2f6a3295
- (id)_properties;	// 0x2f6a3e39
- (void)_removeAllChildren;	// 0x2f6a4f15
- (void)_setAllowsImageEditing:(BOOL)editing;	// 0x2f6a3a95
- (void)_setAllowsMultipleSelection:(BOOL)selection;	// 0x2f6a390d
- (void)_setImagePickerSavingOptions:(unsigned)options;	// 0x2f6a3f9d
- (void)_setProperties:(id)properties;	// 0x2f6a3ba1
- (void)_setValue:(id)value forProperty:(id)property;	// 0x2f6a3e89
- (void)_setupControllersForCurrentMediaTypes;	// 0x2f6a5395
- (void)_setupControllersForCurrentSourceType;	// 0x2f6a530d
- (BOOL)_sourceTypeIsCamera;	// 0x2f6a3fd1
- (void)_updateCameraCaptureMode;	// 0x2f6a33a1
- (id)_valueForProperty:(id)property;	// 0x2f6a3f59
// declared property getter: - (BOOL)allowsEditing;	// 0x2f6a3979
// declared property getter: - (BOOL)allowsImageEditing;	// 0x2f6a3951
// declared property getter: - (int)cameraCaptureMode;	// 0x2f6a4755
// declared property getter: - (int)cameraDevice;	// 0x2f6a4605
// declared property getter: - (int)cameraFlashMode;	// 0x2f6a4961
// declared property getter: - (id)cameraOverlayView;	// 0x2f6a41b9
// declared property getter: - (CGAffineTransform)cameraViewTransform;	// 0x2f6a435d
- (void)dealloc;	// 0x2f6a321d
- (void)encodeWithCoder:(id)coder;	// 0x2f6a32d9
// declared property getter: - (id)mediaTypes;	// 0x2f6a38a5
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x2f6a3991
// declared property setter: - (void)setAllowsImageEditing:(BOOL)editing;	// 0x2f6a3969
// declared property setter: - (void)setCameraCaptureMode:(int)mode;	// 0x2f6a4821
// declared property setter: - (void)setCameraDevice:(int)device;	// 0x2f6a4689
// declared property setter: - (void)setCameraFlashMode:(int)mode;	// 0x2f6a49e5
// declared property setter: - (void)setCameraOverlayView:(id)view;	// 0x2f6a42ed
// declared property setter: - (void)setCameraViewTransform:(CGAffineTransform)transform;	// 0x2f6a4455
// declared property setter: - (void)setMediaTypes:(id)types;	// 0x2f6a3691
// declared property setter: - (void)setShowsCameraControls:(BOOL)controls;	// 0x2f6a4119
// declared property setter: - (void)setSourceType:(int)type;	// 0x2f6a3435
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x2f6a39d5
// declared property setter: - (void)setVideoQuality:(int)quality;	// 0x2f6a3a51
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f6a4e65
// declared property getter: - (BOOL)showsCameraControls;	// 0x2f6a4095
// declared property getter: - (int)sourceType;	// 0x2f6a3681
- (BOOL)startVideoCapture;	// 0x2f6a4575
- (void)stopVideoCapture;	// 0x2f6a45bd
- (unsigned)supportedInterfaceOrientations;	// 0x2f6a4ec1
- (void)takePicture;	// 0x2f6a452d
// declared property getter: - (double)videoMaximumDuration;	// 0x2f6a39a1
// declared property getter: - (int)videoQuality;	// 0x2f6a3a1d
- (void)viewDidDisappear:(BOOL)view;	// 0x2f6a4d61
- (void)viewWillAppear:(BOOL)view;	// 0x2f6a4b01
- (void)viewWillDisappear:(BOOL)view;	// 0x2f6a4bb9
- (void)viewWillUnload;	// 0x2f6a4a85
@end

