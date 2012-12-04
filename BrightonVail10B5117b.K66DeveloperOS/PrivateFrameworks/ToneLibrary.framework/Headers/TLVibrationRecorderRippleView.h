/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <UIView.h> // Unknown library

@class EAGLContext, NSMutableArray;

@interface TLVibrationRecorderRippleView : UIView {
	EAGLContext *_context;	// 88 = 0x58
	int _backingWidth;	// 92 = 0x5c
	int _backingHeight;	// 96 = 0x60
	unsigned _viewFramebuffer;	// 100 = 0x64
	unsigned _viewRenderbuffer;	// 104 = 0x68
	unsigned _shaderProgram;	// 108 = 0x6c
	int *_uniformsLocations;	// 112 = 0x70
	XXStruct_n9corA *_baseRippleSectionVertices;	// 116 = 0x74
	void *_verticesData;	// 120 = 0x78
	unsigned long _verticesDataMaximumRipplesCount;	// 124 = 0x7c
	unsigned _rippleTexture;	// 128 = 0x80
	BOOL _animating;	// 132 = 0x84
	float _fingerStillSpeed;	// 136 = 0x88
	float _fingerMovingSpeed;	// 140 = 0x8c
	float _firstRippleInitialRadius;	// 144 = 0x90
	float _fadeOutRadius;	// 148 = 0x94
	float _darkness;	// 152 = 0x98
	BOOL _isTrackingTouch;	// 156 = 0x9c
	CGPoint _currentTouchLocation;	// 160 = 0xa0
	double _currentTouchStartTime;	// 168 = 0xa8
	unsigned _numberOfRipplesForCurrentTouch;	// 176 = 0xb0
	NSMutableArray *_ripplesContextQueue;	// 180 = 0xb4
	NSMutableArray *_recentTouchesContextQueue;	// 184 = 0xb8
	float _currentSpeedCoefficient;	// 188 = 0xbc
	BOOL _needsCurrentSpeedRefresh;	// 192 = 0xc0
	NSMutableArray *_reusableTouchContexts;	// 196 = 0xc4
}
@property(readonly, assign, nonatomic) float _currentSpeed;	// G=0x35c19899; 
@property(assign, nonatomic) float darkness;	// G=0x35c19879; S=0x35c19889; 
@property(assign, nonatomic) float fadeOutRadius;	// G=0x35c19789; S=0x35c19801; 
@property(assign, nonatomic) float fingerMovingSpeed;	// G=0x35c19675; S=0x35c19685; 
@property(assign, nonatomic) float fingerStillSpeed;	// G=0x35c19655; S=0x35c19665; 
@property(assign, nonatomic) float firstRippleInitialRadius;	// G=0x35c19699; S=0x35c19711; 
+ (Class)layerClass;	// 0x35c19ad1
- (id)initWithFrame:(CGRect)frame;	// 0x35c19529
- (void)_computeBaseRippleSectionVerticesIfNeeded;	// 0x35c1a431
- (void)_configureView;	// 0x35c1a2a1
- (BOOL)_createFramebuffer;	// 0x35c19f61
// declared property getter: - (float)_currentSpeed;	// 0x35c19899
- (void)_destroyFramebuffer;	// 0x35c1a241
- (id)_displayLinkManager;	// 0x35c1bac1
- (void)_drawViewWithVertices:(BOOL)vertices;	// 0x35c1a501
- (void)_enqueueReusableTouchContextObject:(id)object;	// 0x35c1b4fd
- (void)_initializeConfigurationParameters;	// 0x35c1a325
- (BOOL)_prepareVerticesDataArrayForStoringVerticesOfRipplesWithCount:(unsigned long)count;	// 0x35c1a3a1
- (void)_refresh:(id)refresh;	// 0x35c1b541
- (id)_reusableTouchContextObject;	// 0x35c1b499
- (BOOL)_setUpView;	// 0x35c19aed
- (void)_startAnimation;	// 0x35c1badd
- (void)_stopAnimation;	// 0x35c1bb31
- (void)_tearDownView;	// 0x35c19e99
- (void)_touchBeganAtLocation:(CGPoint)location;	// 0x35c1bc2d
- (void)_touchEndedAtLocation:(CGPoint)location;	// 0x35c1bcc1
- (void)_touchMovedToLocation:(CGPoint)location;	// 0x35c1bcb1
- (void)_updateTouchLocationCoordinatesWithPoint:(CGPoint)point;	// 0x35c1bb85
// declared property getter: - (float)darkness;	// 0x35c19879
- (void)dealloc;	// 0x35c19591
// declared property getter: - (float)fadeOutRadius;	// 0x35c19789
// declared property getter: - (float)fingerMovingSpeed;	// 0x35c19675
// declared property getter: - (float)fingerStillSpeed;	// 0x35c19655
// declared property getter: - (float)firstRippleInitialRadius;	// 0x35c19699
- (void)layoutSubviews;	// 0x35c1b40d
// declared property setter: - (void)setDarkness:(float)darkness;	// 0x35c19889
// declared property setter: - (void)setFadeOutRadius:(float)radius;	// 0x35c19801
// declared property setter: - (void)setFingerMovingSpeed:(float)speed;	// 0x35c19685
// declared property setter: - (void)setFingerStillSpeed:(float)speed;	// 0x35c19665
// declared property setter: - (void)setFirstRippleInitialRadius:(float)radius;	// 0x35c19711
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35c1bcd5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35c1bdd1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35c1bd7d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35c1bd29
@end
