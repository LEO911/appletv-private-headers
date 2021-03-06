/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray;
@protocol ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVPhotoFullScreenView : BRControl {
	BOOL prefetchImages;	// 84 = 0x54
	BOOL _initialLayoutCompleted;	// 85 = 0x55
	id<ATVPhotoFullScreenViewDataSource> dataSource;	// 88 = 0x58
	id<ATVPhotoFullScreenViewDelegate> delegate;	// 92 = 0x5c
	long _startIndex;	// 96 = 0x60
	long _displayedItemIndex;	// 100 = 0x64
	int _startTouchXPosition;	// 104 = 0x68
	float _curTouchOffset;	// 108 = 0x6c
	NSMutableArray *_requestedImages;	// 112 = 0x70
	unsigned _lastRequestedItemIndex;	// 116 = 0x74
}
@property(assign, nonatomic) float _curTouchOffset;	// G=0x3d260d; S=0x3d261d; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x3d25ad; S=0x3d25bd; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x3d25cd; S=0x3d25dd; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x3d264d; S=0x3d265d; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x3d262d; S=0x3d263d; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x3d258d; S=0x3d259d; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x3d25ed; S=0x3d25fd; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x3d252d; S=0x3d253d; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x3d254d; S=0x3d255d; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x3d256d; S=0x3d257d; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x3d14b9
- (id)initWithStartIndex:(long)startIndex;	// 0x3d1501
// declared property getter: - (float)_curTouchOffset;	// 0x3d260d
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x3d1e1d
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x3d1d5d
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x3d1dbd
// declared property getter: - (long)_displayedItemIndex;	// 0x3d25ad
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x3d25cd
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x3d264d
- (void)_requestNextImage;	// 0x3d2301
- (void)_requestedImageWritten:(id)written;	// 0x3d24a1
// declared property getter: - (id)_requestedImages;	// 0x3d262d
- (void)_setImageLayerTargetBounds;	// 0x3d21d1
// declared property getter: - (long)_startIndex;	// 0x3d258d
// declared property getter: - (int)_startTouchXPosition;	// 0x3d25ed
- (id)accessibilityLabel;	// 0x3d193d
- (BOOL)brEventAction:(id)action;	// 0x3d1a25
- (void)controlWasActivated;	// 0x3d16c1
- (void)controlWasDeactivated;	// 0x3d1751
// declared property getter: - (id)dataSource;	// 0x3d252d
- (void)dealloc;	// 0x3d1629
// declared property getter: - (id)delegate;	// 0x3d254d
- (BOOL)isAccessibilityElement;	// 0x3d17d5
- (void)layoutSubcontrols;	// 0x3d17d9
// declared property getter: - (BOOL)prefetchImages;	// 0x3d256d
- (void)reload;	// 0x3d18e5
// declared property setter: - (void)setDataSource:(id)source;	// 0x3d253d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3d255d
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x3d257d
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x3d261d
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x3d25bd
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x3d25dd
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x3d265d
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x3d263d
// declared property setter: - (void)set_startIndex:(long)index;	// 0x3d259d
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x3d25fd
@end

