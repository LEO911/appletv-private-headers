/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, NSString;
@protocol BRPhotoProviderForCollection, BRFullScreenPhotoControllerDelegate;

@interface BRFullScreenPhotoController : BRController {
@private
	long _startIndex;	// 84 = 0x54
	long _currentIndex;	// 88 = 0x58
	id<BRPhotoProviderForCollection> _provider;	// 92 = 0x5c
	id<BRFullScreenPhotoControllerDelegate> _delegate;	// 96 = 0x60
	BOOL _isNetworkDependent;	// 100 = 0x64
	NSMutableArray *_prefetchImageIDs;	// 104 = 0x68
	NSString *_lastPrefetchAssetID;	// 108 = 0x6c
	BOOL _initialLayoutCompleted;	// 112 = 0x70
	int _startTouchXPosition;	// 116 = 0x74
	float _curTouchOffset;	// 120 = 0x78
	BOOL _imagePrefetchDisabled;	// 124 = 0x7c
	long _numPrefetchInProgress;	// 128 = 0x80
}
@property(readonly, assign) long currentIndex;	// G=0x329a4125; converted property
@property(assign) BOOL imagePrefetchDisabled;	// G=0x329a41b1; S=0x329a4195; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x329a4185; S=0x329a4175; converted property
@property(readonly, assign, nonatomic) id<BRPhotoProviderForCollection> provider;	// G=0x329a45cd; @synthesize=_provider
+ (id)fullScreenPhotoControllerForProvider:(id)provider startIndex:(long)index;	// 0x329a3cc1
- (id)initWithProvider:(id)provider startIndex:(long)index;	// 0x329a3d11
- (void)_handleSelection;	// 0x329a4859
- (void)_nextSlide;	// 0x329a4739
- (void)_nextSlideWithTransition;	// 0x329a47d1
- (void)_playerStateChanged:(id)changed;	// 0x329a50a5
- (void)_prefetchImageWritten:(id)written;	// 0x329a513d
- (void)_prefetchNextImage;	// 0x329a4e3d
- (void)_previousSlide;	// 0x329a4785
- (void)_previousSlideWithTransition;	// 0x329a4815
- (void)_setImageLayerTargetBounds;	// 0x329a45dd
- (long)_switchToImageControlForIndex:(long)index usingSwipeTransition:(BOOL)transition;	// 0x329a4a85
- (id)accessibilityLabel;	// 0x329a3e2d
- (BOOL)brEventAction:(id)action;	// 0x329a41c1
- (void)controlWasActivated;	// 0x329a4001
- (void)controlWasDeactivated;	// 0x329a4079
// converted property getter: - (long)currentIndex;	// 0x329a4125
- (void)dealloc;	// 0x329a3f49
// converted property getter: - (BOOL)imagePrefetchDisabled;	// 0x329a41b1
- (BOOL)isAccessibilityElement;	// 0x329a3e29
// converted property getter: - (BOOL)isNetworkDependent;	// 0x329a4185
- (BOOL)isValidAfterDataUpdate;	// 0x329a40d5
- (void)layoutSubcontrols;	// 0x329a4481
// declared property getter: - (id)provider;	// 0x329a45cd
- (void)reload;	// 0x329a4589
- (void)setControllerDelegate:(id)delegate;	// 0x329a4135
// converted property setter: - (void)setImagePrefetchDisabled:(BOOL)disabled;	// 0x329a4195
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x329a4175
@end
