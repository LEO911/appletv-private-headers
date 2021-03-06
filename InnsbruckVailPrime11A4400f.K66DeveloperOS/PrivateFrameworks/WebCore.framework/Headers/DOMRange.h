/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"
#import "WebCore-Structs.h"

@class NSString, DOMNode;

@interface DOMRange : DOMObject {
}
@property(readonly, assign) BOOL collapsed;	// G=0x3300a785; 
@property(readonly, assign) DOMNode *commonAncestorContainer;	// G=0x331c1ee1; 
@property(readonly, assign) DOMNode *endContainer;	// G=0x33063571; 
@property(readonly, assign) int endOffset;	// G=0x33063679; 
@property(readonly, assign) DOMNode *startContainer;	// G=0x33034abd; 
@property(readonly, assign) int startOffset;	// G=0x33063475; 
@property(readonly, assign) NSString *text;	// G=0x33040a71; 
- (id)_text;	// 0x3315aaa5
- (CGRect)boundingBox;	// 0x3315a509
- (id)cloneContents;	// 0x331c2919
- (id)cloneRange;	// 0x331c2d15
- (void)collapse:(BOOL)collapse;	// 0x3306502d
// declared property getter: - (BOOL)collapsed;	// 0x3300a785
// declared property getter: - (id)commonAncestorContainer;	// 0x331c1ee1
- (short)compareBoundaryPoints:(unsigned short)points :(id)arg2;	// 0x331c25c5
- (short)compareBoundaryPoints:(unsigned short)points sourceRange:(id)range;	// 0x330369d9
- (short)compareNode:(id)node;	// 0x331c32e5
- (short)comparePoint:(id)point offset:(int)offset;	// 0x331c33f9
- (id)createContextualFragment:(id)fragment;	// 0x331c3049
- (void)dealloc;	// 0x330150f1
- (void)deleteContents;	// 0x331c26d5
- (id)description;	// 0x3315a9f1
- (void)detach;	// 0x330638d1
// declared property getter: - (id)endContainer;	// 0x33063571
// declared property getter: - (int)endOffset;	// 0x33063679
- (void)expand:(id)expand;	// 0x331c3621
- (void)extend:(unsigned long)extend inDirection:(int)direction;	// 0x331cb659
- (id)extractContents;	// 0x331c27cd
- (void)finalize;	// 0x331c1e89
- (id)firstNode;	// 0x331cb985
- (void)insertNode:(id)node;	// 0x331c2a65
- (BOOL)intersectsNode:(id)node;	// 0x331c31d5
- (BOOL)isPointInRange:(id)range offset:(int)offset;	// 0x331c350d
- (id)lineBoxRects;	// 0x3315a71d
- (void)move:(unsigned long)move inDirection:(int)direction;	// 0x331cb311
- (CGImageRef)renderedImageForcingBlackText:(BOOL)text;	// 0x3315a53d
- (void)selectNode:(id)node;	// 0x330631c5
- (void)selectNodeContents:(id)contents;	// 0x331c24b9
- (void)setEnd:(id)end :(int)arg2;	// 0x331c2145
- (void)setEnd:(id)end offset:(int)offset;	// 0x33063775
- (void)setEndAfter:(id)after;	// 0x33040891
- (void)setEndBefore:(id)before;	// 0x331c23ad
- (void)setStart:(id)start :(int)arg2;	// 0x331c1fe9
- (void)setStart:(id)start offset:(int)offset;	// 0x33040735
- (void)setStartAfter:(id)after;	// 0x331c22a1
- (void)setStartBefore:(id)before;	// 0x33064f21
// declared property getter: - (id)startContainer;	// 0x33034abd
// declared property getter: - (int)startOffset;	// 0x33063475
- (void)surroundContents:(id)contents;	// 0x331c2bbd
// declared property getter: - (id)text;	// 0x33040a71
- (id)textRects;	// 0x3315a569
- (id)toString;	// 0x331c2f01
@end

