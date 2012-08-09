/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIActionSheetDelegate.h"

@class _UIPreviewItemProxy, NSURL, NSString, UIViewController, UIPopoverController, UIActivityViewController, UIView, UIBarButtonItem, NSArray;
@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
	id<UIDocumentInteractionControllerDelegate> _delegate;	// 4 = 0x4
	id _previewItemProxy;	// 8 = 0x8
	NSArray *_icons;	// 12 = 0xc
	id _annotation;	// 16 = 0x10
	NSString *_uniqueIdentifier;	// 20 = 0x14
	UIViewController *_presentingViewController;	// 24 = 0x18
	id _previewController;	// 28 = 0x1c
	NSArray *_gestureRecognizers;	// 32 = 0x20
	CGRect _presentRect;	// 36 = 0x24
	UIView *_presentView;	// 52 = 0x34
	UIBarButtonItem *_presentItem;	// 56 = 0x38
	NSArray *_availableApplications;	// 60 = 0x3c
	UIPopoverController *_popoverController;	// 64 = 0x40
	UIActivityViewController *_activityViewController;	// 68 = 0x44
	BOOL _shouldUnzipDocument;	// 72 = 0x48
	NSURL *_unzippedDocumentURL;	// 76 = 0x4c
	id _applicationToOpen;	// 80 = 0x50
	NSURL *_tmpURLToDeleteOnDealloc;	// 84 = 0x54
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned documentProxyForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
		unsigned delegateExcludesActivities : 1;
		unsigned delegateCanBlockRemoteImages : 1;
		unsigned delegateAddsActivities : 1;
		unsigned delegateProvidesActivityItem : 1;
		unsigned delegateProvidesPrintInfo : 1;
	} _documentInteractionControllerFlags;	// 88 = 0x58
}
@property(retain) NSURL *URL;	// G=0x3054b8e9; S=0x3054b701; 
@property(copy, nonatomic) NSString *UTI;	// G=0x3054bb3d; S=0x3054b9e9; 
@property(retain, nonatomic) UIActivityViewController *activityViewController;	// G=0x3054fa81; S=0x3054fa91; @synthesize=_activityViewController
@property(retain, nonatomic) id annotation;	// G=0x3054fa41; S=0x3054fa51; @synthesize=_annotation
@property(assign, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate;	// G=0x3054fa31; S=0x3054b37d; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x3054d411; 
@property(readonly, assign, nonatomic) NSArray *icons;	// G=0x3054bf25; 
@property(copy) NSString *name;	// G=0x3054be1d; S=0x3054bcf5; 
@property(retain, nonatomic) UIPopoverController *popoverController;	// G=0x3054faa1; S=0x3054fab1; @synthesize=_popoverController
@property(readonly, assign, nonatomic) id previewController;	// G=0x3054f601; 
@property(readonly, assign, nonatomic) _UIPreviewItemProxy *previewItemProxy;	// G=0x3054f6ad; 
@property(assign, nonatomic) BOOL shouldUnzipDocument;	// G=0x3054c185; S=0x3054c159; @synthesize=_shouldUnzipDocument
@property(assign, nonatomic) BOOL shouldUnzipDocument;	// @dynamic
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x3054fa61; S=0x3054fa71; @synthesize=_uniqueIdentifier
@property(retain, nonatomic) NSString *uniqueIdentifier;	// @dynamic
+ (id)_UTIForFileURL:(id)fileURL;	// 0x3054bb11
+ (id)_applicationsForDocumentProxy:(id)documentProxy;	// 0x3054ac6d
+ (id)_unzippingQueue;	// 0x3054ef05
+ (id)allActionSelectorNames;	// 0x3054add5
+ (void)initialize;	// 0x3037e081
+ (id)interactionControllerWithURL:(id)url;	// 0x3054b099
- (id)initWithURL:(id)url;	// 0x3054b0d5
// declared property getter: - (id)URL;	// 0x3054b8e9
// declared property getter: - (id)UTI;	// 0x3054bb3d
- (void)_activityControllerViewDidDismiss;	// 0x3054f551
- (id)_applicationToOpen;	// 0x3054ef55
- (id)_applications:(BOOL)applications;	// 0x3054d69d
- (BOOL)_canPreviewUnzippedDocument;	// 0x3054c195
- (BOOL)_canSaveToCameraRollForType;	// 0x3054f301
- (BOOL)_canUnzipDocument;	// 0x3054f1a1
- (BOOL)_canUnzipDocumentAndPresentOpenIn;	// 0x3054c2b9
- (BOOL)_canUnzipDocumentAndPresentOptions;	// 0x3054c241
- (BOOL)_delegateCanPerformAction:(SEL)action;	// 0x3054f36d
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id *)methods;	// 0x3054ae85
- (BOOL)_delegateImplementsLegacyActions;	// 0x3054f351
- (BOOL)_delegatePerformAction:(SEL)action;	// 0x3054f461
- (BOOL)_documentNeedsHelpUnzippingForPreview;	// 0x3054f1ed
- (id)_documentProxy;	// 0x3054aba9
- (void)_finishedCopyingResource;	// 0x3054d871
- (void)_fixupFileExtensionIfNeeded;	// 0x3054f6fd
- (void)_interfaceOrientationWillChange:(id)_interfaceOrientation;	// 0x3054eef1
- (void)_invalidate;	// 0x3054ee89
- (BOOL)_isFilenameValidForUnzipping:(id)unzipping;	// 0x3054f211
- (BOOL)_isImage;	// 0x3054c061
- (BOOL)_isImageOrVideo;	// 0x3054c119
- (BOOL)_isValidURL:(id)url;	// 0x3054f2cd
- (BOOL)_isVideo;	// 0x3054c0b5
- (void)_openDocumentWithApplication:(id)application;	// 0x3054d71d
- (void)_openDocumentWithCurrentApplication;	// 0x3054d825
- (void)_presentOpenIn:(id)anIn;	// 0x3054d5a5
- (void)_presentOptionsMenu:(id)menu;	// 0x3054d615
- (void)_presentPreview:(id)preview;	// 0x3054d521
- (void)_setApplicationToOpen:(id)open;	// 0x3054ef8d
- (void)_setUnzippedDocumentURL:(id)url;	// 0x3054efd1
- (BOOL)_setupForOpenInMenu;	// 0x3054e0b5
- (BOOL)_setupForOptionsMenu;	// 0x3054d8d9
- (BOOL)_setupPreviewController;	// 0x3054e499
- (void)_unzipFileAndSetupPayload:(id)payload;	// 0x3054e71d
- (id)_unzippedDocumentURL;	// 0x3054f0bd
// declared property getter: - (id)activityViewController;	// 0x3054fa81
// declared property getter: - (id)annotation;	// 0x3054fa41
- (unsigned)applicationCount;	// 0x3054aff9
- (void)dealloc;	// 0x3054b18d
// declared property getter: - (id)delegate;	// 0x3054fa31
- (void)dismissMenuAnimated:(BOOL)animated;	// 0x3054d385
- (void)dismissPreviewAnimated:(BOOL)animated;	// 0x3054d359
// declared property getter: - (id)gestureRecognizers;	// 0x3054d411
// declared property getter: - (id)icons;	// 0x3054bf25
// declared property getter: - (id)name;	// 0x3054be1d
- (int)numberOfPreviewItemsInPreviewController:(id)previewController;	// 0x3054aaad
- (void)openDocumentWithDefaultApplication;	// 0x3054b025
- (void)openResourceOperation:(id)operation didFinishCopyingResource:(id)resource;	// 0x3054d845
// declared property getter: - (id)popoverController;	// 0x3054faa1
- (void)popoverController:(id)controller animationCompleted:(int)completed;	// 0x3054aac1
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3054d0d5
- (BOOL)presentOpenInMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3054cde1
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3054c735
- (BOOL)presentOptionsMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3054c311
- (BOOL)presentPreviewAnimated:(BOOL)animated;	// 0x3054cb19
- (id)presentingNavigationController;	// 0x3054cac5
// declared property getter: - (id)previewController;	// 0x3054f601
- (CGRect)previewController:(id)controller frameForPreviewItem:(id)previewItem inSourceView:(id *)sourceView;	// 0x3054a6d5
- (id)previewController:(id)controller previewItemAtIndex:(int)index;	// 0x3054aab1
- (id)previewController:(id)controller transitionImageForPreviewItem:(id)previewItem contentRect:(CGRect *)rect;	// 0x3054a819
- (void)previewControllerDidDismiss:(id)previewController;	// 0x3054a771
- (void)previewControllerWillDismiss:(id)previewController;	// 0x3054a70d
// declared property getter: - (id)previewItemProxy;	// 0x3054f6ad
// declared property setter: - (void)setActivityViewController:(id)controller;	// 0x3054fa91
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x3054fa51
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3054b37d
// declared property setter: - (void)setName:(id)name;	// 0x3054bcf5
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x3054fab1
- (void)setPreviewURLOverride:(id)override;	// 0x3054aed1
// declared property setter: - (void)setShouldUnzipDocument:(BOOL)unzipDocument;	// 0x3054c159
// declared property setter: - (void)setURL:(id)url;	// 0x3054b701
// declared property setter: - (void)setUTI:(id)uti;	// 0x3054b9e9
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x3054fa71
// declared property getter: - (BOOL)shouldUnzipDocument;	// 0x3054c185
// declared property getter: - (id)uniqueIdentifier;	// 0x3054fa61
@end
