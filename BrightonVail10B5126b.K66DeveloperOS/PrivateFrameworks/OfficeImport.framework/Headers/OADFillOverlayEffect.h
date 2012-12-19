/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"

@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
	int mBlendMode;	// 8 = 0x8
	OADFill *mFill;	// 12 = 0xc
}
@property(assign) int blendMode;	// G=0x34a4be69; S=0x349bff41; converted property
@property(retain) id fill;	// G=0x34a4be79; S=0x349bff51; converted property
- (id)init;	// 0x349bfea9
// converted property getter: - (int)blendMode;	// 0x34a4be69
- (void)dealloc;	// 0x349bff91
// converted property getter: - (id)fill;	// 0x34a4be79
- (unsigned)hash;	// 0x34a4be89
- (BOOL)isEqual:(id)equal;	// 0x34a4bee1
// converted property setter: - (void)setBlendMode:(int)mode;	// 0x349bff41
// converted property setter: - (void)setFill:(id)fill;	// 0x349bff51
@end
