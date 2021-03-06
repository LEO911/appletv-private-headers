/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>

@class NSString;

@interface MPAVRoute : NSObject {
	BOOL _displayIsPicked;	// 4 = 0x4
	int _displayRouteType;	// 8 = 0x8
	BOOL _isPicked;	// 12 = 0xc
	BOOL _requiresPassword;	// 13 = 0xd
	unsigned _routeIndex;	// 16 = 0x10
	NSString *_routeName;	// 20 = 0x14
	int _routeType;	// 24 = 0x18
	NSString *_routeUID;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL displayIsPicked;	// G=0x2e2fdf19; S=0x2e2fdf29; @synthesize=_displayIsPicked
@property(assign, nonatomic) int displayRouteType;	// G=0x2e2fdf39; S=0x2e2fdf49; @synthesize=_displayRouteType
@property(assign, nonatomic) BOOL isPicked;	// G=0x2e2fdf59; S=0x2e2fdf69; @synthesize=_isPicked
@property(readonly, assign, nonatomic) NSString *name;	// G=0x2e2fdf79; @synthesize=_routeName
@property(readonly, assign, nonatomic) BOOL requiresPassword;	// G=0x2e2fdf89; @synthesize=_requiresPassword
@property(readonly, assign, nonatomic) unsigned routeIndex;	// G=0x2e2fdf99; @synthesize=_routeIndex
@property(readonly, assign, nonatomic) int routeType;	// G=0x2e2fdfa9; @synthesize=_routeType
@property(readonly, assign, nonatomic) NSString *routeUID;	// G=0x2e2fdfb9; @synthesize=_routeUID
+ (id)_audioDeviceController;	// 0x2e2fd8e9
+ (id)_availableRoutesFromAudioDeviceController:(id)audioDeviceController forType:(unsigned)type;	// 0x2e2fd965
+ (BOOL)availableRoutesExistForType:(unsigned)type;	// 0x2e2fd51d
+ (id)availableRoutesForType:(unsigned)type;	// 0x2e2fd559
+ (id)videoRouteForRoute:(id)route;	// 0x2e2fd5a9
+ (id)wirelessDisplayRouteForRoute:(id)route;	// 0x2e2fd749
- (void).cxx_destruct;	// 0x2e2fdfc9
- (id)_initWithName:(id)name routeType:(int)type routeUID:(id)uid routeIndex:(unsigned)index requiresPassword:(BOOL)password;	// 0x2e2fd319
// declared property getter: - (BOOL)displayIsPicked;	// 0x2e2fdf19
// declared property getter: - (int)displayRouteType;	// 0x2e2fdf39
- (unsigned)hash;	// 0x2e2fd3f1
- (BOOL)isEqual:(id)equal;	// 0x2e2fd441
// declared property getter: - (BOOL)isPicked;	// 0x2e2fdf59
// declared property getter: - (id)name;	// 0x2e2fdf79
// declared property getter: - (BOOL)requiresPassword;	// 0x2e2fdf89
// declared property getter: - (unsigned)routeIndex;	// 0x2e2fdf99
// declared property getter: - (int)routeType;	// 0x2e2fdfa9
// declared property getter: - (id)routeUID;	// 0x2e2fdfb9
// declared property setter: - (void)setDisplayIsPicked:(BOOL)picked;	// 0x2e2fdf29
// declared property setter: - (void)setDisplayRouteType:(int)type;	// 0x2e2fdf49
// declared property setter: - (void)setIsPicked:(BOOL)picked;	// 0x2e2fdf69
@end

