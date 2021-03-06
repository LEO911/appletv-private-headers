/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, BRGridView;

__attribute__((visibility("hidden")))
@interface BRDotArrayControl : BRControl {
@private
	long _dotCount;	// 48 = 0x30
	long _activeDot;	// 52 = 0x34
	BRGridView *_dotGrid;	// 56 = 0x38
	BRImage *_dotOnImage;	// 60 = 0x3c
	BRImage *_dotOffImage;	// 64 = 0x40
}
@property(assign) long activeDot;	// G=0x33a85865; S=0x33a85811; converted property
@property(assign) long dotCount;	// G=0x33a85801; S=0x33a857c5; converted property
- (id)init;	// 0x33a854e1
- (id)initWithDotCount:(long)dotCount;	// 0x33a854f5
// converted property getter: - (long)activeDot;	// 0x33a85865
- (void)dealloc;	// 0x33a85671
// converted property getter: - (long)dotCount;	// 0x33a85801
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x33a85921
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x33a85895
- (void)layoutSubcontrols;	// 0x33a856e5
- (long)numberOfColumnsInGrid:(id)grid;	// 0x33a85885
- (long)numberOfItemsInGrid:(id)grid;	// 0x33a85875
// converted property setter: - (void)setActiveDot:(long)dot;	// 0x33a85811
// converted property setter: - (void)setDotCount:(long)count;	// 0x33a857c5
@end

