/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, UIWindow, NSArray, UIView;

@interface UITouch : NSObject {
	float _movementMagnitudeSquared;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	int _phase;	// 16 = 0x10
	int _savedPhase;	// 20 = 0x14
	unsigned _tapCount;	// 24 = 0x18
	UIWindow *_window;	// 28 = 0x1c
	UIView *_view;	// 32 = 0x20
	UIView *_gestureView;	// 36 = 0x24
	UIView *_warpedIntoView;	// 40 = 0x28
	NSMutableArray *_gestureRecognizers;	// 44 = 0x2c
	NSMutableArray *_forwardingRecord;	// 48 = 0x30
	CGPoint _locationInWindow;	// 52 = 0x34
	CGPoint _previousLocationInWindow;	// 60 = 0x3c
	unsigned char _pathIndex;	// 68 = 0x44
	unsigned char _pathIdentity;	// 69 = 0x45
	float _pathMajorRadius;	// 72 = 0x48
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _touchFlags;	// 76 = 0x4c
	BOOL _eaten;	// 77 = 0x4d
}
@property(assign, nonatomic, getter=_isEaten, setter=_setEaten:) BOOL _eaten;	// G=0x31be3bd9; S=0x31d1e1a9; @synthesize
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// G=0x31be5c71; S=0x31be3bb9; @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// G=0x31cfc6a9; S=0x31be3ba9; @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// G=0x31cfc6b9; S=0x31be3bc9; @synthesize
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x31be6289; 
@property(retain, nonatomic) UIView *gestureView;	// G=0x31be4595; S=0x31be3c31; 
@property(assign) BOOL isDelayed;	// G=0x31be58f1; S=0x31cee949; converted property
@property(assign, nonatomic) BOOL isTap;	// G=0x31be5c85; S=0x31be40c5; 
@property(readonly, assign, nonatomic) int phase;	// G=0x31be41e1; 
@property(assign, nonatomic) int phase;	// S=0x31be39cd; 
@property(assign, nonatomic) BOOL sentTouchesEnded;	// G=0x31be5c9d; S=0x31be5cb5; 
@property(readonly, assign, nonatomic) unsigned tapCount;	// G=0x31cbcb6d; 
@property(assign, nonatomic) unsigned tapCount;	// S=0x31be40e5; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x31cfbe21; 
@property(assign, nonatomic) double timestamp;	// S=0x31be39b9; 
@property(retain, nonatomic) UIView *view;	// S=0x31be3bed; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x31be44e1; 
@property(retain, nonatomic) UIView *warpedIntoView;	// G=0x31be3c75; S=0x31cb6865; 
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x31be4039; 
@property(retain, nonatomic) UIWindow *window;	// S=0x31be39dd; 
+ (id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;	// 0x31e2c701
- (void)_addGestureRecognizer:(id)recognizer;	// 0x31cb6935
- (void)_clearGestureRecognizers;	// 0x31d1e1bd
- (int)_compareIndex:(id)index;	// 0x31e2ca41
- (float)_distanceFrom:(id)from inView:(id)view;	// 0x31f598f5
- (id)_forwardingRecord;	// 0x31be5f05
- (id)_gestureRecognizers;	// 0x31be539d
// declared property getter: - (BOOL)_isEaten;	// 0x31be3bd9
- (BOOL)_isFirstTouchForView;	// 0x31cb820d
- (BOOL)_isStationaryRelativeToTouches:(id)touches;	// 0x31e2cb71
- (void)_loadStateFromTouch:(id)touch;	// 0x31cee841
- (CGPoint)_locationInWindow:(id)window;	// 0x31ced271
// declared property getter: - (unsigned char)_pathIdentity;	// 0x31be5c71
// declared property getter: - (unsigned char)_pathIndex;	// 0x31cfc6a9
// declared property getter: - (float)_pathMajorRadius;	// 0x31cfc6b9
- (id)_phaseDescription;	// 0x31e2c839
- (void)_popPhase;	// 0x31e2ca21
- (CGPoint)_previousLocationInWindow:(id)window;	// 0x31d566ad
- (void)_pushPhase:(int)phase;	// 0x31e2c9fd
- (void)_removeGestureRecognizer:(id)recognizer;	// 0x31cb88e5
// declared property setter: - (void)_setEaten:(BOOL)eaten;	// 0x31d1e1a9
- (void)_setIsFirstTouchForView:(BOOL)view;	// 0x31be40f9
- (void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;	// 0x31be3c9d
// declared property setter: - (void)_setPathIdentity:(unsigned char)identity;	// 0x31be3bb9
// declared property setter: - (void)_setPathIndex:(unsigned char)index;	// 0x31be3ba9
// declared property setter: - (void)_setPathMajorRadius:(float)radius;	// 0x31be3bc9
- (void)_updateMovementMagnitudeForLocation:(CGPoint)location;	// 0x31e2cb21
- (BOOL)_wantsForwardingFromResponder:(id)responder toNextResponder:(id)nextResponder withEvent:(id)event;	// 0x31d13b01
- (void)dealloc;	// 0x31be635d
- (id)description;	// 0x31e2c8a1
// declared property getter: - (id)gestureRecognizers;	// 0x31be6289
// declared property getter: - (id)gestureView;	// 0x31be4595
- (int)info;	// 0x31e2c5f9
// converted property getter: - (BOOL)isDelayed;	// 0x31be58f1
// declared property getter: - (BOOL)isTap;	// 0x31be5c85
- (CGPoint)locationInView:(id)view;	// 0x31be5b71
// declared property getter: - (int)phase;	// 0x31be41e1
- (CGPoint)previousLocationInView:(id)view;	// 0x31e2c601
// declared property getter: - (BOOL)sentTouchesEnded;	// 0x31be5c9d
// declared property setter: - (void)setGestureView:(id)view;	// 0x31be3c31
// converted property setter: - (void)setIsDelayed:(BOOL)delayed;	// 0x31cee949
// declared property setter: - (void)setIsTap:(BOOL)tap;	// 0x31be40c5
// declared property setter: - (void)setPhase:(int)phase;	// 0x31be39cd
// declared property setter: - (void)setSentTouchesEnded:(BOOL)ended;	// 0x31be5cb5
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x31be40e5
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x31be39b9
// declared property setter: - (void)setView:(id)view;	// 0x31be3bed
// declared property setter: - (void)setWarpedIntoView:(id)view;	// 0x31cb6865
// declared property setter: - (void)setWindow:(id)window;	// 0x31be39dd
// declared property getter: - (unsigned)tapCount;	// 0x31cbcb6d
// declared property getter: - (double)timestamp;	// 0x31cfbe21
// declared property getter: - (id)view;	// 0x31be44e1
// declared property getter: - (id)warpedIntoView;	// 0x31be3c75
// declared property getter: - (id)window;	// 0x31be4039
@end
