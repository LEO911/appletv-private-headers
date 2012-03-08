/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, NSDictionary, NSSet, BRMediaHostEvent, BRMediaHostState;
@protocol BRUnresolvedMediaProviderHandler;

@interface BRMediaHost : NSObject {
@private
	NSDictionary *_hostInfo;	// 4 = 0x4
	NSMutableArray *_providers;	// 8 = 0x8
	int _hostType;	// 12 = 0xc
	NSMutableArray *_eventQueue;	// 16 = 0x10
	NSSet *_eventFilter;	// 20 = 0x14
	BRMediaHostEvent *_filterEvent;	// 24 = 0x18
	BRMediaHostState *_state;	// 28 = 0x1c
	NSTimer *_eventTimer;	// 32 = 0x20
	BOOL _supportsPhotos;	// 36 = 0x24
	BOOL _supportsPhotoThumbnails;	// 37 = 0x25
	id<BRUnresolvedMediaProviderHandler> _unresolvedProviderHandler;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *hostInfo;	// G=0x332a77c1; converted property
@property(readonly, assign) int hostType;	// G=0x332a8649; converted property
@property(retain) id hostname;	// G=0x332a7999; S=0x332a7385; converted property
@property(retain) BRMediaHostState *state;	// G=0x332a8639; S=0x332a8439; converted property
@property(assign) BOOL supportsPhotoThumbnails;	// G=0x332a86cd; S=0x332a86bd; converted property
@property(assign) BOOL supportsPhotos;	// G=0x332a8679; S=0x332a86ad; converted property
+ (void)_addHostToMounts:(id)mounts;	// 0x332a905d
+ (void)_hostsChanged;	// 0x332a9085
+ (id)_mediaProviderAdvertisingMediaTypes:(id)types forceLocalResolution:(BOOL)resolution;	// 0x332a8dad
+ (id)_mediaProvidersAdvertisingMediaTypes:(id)types forceLocalResolution:(BOOL)resolution;	// 0x332a8ed9
+ (void)_removeHostFromMounts:(id)mounts;	// 0x332a9035
+ (void)_updateTo3_0:(id)a3_0;	// 0x332a9451
+ (void)addMediaHost:(id)host;	// 0x332a6b15
+ (id)allRentalAssets;	// 0x332a6f89
+ (id)currentHost;	// 0x332a6479
+ (id)daapHosts;	// 0x332a6a25
+ (id)daapMediaHostWithHostInfo:(id)hostInfo;	// 0x332a6379
+ (void)initialize;	// 0x332a5e01
+ (BOOL)isPairedForSyncing:(BOOL *)syncing;	// 0x332a6e31
+ (id)localHost;	// 0x332a652d
+ (id)localMediaProviderAdvertisingMediaTypes:(id)types;	// 0x332a6f75
+ (id)mediaHost;	// 0x332a6129
+ (id)mediaHostForMediaProvider:(id)mediaProvider;	// 0x332a67c9
+ (id)mediaHostMatchingHostInfo:(id)info;	// 0x332a6609
+ (id)mediaHosts;	// 0x332a6851
+ (id)mediaProviderAdvertisingMediaTypes:(id)types;	// 0x332a6f4d
+ (id)mediaProvidersAdvertisingMediaTypes:(id)types;	// 0x332a6f61
+ (id)mountedMediaHosts;	// 0x332a6e89
+ (id)pairedHost;	// 0x332a6915
+ (void)removeMediaHost:(id)host;	// 0x332a6c49
+ (void)removeMediaHost:(id)host supressingRemoveNotification:(BOOL)notification;	// 0x332a6c69
+ (void)setCurrentHost:(id)host;	// 0x332a6591
+ (id)streamingHosts;	// 0x332a6935
+ (id)streamingMediaHostWithHostInfo:(id)hostInfo;	// 0x332a6275
+ (id)syncingHost;	// 0x332a6925
+ (id)syncingMediaHostWithHostInfo:(id)hostInfo;	// 0x332a6171
+ (void)unmountAllHosts;	// 0x332a5ff9
+ (void)unmountInactiveStreamingHosts;	// 0x332a6081
- (id)init;	// 0x332a71a9
- (int)_codingVersion;	// 0x332a90e9
- (void)_mediaProviderLoadFailed:(id)failed;	// 0x332a9359
- (void)_mediaProviderLoaded:(id)loaded;	// 0x332a931d
- (void)_mediaProviderUnloaded:(id)unloaded;	// 0x332a9415
- (void)_mediaProviderUnloading:(id)unloading;	// 0x332a9395
- (void)_mount;	// 0x332a79cd
- (void)_processEvent:(id)event;	// 0x332a926d
- (void)_processNextEvent;	// 0x332a90ed
- (void)_unmount;	// 0x332a7ad9
- (void)abandonEvent:(id)event;	// 0x332a76fd
- (void)addMediaProvider:(id)provider;	// 0x332a7c69
- (void)addMediaProvider:(id)provider checkForDuplicates:(BOOL)duplicates;	// 0x332a7c7d
- (BOOL)containsPasswordedProvider;	// 0x332a8701
- (void)dealloc;	// 0x332a7269
- (id)hostID;	// 0x332a7335
// converted property getter: - (id)hostInfo;	// 0x332a77c1
// converted property getter: - (int)hostType;	// 0x332a8649
// converted property getter: - (id)hostname;	// 0x332a7999
- (BOOL)isLocal;	// 0x332a8659
- (id)lastAccessedDate;	// 0x332a8761
- (id)mediaProviderAdvertisingMediaTypes:(id)types;	// 0x332a8275
- (id)mediaProviderWithID:(id)anId andMachineID:(id)anId2;	// 0x332a8071
- (id)mediaProviders;	// 0x332a7ba1
- (id)mediaProvidersAdvertisingMediaTypes:(id)types;	// 0x332a8161
- (void)postEvent:(id)event;	// 0x332a7521
- (id)registeredMediaProviderForMediaTypes:(id)mediaTypes;	// 0x332a8329
- (void)removeAllMediaProviders;	// 0x332a83a9
- (void)removeMediaProvider:(id)provider;	// 0x332a7eed
- (void)removeMediaProviderWithID:(id)anId andMachineID:(id)anId2;	// 0x332a803d
// converted property setter: - (void)setHostname:(id)hostname;	// 0x332a7385
// converted property setter: - (void)setState:(id)state;	// 0x332a8439
// converted property setter: - (void)setSupportsPhotoThumbnails:(BOOL)thumbnails;	// 0x332a86bd
// converted property setter: - (void)setSupportsPhotos:(BOOL)photos;	// 0x332a86ad
- (void)setUnresolvedMediaProviderHandler:(id)handler;	// 0x332a7341
// converted property getter: - (id)state;	// 0x332a8639
// converted property getter: - (BOOL)supportsPhotoThumbnails;	// 0x332a86cd
// converted property getter: - (BOOL)supportsPhotos;	// 0x332a8679
- (void)waitForEvent:(id)event toProcessEvent:(id)processEvent;	// 0x332a748d
@end
