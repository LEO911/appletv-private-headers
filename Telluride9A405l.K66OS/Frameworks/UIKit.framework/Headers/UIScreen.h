/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UISoftwareDimmingWindow, UIScreenMode, NSArray;

@interface UIScreen : NSObject {
@private
	id _display;	// 4 = 0x4
	CGRect _bounds;	// 8 = 0x8
	float _scale;	// 24 = 0x18
	float _horizontalScale;	// 28 = 0x1c
	struct {
		unsigned bitsPerComponent : 4;
		unsigned initialized : 1;
		unsigned connected : 1;
		unsigned overscanCompensation : 2;
	} _screenFlags;	// 32 = 0x20
	BOOL _wantsSoftwareDimming;	// 33 = 0x21
	UISoftwareDimmingWindow *_softwareDimmingWindow;	// 36 = 0x24
	int _ignoreBacklightLevelDidChangeNotificationsCount;	// 40 = 0x28
}
@property(assign, nonatomic, setter=_setIgnoreBacklightLevelDidChangeNotificationsCount:) int _ignoreBacklightLevelDidChangeNotificationsCount;	// G=0x32ed1981; S=0x32ed1991; @synthesize
@property(retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow;	// G=0x32ed194d; S=0x32ed195d; @synthesize
@property(readonly, assign, nonatomic) CGRect applicationFrame;	// G=0x32cb7905; 
@property(readonly, assign, nonatomic) NSArray *availableModes;	// G=0x32d526b5; 
@property(assign) int bitsPerComponent;	// G=0x32ca9309; S=0x32ed0f19; converted property
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x32c79c31; @synthesize=_bounds
@property(assign, nonatomic) float brightness;	// G=0x32ed1595; S=0x32ed1399; 
@property(retain, nonatomic) UIScreenMode *currentMode;	// G=0x32ca67d1; S=0x32ed0f35; 
@property(readonly, assign, nonatomic) UIScreen *mirroredScreen;	// G=0x32ed0e61; 
@property(assign, nonatomic) int overscanCompensation;	// G=0x32ed0fc1; S=0x32ed0fd5; 
@property(readonly, assign, nonatomic) UIScreenMode *preferredMode;	// G=0x32ed0ecd; 
@property(readonly, assign, nonatomic) float scale;	// G=0x32c761fd; @synthesize=_scale
@property(assign, nonatomic) BOOL wantsSoftwareDimming;	// G=0x32ed192d; S=0x32ed193d; @synthesize=_wantsSoftwareDimming
+ (void)_prepareScreensForAppResume;	// 0x32d524d9
+ (id)_screenWithDisplayName:(id)displayName;	// 0x32ed056d
+ (void)_videoOutSettingsChanged;	// 0x32ed01c9
+ (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x32ed1865
+ (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x32ed179d
+ (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x32cf91c1
+ (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x32cf92b5
+ (void)initialize;	// 0x32ca6141
+ (id)mainScreen;	// 0x32c761dd
+ (id)screens;	// 0x32d52599
+ (CGAffineTransform)transformForScreenOriginRotation:(float)screenOriginRotation;	// 0x32ed03b1
+ (CGAffineTransform)transformToRotateScreen:(float)rotateScreen;	// 0x32ed048d
- (id)initWithDisplay:(id)display;	// 0x32ca639d
- (CGRect)_applicationFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x32cb7961
- (void)_beginObservingBacklightLevelNotifications;	// 0x32ca6d09
- (CGRect)_boundsInPixels;	// 0x32c8d861
- (void)_computeMetrics;	// 0x32ca650d
- (void)_decrementIgnoreBacklightLevelDidChangeNotificationsCount;	// 0x32ed121d
- (void)_endObservingBacklightLevelNotifications;	// 0x32ed1329
- (BOOL)_hasStatusBar;	// 0x32cb7b31
- (BOOL)_hasWindows;	// 0x32ed0c75
- (float)_horizontalPixelScale;	// 0x32ca9869
// declared property getter: - (int)_ignoreBacklightLevelDidChangeNotificationsCount;	// 0x32ed1981
- (int)_imageOrientation;	// 0x32ed0d39
- (void)_incrementIgnoreBacklightLevelDidChangeNotificationsCount;	// 0x32ed11ed
- (BOOL)_isMainScreen;	// 0x32c8d811
- (BOOL)_isOverscanned;	// 0x32ca6c8d
- (id)_lazySoftwareDimmingWindow;	// 0x32ed10d5
- (id)_name;	// 0x32ed100d
- (BOOL)_overscanAdjustmentNeedsUpdate;	// 0x32ca6bbd
- (void)_postBrightnessDidChangeNotificationIfAppropriate;	// 0x32ed127d
- (void)_prepareForWindow;	// 0x32ed1049
- (CGRect)_realDisplayBounds;	// 0x32ca9879
- (double)_refreshRate;	// 0x32ed0e41
- (float)_rotation;	// 0x32c8d7dd
// declared property setter: - (void)_setIgnoreBacklightLevelDidChangeNotificationsCount:(int)_setIgnoreBacklightLevel;	// 0x32ed1991
- (void)_setScale:(float)scale;	// 0x32ed10c5
// declared property setter: - (void)_setSoftwareDimmingWindow:(id)window;	// 0x32ed195d
- (BOOL)_shouldRepostBacklightLevelChangedNotification;	// 0x32ed125d
// declared property getter: - (id)_softwareDimmingWindow;	// 0x32ed194d
- (BOOL)_supportsBrightness;	// 0x32ed1381
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)update;	// 0x32ca6931
// declared property getter: - (CGRect)applicationFrame;	// 0x32cb7905
// declared property getter: - (id)availableModes;	// 0x32d526b5
// converted property getter: - (int)bitsPerComponent;	// 0x32ca9309
// declared property getter: - (CGRect)bounds;	// 0x32c79c31
// declared property getter: - (float)brightness;	// 0x32ed1595
// declared property getter: - (id)currentMode;	// 0x32ca67d1
- (void)dealloc;	// 0x32ed063d
- (id)description;	// 0x32ed166d
- (id)displayLinkWithTarget:(id)target selector:(SEL)selector;	// 0x32d9bfe5
// declared property getter: - (id)mirroredScreen;	// 0x32ed0e61
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32ed0735
// declared property getter: - (int)overscanCompensation;	// 0x32ed0fc1
// declared property getter: - (id)preferredMode;	// 0x32ed0ecd
- (float)rawBrightnessForBacklightLevel:(float)backlightLevel;	// 0x32ed11b5
// declared property getter: - (float)scale;	// 0x32c761fd
- (int)screenType;	// 0x32ed0f89
// converted property setter: - (void)setBitsPerComponent:(int)component;	// 0x32ed0f19
// declared property setter: - (void)setBrightness:(float)brightness;	// 0x32ed1399
// declared property setter: - (void)setCurrentMode:(id)mode;	// 0x32ed0f35
// declared property setter: - (void)setOverscanCompensation:(int)compensation;	// 0x32ed0fd5
// declared property setter: - (void)setWantsSoftwareDimming:(BOOL)dimming;	// 0x32ed193d
// declared property getter: - (BOOL)wantsSoftwareDimming;	// 0x32ed192d
@end

