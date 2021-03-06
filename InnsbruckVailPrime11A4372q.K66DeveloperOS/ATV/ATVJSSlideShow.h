/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVJSSlideShow : XXUnknownSuperclass {
	ATVJSContext *_context;	// 4 = 0x4
	id _ntCurrentAssetChanged;	// 8 = 0x8
	id _ntStateChanged;	// 12 = 0xc
	BRMediaPlayer *_player;	// 16 = 0x10
}
@property(retain, nonatomic) id ntCurrentAssetChanged;	// G=0x1597bd; S=0x1597cd; @synthesize=_ntCurrentAssetChanged
@property(retain, nonatomic) id ntStateChanged;	// G=0x1597dd; S=0x1597ed; @synthesize=_ntStateChanged
@property(retain, nonatomic) BRMediaPlayer *player;	// G=0x1597fd; S=0x15980d; @synthesize=_player
- (id)initWithContext:(id)context;	// 0x1590f1
- (void)dealloc;	// 0x159145
// declared property getter: - (id)ntCurrentAssetChanged;	// 0x1597bd
// declared property getter: - (id)ntStateChanged;	// 0x1597dd
// declared property getter: - (id)player;	// 0x1597fd
- (void)runFromIndex:(int)index mediaAssets:(id)assets dataClient:(id)client couplingObject:(id)object completionCallback:(id)callback;	// 0x1593c1
// declared property setter: - (void)setNtCurrentAssetChanged:(id)changed;	// 0x1597cd
// declared property setter: - (void)setNtStateChanged:(id)changed;	// 0x1597ed
// declared property setter: - (void)setPlayer:(id)player;	// 0x15980d
- (void)showSettingsWithMediaAssets:(id)mediaAssets dataClient:(id)client couplingObject:(id)object completionCallback:(id)callback;	// 0x1591cd
- (void)teardown;	// 0x15977d
@end

