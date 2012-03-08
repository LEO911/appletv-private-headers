/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebBasePluginPackage.h"
#import "WebKit-Structs.h"

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage {
@private
	NSBundle *nsBundle;	// 44 = 0x2c
}
- (id)initWithPath:(id)path;	// 0x34526349
- (id)bundle;	// 0x3452b37d
- (void)dealloc;	// 0x34575039
- (BOOL)load;	// 0x3452b219
- (Class)viewFactory;	// 0x3452b2c9
@end
