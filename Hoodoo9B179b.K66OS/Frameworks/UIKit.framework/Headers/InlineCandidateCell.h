/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface InlineCandidateCell : UIView {
@private
	NSString *_candidate;	// 48 = 0x30
	unsigned _index;	// 52 = 0x34
	UIFont *_font;	// 56 = 0x38
	CGSize _stringImageSize;	// 60 = 0x3c
	BOOL _highlighted;	// 68 = 0x44
	id _target;	// 72 = 0x48
	SEL _action;	// 76 = 0x4c
	BOOL _lastItem;	// 80 = 0x50
	BOOL _dontDrawRightEdge;	// 81 = 0x51
}
@property(readonly, assign) unsigned index;	// G=0x3314b121; converted property
@property(readonly, assign) CGSize stringImageSize;	// G=0x3314b105; converted property
- (id)initWithCandidate:(id)candidate andIndex:(unsigned)index withFontSize:(float)fontSize target:(id)target action:(SEL)action;	// 0x3314af61
- (void)dealloc;	// 0x3314b0b9
- (void)dontDrawRightEdge:(BOOL)edge;	// 0x3314b131
- (void)drawRect:(CGRect)rect;	// 0x3314b181
// converted property getter: - (unsigned)index;	// 0x3314b121
- (void)setHighlighted:(BOOL)highlighted;	// 0x3314b151
- (void)setLastItem:(BOOL)item;	// 0x3314b141
// converted property getter: - (CGSize)stringImageSize;	// 0x3314b105
@end

