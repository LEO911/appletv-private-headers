/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRContextMenuUtility.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRMusicContextMenuUtility : XXUnknownSuperclass <BRContextMenuUtility> {
	BOOL _onTheGoEnabled;	// 4 = 0x4
	BOOL _startGeniusEnabled;	// 5 = 0x5
	BOOL _airTunesSettingsEnabled;	// 6 = 0x6
	BOOL _browseArtistEnabled;	// 7 = 0x7
	BOOL _browseAlbumEnabled;	// 8 = 0x8
	BOOL _navigateToArtistForBrowseArtist;	// 9 = 0x9
	BOOL _navigateToAlbumForBrowseAlbum;	// 10 = 0xa
}
@property(assign) BOOL airTunesSettingsEnabled;	// G=0x39e261; S=0x39e251; converted property
@property(assign) BOOL browseAlbumEnabled;	// G=0x39e2a1; S=0x39e291; converted property
@property(assign) BOOL browseArtistEnabled;	// G=0x39e281; S=0x39e271; converted property
@property(assign) BOOL navigateToAlbumForBrowseAlbum;	// G=0x39e2e1; S=0x39e2d1; converted property
@property(assign) BOOL navigateToArtistForBrowseArtist;	// G=0x39e2c1; S=0x39e2b1; converted property
@property(assign) BOOL onTheGoEnabled;	// G=0x39e221; S=0x39e211; converted property
@property(assign) BOOL startGeniusEnabled;	// G=0x39e241; S=0x39e231; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x39e185
+ (id)utility;	// 0x39e141
- (id)init;	// 0x39e195
- (id)addToQueueMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e30d
// converted property getter: - (BOOL)airTunesSettingsEnabled;	// 0x39e261
// converted property getter: - (BOOL)browseAlbumEnabled;	// 0x39e2a1
- (id)browseAlbumMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e319
// converted property getter: - (BOOL)browseArtistEnabled;	// 0x39e281
- (id)browseArtistMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e315
- (id)contextMenuProviderForNowPlayingObject:(id)nowPlayingObject target:(id)target selector:(SEL)selector;	// 0x39e2f5
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x39e2f1
- (id)geniusMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e2fd
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x39e2f9
// converted property getter: - (BOOL)navigateToAlbumForBrowseAlbum;	// 0x39e2e1
// converted property getter: - (BOOL)navigateToArtistForBrowseArtist;	// 0x39e2c1
// converted property getter: - (BOOL)onTheGoEnabled;	// 0x39e221
- (id)playNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e309
- (id)playNowMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e305
- (id)purgeMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e311
// converted property setter: - (void)setAirTunesSettingsEnabled:(BOOL)enabled;	// 0x39e251
// converted property setter: - (void)setBrowseAlbumEnabled:(BOOL)enabled;	// 0x39e291
// converted property setter: - (void)setBrowseArtistEnabled:(BOOL)enabled;	// 0x39e271
// converted property setter: - (void)setNavigateToAlbumForBrowseAlbum:(BOOL)browseAlbum;	// 0x39e2d1
// converted property setter: - (void)setNavigateToArtistForBrowseArtist:(BOOL)browseArtist;	// 0x39e2b1
// converted property setter: - (void)setOnTheGoEnabled:(BOOL)enabled;	// 0x39e211
// converted property setter: - (void)setStartGeniusEnabled:(BOOL)enabled;	// 0x39e231
// converted property getter: - (BOOL)startGeniusEnabled;	// 0x39e241
- (id)upNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x39e301
@end

