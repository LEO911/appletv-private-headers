/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
	BRControl *_prerender;	// 92 = 0x5c
	BOOL _prerenderAnimation;	// 96 = 0x60
}
@property(assign) BOOL prerenderAnimation;	// G=0x318419; S=0x318409; converted property
- (void)_addPrerender;	// 0x318565
- (void)_removePrerender;	// 0x3185ed
- (void)_takePrerenderSnapshot;	// 0x318659
- (void)_updateContentForTransitionState;	// 0x318885
- (void)_zoomInCompleted:(id)completed;	// 0x318f45
- (void)_zoomOutCompleted:(id)completed;	// 0x318fb5
- (void)dealloc;	// 0x318341
- (void)layoutSubcontrols;	// 0x318489
// converted property getter: - (BOOL)prerenderAnimation;	// 0x318419
- (void)setContent:(id)content;	// 0x31838d
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x318409
- (void)setTransitionedIn:(BOOL)anIn;	// 0x318429
@end

