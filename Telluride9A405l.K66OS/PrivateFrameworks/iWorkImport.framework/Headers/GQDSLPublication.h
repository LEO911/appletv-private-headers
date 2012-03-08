/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDRoot.h"

@class GQDSLPageMargins, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDSLPublication : GQDRoot {
@private
	CGSize mPageSize;	// 36 = 0x24
	GQDSLPageMargins *mPageMargins;	// 44 = 0x2c
	GQDSStylesheet *mStylesheet;	// 48 = 0x30
	BOOL mHasBody;	// 52 = 0x34
	BOOL mIsOldAssetNameMapInitialized;	// 53 = 0x35
	CFDictionaryRef mOldAssetNameMap;	// 56 = 0x38
	BOOL mIsOldTemplateNameMapInitialized;	// 60 = 0x3c
	CFDictionaryRef mOldTemplateNameMap;	// 64 = 0x40
	BOOL mShowOutliner;	// 68 = 0x44
	BOOL mHasHeaders;	// 69 = 0x45
	BOOL mHasFooters;	// 70 = 0x46
}
@property(retain) id pageMargins;	// G=0x342430e1; S=0x342439b9; converted property
@property(retain) id stylesheet;	// G=0x342430f1; S=0x34243979; converted property
+ (xmlNs *)appNamespace;	// 0x342430b9
- (id)init;	// 0x34243895
- (CFStringRef)createFixedPathForOldAppBundleResourcePath:(CFStringRef)oldAppBundleResourcePath;	// 0x34243b1d
- (CFArrayRef)createUpgradedPathComponentsFromOldTemplatePathComponents:(CFArrayRef)oldTemplatePathComponents;	// 0x34243ea9
- (CFStringRef)createUpgradedPathForOldAssetPath:(CFStringRef)oldAssetPath;	// 0x34244179
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x342438d5
- (void)dealloc;	// 0x342439f9
- (BOOL)hasBody;	// 0x34243101
- (BOOL)hasFooters;	// 0x3424315d
- (BOOL)hasHeaders;	// 0x3424314d
- (void)initializeAppBundleResourcesUrl;	// 0x34243111
// converted property getter: - (id)pageMargins;	// 0x342430e1
- (CGSize)pageSize;	// 0x342430c9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x34243a85
// converted property setter: - (void)setPageMargins:(id)margins;	// 0x342439b9
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x34243979
- (BOOL)showOutliner;	// 0x3424313d
// converted property getter: - (id)stylesheet;	// 0x342430f1
@end
