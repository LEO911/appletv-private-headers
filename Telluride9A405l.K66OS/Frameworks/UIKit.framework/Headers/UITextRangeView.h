/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITouch, UITextSelectionView, UISelectionGrabber, NSMutableArray, NSArray;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
@private
	UITextSelectionView *m_selectionView;	// 48 = 0x30
	UIView<UITextSelectingContainer> *m_container;	// 52 = 0x34
	int m_mode;	// 56 = 0x38
	NSArray *m_rects;	// 60 = 0x3c
	NSMutableArray *m_rectViews;	// 64 = 0x40
	UITouch *m_activeTouch;	// 68 = 0x44
	CGRect m_startEdge;	// 72 = 0x48
	CGRect m_endEdge;	// 88 = 0x58
	CGPoint m_basePoint;	// 104 = 0x68
	CGPoint m_extentPoint;	// 112 = 0x70
	CGPoint m_initialBasePoint;	// 120 = 0x78
	CGPoint m_initialExtentPoint;	// 128 = 0x80
	float m_initialDistance;	// 136 = 0x88
	CGPoint m_touchOffset;	// 140 = 0x8c
	double m_firstMovedTime;	// 148 = 0x94
	UISelectionGrabber *m_startGrabber;	// 156 = 0x9c
	UISelectionGrabber *m_endGrabber;	// 160 = 0xa0
	BOOL m_animateUpdate;	// 164 = 0xa4
	BOOL m_baseIsStart;	// 165 = 0xa5
	BOOL m_commandsWereShowing;	// 166 = 0xa6
	BOOL m_inGesture;	// 167 = 0xa7
	BOOL m_magnifying;	// 168 = 0xa8
	BOOL m_scrolling;	// 169 = 0xa9
	BOOL m_scaling;	// 170 = 0xaa
	BOOL m_rotating;	// 171 = 0xab
	BOOL m_inputViewIsChanging;	// 172 = 0xac
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x32d8290d; S=0x32f41405; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x32f41605; S=0x32f41615; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x32f40fe9; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x32f41429; S=0x32f41439; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x32f41481; S=0x32f4149d; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x32f41625; S=0x32f41635; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x32d7a7a5; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x32d7b661; S=0x32f41465; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x32d82991; S=0x32f415e1; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x32f414b1; S=0x32f414cd; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x32f41591; S=0x32f415a9; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x32f41665; S=0x32d829b1; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x32f414e1; S=0x32f414fd; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x32f41541; S=0x32f41551; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x32f41511; S=0x32f4152d; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x32f416c5; S=0x32f416d5; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x32f41675; S=0x32d829a1; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x32f41645; S=0x32f41655; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x32d7abb5; S=0x32d7a2b5; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x32f401fd; S=0x32f4020d; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x32f416a5; S=0x32f416b5; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x32f41685; S=0x32f41695; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x32f401ed; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x32d7b63d; S=0x32f41449; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x32d8293d; S=0x32f415bd; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x32f41561; S=0x32f4157d; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x32d7a1ad
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x32f3f2f1
// declared property getter: - (id)activeTouch;	// 0x32d8290d
// declared property getter: - (BOOL)animateUpdate;	// 0x32f41605
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x32f40f59
// declared property getter: - (BOOL)autoscrolled;	// 0x32f40fe9
// declared property getter: - (BOOL)baseIsStart;	// 0x32f41429
// declared property getter: - (CGPoint)basePoint;	// 0x32f41481
- (void)beginMagnifying;	// 0x32f41021
- (void)cancelDelayedActions;	// 0x32d8291d
// declared property getter: - (BOOL)commandsWereShowing;	// 0x32f41625
// declared property getter: - (id)container;	// 0x32d7a7a5
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x32f41361
- (void)dealloc;	// 0x32d928f9
- (void)didRotate;	// 0x32f40d51
- (void)didScroll;	// 0x32f40c91
- (void)doneMagnifying;	// 0x32f40bf1
// declared property getter: - (CGRect)endEdge;	// 0x32d7b661
// declared property getter: - (id)endGrabber;	// 0x32d82991
// declared property getter: - (CGPoint)extentPoint;	// 0x32f414b1
// declared property getter: - (double)firstMovedTime;	// 0x32f41591
// declared property getter: - (BOOL)inGesture;	// 0x32f41665
// declared property getter: - (CGPoint)initialBasePoint;	// 0x32f414e1
// declared property getter: - (float)initialDistance;	// 0x32f41541
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x32f41511
- (void)inputViewDidChange;	// 0x32f40dc9
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x32f416c5
- (void)inputViewWillChange;	// 0x32f40d99
// declared property getter: - (BOOL)isScrolling;	// 0x32f41675
- (CGPoint)magnifierPoint;	// 0x32f41241
// declared property getter: - (BOOL)magnifying;	// 0x32f41645
// declared property getter: - (int)mode;	// 0x32d7abb5
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x32f40e89
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32f3f32d
- (void)prepareForMagnification;	// 0x32f40b81
// declared property getter: - (id)rects;	// 0x32f401fd
- (void)removeFromSuperview;	// 0x32d827f1
// declared property getter: - (BOOL)rotating;	// 0x32f416a5
- (void)scaleDidChange;	// 0x32f40cf1
- (void)scaleWillChange;	// 0x32f40cc1
// declared property getter: - (BOOL)scaling;	// 0x32f41685
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x32f40b39
// declared property getter: - (id)selectionView;	// 0x32f401ed
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x32f41405
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x32f41615
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x32f41439
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x32f4149d
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x32f41635
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x32f413c5
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x32f41465
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x32f415e1
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x32f414cd
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x32f415a9
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x32d829b1
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x32f414fd
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x32f41551
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x32f4152d
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x32f416d5
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x32d829a1
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x32f41655
// declared property setter: - (void)setMode:(int)mode;	// 0x32d7a2b5
// declared property setter: - (void)setRects:(id)rects;	// 0x32f4020d
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x32f416b5
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x32f41695
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x32f41449
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x32f415bd
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x32f4157d
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x32f40ee1
- (void)startAnimating;	// 0x32f40df9
// declared property getter: - (CGRect)startEdge;	// 0x32d7b63d
// declared property getter: - (id)startGrabber;	// 0x32d8293d
- (void)stopAnimating;	// 0x32f40e41
// declared property getter: - (CGPoint)touchOffset;	// 0x32f41561
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32f3f3e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32f400fd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32f3fd55
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32f3f971
- (void)updateBaseAndExtentPointsFromEdges;	// 0x32f41109
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x32f40631
- (void)updateDots;	// 0x32d92269
- (void)updateGrabbers;	// 0x32d7a7b5
- (void)updateRectViews;	// 0x32d7a321
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x32f40545
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x32f403dd
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x32f40729
- (void)willRotate;	// 0x32f40d21
- (void)willScroll;	// 0x32f40c61
@end
