/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"

@class ESDObject, PBPresentationReaderState;

@interface PXVmlState : OAVState {
	ESDObject *mLegacyTextGlobals;	// 28 = 0x1c
	PBPresentationReaderState *mLegacyPresentationState;	// 32 = 0x20
}
@property(retain) id legacyPresentationState;	// G=0x37b2d55d; S=0x37b2d56d; converted property
@property(retain) id legacyTextGlobals;	// G=0x37b2d50d; S=0x37b2d51d; converted property
- (void)dealloc;	// 0x379e79b1
// converted property getter: - (id)legacyPresentationState;	// 0x37b2d55d
// converted property getter: - (id)legacyTextGlobals;	// 0x37b2d50d
// converted property setter: - (void)setLegacyPresentationState:(id)state;	// 0x37b2d56d
// converted property setter: - (void)setLegacyTextGlobals:(id)globals;	// 0x37b2d51d
@end

