/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UITextSelection, UIWebDocumentView;
@protocol UIWebSelectionBlock;

__attribute__((visibility("hidden")))
@interface UIWebSelection : NSObject {
@private
	UIWebDocumentView *_documentView;	// 4 = 0x4
	id<UIWebSelectionBlock> _base;	// 8 = 0x8
	id<UIWebSelectionBlock> _extent;	// 12 = 0xc
	CGSize _desiredSize;	// 16 = 0x10
	UITextSelection *_textSelection;	// 24 = 0x18
}
@property(retain, nonatomic) id<UIWebSelectionBlock> base;	// G=0x3016e0ed; S=0x3016e095; @synthesize=_base
@property(readonly, assign, nonatomic) CGRect boundingRect;	// G=0x302f7101; @dynamic
@property(assign, nonatomic) CGSize desiredSize;	// G=0x3016e079; S=0x302f9461; @synthesize=_desiredSize
@property(readonly, assign, nonatomic) UIWebDocumentView *documentView;	// G=0x3016ddf5; @synthesize=_documentView
@property(retain, nonatomic) id<UIWebSelectionBlock> extent;	// G=0x302f9451; S=0x3016e0b9; @synthesize=_extent
@property(readonly, assign, nonatomic, getter=isTextOnly) BOOL textOnly;	// G=0x302f8bad; 
@property(readonly, assign, nonatomic) UITextSelection *textSelection;	// G=0x3016e0dd; @synthesize=_textSelection
@property(readonly, assign, nonatomic) BOOL valid;	// G=0x3016e1b5; 
- (id)initWithDocumentView:(id)documentView;	// 0x3016d781
- (void)adjustSelectionFromPoint:(CGPoint)point towardsPoint:(CGPoint)point2 withNewRect:(CGRect)newRect;	// 0x302f73c1
- (void)applySelectionToWebDocumentView;	// 0x302f9171
- (id)asDomRange;	// 0x302f9099
// declared property getter: - (id)base;	// 0x3016e0ed
- (id)blockAtPoint:(CGPoint)point;	// 0x3016db79
- (BOOL)blockContainsPoint:(CGPoint)point;	// 0x302f91ad
- (id)blockOfSameWidthAtPoint:(CGPoint)point;	// 0x302f74e5
// declared property getter: - (CGRect)boundingRect;	// 0x302f7101
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x302f7129
- (CGRect)boundingTextSelectionRect;	// 0x302f8da9
- (CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int *)position;	// 0x302f8dd1
- (void)dealloc;	// 0x3016e1d5
- (id)description;	// 0x302f9285
// declared property getter: - (CGSize)desiredSize;	// 0x3016e079
- (float)distanceBetweenFirstRect:(CGRect)rect second:(CGRect)second edge:(int)edge;	// 0x302f75dd
// declared property getter: - (id)documentView;	// 0x3016ddf5
- (id)domDocument;	// 0x302f72c9
- (id)duplicate;	// 0x302f8a7d
- (id)elementAtPoint:(CGPoint)point;	// 0x302f7451
// declared property getter: - (id)extent;	// 0x302f9451
- (void)growFromEdge:(int)edge;	// 0x302f765d
- (void)growSelectionTowardsPoint:(CGPoint)point;	// 0x302f80d1
- (BOOL)isEqual:(id)equal;	// 0x302f7f7d
- (BOOL)isEqualToSelection:(id)selection;	// 0x302f938d
// declared property getter: - (BOOL)isTextOnly;	// 0x302f8bad
- (void)moveEdge:(int)edge outwards:(BOOL)outwards;	// 0x302f80a9
- (void)selectionChanged;	// 0x302f8fe9
// declared property setter: - (void)setBase:(id)base;	// 0x3016e095
// declared property setter: - (void)setDesiredSize:(CGSize)size;	// 0x302f9461
// declared property setter: - (void)setExtent:(id)extent;	// 0x3016e0b9
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x3016d819
- (void)shrinkFromEdge:(int)edge;	// 0x302f7acd
- (void)shrinkSelectionFromPoint:(CGPoint)point towardsPoint:(CGPoint)point2 withNewRect:(CGRect)newRect;	// 0x302f85dd
- (id)textRepresentation;	// 0x302f72f1
// declared property getter: - (id)textSelection;	// 0x3016e0dd
- (id)textSelectionRects;	// 0x302f8c09
- (BOOL)tryToShrinkToBaseAndExtent;	// 0x302f8445
- (void)useBlock;	// 0x302f8bdd
// declared property getter: - (BOOL)valid;	// 0x3016e1b5
- (id)webArchive;	// 0x302f7339
- (id)webFrame;	// 0x302f72a1
- (id)webView;	// 0x302f7279
@end

