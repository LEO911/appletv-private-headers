/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug {
	NSString *mIDInSupercontainer;	// 64 = 0x40
	MCContainerNavigator *mSupercontainer;	// 68 = 0x44
}
@property(retain, nonatomic) MCAction *actionOnCompletion;	// G=0x334d01dd; S=0x334d01fd; 
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer;	// G=0x334d0271; @synthesize=mIDInSupercontainer
@property(assign) MCContainerNavigator *supercontainer;	// G=0x334d02a9; S=0x334d02bd; @synthesize=mSupercontainer
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x334d00b1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334d021d
// declared property getter: - (id)actionOnCompletion;	// 0x334d01dd
- (void)demolish;	// 0x334d0121
// declared property getter: - (id)idInSupercontainer;	// 0x334d0271
- (id)imprint;	// 0x334d0181
// declared property setter: - (void)setActionOnCompletion:(id)completion;	// 0x334d01fd
- (void)setIDInSupercontainer:(id)supercontainer;	// 0x334d0285
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x334d02bd
// declared property getter: - (id)supercontainer;	// 0x334d02a9
@end
