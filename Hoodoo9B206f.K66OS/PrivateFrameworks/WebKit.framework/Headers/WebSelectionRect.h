/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "NSCopying.h"


@interface WebSelectionRect : NSObject <NSCopying> {
@private
	CGRect m_rect;	// 4 = 0x4
	int m_writingDirection;	// 20 = 0x14
	BOOL m_isLineBreak;	// 24 = 0x18
	BOOL m_isFirstOnLine;	// 25 = 0x19
	BOOL m_isLastOnLine;	// 26 = 0x1a
	BOOL m_containsStart;	// 27 = 0x1b
	BOOL m_containsEnd;	// 28 = 0x1c
	BOOL m_isInFixedPosition;	// 29 = 0x1d
}
@property(assign, nonatomic) BOOL containsEnd;	// G=0x30d72f41; S=0x30d72f51; @synthesize=m_containsEnd
@property(assign, nonatomic) BOOL containsStart;	// G=0x30d72f61; S=0x30d72f71; @synthesize=m_containsStart
@property(assign, nonatomic) BOOL isFirstOnLine;	// G=0x30d72fa1; S=0x30d72fb1; @synthesize=m_isFirstOnLine
@property(assign, nonatomic) BOOL isInFixedPosition;	// G=0x30d72f21; S=0x30d72f31; @synthesize=m_isInFixedPosition
@property(assign, nonatomic) BOOL isLastOnLine;	// G=0x30d72f81; S=0x30d72f91; @synthesize=m_isLastOnLine
@property(assign, nonatomic) BOOL isLineBreak;	// G=0x30d72fc1; S=0x30d72fd1; @synthesize=m_isLineBreak
@property(assign, nonatomic) CGRect rect;	// G=0x30d73001; S=0x30d73025; @synthesize=m_rect
@property(assign, nonatomic) int writingDirection;	// G=0x30d72fe1; S=0x30d72ff1; @synthesize=m_writingDirection
+ (CGRect)endEdge:(id)edge;	// 0x30d73139
+ (id)selectionRect;	// 0x30d733ed
+ (CGRect)startEdge:(id)edge;	// 0x30d73291
- (id)init;	// 0x30d73049
// declared property getter: - (BOOL)containsEnd;	// 0x30d72f41
// declared property getter: - (BOOL)containsStart;	// 0x30d72f61
- (id)copyWithZone:(NSZone *)zone;	// 0x30d73601
- (id)description;	// 0x30d73425
// declared property getter: - (BOOL)isFirstOnLine;	// 0x30d72fa1
// declared property getter: - (BOOL)isInFixedPosition;	// 0x30d72f21
// declared property getter: - (BOOL)isLastOnLine;	// 0x30d72f81
// declared property getter: - (BOOL)isLineBreak;	// 0x30d72fc1
// declared property getter: - (CGRect)rect;	// 0x30d73001
// declared property setter: - (void)setContainsEnd:(BOOL)end;	// 0x30d72f51
// declared property setter: - (void)setContainsStart:(BOOL)start;	// 0x30d72f71
// declared property setter: - (void)setIsFirstOnLine:(BOOL)line;	// 0x30d72fb1
// declared property setter: - (void)setIsInFixedPosition:(BOOL)fixedPosition;	// 0x30d72f31
// declared property setter: - (void)setIsLastOnLine:(BOOL)line;	// 0x30d72f91
// declared property setter: - (void)setIsLineBreak:(BOOL)aBreak;	// 0x30d72fd1
// declared property setter: - (void)setRect:(CGRect)rect;	// 0x30d73025
// declared property setter: - (void)setWritingDirection:(int)direction;	// 0x30d72ff1
// declared property getter: - (int)writingDirection;	// 0x30d72fe1
@end

