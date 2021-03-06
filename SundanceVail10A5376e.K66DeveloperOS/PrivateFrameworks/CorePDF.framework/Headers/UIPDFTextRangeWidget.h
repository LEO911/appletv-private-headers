/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFSelectionWidget.h"
#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {
	CALayer *_leftSelectionGrabber;	// 4 = 0x4
	CALayer *_leftBar;	// 8 = 0x8
	CALayer *_rightSelectionGrabber;	// 12 = 0xc
	CALayer *_rightBar;	// 16 = 0x10
	CALayer *_leftHandle;	// 20 = 0x14
	CALayer *_rightHandle;	// 24 = 0x18
	CALayer *_fixedSelectionGrabber;	// 28 = 0x1c
	UIPDFPageView *_pageView;	// 32 = 0x20
	float _handleHeight;	// 36 = 0x24
	float _handleWidth;	// 40 = 0x28
	CGPoint _initialSelectionPointOnPage;	// 44 = 0x2c
	float _offsetX;	// 52 = 0x34
	float _offsetY;	// 56 = 0x38
	BOOL _hiDPI;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x357a48dd; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x357a4b09; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x357a4ae9; S=0x357a4af9; @synthesize=_pageView
- (id)init;	// 0x357a2ef9
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x357a48dd
- (void)dealloc;	// 0x357a31fd
- (void)endTracking;	// 0x357a48b5
- (void)hide;	// 0x357a4a65
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x357a4169
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x357a4b09
- (void)layout;	// 0x357a48a1
- (void)layoutLeftSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x357a3241
- (void)layoutRightSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x357a3719
- (void)layoutWidget;	// 0x357a3c0d
// declared property getter: - (id)pageView;	// 0x357a4ae9
- (void)remove;	// 0x357a40d1
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x357a4121
- (CGRect)selectionRectangle;	// 0x357a48b9
// declared property setter: - (void)setPageView:(id)view;	// 0x357a4af9
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x357a4009
- (void)setSelection:(id)selection;	// 0x357a4039
- (void)track:(CGPoint)track;	// 0x357a48b1
- (CGPoint)viewOffset;	// 0x357a4729
@end

