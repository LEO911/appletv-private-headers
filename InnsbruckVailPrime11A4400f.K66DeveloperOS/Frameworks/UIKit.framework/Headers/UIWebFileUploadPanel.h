/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"
#import "UIActionSheetDelegate.h"
#import "UIWebRotatingNodePopoverDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class UIWebRotatingNodePopover, UIFallbackCompatibleViewController, UIActionSheet, DOMNode, NSArray, UIWebDocumentView, UIImagePickerController;
@protocol WebOpenPanelResultListener, UIWebFileUploadPanelDelegate;

__attribute__((visibility("hidden")))
@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIWebRotatingNodePopoverDelegate> {
	UIActionSheet *_selectPickerTypeSheet;	// 304 = 0x130
	UIImagePickerController *_imagePicker;	// 308 = 0x134
	UIFallbackCompatibleViewController *_rootViewController;	// 312 = 0x138
	UIViewController *_fallbackViewController;	// 316 = 0x13c
	UIWebRotatingNodePopover *_fileUploadPopover;	// 320 = 0x140
	BOOL _documentViewPresentedViewController;	// 324 = 0x144
	CGPoint _interactionPoint;	// 328 = 0x148
	DOMNode *_interactionElement;	// 336 = 0x150
	BOOL _allowMultipleFiles;	// 340 = 0x154
	BOOL _isUsingCamera;	// 341 = 0x155
	NSArray *_mimeTypes;	// 344 = 0x158
	UIWebDocumentView *_documentView;	// 348 = 0x15c
	NSObject<WebOpenPanelResultListener> *_resultListener;	// 352 = 0x160
	id<UIWebFileUploadPanelDelegate> _delegate;	// 356 = 0x164
}
@property(assign, nonatomic) BOOL allowMultipleFiles;	// G=0x2f8a48d5; S=0x2f8a48e5; @synthesize=_allowMultipleFiles
@property(assign, nonatomic) id<UIWebFileUploadPanelDelegate> delegate;	// G=0x2f8a4915; S=0x2f8a4925; @synthesize=_delegate
@property(assign, nonatomic) UIWebDocumentView *documentView;	// G=0x2f8a4895; S=0x2f8a48a5; @synthesize=_documentView
@property(assign, nonatomic) BOOL isUsingCamera;	// G=0x2f8a48f5; S=0x2f8a4905; @synthesize=_isUsingCamera
@property(copy, nonatomic) NSArray *mimeTypes;	// G=0x2f8a4871; S=0x2f8a4885; @synthesize=_mimeTypes
@property(retain, nonatomic) NSObject<WebOpenPanelResultListener> *resultListener;	// G=0x2f8a48b5; S=0x2f8a48c5; @synthesize=_resultListener
- (id)initWithResultListener:(id)resultListener mimeTypes:(id)types allowMultipleFiles:(BOOL)files documentView:(id)view;	// 0x2f8a253d
- (void)_cancel;	// 0x2f8a275d
- (void)_chooseFilename:(id)filename displayString:(id)string iconImage:(id)image;	// 0x2f8a279d
- (void)_chooseFilenames:(id)filenames displayString:(id)string iconImage:(id)image;	// 0x2f8a2805
- (float)_compressionQuality;	// 0x2f8a36c1
- (void)_dismissDisplayAnimated:(BOOL)animated;	// 0x2f8a3485
- (void)_dispatchDidDismiss;	// 0x2f8a2715
- (id)_displayStringForPhotos:(unsigned)photos videos:(unsigned)videos;	// 0x2f8a3a11
- (void)_ensureInteractionElement;	// 0x2f8a2b35
- (id)_filePathForMediaURL:(id)mediaURL;	// 0x2f8a36cd
- (void)_filePathFromMediaInfo:(id)mediaInfo successBlock:(id)block failureBlock:(id)block3;	// 0x2f8a3709
- (id)_mediaTypesForPickerSourceType:(int)pickerSourceType;	// 0x2f8a28ad
- (id)_photoPickerWithSourceType:(int)sourceType;	// 0x2f8a2a51
- (void)_processMediaInfoDictionaries:(id)dictionaries atIndex:(unsigned)index processedResults:(id)results processedImageCount:(unsigned)count processedVideoCount:(unsigned)count5 successBlock:(id)block failureBlock:(id)block7;	// 0x2f8a3d19
- (void)_processMediaInfoDictionaries:(id)dictionaries successBlock:(id)block failureBlock:(id)block3;	// 0x2f8a3cc9
- (void)_showMediaSourceSelectionSheet;	// 0x2f8a2ffd
- (void)_showPhotoPickerWithSourceType:(int)sourceType;	// 0x2f8a2c45
- (BOOL)_string:(id)string hasPrefixCaseInsensitive:(id)insensitive;	// 0x2f8a286d
- (void)_temporaryFilePathForOriginalImage:(id)originalImage successBlock:(id)block failureBlock:(id)block3;	// 0x2f8a3865
- (id)_thumbnailSizedImageForImage:(id)image;	// 0x2f8a419d
- (BOOL)_willMultipleSelectionDelegateBeCalled;	// 0x2f8a41f1
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x2f8a3399
- (void)actionSheetCancel:(id)cancel;	// 0x2f8a3445
// declared property getter: - (BOOL)allowMultipleFiles;	// 0x2f8a48d5
- (void)dealloc;	// 0x2f8a25e9
// declared property getter: - (id)delegate;	// 0x2f8a4915
- (void)dismiss;	// 0x2f8a32e9
// declared property getter: - (id)documentView;	// 0x2f8a4895
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;	// 0x2f8a4221
- (void)imagePickerController:(id)controller didFinishPickingMultipleMediaWithInfo:(id)info;	// 0x2f8a44e9
- (void)imagePickerControllerDidCancel:(id)imagePickerController;	// 0x2f8a4841
// declared property getter: - (BOOL)isUsingCamera;	// 0x2f8a48f5
// declared property getter: - (id)mimeTypes;	// 0x2f8a4871
- (void)popoverWasDismissed:(id)dismissed;	// 0x2f8a3455
- (void)present;	// 0x2f8a3201
// declared property getter: - (id)resultListener;	// 0x2f8a48b5
// declared property setter: - (void)setAllowMultipleFiles:(BOOL)files;	// 0x2f8a48e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f8a4925
// declared property setter: - (void)setDocumentView:(id)view;	// 0x2f8a48a5
// declared property setter: - (void)setIsUsingCamera:(BOOL)camera;	// 0x2f8a4905
// declared property setter: - (void)setMimeTypes:(id)types;	// 0x2f8a4885
// declared property setter: - (void)setResultListener:(id)listener;	// 0x2f8a48c5
@end

