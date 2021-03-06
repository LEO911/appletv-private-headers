/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayout.h"

@class UIDelayedAction, UIKBTree, NSMutableSet, CADisplayLink, NSTimer, UIKBKeyplaneView, UISwipeGestureRecognizer, NSMutableDictionary, NSString, UIKBBackgroundView;
@protocol UIKeyboardRivenTransitionView;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutStar : UIKeyboardLayout {
	UIKBTree *_keyboard;	// 104 = 0x68
	UIKBTree *_keyplane;	// 108 = 0x6c
	NSString *_keyboardName;	// 112 = 0x70
	NSString *_keyplaneName;	// 116 = 0x74
	int _appearance;	// 120 = 0x78
	UIKBTree *_activeKey;	// 124 = 0x7c
	UIKBKeyplaneView *_keyplaneView;	// 128 = 0x80
	UIKBBackgroundView *_backgroundView;	// 132 = 0x84
	int _keyboardType;	// 136 = 0x88
	CGPoint _initialDragPoint;	// 140 = 0x8c
	CGPoint _dragPrevPoint;	// 148 = 0x94
	float _dragValues[4];	// 156 = 0x9c
	float _dragVelocity;	// 172 = 0xac
	double _prevTouchUpTime;	// 176 = 0xb0
	double _prevTouchDownTime;	// 184 = 0xb8
	int _prevUpActions;	// 192 = 0xc0
	NSMutableDictionary *_keyboards;	// 196 = 0xc4
	NSMutableDictionary *_allKeyplaneViews;	// 200 = 0xc8
	NSMutableSet *_allKeyplaneKeycaps;	// 204 = 0xcc
	NSMutableSet *_validInputStrings;	// 208 = 0xd0
	NSString *_localizedInputKey;	// 212 = 0xd4
	CFDictionaryRef _extendedTouchInfoMap;	// 216 = 0xd8
	int _preferredTrackingChangeCount;	// 220 = 0xdc
	int _shiftTrackingChangeCount;	// 224 = 0xe0
	NSMutableSet *_accentInfo;	// 228 = 0xe4
	NSMutableSet *_hasAccents;	// 232 = 0xe8
	NSMutableDictionary *_delegatesForKeyplaneKeys;	// 236 = 0xec
	id _spaceTarget;	// 240 = 0xf0
	SEL _spaceAction;	// 244 = 0xf4
	SEL _spaceLongAction;	// 248 = 0xf8
	id _returnTarget;	// 252 = 0xfc
	SEL _returnAction;	// 256 = 0x100
	SEL _returnLongAction;	// 260 = 0x104
	id _deleteTarget;	// 264 = 0x108
	SEL _deleteAction;	// 268 = 0x10c
	SEL _deleteLongAction;	// 272 = 0x110
	BOOL _secureTextEntry;	// 276 = 0x114
	BOOL _shift;	// 277 = 0x115
	BOOL _autoshift;	// 278 = 0x116
	BOOL _settingShift;	// 279 = 0x117
	BOOL _didLongPress;	// 280 = 0x118
	BOOL _dragged;	// 281 = 0x119
	BOOL _dragChangedKey;	// 282 = 0x11a
	BOOL _touchDownInMoreKey;	// 283 = 0x11b
	BOOL _touchDownInShiftKey;	// 284 = 0x11c
	BOOL _touchDownInDeleteKey;	// 285 = 0x11d
	BOOL _wasShifted;	// 286 = 0x11e
	BOOL _dragDismissStarted;	// 287 = 0x11f
	BOOL _swipeDetected;	// 288 = 0x120
	BOOL _previousTouchInMore;	// 289 = 0x121
	BOOL _showIntlKey;	// 290 = 0x122
	BOOL _showDictationKey;	// 291 = 0x123
	BOOL _shiftLockReady;	// 292 = 0x124
	double _shiftLockFirstTapTime;	// 296 = 0x128
	UISwipeGestureRecognizer *_rightSwipeRecognizer;	// 304 = 0x130
	UISwipeGestureRecognizer *_leftSwipeRecognizer;	// 308 = 0x134
	UISwipeGestureRecognizer *_upSwipeRecognizer;	// 312 = 0x138
	UIView<UIKeyboardRivenTransitionView> *_transitionView;	// 316 = 0x13c
	float _initialSplitProgress;	// 320 = 0x140
	float _finalSplitProgress;	// 324 = 0x144
	float _initialPinchSeparation;	// 328 = 0x148
	float _pinchSeparationValues[4];	// 332 = 0x14c
	BOOL _pinchDetected;	// 348 = 0x15c
	double _autoSplitLastUpdate;	// 352 = 0x160
	float _autoSplitElapsedTime;	// 360 = 0x168
	CADisplayLink *_displayLink;	// 364 = 0x16c
	BOOL _ghostKeysEnabled;	// 368 = 0x170
	UIDelayedAction *_delayedCentroidUpdate;	// 372 = 0x174
	BOOL _isRebuilding;	// 376 = 0x178
	BOOL _preRotateShift;	// 377 = 0x179
	NSString *_preRotateKeyplaneName;	// 380 = 0x17c
	CGPoint _keyPeripheralInset;	// 384 = 0x180
	int _lastFlickDirection;	// 392 = 0x188
	UIView *_flickPopupView;	// 396 = 0x18c
	NSMutableDictionary *_compositeImages;	// 400 = 0x190
	NSTimer *_flickPopuptimer;	// 404 = 0x194
	id _touchInfo;	// 408 = 0x198
	BOOL _popupViewIsShown;	// 412 = 0x19c
	UIView *_dimKeyboardImageView;	// 416 = 0x1a0
	BOOL _keyboardImageViewIsDim;	// 420 = 0x1a4
	BOOL _isOutOfBounds;	// 421 = 0x1a5
}
@property(retain, nonatomic) UIKBTree *activeKey;	// G=0x33b3c9bd; S=0x33aeec2d; @synthesize=_activeKey
@property(assign, nonatomic) BOOL autoShift;	// G=0x33c8a13d; S=0x33c8a14d; @synthesize=_autoshift
@property(assign, nonatomic) BOOL didLongPress;	// G=0x33c8a15d; S=0x33c8a16d; @synthesize=_didLongPress
@property(readonly, assign, nonatomic) UIKBTree *keyboard;	// G=0x33b71f35; @synthesize=_keyboard
@property(copy, nonatomic) NSString *keyboardName;	// G=0x33c8a105; S=0x33c8a119; @synthesize=_keyboardName
@property(readonly, assign, nonatomic) UIKBTree *keyplane;	// G=0x33ad1025; @synthesize=_keyplane
@property(copy, nonatomic) NSString *keyplaneName;	// G=0x33ad1039; S=0x33ad1051; @synthesize=_keyplaneName
@property(copy, nonatomic) NSString *localizedInputKey;	// G=0x33c8a19d; S=0x33ad1011; @synthesize=_localizedInputKey
@property(readonly, assign, nonatomic) NSString *localizedInputMode;	// G=0x33ad0fc5; 
@property(readonly, assign) BOOL pinchDetected;	// G=0x33ad9699; converted property
@property(readonly, assign, nonatomic, getter=isRotating) BOOL rotating;	// G=0x33ad79d1; 
@property(assign, nonatomic) BOOL shift;	// G=0x33c8a12d; S=0x33ad9021; @synthesize=_shift
@property(readonly, assign, nonatomic) BOOL showDictationKey;	// G=0x33c8a18d; @synthesize=_showDictationKey
@property(assign, nonatomic) BOOL showIntlKey;	// G=0x33ad5835; S=0x33c8a17d; @synthesize=_showIntlKey
- (id)initWithFrame:(CGRect)frame;	// 0x33acfb31
- (void)_autoSplit:(id)split;	// 0x33c89311
- (id)_keyplaneVariantsKeyForString:(id)string;	// 0x33c8735d
- (void)activateCompositeKey:(id)key direction:(int)direction flickString:(id)string popupInfo:(id)info;	// 0x33c8bb39
- (id)activationIndicatorView;	// 0x33c87c8d
// declared property getter: - (id)activeKey;	// 0x33b3c9bd
- (id)activeTouchForKey:(id)key;	// 0x33b6d91d
- (CGPoint)applyError:(CGPoint)error toKey:(id)key;	// 0x33b725c9
// declared property getter: - (BOOL)autoShift;	// 0x33c8a13d
- (BOOL)backgroundNeedsRedraw;	// 0x33c86135
- (id)baseKeyForString:(id)string;	// 0x33b71be5
- (id)cacheIdentifierForKeyplaneNamed:(id)keyplaneNamed withVisualStyle:(int)visualStyle;	// 0x33ad5771
- (id)cachedKeyplaneNameForKeyplane:(id)keyplane;	// 0x33ad55d1
- (BOOL)canProduceString:(id)string;	// 0x33b71945
- (BOOL)canReuseKeyplaneView;	// 0x33b0008d
- (void)cancelTouchIfNecessaryForInfo:(id)info;	// 0x33afaf05
- (id)candidateList;	// 0x33ad1f95
- (void)changeToKeyplane:(id)keyplane;	// 0x33b724d5
- (void)clearAllKeyDelegates;	// 0x33ad212d
- (void)clearAllTouchInfo;	// 0x33ad2565
- (void)clearHandwritingStrokesIfNeeded;	// 0x33aec069
- (void)clearInfoForTouch:(id)touch;	// 0x33afaebd
- (void)clearUnusedObjects:(BOOL)objects;	// 0x33c85021
- (id)compositeImageForKey:(id)key;	// 0x33c8aca9
- (void)confirmAction;	// 0x33c86d61
- (void)deactivateActiveKeys;	// 0x33afbe45
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)info clearingDimming:(BOOL)dimming;	// 0x33c86529
- (void)dealloc;	// 0x33c84ddd
- (id)defaultNameForKeyplaneName:(id)keyplaneName;	// 0x33ad2101
- (void)deleteAction;	// 0x33b6da35
- (void)didClearInput;	// 0x33aec025
// declared property getter: - (BOOL)didLongPress;	// 0x33c8a15d
- (void)didRotate;	// 0x33c89f0d
- (int)displayTypeHintForMoreKey;	// 0x33ad4ea1
- (int)displayTypeHintForShiftKey;	// 0x33ad4ce9
- (BOOL)doesKeyCharging;	// 0x33ad9411
- (unsigned)downActionFlagsForKey:(id)key;	// 0x33aef341
- (void)downActionShiftWithKey:(id)key;	// 0x33b7b909
- (CGSize)dragGestureSize;	// 0x33c85591
- (void)finishSplit;	// 0x33c88bdd
- (void)finishSplitTransition;	// 0x33c88e15
- (void)finishSplitTransitionWithProgress:(float)progress;	// 0x33c88f31
- (id)flickPopupStringForKey:(id)key withString:(id)string;	// 0x33c8a7c9
- (id)flickStringForInputKey:(id)inputKey direction:(int)direction;	// 0x33c8a805
- (void)flushKeyCache:(id)cache;	// 0x33c8534d
- (CGRect)frameForKeyWithRepresentedString:(id)representedString;	// 0x33c8a2a9
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x33c8572d
- (CGRect)frameForKeylayoutName:(id)keylayoutName onKeyplaneName:(id)name;	// 0x33c856c5
- (CGRect)frameForLastKeyWithRepresentedString:(id)representedString;	// 0x33c8a53d
- (id)generateInfoForTouch:(id)touch;	// 0x33aedfd1
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x33c89a59
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33c89949
- (id)getFlickCompositeImageForKey:(id)key direction:(int)direction rect:(CGRect)rect;	// 0x33c8af0d
- (id)getPopupBackgroundImageForKey:(id)key direction:(int)direction popupInfo:(id)info rect:(CGRect)rect;	// 0x33c8acc9
- (void)handleDismissFlickView:(id)view;	// 0x33c8b705
- (void)handleFlick:(id)flick;	// 0x33c8a8b1
- (void)handlePopupView:(id)view;	// 0x33c8b64d
- (SEL)handlerForNotification:(id)notification;	// 0x33c85485
- (BOOL)handwritingPlane;	// 0x33aec0f9
- (BOOL)hasCandidateKeys;	// 0x33c86961
- (float)hitBuffer;	// 0x33ade5c9
- (BOOL)ignoresShiftState;	// 0x33b1d759
- (id)infoForTouch:(id)touch;	// 0x33af7a4d
- (void)installGestureRecognizers;	// 0x33acfec9
- (float)interpretPinchSeparationValues;	// 0x33c887f9
- (void)interpretTouchesForSplit;	// 0x33c88f69
- (BOOL)isLongPressedKey:(id)key;	// 0x33af82d5
// declared property getter: - (BOOL)isRotating;	// 0x33ad79d1
- (BOOL)isShiftKeyBeingHeld;	// 0x33ad8fbd
- (BOOL)isShiftKeyPlaneChooser;	// 0x33ad2015
- (BOOL)keyHasAccentedVariants:(id)variants;	// 0x33c89cf1
- (id)keyHitTest:(CGPoint)test;	// 0x33aee575
- (id)keyHitTestClosestToPoint:(CGPoint)point;	// 0x33b3c7d1
- (id)keyHitTestContainingPoint:(CGPoint)point;	// 0x33c8661d
- (id)keyHitTestForTouchInfo:(id)touchInfo touchStage:(int)stage;	// 0x33aee0b1
- (id)keyHitTestWithoutCharging:(CGPoint)charging;	// 0x33aed43d
- (id)keyWithRepresentedString:(id)representedString;	// 0x33c8a1b1
// declared property getter: - (id)keyboard;	// 0x33b71f35
// declared property getter: - (id)keyboardName;	// 0x33c8a105
- (id)keyboardWithName:(id)name;	// 0x33ad0bfd
- (int)keycodeForKey:(id)key;	// 0x33aeeb65
// declared property getter: - (id)keyplane;	// 0x33ad1025
- (id)keyplaneForKey:(id)key;	// 0x33b71f8d
// declared property getter: - (id)keyplaneName;	// 0x33ad1039
- (id)keyplaneNamed:(id)named;	// 0x33c89fa9
- (double)lastTouchUpTimestamp;	// 0x33c85a65
// declared property getter: - (id)localizedInputKey;	// 0x33c8a19d
// declared property getter: - (id)localizedInputMode;	// 0x33ad0fc5
- (void)longPressAction;	// 0x33c86d99
- (void)nextCandidatesAction;	// 0x33c86d2d
- (id)overlayCharacterImageForKey:(id)key direction:(int)direction rect:(CGRect)rect flickString:(id)string popupInfo:(id)info;	// 0x33c8af8d
- (BOOL)performReturnAction;	// 0x33c89619
- (BOOL)performSpaceAction;	// 0x33c89655
// converted property getter: - (BOOL)pinchDetected;	// 0x33ad9699
- (BOOL)pinchSplitGestureEnabled;	// 0x33c88f51
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x33aedcc9
- (id)popupKeyViews;	// 0x33c8a685
- (void)prepareForSplitTransition;	// 0x33c88949
- (void)rebuildSplitTransitionView;	// 0x33c85d89
- (void)rebuildSplitTransitionViewFromKeyplane:(id)keyplane toKeyplane:(id)keyplane2;	// 0x33c85a7d
- (void)refreshForDictationAvailablityDidChange;	// 0x33c86459
- (void)refreshForRivenPreferences;	// 0x33c85829
- (void)refreshGhostKeyState;	// 0x33af7a61
- (void)removeFromSuperview;	// 0x33c85291
- (CGImageRef)renderedImageWithStateFallbacksForToken:(id)token;	// 0x33c85d9d
- (CGImageRef)renderedImageWithToken:(id)token;	// 0x33c85eb5
- (CGImageRef)renderedKeyplaneWithToken:(id)token split:(BOOL)split;	// 0x33c86065
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x33ad2d99
- (void)restoreDefaultsForAllKeys;	// 0x33ad7ab9
- (void)restoreDefaultsForKey:(id)key;	// 0x33ad7afd
- (id)scriptingInfoWithChildren;	// 0x33b715b1
- (void)sendStringAction:(id)action forKey:(id)key isPopupVariant:(BOOL)variant;	// 0x33c86769
- (void)setAction:(SEL)action forKey:(id)key;	// 0x33c869dd
// declared property setter: - (void)setActiveKey:(id)key;	// 0x33aeec2d
// declared property setter: - (void)setAutoShift:(BOOL)shift;	// 0x33c8a14d
- (void)setAutoshift:(BOOL)autoshift;	// 0x33ad93c9
- (void)setCompositeImage:(id)image forKey:(id)key;	// 0x33c8ac7d
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)currentLocaleOnKeyplane;	// 0x33ad528d
- (void)setDelegate:(id)delegate forKey:(id)key;	// 0x33c86a65
// declared property setter: - (void)setDidLongPress:(BOOL)longPress;	// 0x33c8a16d
- (void)setKeyForTouchInfo:(id)touchInfo key:(id)key;	// 0x33c8a7b5
- (void)setKeyboardAppearance:(int)appearance;	// 0x33ad21f1
- (void)setKeyboardDim:(BOOL)dim;	// 0x33c8ba39
- (void)setKeyboardDim:(BOOL)dim amount:(float)amount withDuration:(float)duration;	// 0x33c8b751
// declared property setter: - (void)setKeyboardName:(id)name;	// 0x33c8a119
- (void)setKeyboardName:(id)name appearance:(int)appearance;	// 0x33ad08c5
// declared property setter: - (void)setKeyplaneName:(id)name;	// 0x33ad1051
- (void)setLabel:(id)label forKey:(id)key;	// 0x33ad7bad
// declared property setter: - (void)setLocalizedInputKey:(id)key;	// 0x33ad1011
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x33c86a21
- (void)setReturnKeyEnabled:(BOOL)enabled withDisplayName:(id)displayName withType:(int)type;	// 0x33ad8b15
// declared property setter: - (void)setShift:(BOOL)shift;	// 0x33ad9021
// declared property setter: - (void)setShowIntlKey:(BOOL)key;	// 0x33c8a17d
- (void)setSplit:(BOOL)split animated:(BOOL)animated;	// 0x33c89491
- (void)setSplitProgress:(float)progress;	// 0x33c892b9
- (void)setState:(int)state forKey:(id)key;	// 0x33ad5e19
- (void)setTarget:(id)target forKey:(id)key;	// 0x33c86999
// declared property getter: - (BOOL)shift;	// 0x33c8a12d
- (BOOL)shouldHitTestKey:(id)key;	// 0x33ad8731
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)key;	// 0x33aeeb09
- (BOOL)shouldRetestKey:(id)key withKeyplane:(id)keyplane;	// 0x33af7b7d
- (BOOL)shouldShowDictationKey;	// 0x33c86251
- (BOOL)shouldShowIndicator;	// 0x33c87c29
// declared property getter: - (BOOL)showDictationKey;	// 0x33c8a18d
- (void)showFlickView:(int)view withKey:(id)key flickString:(id)string;	// 0x33c8ac3d
// declared property getter: - (BOOL)showIntlKey;	// 0x33ad5835
- (void)showKeyboardType:(int)type appearance:(int)appearance orientation:(id)orientation withShift:(BOOL)shift;	// 0x33ad0265
- (void)showPopupVariantsForKey:(id)key;	// 0x33c873a1
- (void)showPopupView:(int)view withKey:(id)key popupInfo:(id)info force:(BOOL)force;	// 0x33c8bacd
- (void)showSplitTransitionView:(BOOL)view;	// 0x33c88a31
- (id)simulateTouch:(CGPoint)touch;	// 0x33c89fd5
- (id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x33b7227d
- (id)splitNameForKeyplane:(id)keyplane;	// 0x33c85539
- (id)splitNameForKeyplaneName:(id)keyplaneName;	// 0x33c854e9
- (int)stateForKey:(id)key;	// 0x33c86509
- (int)stateForKeyplaneSwitchKey:(id)keyplaneSwitchKey;	// 0x33c862dd
- (int)stateForShiftKey:(id)shiftKey;	// 0x33ad670d
- (void)swipeDetected:(id)detected;	// 0x33c89bd1
- (void)touchCancelled:(id)cancelled;	// 0x33c89771
- (void)touchDown:(id)down;	// 0x33aed979
- (void)touchDownWithKey:(id)key atPoint:(CGPoint)point;	// 0x33aeec41
- (void)touchDragged:(id)dragged;	// 0x33b3b849
- (id)touchForKey:(id)key;	// 0x33b7b825
- (void)touchUp:(id)up;	// 0x33af6391
- (void)uninstallGestureRecognizers;	// 0x33c89ae1
- (unsigned)upActionFlagsForKey:(id)key;	// 0x33af7c3d
- (void)upActionShift;	// 0x33b7bb79
- (void)updateBackgroundIfNeeded;	// 0x33ad5b11
- (void)updateKeyCentroids;	// 0x33ad8131
- (void)updateKeyboardForKeyplane:(id)keyplane;	// 0x33ad2ae9
- (BOOL)updateKeysWithDelegates;	// 0x33ad7f5d
- (void)updateLocalizedKeys:(BOOL)keys;	// 0x33ad39e5
- (void)updateLocalizedKeysOnKeyplane:(id)keyplane;	// 0x33ad3bd1
- (void)updateMoreAndInternationalKeys;	// 0x33ad344d
- (void)updateShiftKeyState;	// 0x33ad9145
- (void)updateTransitionWithFlags:(int)flags;	// 0x33ad8dd5
- (BOOL)usesAutoShift;	// 0x33ad8fed
- (int)visualStyleForKeyboardIfSplit:(BOOL)keyboardIfSplit;	// 0x33c859dd
- (void)willRotate;	// 0x33c89ebd
@end

