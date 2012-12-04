/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableSet, NSArray;

@interface WebPluginDatabase : NSObject {
	NSMutableDictionary *plugins;	// 4 = 0x4
	NSMutableSet *registeredMIMETypes;	// 8 = 0x8
	NSArray *plugInPaths;	// 12 = 0xc
	NSMutableSet *pluginInstanceViews;	// 16 = 0x10
}
@property(readonly, retain) NSMutableDictionary *plugins;	// G=0x367817b5; converted property
+ (id)_defaultPlugInPaths;	// 0x3677e8b5
+ (void)closeSharedDatabase;	// 0x367d4bc1
+ (void)setAdditionalWebPlugInPaths:(id)paths;	// 0x367d4e4d
+ (id)sharedDatabase;	// 0x3677e7a1
- (id)init;	// 0x3677e825
- (void)_addPlugin:(id)plugin;	// 0x36780539
- (id)_plugInPaths;	// 0x3677eee5
- (void)_removePlugin:(id)plugin;	// 0x367d51f9
- (id)_scanForNewPlugins;	// 0x3677ed21
- (void)addPluginInstanceView:(id)view;	// 0x367d4fd1
- (void)close;	// 0x367d4e8d
- (void)dealloc;	// 0x367d4f21
- (void)destroyAllPluginInstanceViews;	// 0x367d512d
- (BOOL)isMIMETypeRegistered:(id)registered;	// 0x367d4fad
- (id)pluginForExtension:(id)extension;	// 0x367d4bdd
- (id)pluginForMIMEType:(id)mimetype;	// 0x3678068d
// converted property getter: - (id)plugins;	// 0x367817b5
- (void)refresh;	// 0x3677e979
- (void)removePluginInstanceView:(id)view;	// 0x367d4ff1
- (void)removePluginInstanceViewsFor:(id)aFor;	// 0x367d5011
- (void)setPlugInPaths:(id)paths;	// 0x3677e935
@end
