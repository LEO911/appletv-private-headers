/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction {
	NSString *_transitionID;	// 16 = 0x10
	double _transitionDuration;	// 20 = 0x14
	NSMutableDictionary *_transitionAttributes;	// 28 = 0x1c
	NSObject<MPActionableSupport> *_transitionDestination;	// 32 = 0x20
}
@property(copy, nonatomic) NSDictionary *transitionAttributes;	// G=0x2fb43761; S=0x2fb432e5; @synthesize=_transitionAttributes
@property(retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination;	// G=0x2fb437a1; S=0x2fb433fd; @synthesize=_transitionDestination
@property(assign, nonatomic) double transitionDuration;	// G=0x2fb43789; S=0x2fb433bd; @synthesize=_transitionDuration
@property(copy, nonatomic) NSString *transitionID;	// G=0x2fb43775; S=0x2fb43351; @synthesize=_transitionID
+ (id)transitionAction;	// 0x2fb42e3d
- (id)init;	// 0x2fb42e81
- (id)initWithCoder:(id)coder;	// 0x2fb42ef1
- (void)configureTarget;	// 0x2fb4362d
- (id)copyWithZone:(NSZone *)zone;	// 0x2fb43209
- (void)dealloc;	// 0x2fb43041
- (void)encodeWithCoder:(id)coder;	// 0x2fb430b9
- (void)setAction:(id)action;	// 0x2fb4347d
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x2fb432e5
// declared property setter: - (void)setTransitionDestination:(id)destination;	// 0x2fb433fd
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x2fb433bd
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x2fb43351
- (id)transitionAttributeForKey:(id)key;	// 0x2fb432c5
// declared property getter: - (id)transitionAttributes;	// 0x2fb43761
// declared property getter: - (id)transitionDestination;	// 0x2fb437a1
// declared property getter: - (double)transitionDuration;	// 0x2fb43789
// declared property getter: - (id)transitionID;	// 0x2fb43775
@end
