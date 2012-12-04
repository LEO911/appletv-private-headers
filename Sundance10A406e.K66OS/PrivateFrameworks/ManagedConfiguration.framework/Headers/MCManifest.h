/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCManifest : NSObject {
	NSString *_path;	// 4 = 0x4
	NSMutableDictionary *_manifest;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_syncQueue;	// 12 = 0xc
}
@property(readonly, retain) NSMutableDictionary *manifest;	// G=0x35789ca5; converted property
+ (void)_setManifestPath:(id)path;	// 0x357897b5
+ (id)installedProfileWithIdentifier:(id)identifier;	// 0x35789855
+ (id)sharedManifest;	// 0x357897d9
- (id)init;	// 0x35789971
- (void).cxx_destruct;	// 0x3578a365
- (id)_manifest;	// 0x35789a89
- (void)_setManifest:(id)manifest;	// 0x35789dd5
- (void)addIdentifierToManifest:(id)manifest flag:(int)flag;	// 0x35789f9d
- (id)allInstalledProfileIdentifiers;	// 0x35789f89
- (void)dealloc;	// 0x35789a2d
- (id)identifiersOfProfilesWithFilterFlags:(int)filterFlags;	// 0x35789ea1
- (void)invalidateCache;	// 0x3578a2dd
// converted property getter: - (id)manifest;	// 0x35789ca5
- (void)removeIdentifierFromManifest:(id)manifest;	// 0x3578a159
@end
