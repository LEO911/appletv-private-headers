/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"


__attribute__((visibility("hidden")))
@interface BRRSSMediaAsset : BRXMLMediaAsset {
	BOOL _needsVolumeFading;	// 12 = 0xc
}
@property(assign) BOOL needsVolumeFading;	// G=0x2aa131; S=0x2aa141; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x2a9e89
- (id)coverArt;	// 0x2a9f1d
- (id)description;	// 0x2aa109
- (long)duration;	// 0x2a9ec9
- (BOOL)hasVideoContent;	// 0x2aa0c9
// converted property getter: - (BOOL)needsVolumeFading;	// 0x2aa131
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x2aa141
@end
