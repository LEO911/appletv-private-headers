/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRPosterBadgeInfo : XXUnknownSuperclass {
	int _position;	// 4 = 0x4
	BRControl *_badge;	// 8 = 0x8
	XXStruct_40SSZC _inset;	// 12 = 0xc
}
@property(retain, nonatomic) BRControl *badge;	// G=0x3cb67d; S=0x3cb68d; @synthesize=_badge
@property(assign, nonatomic) XXStruct_40SSZC inset;	// G=0x3cb69d; S=0x3cb6b5; @synthesize=_inset
@property(assign, nonatomic) int position;	// G=0x3cb65d; S=0x3cb66d; @synthesize=_position
// declared property getter: - (id)badge;	// 0x3cb67d
- (void)dealloc;	// 0x3cb611
// declared property getter: - (XXStruct_40SSZC)inset;	// 0x3cb69d
// declared property getter: - (int)position;	// 0x3cb65d
// declared property setter: - (void)setBadge:(id)badge;	// 0x3cb68d
// declared property setter: - (void)setInset:(XXStruct_40SSZC)inset;	// 0x3cb6b5
// declared property setter: - (void)setPosition:(int)position;	// 0x3cb66d
@end

