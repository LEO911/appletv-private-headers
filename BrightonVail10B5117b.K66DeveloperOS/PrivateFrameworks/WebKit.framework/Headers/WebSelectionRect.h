/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface WebSelectionRect : NSObject <NSCopying> {
	CGRect m_rect;	// 4 = 0x4
	int m_writingDirection;	// 20 = 0x14
	BOOL m_isLineBreak;	// 24 = 0x18
	BOOL m_isFirstOnLine;	// 25 = 0x19
	BOOL m_isLastOnLine;	// 26 = 0x1a
	BOOL m_containsStart;	// 27 = 0x1b
	BOOL m_containsEnd;	// 28 = 0x1c
	BOOL m_isInFixedPosition;	// 29 = 0x1d
	BOOL m_isHorizontal;	// 30 = 0x1e
}
@property(assign, nonatomic) BOOL containsEnd;	// G=0x367dd3f1; S=0x367dd401; @synthesize=m_containsEnd
@property(assign, nonatomic) BOOL containsStart;	// G=0x367dd3d1; S=0x367dd3e1; @synthesize=m_containsStart
@property(assign, nonatomic) BOOL isFirstOnLine;	// G=0x367dd391; S=0x367dd3a1; @synthesize=m_isFirstOnLine
@property(assign, nonatomic) BOOL isHorizontal;	// G=0x367dd431; S=0x367dd441; @synthesize=m_isHorizontal
@property(assign, nonatomic) BOOL isInFixedPosition;	// G=0x367dd411; S=0x367dd421; @synthesize=m_isInFixedPosition
@property(assign, nonatomic) BOOL isLastOnLine;	// G=0x367dd3b1; S=0x367dd3c1; @synthesize=m_isLastOnLine
@property(assign, nonatomic) BOOL isLineBreak;	// G=0x367dd371; S=0x367dd381; @synthesize=m_isLineBreak
@property(assign, nonatomic) CGRect rect;	// G=0x367dd311; S=0x367dd335; @synthesize=m_rect
@property(assign, nonatomic) int writingDirection;	// G=0x367dd351; S=0x367dd361; @synthesize=m_writingDirection
+ (CGRect)endEdge:(id)edge;	// 0x367dcc25
+ (id)selectionRect;	// 0x367dca01
+ (CGRect)startEdge:(id)edge;	// 0x367dca39
- (id)init;	// 0x367dce0d
// declared property getter: - (BOOL)containsEnd;	// 0x367dd3f1
// declared property getter: - (BOOL)containsStart;	// 0x367dd3d1
- (id)copyWithZone:(NSZone *)zone;	// 0x367dcf11
- (id)description;	// 0x367dd0c9
// declared property getter: - (BOOL)isFirstOnLine;	// 0x367dd391
// declared property getter: - (BOOL)isHorizontal;	// 0x367dd431
// declared property getter: - (BOOL)isInFixedPosition;	// 0x367dd411
// declared property getter: - (BOOL)isLastOnLine;	// 0x367dd3b1
// declared property getter: - (BOOL)isLineBreak;	// 0x367dd371
// declared property getter: - (CGRect)rect;	// 0x367dd311
// declared property setter: - (void)setContainsEnd:(BOOL)end;	// 0x367dd401
// declared property setter: - (void)setContainsStart:(BOOL)start;	// 0x367dd3e1
// declared property setter: - (void)setIsFirstOnLine:(BOOL)line;	// 0x367dd3a1
// declared property setter: - (void)setIsHorizontal:(BOOL)horizontal;	// 0x367dd441
// declared property setter: - (void)setIsInFixedPosition:(BOOL)fixedPosition;	// 0x367dd421
// declared property setter: - (void)setIsLastOnLine:(BOOL)line;	// 0x367dd3c1
// declared property setter: - (void)setIsLineBreak:(BOOL)aBreak;	// 0x367dd381
// declared property setter: - (void)setRect:(CGRect)rect;	// 0x367dd335
// declared property setter: - (void)setWritingDirection:(int)direction;	// 0x367dd361
// declared property getter: - (int)writingDirection;	// 0x367dd351
@end

