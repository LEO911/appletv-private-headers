/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BROptionDialog.h"

@class BRMediaHost;

__attribute__((visibility("hidden")))
@interface BRMediaHostDisconnectedDialog : BROptionDialog {
@private
	BRMediaHost *_mediaHost;	// 148 = 0x94
	unsigned _timerSatisfied : 1;	// 152 = 0x98
}
@property(retain) BRMediaHost *mediaHost;	// G=0x330e56a9; S=0x330e5669; converted property
- (id)initWithHost:(id)host;	// 0x330e53f1
- (void)_checkHostStatus:(id)status;	// 0x330e572d
- (void)dealloc;	// 0x330e5585
- (void)goToSources;	// 0x330e55d1
// converted property getter: - (id)mediaHost;	// 0x330e56a9
// converted property setter: - (void)setMediaHost:(id)host;	// 0x330e5669
- (void)wasPushed;	// 0x330e56b9
@end
