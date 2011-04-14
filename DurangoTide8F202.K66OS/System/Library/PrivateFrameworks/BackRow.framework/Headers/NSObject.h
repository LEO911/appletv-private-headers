/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x3293e6c5
@end

@interface NSObject (Accessibility)
@property(retain) id accessibilityLabel;	// G=0x3295441d; S=0x32954405; converted property
- (float)accessibilityDelayForScreenContent;	// 0x329543d1
- (BOOL)accessibilityElementIsHidden;	// 0x329543d9
- (NSRange)accessibilityIndexRange;	// 0x329543e5
// converted property getter: - (id)accessibilityLabel;	// 0x3295441d
- (id)accessibilityLanguage;	// 0x329543e1
- (id)accessibilityNonFocusableElements;	// 0x329543cd
- (id)accessibilityScreenContent;	// 0x329543fd
- (id)accessibilitySecondaryLabel;	// 0x329543f9
- (id)accessibilityTraits;	// 0x329543dd
- (id)accessibilityValue;	// 0x329543f1
- (BOOL)isAccessibilityElement;	// 0x329543f5
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32954405
@end

@interface NSObject (BRDisplayString)
- (id)displayString;	// 0x328c6e75
@end

@interface NSObject (BRObjectAdditions)
- (void)attachDeallocationBlock:(id)block;	// 0x329b028d
@end
