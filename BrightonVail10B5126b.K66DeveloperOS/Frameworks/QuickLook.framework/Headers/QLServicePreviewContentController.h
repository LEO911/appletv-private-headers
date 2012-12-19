/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h> // Unknown library
#import "XPCProxyTarget.h"
#import "QLPreviewContentDataSource.h"
#import "QLPreviewContentDelegate.h"
#import "QuickLook-Structs.h"
#import "QLRemotePreviewContentControllerProtocol.h"

@class XPCProxy, NSMutableDictionary, _UIHostedWindow, QLPreviewContentController, QLRemotePrintPageHelper;
@protocol QLRemotePreviewContentProxyProtocol;

@interface QLServicePreviewContentController : UIViewController <XPCProxyTarget, QLRemotePreviewContentControllerProtocol, QLPreviewContentDataSource, QLPreviewContentDelegate> {
	NSMutableDictionary *_previewItemCache;	// 196 = 0xc4
	QLPreviewContentController *_previewContentController;	// 200 = 0xc8
	XPCProxy<QLRemotePreviewContentProxyProtocol> *_previewContentProxy;	// 204 = 0xcc
	int _numberOfPreviewItems;	// 208 = 0xd0
	int _previewMode;	// 212 = 0xd4
	BOOL _remoteInstantiationFinished;	// 216 = 0xd8
	BOOL _blockRemoteImages;	// 217 = 0xd9
	QLRemotePrintPageHelper *_printPageHelper;	// 220 = 0xdc
	int _clientInterfaceOrientation;	// 224 = 0xe0
	_UIHostedWindow *_hostedWindow;	// 228 = 0xe4
}
@property(assign) int currentPreviewItemIndex;	// G=0x32a4b83d; S=0x32a4b695; converted property
@property(assign) id<QLPreviewContentDataSource> dataSource;	// G=0x32a4b64d; S=0x32a4b649; 
@property(assign) id<QLPreviewContentDelegate> delegate;	// G=0x32a4b655; S=0x32a4b651; 
@property(readonly, assign) int numberOfPreviewItems;	// G=0x32a4b82d; converted property
@property(assign) int previewMode;	// G=0x32a4b685; S=0x32a4b659; 
@property(readonly, retain) QLRemotePrintPageHelper *printPageHelper;	// G=0x32a4c02d; converted property
- (id)init;	// 0x32a4b17d
- (void)_getNumberOfPagesForSize:(id)size withHandler:(id)handler;	// 0x32a4c07d
- (void)_getPDFPageAtIndex:(int)index size:(id)size handler:(id)handler;	// 0x32a4c161
- (void)_getPDFPreviewDataWithHandler:(id)handler;	// 0x32a4c005
- (void)_prepareForDrawingPages:(id)drawingPages;	// 0x32a4c10d
- (void)_setContentFrame:(id)frame;	// 0x32a4be65
- (void)_setNumberOfPreviewItems:(int)previewItems;	// 0x32a4b721
- (void)_setPreviewItems:(id)items;	// 0x32a4b731
- (void)_updateHostedWindowFrame;	// 0x32a4beb5
- (void)_willAnimateRotationTo:(int)to;	// 0x32a4bf51
- (void)beginScrubbing;	// 0x32a4c269
- (id)clientProcessAlertViewForPreviewContentController:(id)previewContentController;	// 0x32a4cb15
- (void)configureWithParameters:(id)parameters;	// 0x32a4b891
- (void)contentWasTappedInPreviewContentController:(id)previewContentController;	// 0x32a4c869
// converted property getter: - (int)currentPreviewItemIndex;	// 0x32a4b83d
// declared property getter: - (id)dataSource;	// 0x32a4b64d
- (void)dealloc;	// 0x32a4b1ed
// declared property getter: - (id)delegate;	// 0x32a4b655
- (void)endScrubbing;	// 0x32a4c2a9
- (void)enterBackground;	// 0x32a4bfa5
- (void)forceResignFirstResponder;	// 0x32a4bfc5
// converted property getter: - (int)numberOfPreviewItems;	// 0x32a4b82d
- (int)numberOfPreviewItemsInPreviewContentController:(id)previewContentController;	// 0x32a4c2e9
- (void)overlayWasTappedInPreviewContentController:(id)previewContentController;	// 0x32a4c849
- (id)pdfPreviewData;	// 0x32a4bfe5
- (void)previewContentController:(id)controller didFailWithError:(id)error;	// 0x32a4c7f5
- (void)previewContentController:(id)controller didLoadItem:(id)item atIndex:(int)index withError:(id)error;	// 0x32a4c73d
- (void)previewContentController:(id)controller didMoveToItem:(id)item atIndex:(int)index;	// 0x32a4c6f1
- (void)previewContentController:(id)controller didUnloadItem:(id)item;	// 0x32a4c7a9
- (id)previewContentController:(id)controller previewItemAtIndex:(int)index;	// 0x32a4c2f9
- (void)previewContentController:(id)controller receivedTapOnURL:(id)url;	// 0x32a4c889
- (void)previewContentController:(id)controller setAVState:(id)state forPreviewItem:(id)previewItem;	// 0x32a4c8a9
- (void)previewContentController:(id)controller willEnterFullScreenWithHostedWindow:(id)hostedWindow;	// 0x32a4c8f9
- (void)previewContentController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x32a4c821
- (void)previewContentController:(id)controller willMoveToItemAtIndex:(int)index;	// 0x32a4c6d1
- (void)previewContentController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x32a4c7f9
- (void)previewContentControllerDidExitFullScreen:(id)previewContentController;	// 0x32a4cacd
// declared property getter: - (int)previewMode;	// 0x32a4b685
// converted property getter: - (id)printPageHelper;	// 0x32a4c02d
- (id)printPageRenderer;	// 0x32a4c029
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x32a4b269
- (void)refreshCurrentPreviewItem;	// 0x32a4bdad
- (void)reloadData;	// 0x32a4bcf9
- (void)scrubToValue:(double)value;	// 0x32a4c289
- (void)setBlockRemoteImages:(BOOL)images;	// 0x32a4b845
- (void)setContentFrame:(CGRect)frame;	// 0x32a4be35
// converted property setter: - (void)setCurrentPreviewItemIndex:(int)index;	// 0x32a4b695
// declared property setter: - (void)setDataSource:(id)source;	// 0x32a4b649
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32a4b651
- (void)setLoadintTextForMissingFiles:(id)missingFiles;	// 0x32a4b871
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x32a4bf71
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x32a4b659
- (void)togglePlayState;	// 0x32a4c2c9
- (void)willAppearInRemoteViewController:(id)remoteViewController;	// 0x32a4b569
@end
