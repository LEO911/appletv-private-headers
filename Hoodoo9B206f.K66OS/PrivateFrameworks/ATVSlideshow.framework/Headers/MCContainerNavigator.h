/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSMutableDictionary, NSString, MCPlugHaven;

@interface MCContainerNavigator : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSString *mStartPlugID;	// 32 = 0x20
	MCPlugHaven *mStartPlug;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x30ae0959; 
@property(readonly, assign) NSSet *plugs;	// G=0x30ae0815; 
@property(readonly, assign) MCPlugHaven *startPlug;	// G=0x30ae14bd; @synthesize=mStartPlug
@property(copy, nonatomic) NSString *startPlugID;	// G=0x30ae14ad; S=0x30ae1349; @synthesize=mStartPlugID
- (id)init;	// 0x30ae02b9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x30ae031d
- (void)changeIDOfPlug:(id)plug toID:(id)anId;	// 0x30ae0d65
// declared property getter: - (unsigned)countOfPlugs;	// 0x30ae0959
- (void)demolish;	// 0x30ae04c5
- (id)imprint;	// 0x30ae06c5
- (id)plugForID:(id)anId;	// 0x30ae0a15
// declared property getter: - (id)plugs;	// 0x30ae0815
- (void)removeAllPlugs;	// 0x30ae1109
- (void)removePlug:(id)plug;	// 0x30ae0ec5
- (void)removePlugForID:(id)anId;	// 0x30ae10d5
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x30ae0b05
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x30ae1349
// declared property getter: - (id)startPlug;	// 0x30ae14bd
// declared property getter: - (id)startPlugID;	// 0x30ae14ad
@end
