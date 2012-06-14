/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSMutableDictionary, NSString, MCPlugHaven;

@interface MCContainerNavigator : MCContainer {
@private
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSString *mStartPlugID;	// 32 = 0x20
	MCPlugHaven *mStartPlug;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x3653f7c5; 
@property(readonly, assign) NSSet *plugs;	// G=0x3653f679; 
@property(readonly, assign) MCPlugHaven *startPlug;	// G=0x3654039d; @synthesize=mStartPlug
@property(copy, nonatomic) NSString *startPlugID;	// G=0x36540389; S=0x3654022d; @synthesize=mStartPlugID
- (id)init;	// 0x3653f0bd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3653f121
- (void)changeIDOfPlug:(id)plug toID:(id)anId;	// 0x3653fbf5
// declared property getter: - (unsigned)countOfPlugs;	// 0x3653f7c5
- (void)demolish;	// 0x3653f2e9
- (id)imprint;	// 0x3653f505
- (id)plugForID:(id)anId;	// 0x3653f891
// declared property getter: - (id)plugs;	// 0x3653f679
- (void)removeAllPlugs;	// 0x3653ffb9
- (void)removePlug:(id)plug;	// 0x3653fd65
- (void)removePlugForID:(id)anId;	// 0x3653ff81
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x3653f98d
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x3654022d
// declared property getter: - (id)startPlug;	// 0x3654039d
// declared property getter: - (id)startPlugID;	// 0x36540389
@end
