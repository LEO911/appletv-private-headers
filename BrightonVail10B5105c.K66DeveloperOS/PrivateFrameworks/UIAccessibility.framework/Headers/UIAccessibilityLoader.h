/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <NSObject.h> // Unknown library


@interface UIAccessibilityLoader : NSObject {
}
+ (id)_accessibilityBundlesForBundle:(id)bundle;	// 0x357c2b19
+ (void)_accessibilityInitializeRuntimeOverrides;	// 0x357c342d
+ (void)_accessibilityLoadSubbundles:(id)subbundles;	// 0x357c3311
+ (void)_accessibilityReenabled;	// 0x357c3749
+ (void)_accessibilityStartServer;	// 0x357c3461
+ (void)_accessibilityStopServer;	// 0x357c3795
+ (id)_axBundleForBundle:(id)bundle;	// 0x357c2c65
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load;	// 0x357c3241
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load forceLoad:(BOOL)load3 loadSubbundles:(BOOL)subbundles;	// 0x357c3081
+ (void)initialize;	// 0x357c29d9
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load;	// 0x357c302d
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load force:(BOOL)force;	// 0x357c3051
+ (void)loadActualAccessibilityBundle:(id)bundle didLoad:(BOOL *)load loadSubbundles:(BOOL)subbundles;	// 0x357c2e99
@end
