/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRMarimbaLayer, MPText, MRTextRenderer;

@interface MRMarimbaLayoutManager : NSObject {
	MRMarimbaLayer *_marimbaLayer;	// 4 = 0x4
	MPText *_text;	// 8 = 0x8
	MRTextRenderer *_textRenderer;	// 12 = 0xc
}
@property(retain, nonatomic) MRMarimbaLayer *marimbaLayer;	// G=0x34393065; S=0x34393075; @synthesize=_marimbaLayer
@property(retain, nonatomic) MPText *text;	// G=0x34393099; S=0x343930a9; @synthesize=_text
@property(readonly, retain) MRTextRenderer *textRenderer;	// G=0x34392cc5; converted property
- (id)init;	// 0x34392bed
- (id)_renderer;	// 0x34392e1d
- (CGRect)currentRectForEditedText;	// 0x34392e3d
- (void)dealloc;	// 0x34392c51
- (int)lineCount;	// 0x34392cd5
// declared property getter: - (id)marimbaLayer;	// 0x34393065
// declared property setter: - (void)setMarimbaLayer:(id)layer;	// 0x34393075
// declared property setter: - (void)setText:(id)text;	// 0x343930a9
- (CGPoint)shadowOffset;	// 0x34393005
// declared property getter: - (id)text;	// 0x34393099
// converted property getter: - (id)textRenderer;	// 0x34392cc5
- (void)updateWithString:(id)string;	// 0x34392cf5
@end
