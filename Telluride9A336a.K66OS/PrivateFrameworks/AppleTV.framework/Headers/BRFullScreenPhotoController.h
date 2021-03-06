/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, NSString;
@protocol BRFullScreenPhotoControllerDelegate, BRPhotoProviderForCollection;

@interface BRFullScreenPhotoController : BRController {
@private
	long _startIndex;	// 80 = 0x50
	long _currentIndex;	// 84 = 0x54
	id<BRPhotoProviderForCollection> _provider;	// 88 = 0x58
	id<BRFullScreenPhotoControllerDelegate> _delegate;	// 92 = 0x5c
	BOOL _isNetworkDependent;	// 96 = 0x60
	NSMutableArray *_prefetchImageIDs;	// 100 = 0x64
	NSString *_lastPrefetchAssetID;	// 104 = 0x68
	BOOL _initialLayoutCompleted;	// 108 = 0x6c
	int _startTouchXPosition;	// 112 = 0x70
	float _curTouchOffset;	// 116 = 0x74
	BOOL _imagePrefetchDisabled;	// 120 = 0x78
	long _numPrefetchInProgress;	// 124 = 0x7c
}
@property(readonly, assign) long currentIndex;	// G=0x33a590e9; converted property
@property(assign) BOOL imagePrefetchDisabled;	// G=0x33a59175; S=0x33a59159; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x33a59149; S=0x33a59139; converted property
@property(readonly, assign, nonatomic) id<BRPhotoProviderForCollection> provider;	// G=0x33a59591; @synthesize=_provider
+ (id)fullScreenPhotoControllerForProvider:(id)provider startIndex:(long)index;	// 0x33a58c85
- (id)initWithProvider:(id)provider startIndex:(long)index;	// 0x33a58cd5
- (void)_handleSelection;	// 0x33a5981d
- (void)_nextSlide;	// 0x33a596fd
- (void)_nextSlideWithTransition;	// 0x33a59795
- (void)_playerStateChanged:(id)changed;	// 0x33a5a06d
- (void)_prefetchImageWritten:(id)written;	// 0x33a5a105
- (void)_prefetchNextImage;	// 0x33a59e05
- (void)_previousSlide;	// 0x33a59749
- (void)_previousSlideWithTransition;	// 0x33a597d9
- (void)_setImageLayerTargetBounds;	// 0x33a595a1
- (long)_switchToImageControlForIndex:(long)index usingSwipeTransition:(BOOL)transition;	// 0x33a59a49
- (id)accessibilityLabel;	// 0x33a58df1
- (BOOL)brEventAction:(id)action;	// 0x33a59185
- (void)controlWasActivated;	// 0x33a58fc5
- (void)controlWasDeactivated;	// 0x33a5903d
// converted property getter: - (long)currentIndex;	// 0x33a590e9
- (void)dealloc;	// 0x33a58f0d
// converted property getter: - (BOOL)imagePrefetchDisabled;	// 0x33a59175
- (BOOL)isAccessibilityElement;	// 0x33a58ded
// converted property getter: - (BOOL)isNetworkDependent;	// 0x33a59149
- (BOOL)isValidAfterDataUpdate;	// 0x33a59099
- (void)layoutSubcontrols;	// 0x33a59445
// declared property getter: - (id)provider;	// 0x33a59591
- (void)reload;	// 0x33a5954d
- (void)setControllerDelegate:(id)delegate;	// 0x33a590f9
// converted property setter: - (void)setImagePrefetchDisabled:(BOOL)disabled;	// 0x33a59159
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x33a59139
@end

