/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixNrdObjectCallback : XXUnknownSuperclass {
	id target_;	// 4 = 0x4
	SEL selector_;	// 8 = 0x8
}
@property(assign, nonatomic) SEL selector;	// G=0x5008ad; S=0x5008bd; @synthesize=selector_
@property(retain, nonatomic) id target;	// G=0x50088d; S=0x50089d; @synthesize=target_
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x500675
- (void)dealloc;	// 0x5006d9
- (void)perform;	// 0x500739
- (void)performWithObject:(id)object;	// 0x50079d
- (void)performWithObject:(id)object afterDelay:(double)delay;	// 0x50080d
// declared property getter: - (SEL)selector;	// 0x5008ad
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x5008bd
// declared property setter: - (void)setTarget:(id)target;	// 0x50089d
// declared property getter: - (id)target;	// 0x50088d
@end
