/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSArray, NSString, UICalloutBarOverlay, UICalloutBarButton;

@interface UICalloutBar : UIView {
	id m_delegate;	// 88 = 0x58
	CGPoint m_pointBelowControls;	// 92 = 0x5c
	CGPoint m_pointAboveControls;	// 100 = 0x64
	CGPoint m_pointLeftOfControls;	// 108 = 0x6c
	CGPoint m_pointRightOfControls;	// 116 = 0x74
	CGPoint m_targetPoint;	// 124 = 0x7c
	int m_targetDirection;	// 132 = 0x84
	BOOL m_targetHorizontal;	// 136 = 0x88
	BOOL m_fadeAfterCommand;	// 137 = 0x89
	BOOL m_recalcVisibleItems;	// 138 = 0x8a
	BOOL m_shouldAppear;	// 139 = 0x8b
	int m_pageCount;	// 140 = 0x8c
	int m_currentPage;	// 144 = 0x90
	BOOL m_supressesHorizontalMovement;	// 148 = 0x94
	CGRect m_controlFrame;	// 152 = 0x98
	CGRect m_targetRect;	// 168 = 0xa8
	CGRect m_supressesHorizontalMovementFrame;	// 184 = 0xb8
	float m_supressedHorizontalMovementX;	// 200 = 0xc8
	int m_arrowDirection;	// 204 = 0xcc
	NSMutableArray *m_systemButtons;	// 208 = 0xd0
	NSMutableArray *m_extraButtons;	// 212 = 0xd4
	UICalloutBarButton *m_nextButton;	// 216 = 0xd8
	UICalloutBarButton *m_previousButton;	// 220 = 0xdc
	NSMutableArray *m_rectsToEvade;	// 224 = 0xe0
	UICalloutBarOverlay *m_overlay;	// 228 = 0xe4
	double m_fadedTime;	// 232 = 0xe8
	id m_responderTarget;	// 240 = 0xf0
	NSArray *m_replacements;	// 244 = 0xf4
	NSArray *m_extraItems;	// 248 = 0xf8
	NSString *m_untruncatedString;	// 252 = 0xfc
	BOOL m_didPromptForReplace;	// 256 = 0x100
	BOOL m_ignoringEvents;	// 257 = 0x101
	BOOL m_showAllReplacements;	// 258 = 0x102
	BOOL m_ignoreFade;	// 259 = 0x103
}
@property(assign, nonatomic) int arrowDirection;	// G=0x33aeb7a9; S=0x33ae9999; @synthesize=m_arrowDirection
@property(assign, nonatomic) CGRect controlFrame;	// G=0x33b3fe61; S=0x33aea47d; @synthesize=m_controlFrame
@property(assign, nonatomic) id delegate;	// G=0x33ae9c61; S=0x33ae9d69; @synthesize=m_delegate
@property(copy, nonatomic) NSArray *extraItems;	// G=0x33b4194d; S=0x33b3dff1; @synthesize=m_extraItems
@property(assign, nonatomic) CGPoint pointAboveControls;	// G=0x33cac5e5; S=0x33ae99cd; @synthesize=m_pointAboveControls
@property(assign, nonatomic) CGPoint pointBelowControls;	// G=0x33b3fe99; S=0x33ae99b9; @synthesize=m_pointBelowControls
@property(assign, nonatomic) CGPoint pointLeftOfControls;	// G=0x33cac5fd; S=0x33cac615; @synthesize=m_pointLeftOfControls
@property(assign, nonatomic) CGPoint pointRightOfControls;	// G=0x33cac629; S=0x33cac641; @synthesize=m_pointRightOfControls
@property(readonly, assign, nonatomic) NSArray *rectsToEvade;	// G=0x33b3fe51; @synthesize=m_rectsToEvade
@property(copy, nonatomic) NSArray *replacements;	// G=0x33cac6b1; S=0x33ae8b2d; @synthesize=m_replacements
@property(assign, nonatomic) UIResponder *responderTarget;	// G=0x33cac691; S=0x33cac6a1; @synthesize=m_responderTarget
@property(assign, nonatomic) BOOL showAllReplacements;	// G=0x33cac6c5; S=0x33cac6d5; @synthesize=m_showAllReplacements
@property(assign, nonatomic) BOOL supressesHorizontalMovement;	// G=0x33b3fcc5; S=0x33cac70d; @synthesize=m_supressesHorizontalMovement
@property(assign, nonatomic) int targetDirection;	// G=0x33b3fe89; S=0x33aea469; @synthesize=m_targetDirection
@property(assign, nonatomic) BOOL targetHorizontal;	// G=0x33cac659; S=0x33ae99a9; @synthesize=m_targetHorizontal
@property(assign, nonatomic) CGPoint targetPoint;	// G=0x33b3fecd; S=0x33b3feb5; @synthesize=m_targetPoint
@property(assign, nonatomic) CGRect targetRect;	// G=0x33cac669; S=0x33ae997d; @synthesize=m_targetRect
@property(copy, nonatomic) NSString *untruncatedString;	// G=0x33cac6e9; S=0x33cac6fd; @synthesize=m_untruncatedString
@property(readonly, assign, nonatomic) BOOL visible;	// G=0x33ae99e1; 
+ (void)_releaseSharedInstance;	// 0x33cab339
+ (id)activeCalloutBar;	// 0x33a07919
+ (void)fadeSharedCalloutBar;	// 0x33a07959
+ (void)fadeSharedCalloutBarIfNeededForView:(id)view window:(id)window;	// 0x33cab389
+ (void)hideSharedCalloutBar;	// 0x33a5b0f5
+ (id)sharedCalloutBar;	// 0x33ae7e75
+ (BOOL)sharedCalloutBarIsVisible;	// 0x33aeb8f9
- (id)initWithFrame:(CGRect)frame;	// 0x33ae7ed5
- (void)_fadeAfterCommand:(SEL)command;	// 0x33b415f1
- (void)_showNextItems:(id)items;	// 0x33cab569
- (void)_showPreviousItems:(id)items;	// 0x33cab539
- (BOOL)_updateVisibleItemsAnimated:(BOOL)animated;	// 0x33ae9d79
- (void)addRectToEvade:(CGRect)evade;	// 0x33ae90a9
- (void)appear;	// 0x33ae9a59
- (void)appearAnimationDidStop:(id)appearAnimation finished:(id)finished context:(void *)context;	// 0x33b41365
// declared property getter: - (int)arrowDirection;	// 0x33aeb7a9
- (void)buttonHighlighted:(id)highlighted highlighted:(BOOL)highlighted2;	// 0x33aeac69
- (void)buttonPressed:(id)pressed;	// 0x33b42249
- (BOOL)calculateControlFrameForCalloutSize:(CGSize)calloutSize below:(BOOL)below;	// 0x33b3f9c5
- (BOOL)calculateControlFrameForCalloutSize:(CGSize)calloutSize right:(BOOL)right;	// 0x33cab5ed
- (BOOL)calculateControlFrameInsideTargetRect:(CGSize)rect;	// 0x33cab775
- (void)clearEvadeRects;	// 0x33ae8f39
- (void)clearReplacements;	// 0x33aeb8cd
- (void)clearSupressesHorizontalMovementFrame;	// 0x33b417c1
- (void)configureButtons:(float)buttons;	// 0x33b3fee5
// declared property getter: - (CGRect)controlFrame;	// 0x33b3fe61
- (void)dealloc;	// 0x33cab421
// declared property getter: - (id)delegate;	// 0x33ae9c61
- (void)expandAfterAlertOrBecomeActive:(id)active;	// 0x33cab525
// declared property getter: - (id)extraItems;	// 0x33b4194d
- (void)fade;	// 0x33b415c9
- (void)flattenForAlertOrResignActive:(id)alertOrResignActive;	// 0x33cab511
- (BOOL)hasReplacements;	// 0x33aead49
- (void)hide;	// 0x33cac469
- (void)hideAnimationDidStop:(id)hideAnimation finished:(id)finished context:(void *)context;	// 0x33b41805
// declared property getter: - (CGPoint)pointAboveControls;	// 0x33cac5e5
// declared property getter: - (CGPoint)pointBelowControls;	// 0x33b3fe99
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33b41551
// declared property getter: - (CGPoint)pointLeftOfControls;	// 0x33cac5fd
// declared property getter: - (CGPoint)pointRightOfControls;	// 0x33cac629
- (BOOL)recentlyFaded;	// 0x33aebc4d
- (BOOL)rectClear:(CGRect)clear;	// 0x33b3fcd5
// declared property getter: - (id)rectsToEvade;	// 0x33b3fe51
- (void)removeFromSuperview;	// 0x33cab5a9
// declared property getter: - (id)replacements;	// 0x33cac6b1
// declared property getter: - (id)responderTarget;	// 0x33cac691
// declared property setter: - (void)setArrowDirection:(int)direction;	// 0x33ae9999
// declared property setter: - (void)setControlFrame:(CGRect)frame;	// 0x33aea47d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33ae9d69
// declared property setter: - (void)setExtraItems:(id)items;	// 0x33b3dff1
- (BOOL)setFrameForSize:(CGSize)size;	// 0x33b3f605
// declared property setter: - (void)setPointAboveControls:(CGPoint)controls;	// 0x33ae99cd
// declared property setter: - (void)setPointBelowControls:(CGPoint)controls;	// 0x33ae99b9
// declared property setter: - (void)setPointLeftOfControls:(CGPoint)controls;	// 0x33cac615
// declared property setter: - (void)setPointRightOfControls:(CGPoint)controls;	// 0x33cac641
// declared property setter: - (void)setReplacements:(id)replacements;	// 0x33ae8b2d
// declared property setter: - (void)setResponderTarget:(id)target;	// 0x33cac6a1
// declared property setter: - (void)setShowAllReplacements:(BOOL)replacements;	// 0x33cac6d5
// declared property setter: - (void)setSupressesHorizontalMovement:(BOOL)movement;	// 0x33cac70d
// declared property setter: - (void)setTargetDirection:(int)direction;	// 0x33aea469
// declared property setter: - (void)setTargetHorizontal:(BOOL)horizontal;	// 0x33ae99a9
// declared property setter: - (void)setTargetPoint:(CGPoint)point;	// 0x33b3feb5
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x33ae997d
- (void)setTargetRect:(CGRect)rect arrowDirection:(int)direction;	// 0x33cac121
- (void)setTargetRect:(CGRect)rect pointBelowControls:(CGPoint)controls pointAboveControls:(CGPoint)controls3;	// 0x33ae9891
- (void)setTargetRect:(CGRect)rect pointLeftOfControls:(CGPoint)controls pointRightOfControls:(CGPoint)controls3;	// 0x33cac039
// declared property setter: - (void)setUntruncatedString:(id)string;	// 0x33cac6fd
- (void)show;	// 0x33cac2bd
// declared property getter: - (BOOL)showAllReplacements;	// 0x33cac6c5
- (float)supressHorizontalXMovementIfNeededForPoint:(CGPoint)point proposedX:(float)x;	// 0x33b3fc25
// declared property getter: - (BOOL)supressesHorizontalMovement;	// 0x33b3fcc5
// declared property getter: - (int)targetDirection;	// 0x33b3fe89
- (id)targetForAction:(SEL)action;	// 0x33aead89
// declared property getter: - (BOOL)targetHorizontal;	// 0x33cac659
// declared property getter: - (CGPoint)targetPoint;	// 0x33b3fecd
// declared property getter: - (CGRect)targetRect;	// 0x33cac669
- (int)textEffectsVisibilityLevel;	// 0x33ae9a45
- (CGRect)textEffectsWindowBoundsWithoutStatusBar;	// 0x33aeb7cd
// declared property getter: - (id)untruncatedString;	// 0x33cac6e9
- (void)update;	// 0x33cac59d
- (void)updateAnimated:(BOOL)animated;	// 0x33cac5c1
- (void)updateAvailableButtons;	// 0x33aea49d
- (void)updateForCurrentPage;	// 0x33b40d7d
// declared property getter: - (BOOL)visible;	// 0x33ae99e1
@end

