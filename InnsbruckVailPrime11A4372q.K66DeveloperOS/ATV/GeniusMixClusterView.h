/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSMutableDictionary, BRImageControl, NSString, BRReflectionControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterView : BRControl {
	id<BRImageProxy> _geniusMixCollectionProxy;	// 84 = 0x54
	NSMutableArray *_imageProxies;	// 88 = 0x58
	NSMutableArray *_imageIDs;	// 92 = 0x5c
	NSMutableDictionary *_geniusMixImages;	// 96 = 0x60
	unsigned _pendingRequestCount;	// 100 = 0x64
	BOOL _needToRestartImageRequest;	// 104 = 0x68
	BRImageControl *_defaultImageControl;	// 108 = 0x6c
	BRReflectionControl *_reflectionControl;	// 112 = 0x70
	BRImageControl *_playImageControl;	// 116 = 0x74
	NSString *_geniusMixName;	// 120 = 0x78
	NSString *_geniusMixBasedOnArtists;	// 124 = 0x7c
}
@property(retain, nonatomic) NSString *geniusMixBasedOnArtists;	// G=0x199105; S=0x199115; @synthesize=_geniusMixBasedOnArtists
@property(retain, nonatomic) NSString *geniusMixName;	// G=0x1990e5; S=0x1990f5; @synthesize=_geniusMixName
+ (id)clusterControlWithGeniusMix:(id)geniusMix;	// 0x197941
- (id)initWithGeniusMix:(id)geniusMix;	// 0x19798d
- (void)_generateGeniusMixClusterImage;	// 0x19877d
- (void)_imageUnavailable:(id)unavailable;	// 0x198e81
- (void)_imageUpdated:(id)updated;	// 0x198b75
- (id)_loadArtwork;	// 0x1983d9
- (void)_setImageControlFrames;	// 0x199035
- (id)accessibilityLabel;	// 0x19839d
- (void)controlWasActivated;	// 0x198071
- (void)controlWasDeactivated;	// 0x1980c5
- (void)controlWasFocused;	// 0x197fa9
- (void)controlWasUnfocused;	// 0x19800d
- (void)dealloc;	// 0x197e25
- (CGRect)focusCursorFrame;	// 0x1981b5
// declared property getter: - (id)geniusMixBasedOnArtists;	// 0x199105
// declared property getter: - (id)geniusMixName;	// 0x1990e5
- (BOOL)isAccessibilityElement;	// 0x198399
- (void)layoutSubcontrols;	// 0x19825d
// declared property setter: - (void)setGeniusMixBasedOnArtists:(id)artists;	// 0x199115
// declared property setter: - (void)setGeniusMixName:(id)name;	// 0x1990f5
@end

