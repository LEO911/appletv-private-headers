/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSArray.h> // Unknown library


@interface NSArray (UIStringDrawingPrivate)
- (CGSize)_drawComponentsJoinedByString:(id)string atPoint:(CGPoint *)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x33b35c69
- (CGSize)drawComponentsJoinedByString:(id)string atPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x33b360ed
- (CGSize)sizeOfComponentsJoinedByString:(id)componentsJoinedByString withFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x33b360b1
@end

@interface NSArray (UICollectionAdditions)
- (id)_nextToLastObject;	// 0x339bac19
@end

@interface NSArray (UICollectionAdditions_Performance)
- (id)_initWithObjectsFromArray:(id)array range:(NSRange)range;	// 0x33b3e5b1
- (void)_makeObjectsPerformSelector:(SEL)selector object:(id)object range:(NSRange)range;	// 0x33b3e639
@end

@interface NSArray (UIKBExtras)
- (id)_intersectionWithArray:(id)array;	// 0x33ba00f1
- (id)_kb_firstObject;	// 0x33ba0025
- (BOOL)_kb_firstObjectsEqual:(unsigned)equal;	// 0x33ba0075
- (BOOL)_kb_firstTwoObjectsEqual;	// 0x33ba005d
- (NSRange)_rangeWithStartIndex:(int)startIndex endIndex:(int)index;	// 0x33ba01c5
- (id)intersectionWithArray:(id)array;	// 0x33ba0225
- (NSRange)rangeWithStartIndex:(int)startIndex endIndex:(int)index;	// 0x33ba0235
@end

@interface NSArray (UIPageViewControllerArrayAdditions)
- (id)uiFirstObject;	// 0x33d05fb1
- (id)uiOnlyObject;	// 0x33d05fe9
@end
