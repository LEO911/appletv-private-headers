/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImageControl, NSMutableDictionary, NSMutableArray, BRReflectionControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterView : BRControl {
	id<BRImageProxy> _geniusMixCollectionProxy;	// 80 = 0x50
	NSMutableArray *_imageProxies;	// 84 = 0x54
	NSMutableArray *_imageIDs;	// 88 = 0x58
	NSMutableDictionary *_geniusMixImages;	// 92 = 0x5c
	unsigned _pendingRequestCount;	// 96 = 0x60
	BOOL _needToRestartImageRequest;	// 100 = 0x64
	BRImageControl *_defaultImageControl;	// 104 = 0x68
	BRReflectionControl *_reflectionControl;	// 108 = 0x6c
	BRImageControl *_playImageControl;	// 112 = 0x70
	NSString *_geniusMixName;	// 116 = 0x74
	NSString *_geniusMixBasedOnArtists;	// 120 = 0x78
}
@property(retain, nonatomic) NSString *geniusMixBasedOnArtists;	// G=0x1a7c59; S=0x1a7c69; @synthesize=_geniusMixBasedOnArtists
@property(retain, nonatomic) NSString *geniusMixName;	// G=0x1a7c39; S=0x1a7c49; @synthesize=_geniusMixName
+ (id)clusterControlWithGeniusMix:(id)geniusMix;	// 0x1a6379
- (id)initWithGeniusMix:(id)geniusMix;	// 0x1a63c5
- (void)_generateGeniusMixClusterImage;	// 0x1a7219
- (void)_imageUnavailable:(id)unavailable;	// 0x1a79d1
- (void)_imageUpdated:(id)updated;	// 0x1a76c5
- (id)_loadArtwork;	// 0x1a6e41
- (void)_setImageControlFrames;	// 0x1a7b89
- (id)accessibilityLabel;	// 0x1a6e05
- (void)controlWasActivated;	// 0x1a6ad5
- (void)controlWasDeactivated;	// 0x1a6b29
- (void)controlWasFocused;	// 0x1a6a0d
- (void)controlWasUnfocused;	// 0x1a6a71
- (void)dealloc;	// 0x1a6889
- (CGRect)focusCursorFrame;	// 0x1a6c19
// declared property getter: - (id)geniusMixBasedOnArtists;	// 0x1a7c59
// declared property getter: - (id)geniusMixName;	// 0x1a7c39
- (BOOL)isAccessibilityElement;	// 0x1a6e01
- (void)layoutSubcontrols;	// 0x1a6cbd
// declared property setter: - (void)setGeniusMixBasedOnArtists:(id)artists;	// 0x1a7c69
// declared property setter: - (void)setGeniusMixName:(id)name;	// 0x1a7c49
@end

