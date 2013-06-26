/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import </libobjc.A.h>

@class CUICatalog, CUIStyleEffectConfiguration;

__attribute__((visibility("hidden")))
@interface NSLineFragmentRenderingContext : NSObject {
	void *_runs;	// 4 = 0x4
	long _numRuns;	// 8 = 0x8
	unsigned short *_glyphs;	// 12 = 0xc
	NSAttributeDictionaryElement *_advancements;	// 16 = 0x10
	float _leftSideDelta;	// 20 = 0x14
	float _lineWidth;	// 24 = 0x18
	float _leftControlWidth;	// 28 = 0x1c
	float _rightControlWidth;	// 32 = 0x20
	float _elasticWidth;	// 36 = 0x24
	CGRect _imageBounds;	// 40 = 0x28
	struct {
		unsigned _isRTL : 1;
		unsigned _vAdvance : 1;
		unsigned _flipped : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _reserved : 28;
	} _flags;	// 56 = 0x38
	CUICatalog *_catalog;	// 60 = 0x3c
	CUIStyleEffectConfiguration *_styleEffects;	// 64 = 0x40
}
@property(retain, nonatomic) CUICatalog *cuiCatalog;	// G=0x32c63b71; S=0x32c63b81; @synthesize=_catalog
@property(retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;	// G=0x32c63b91; S=0x32c63ba1; @synthesize=_styleEffects
@property(readonly, assign) float elasticWidth;	// G=0x32c63645; converted property
@property(readonly, assign) CGRect imageBounds;	// G=0x32c63669; converted property
@property(assign, nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;	// G=0x32c62745; S=0x32c62721; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x32c619a1
+ (void)initialize;	// 0x32c61aed
- (id)initWithRuns:(CFArrayRef)runs glyphOrigin:(float)origin lineFragmentWidth:(float)width elasticWidth:(float)width4 usesScreenFonts:(BOOL)fonts isRTL:(BOOL)rtl;	// 0x32c61b69
- (BOOL)_isDeallocating;	// 0x32c61a19
// declared property setter: - (void)_setUsesSimpleTextEffects:(BOOL)effects;	// 0x32c62721
- (BOOL)_tryRetain;	// 0x32c61a15
// declared property getter: - (BOOL)_usesSimpleTextEffects;	// 0x32c62745
// declared property getter: - (id)cuiCatalog;	// 0x32c63b71
// declared property getter: - (id)cuiStyleEffects;	// 0x32c63b91
- (void)dealloc;	// 0x32c625d9
- (void)drawAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x32c62759
// converted property getter: - (float)elasticWidth;	// 0x32c63645
- (void)finalize;	// 0x32c62699
- (void)getMaximumAscender:(float *)ascender minimumDescender:(float *)descender;	// 0x32c63415
// converted property getter: - (CGRect)imageBounds;	// 0x32c63669
- (BOOL)isRTL;	// 0x32c63655
- (float)lineFragmentWidth;	// 0x32c63635
- (oneway void)release;	// 0x32c61a1d
// declared property setter: - (void)setCuiCatalog:(id)catalog;	// 0x32c63b81
// declared property setter: - (void)setCuiStyleEffects:(id)effects;	// 0x32c63ba1
- (CGSize)sizeWithBehavior:(int)behavior usesFontLeading:(BOOL)leading baselineDelta:(float *)delta;	// 0x32c62f11
@end
