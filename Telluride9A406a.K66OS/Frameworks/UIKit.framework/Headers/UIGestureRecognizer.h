/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIView, NSMutableArray, UIEvent, NSMutableSet;
@protocol UIGestureRecognizerDelegate;

@interface UIGestureRecognizer : NSObject {
@private
	NSMutableArray *_targets;	// 4 = 0x4
	NSMutableArray *_delayedTouches;	// 8 = 0x8
	UIView *_view;	// 12 = 0xc
	UIEvent *_updateEvent;	// 16 = 0x10
	id<UIGestureRecognizerDelegate> _delegate;	// 20 = 0x14
	NSMutableSet *_failureRequirements;	// 24 = 0x18
	NSMutableSet *_failureDependents;	// 28 = 0x1c
	NSMutableSet *_dynamicFailureRequirements;	// 32 = 0x20
	NSMutableSet *_dynamicFailureDependents;	// 36 = 0x24
	id _failureMap;	// 40 = 0x28
	NSMutableSet *_friends;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned notExclusive : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned delivered : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
	} _gestureFlags;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL cancelsTouchesInView;	// G=0x35932891; S=0x3573a6e9; 
@property(assign, nonatomic) BOOL delaysTouchesBegan;	// G=0x359328a5; S=0x356bb165; 
@property(assign, nonatomic) BOOL delaysTouchesEnded;	// G=0x359328b9; S=0x356bb6cd; 
@property(assign, nonatomic) id<UIGestureRecognizerDelegate> delegate;	// G=0x357e1355; S=0x356baf65; @synthesize=_delegate
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x357007f9; S=0x356bb189; 
@property(assign, getter=isExclusive) BOOL exclusive;	// G=0x357742e1; S=0x356bff21; converted property
@property(readonly, assign, nonatomic) int state;	// G=0x35700815; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x356bb351; 
+ (BOOL)_touchesBeganWasDelayedForTouch:(id)touch;	// 0x357796cd
- (id)init;	// 0x35932529
- (id)initWithCoder:(id)coder;	// 0x3593253d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x356bacdd
- (id)_activeTouchesForEvent:(id)event;	// 0x35772ba1
- (void)_addDynamicFailureDependent:(id)dependent;	// 0x359329a9
- (void)_addDynamicFailureRequirement:(id)requirement;	// 0x359329f5
- (void)_addFailureDependent:(id)dependent;	// 0x35700121
- (void)_addFriendGesture:(id)gesture;	// 0x358111a5
- (BOOL)_affectedByGesture:(id)gesture;	// 0x357742f9
- (void)_appendDescription:(id)description forDependencies:(id)dependencies toString:(id)string atLevel:(int)level;	// 0x35932a95
- (void)_appendDescriptionToString:(id)string atLevel:(int)level includingDependencies:(BOOL)dependencies;	// 0x35932bdd
- (void)_appendSubclassDescription:(id)description;	// 0x35932a91
- (id)_briefDescription;	// 0x35932a41
- (void)_cancelRecognition;	// 0x35932971
- (CGPoint)_centroidOfTouches:(id)touches excludingEnded:(BOOL)ended;	// 0x35772c91
- (void)_clearDelayedTouches;	// 0x3569e1f5
- (void)_clearUpdateTimer;	// 0x3570576d
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x358e91f5
- (void)_delayTouch:(id)touch forEvent:(id)event;	// 0x35774485
- (void)_delayTouchesForEvent:(id)event;	// 0x35708539
- (void)_delayedUpdateGesture;	// 0x35707acd
- (BOOL)_delegateCanPreventGestureRecognizer:(id)recognizer;	// 0x35775c3d
- (BOOL)_delegateShouldReceiveTouch:(id)_delegate;	// 0x35771779
- (int)_depthFirstViewCompare:(id)compare;	// 0x35773ee1
- (void)_detach;	// 0x3581db59
- (float)_distanceBetweenTouches:(id)touches;	// 0x357efa8d
- (void)_enqueueDelayedTouchToSend:(id)send;	// 0x35775479
- (void)_enqueueDelayedTouchesToSend;	// 0x3569e029
- (void)_exclude;	// 0x35775e3d
- (id)_failureMap;	// 0x3577be05
- (void)_failureRequirementCompleted:(id)completed withEvent:(id)event;	// 0x35705541
- (void)_invalidate;	// 0x359330d9
- (BOOL)_isDirty;	// 0x3569b621
- (BOOL)_isExcludedByGesture:(id)gesture;	// 0x357740b1
- (BOOL)_isFriendWithGesture:(id)gesture;	// 0x35798761
- (BOOL)_isRecognized;	// 0x357056a5
- (void)_queryFailureRequirements;	// 0x357078e9
- (void)_queueForResetIfFinished;	// 0x3569b639
- (void)_relatedGestureReleased:(id)released;	// 0x357d5ff5
- (void)_removeFailureDependent:(id)dependent;	// 0x357fb7f9
- (BOOL)_requiresGestureRecognizerToFail:(id)fail;	// 0x35774359
- (void)_resetGestureRecognizer;	// 0x3577bf59
- (void)_resetIfFinished;	// 0x3577be15
- (void)_setDirty;	// 0x357729ad
- (void)_setFailureMap:(id)map;	// 0x35700825
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x35774481
- (void)_touchWasCancelled:(id)cancelled;	// 0x35779795
- (void)_updateGestureStateWithEvent:(id)event afterDelay:(BOOL)delay;	// 0x357056ed
- (void)_updateGestureWithEvent:(id)event;	// 0x35707aed
- (void)addTarget:(id)target action:(SEL)action;	// 0x35932745
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x35775c39
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x35798721
// declared property getter: - (BOOL)cancelsTouchesInView;	// 0x35932891
- (void)dealloc;	// 0x3569de61
// declared property getter: - (BOOL)delaysTouchesBegan;	// 0x359328a5
// declared property getter: - (BOOL)delaysTouchesEnded;	// 0x359328b9
// declared property getter: - (id)delegate;	// 0x357e1355
- (id)description;	// 0x35933091
- (void)encodeWithCoder:(id)coder;	// 0x35932691
- (void)ignoreTouch:(id)touch forEvent:(id)event;	// 0x3577542d
// declared property getter: - (BOOL)isEnabled;	// 0x357007f9
// converted property getter: - (BOOL)isExclusive;	// 0x357742e1
- (CGPoint)locationInView:(id)view;	// 0x359330ed
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x35933275
- (unsigned)numberOfTouches;	// 0x357f119d
- (void)removeFailureRequirement:(id)requirement;	// 0x357fb761
- (void)removeTarget:(id)target action:(SEL)action;	// 0x3571dd5d
- (void)requireGestureRecognizerToFail:(id)fail;	// 0x357000a1
- (void)requireOtherGestureToFail:(id)fail;	// 0x35700091
- (void)reset;	// 0x356c02fd
// declared property setter: - (void)setCancelsTouchesInView:(BOOL)view;	// 0x3573a6e9
// declared property setter: - (void)setDelaysTouchesBegan:(BOOL)began;	// 0x356bb165
// declared property setter: - (void)setDelaysTouchesEnded:(BOOL)ended;	// 0x356bb6cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x356baf65
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x356bb189
// converted property setter: - (void)setExclusive:(BOOL)exclusive;	// 0x356bff21
- (void)setState:(int)state;	// 0x35774dbd
- (void)setView:(id)view;	// 0x356bb361
// declared property getter: - (int)state;	// 0x35700815
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x359328cd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x359328d9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x359328d5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x359328d1
// declared property getter: - (id)view;	// 0x356bb351
@end
