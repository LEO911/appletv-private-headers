/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableDictionary, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIAppearance : NSObject {
	Class _CustomizableClass;	// 4 = 0x4
	NSArray *_containerList;	// 8 = 0x8
	NSMutableArray *_appearanceInvocations;	// 12 = 0xc
	NSMapTable *_invocationSources;	// 16 = 0x10
	NSMutableDictionary *_resettableInvocations;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) Class _CustomizableClass;	// G=0x30f76b75; @synthesize
@property(retain, nonatomic, setter=_setResettableInvocations:) NSMutableDictionary *_resettableInvocations;	// G=0x30f76b55; S=0x30f76b65; @synthesize
+ (void)_addWindow:(id)window forSource:(id)source;	// 0x30f74c25
+ (id)_appearanceForClass:(Class)aClass withContainerList:(id)containerList;	// 0x30f75ec1
+ (void)_applyInvocationsTo:(id)to window:(id)window;	// 0x30f75e11
+ (void)_applyInvocationsTo:(id)to window:(id)window matchingSelector:(SEL)selector;	// 0x30f752e9
+ (id)_currentAppearanceSource;	// 0x30f74c05
+ (BOOL)_hasCustomizationsForClass:(Class)aClass;	// 0x30c17c59
+ (id)_pendingRecordInvocationsForSource:(id)source;	// 0x30f74e2d
+ (id)_recorderForSource:(id)source;	// 0x30f74d2d
+ (id)_recordersExcludingSource:(id)source withWindow:(id)window;	// 0x30f74f01
+ (void)_removeWindow:(id)window forSource:(id)source;	// 0x30f74cd5
+ (id)_rootAppearancesNode;	// 0x30c17cb9
+ (void)_setCurrentAppearanceSource:(id)source;	// 0x30f74c15
+ (void)_setInvalidatesViewsOnAppearanceChange:(BOOL)change;	// 0x30c4369d
+ (id)_windowsForSource:(id)source;	// 0x30f74d11
// declared property getter: - (Class)_CustomizableClass;	// 0x30f76b75
- (id)_appearanceInvocations;	// 0x30f74bf5
// declared property getter: - (id)_resettableInvocations;	// 0x30f76b55
- (id)_resettableInvocationsCreateIfNecessary;	// 0x30f74a09
// declared property setter: - (void)_setResettableInvocations:(id)invocations;	// 0x30f76b65
- (void)dealloc;	// 0x30f75e35
- (void)forwardInvocation:(id)invocation;	// 0x30f760f5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30f760d5
- (void)updateResettableSelectorsWithInvocation:(id)invocation removeSelector:(BOOL)selector;	// 0x30f74a69
@end
