/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIResponder, UITextRange, DOMRange;
@protocol UITextInputPrivate;

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject {
	UIResponder<UITextInputPrivate> *_document;	// 4 = 0x4
	int _granularity;	// 8 = 0x8
	UITextRange *_selectedRange;	// 12 = 0xc
	UITextRange *_base;	// 16 = 0x10
	UITextRange *_initialExtent;	// 20 = 0x14
	BOOL _isCommitting;	// 24 = 0x18
}
@property(retain, nonatomic) UITextRange *base;	// G=0x32e4a209; S=0x32c4456d; @synthesize=_base
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate> *document;	// G=0x32bd38c5; @synthesize=_document
@property(readonly, assign, nonatomic, getter=_domRange) DOMRange *domRange;	// G=0x32c014c5; 
@property(assign, nonatomic) int granularity;	// G=0x32c01d65; S=0x32c014b5; @synthesize=_granularity
@property(retain, nonatomic) UITextRange *initialExtent;	// G=0x32e4a219; S=0x32c4457d; @synthesize=_initialExtent
@property(readonly, assign, nonatomic) BOOL isCommitting;	// G=0x32bd39f5; @synthesize=_isCommitting
@property(retain, nonatomic) UITextRange *selectedRange;	// G=0x32bd4e91; S=0x32bd39e5; @synthesize=_selectedRange
- (id)initWithDocument:(id)document;	// 0x32bd3821
// declared property getter: - (id)_domRange;	// 0x32c014c5
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x32e48f6d
- (void)alterSelection:(CGPoint)selection granularity:(int)granularity;	// 0x32e49189
// declared property getter: - (id)base;	// 0x32e4a209
- (CGRect)caretRect;	// 0x32bd4fad
- (CGRect)caretRectAtBeginOfDocument;	// 0x32e48c91
- (CGRect)caretRectAtEndOfDocument;	// 0x32e48c25
- (void)clearRangedSelectionInitialExtent;	// 0x32e49519
- (void)clearSelection;	// 0x32c56ae1
- (CGPoint)clipPoint:(CGPoint)point inRect:(CGRect)rect;	// 0x32e49605
- (CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;	// 0x32e48d41
- (void)collapseSelection;	// 0x32e48f05
- (void)commit;	// 0x32c01a9d
- (void)dealloc;	// 0x32c4452d
// declared property getter: - (id)document;	// 0x32bd38c5
// declared property getter: - (int)granularity;	// 0x32c01d65
- (BOOL)hasEditableSelection;	// 0x32e4938d
// declared property getter: - (id)initialExtent;	// 0x32e4a219
- (void)invalidate;	// 0x32e48bd1
// declared property getter: - (BOOL)isCommitting;	// 0x32bd39f5
- (void)moveCaretToBoundaryOfWhitespaceOrLine;	// 0x32c017c9
- (unsigned)offsetInMarkedText;	// 0x32e48e01
- (BOOL)pointAtEndOfLine:(CGPoint)line;	// 0x32e49319
- (BOOL)pointAtStartOfLine:(CGPoint)line;	// 0x32e492a5
- (void)selectAll;	// 0x32e48e81
// declared property getter: - (id)selectedRange;	// 0x32bd4e91
- (id)selectedText;	// 0x32e48cfd
- (void)selectionChanged;	// 0x32bd3885
- (id)selectionRects;	// 0x32ca6979
// declared property setter: - (void)setBase:(id)base;	// 0x32c4456d
// declared property setter: - (void)setGranularity:(int)granularity;	// 0x32c014b5
// declared property setter: - (void)setInitialExtent:(id)extent;	// 0x32c4457d
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x32e49411
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x32e494ad
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x32e49441
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x32e49cb9
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x32e49715
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x32e49599
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x32e4952d
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x32e49d81
// declared property setter: - (void)setSelectedRange:(id)range;	// 0x32bd39e5
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x32e49cdd
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x32c0124d
- (void)smartExtendRangedSelection:(int)selection downstream:(BOOL)downstream;	// 0x32e49ea9
- (id)wordContainingCaretSelection;	// 0x32c46c51
@end
