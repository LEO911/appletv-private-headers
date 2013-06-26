/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import "AXRuntime-Structs.h"
#import "NSObject.h"


@protocol UIElementProtocol <NSObject>
+ (void)applyElementAttributeCacheScheme:(int)scheme;
+ (id)uiElementAtCoordinate:(CGPoint)coordinate;
- (id)arrayWithAXAttribute:(int)axattribute;
- (BOOL)boolWithAXAttribute:(int)axattribute;
- (BOOL)canPerformAXAction:(int)action;
- (void)disableCache;
- (void)enableCache:(BOOL)cache;
- (BOOL)isMockElement;
- (BOOL)isValid;
- (BOOL)isValidForApplication:(id)application;
- (NSRange)nextCursorRangeInDirection:(unsigned)direction unit:(unsigned)unit outputRange:(NSRange *)range;
- (NSRange)nextCursorRangeInDirection:(unsigned)direction unit:(unsigned)unit outputRange:(NSRange *)range currentCursorRange:(NSRange)range4;
- (id)nextElementsWithCount:(unsigned long)count;
- (id)numberWithAXAttribute:(int)axattribute;
- (id)objectWithAXAttribute:(int)axattribute;
- (id)objectWithAXAttribute:(int)axattribute parameter:(void *)parameter;
- (CGPathRef)pathWithAXAttribute:(int)axattribute;
- (BOOL)performAXAction:(int)action;
- (BOOL)performAXAction:(int)action withValue:(id)value;
- (int)pid;
- (CGPoint)pointWithAXAttribute:(int)axattribute;
- (id)previousElementsWithCount:(unsigned long)count;
- (NSRange)rangeWithAXAttribute:(int)axattribute;
- (CGRect)rectWithAXAttribute:(int)axattribute;
- (void)setAXAttribute:(int)attribute withArray:(id)array;
- (void)setAXAttribute:(int)attribute withBOOL:(BOOL)aBool;
- (void)setAXAttribute:(int)attribute withFloat:(float)aFloat;
- (void)setAXAttribute:(int)attribute withLong:(long)aLong;
- (void)setAXAttribute:(int)attribute withNumber:(id)number;
- (void)setAXAttribute:(int)attribute withObject:(id)object;
- (void)setAXAttribute:(int)attribute withObject:(id)object synchronous:(BOOL)synchronous;
- (void)setAXAttribute:(int)attribute withPoint:(CGPoint)point;
- (void)setAXAttribute:(int)attribute withRange:(NSRange)range;
- (void)setAXAttribute:(int)attribute withSize:(CGSize)size;
- (void)setAXAttribute:(int)attribute withString:(id)string;
- (void)setAXAttribute:(int)attribute withUIElement:(id)uielement;
- (void)setAXAttribute:(int)attribute withUIElementArray:(id)uielementArray;
- (id)stringWithAXAttribute:(int)axattribute;
- (id)uiElementsWithAttribute:(int)attribute;
- (id)uiElementsWithAttribute:(int)attribute parameter:(void *)parameter;
- (void)updateCache:(int)cache;
- (void)updateCacheWithAttributes:(id)attributes;
@end
