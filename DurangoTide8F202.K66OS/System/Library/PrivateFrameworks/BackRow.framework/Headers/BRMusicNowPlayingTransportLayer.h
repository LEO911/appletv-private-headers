/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingTransportLayer : BRControl {
@private
	NSDictionary *_textAttributes;	// 44 = 0x2c
	float _percent;	// 48 = 0x30
	float _duration;	// 52 = 0x34
	float _elapsedTime;	// 56 = 0x38
	float _timeTextWidth;	// 60 = 0x3c
	float _fillLayerHeight;	// 64 = 0x40
	float _fillLayerWidth;	// 68 = 0x44
	float _playHeadHeight;	// 72 = 0x48
	float _ordinaryTimeTextWidth;	// 76 = 0x4c
	BOOL _flip;	// 80 = 0x50
	BOOL _isRadio;	// 81 = 0x51
}
@property(readonly, assign) float duration;	// G=0x32904ee5; converted property
@property(readonly, assign) float elapsedTime;	// G=0x32904ed5; converted property
- (id)init;	// 0x328ca8d1
- (void)_layoutRadioSublayers;	// 0x32904f65
- (void)dealloc;	// 0x328cbee5
// converted property getter: - (float)duration;	// 0x32904ee5
// converted property getter: - (float)elapsedTime;	// 0x32904ed5
- (void)layoutSubcontrols;	// 0x329050c1
- (void)setElapsedTime:(float)time andDuration:(float)duration;	// 0x328cb541
- (void)setFlip:(BOOL)flip;	// 0x32904f05
- (void)setIsRadio:(BOOL)radio;	// 0x32904ef5
- (void)setPercentage:(float)percentage;	// 0x328cb72d
- (void)setTextAttributes:(id)attributes;	// 0x32904f2d
@end
