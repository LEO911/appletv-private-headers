/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject {
@private
	NSNetworkSettingsInternal *_internal;	// 4 = 0x4
}
@property(retain) id proxyDictionary;	// G=0x3370a1bd; S=0x3370a41d; converted property
+ (id)sharedNetworkSettings;	// 0x3370a175
- (id)init;	// 0x3370a111
- (id)_init;	// 0x3370a09d
- (void)_listenForProxySettingChanges;	// 0x33709f05
- (void)_updateProxySettings;	// 0x33709e1d
- (BOOL)connectedToInternet:(BOOL)internet;	// 0x3370a409
- (void)dealloc;	// 0x3370a129
- (BOOL)isProxyNeededForURL:(id)url;	// 0x3370a385
// converted property getter: - (id)proxyDictionary;	// 0x3370a1bd
- (id)proxyPropertiesForURL:(id)url;	// 0x3370a201
// converted property setter: - (void)setProxyDictionary:(id)dictionary;	// 0x3370a41d
- (void)setProxyPropertiesForURL:(id)url onStream:(CFReadStreamRef)stream;	// 0x3370a389
@end

