/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRRenderer, NSArray, MRAction, MRTouchSet, NSSet, MCAction;

@interface MRGestureRecognizer : NSObject {
	MRRenderer *_renderer;	// 4 = 0x4
	MRAction *_automaticStartAction;	// 8 = 0x8
	MRAction *_automaticUpdateAction;	// 12 = 0xc
	MRAction *_automaticEndAction;	// 16 = 0x10
	MRAction *_automaticCancelAction;	// 20 = 0x14
	MRAction *_startAction;	// 24 = 0x18
	MRAction *_updateAction;	// 28 = 0x1c
	MRAction *_endAction;	// 32 = 0x20
	MRAction *_cancelAction;	// 36 = 0x24
	NSObject *_sender;	// 40 = 0x28
	NSObject *_target;	// 44 = 0x2c
	NSArray *_matrixChain;	// 48 = 0x30
	int _state;	// 52 = 0x34
	CGSize _referenceSize;	// 56 = 0x38
	MRTouchSet *_touchSet;	// 64 = 0x40
	CGPoint _centroidStartLocation;	// 68 = 0x44
	CGPoint _centroidLocation;	// 76 = 0x4c
	CGPoint _previousCentroidLocation;	// 84 = 0x54
	CGPoint _offsetFromCentroid;	// 92 = 0x5c
	float _scale;	// 100 = 0x64
	float _previousScale;	// 104 = 0x68
	float _ratioFromScale;	// 108 = 0x6c
	float _rotation;	// 112 = 0x70
	float _previousRotation;	// 116 = 0x74
	float _offsetFromRotation;	// 120 = 0x78
	double _startTime;	// 124 = 0x7c
	double _hitTime;	// 132 = 0x84
	double _previousHitTime;	// 140 = 0x8c
}
@property(retain) MCAction *cancelAction;	// G=0x33b127e1; S=0x33b12801; 
@property(retain) MCAction *endAction;	// G=0x33b12749; S=0x33b12769; 
@property(retain) NSArray *matrixChain;	// G=0x33b13709; S=0x33b1371d; @synthesize=_matrixChain
@property(assign, nonatomic) CGSize referenceSize;	// G=0x33b1374d; S=0x33b13765; @synthesize=_referenceSize
@property(readonly, assign) id sender;	// G=0x33b136f5; @synthesize=_sender
@property(retain) MCAction *startAction;	// G=0x33b12619; S=0x33b12639; 
@property(assign, nonatomic) int state;	// G=0x33b1372d; S=0x33b1373d; @synthesize=_state
@property(readonly, assign) NSSet *touches;	// G=0x33b12879; 
@property(retain) MCAction *updateAction;	// G=0x33b126b1; S=0x33b126d1; 
- (id)initWithRenderer:(id)renderer startAction:(id)action andSender:(id)sender;	// 0x33b12439
- (void)_addSpecificObjectToAction:(id)action;	// 0x33b136f1
- (CGPoint)_localPointFromTouchPoint:(CGPoint)touchPoint;	// 0x33b134c9
- (void)_sendAction:(id)action;	// 0x33b13385
- (void)_sendCancelActions;	// 0x33b13331
- (void)_sendEndActions;	// 0x33b132dd
- (void)_sendStartActions;	// 0x33b13235
- (void)_sendUpdateActions;	// 0x33b13289
- (void)abort;	// 0x33b12fdd
// declared property getter: - (id)cancelAction;	// 0x33b127e1
- (void)dealloc;	// 0x33b124c9
- (id)description;	// 0x33b130fd
// declared property getter: - (id)endAction;	// 0x33b12749
// declared property getter: - (id)matrixChain;	// 0x33b13709
// declared property getter: - (CGSize)referenceSize;	// 0x33b1374d
// declared property getter: - (id)sender;	// 0x33b136f5
// declared property setter: - (void)setCancelAction:(id)action;	// 0x33b12801
// declared property setter: - (void)setEndAction:(id)action;	// 0x33b12769
// declared property setter: - (void)setMatrixChain:(id)chain;	// 0x33b1371d
// declared property setter: - (void)setReferenceSize:(CGSize)size;	// 0x33b13765
// declared property setter: - (void)setStartAction:(id)action;	// 0x33b12639
// declared property setter: - (void)setState:(int)state;	// 0x33b1373d
// declared property setter: - (void)setUpdateAction:(id)action;	// 0x33b126d1
// declared property getter: - (id)startAction;	// 0x33b12619
// declared property getter: - (int)state;	// 0x33b1372d
- (void)touchBegan:(id)began;	// 0x33b12899
- (void)touchEnded:(id)ended;	// 0x33b12ce9
- (void)touchMoved:(id)moved;	// 0x33b12b45
// declared property getter: - (id)touches;	// 0x33b12879
// declared property getter: - (id)updateAction;	// 0x33b126b1
@end
