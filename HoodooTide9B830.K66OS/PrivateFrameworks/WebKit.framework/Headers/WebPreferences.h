/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class WebPreferencesPrivate;

@interface WebPreferences : NSObject <NSCoding> {
@private
	WebPreferencesPrivate *_private;	// 4 = 0x4
}
@property(assign, getter=isAVFoundationEnabled) BOOL aVFoundationEnabled;	// G=0x352a5759; S=0x352a573d; converted property
@property(assign) BOOL accelerated2dCanvasEnabled;	// G=0x35243399; S=0x352a54bd; converted property
@property(assign) BOOL acceleratedCompositingEnabled;	// G=0x352432bd; S=0x352a5411; converted property
@property(assign) BOOL acceleratedDrawingEnabled;	// G=0x352432dd; S=0x35262f05; converted property
@property(assign) BOOL allowFileAccessFromFileURLs;	// G=0x35242c65; S=0x352a5089; converted property
@property(assign) BOOL allowUniversalAccessFromFileURLs;	// G=0x35242c45; S=0x352a506d; converted property
@property(assign) BOOL allowsAnimatedImageLooping;	// G=0x352a4a1d; S=0x352a4a3d; converted property
@property(assign) BOOL allowsAnimatedImages;	// G=0x352a49e1; S=0x352a4a01; converted property
@property(assign) long long applicationCacheDefaultOriginQuota;	// G=0x35243595; S=0x352a52c9; converted property
@property(assign) long long applicationCacheTotalQuota;	// G=0x352a525d; S=0x352a5279; converted property
@property(assign) BOOL applicationChromeModeEnabled;	// G=0x3524302d; S=0x352a4f8d; converted property
@property(assign) BOOL asynchronousSpellCheckingEnabled;	// G=0x35243419; S=0x352a5705; converted property
@property(assign) BOOL authorAndUserStylesEnabled;	// G=0x3524300d; S=0x352a4f71; converted property
@property(assign) BOOL automaticallyDetectsCacheModel;	// G=0x3525d9e1; S=0x3523be51; converted property
@property(assign) BOOL autosaves;	// G=0x352a42f1; S=0x3523bd19; converted property
@property(assign) unsigned cacheModel;	// G=0x3523b269; S=0x3523bd39; converted property
@property(assign) BOOL canvasUsesAcceleratedDrawing;	// G=0x352432fd; S=0x352a53f5; converted property
@property(retain) id cursiveFontFamily;	// G=0x352429b1; S=0x352a4901; converted property
@property(assign, getter=isDNSPrefetchingEnabled) BOOL dNSPrefetchingEnabled;	// G=0x3524329d; S=0x352a4f39; converted property
@property(assign, getter=isDOMPasteAllowed) BOOL dOMPasteAllowed;	// G=0x35242ed9; S=0x352a5381; converted property
@property(assign) BOOL databasesEnabled;	// G=0x3523dc05; S=0x35262eb1; converted property
@property(assign) int defaultFixedFontSize;	// G=0x35242ae5; S=0x352a4955; converted property
@property(assign) int defaultFontSize;	// G=0x35242b01; S=0x352a4939; converted property
@property(retain) id defaultTextEncodingName;	// G=0x35242b1d; S=0x352a49a9; converted property
@property(assign) BOOL developerExtrasEnabled;	// G=0x35242f71; S=0x352a4f55; converted property
@property(assign) BOOL diskImageCacheEnabled;	// G=0x3524364d; S=0x35262ee9; converted property
@property(assign) unsigned diskImageCacheMaximumCacheSize;	// G=0x35243689; S=0x352a54f5; converted property
@property(assign) unsigned diskImageCacheMinimumImageSize;	// G=0x3524366d; S=0x352a54d9; converted property
@property(assign) int editableLinkBehavior;	// G=0x35242e0d; S=0x352a52f1; converted property
@property(assign) int editingBehavior;	// G=0x35242e65; S=0x352a5615; converted property
@property(assign) BOOL experimentalNotificationsEnabled;	// G=0x352a5345; S=0x352a5365; converted property
@property(retain) id fantasyFontFamily;	// G=0x35242b59; S=0x352a491d; converted property
@property(retain) id fixedFontFamily;	// G=0x35242b75; S=0x352a48ad; converted property
@property(assign, getter=isFrameFlatteningEnabled) BOOL frameFlatteningEnabled;	// G=0x352433b9; S=0x352a5589; converted property
@property(assign) BOOL fullScreenEnabled;	// G=0x352a56e5; S=0x352a56c9; converted property
@property(assign) BOOL hyperlinkAuditingEnabled;	// G=0x35243459; S=0x352a55f9; converted property
@property(assign, getter=isJavaEnabled) BOOL javaEnabled;	// G=0x35242be5; S=0x35262e11; converted property
@property(assign) BOOL javaScriptCanAccessClipboard;	// G=0x3524325d; S=0x352a4ffd; converted property
@property(assign) BOOL javaScriptCanOpenWindowsAutomatically;	// G=0x35242c85; S=0x352a49c5; converted property
@property(assign, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;	// G=0x35242c05; S=0x35262e2d; converted property
@property(assign) BOOL loadsImagesAutomatically;	// G=0x35242dad; S=0x352a4a59; converted property
@property(assign) BOOL loadsSiteIconsIgnoringImageLoadingPreference;	// G=0x35242dcd; S=0x352a5721; converted property
@property(assign) BOOL localFileContentSniffingEnabled;	// G=0x3524321d; S=0x352a4fc5; converted property
@property(assign) BOOL localStorageEnabled;	// G=0x35242d19; S=0x35262ecd; converted property
@property(assign) BOOL mediaPlaybackAllowsAirPlay;	// G=0x352a5779; S=0x352a5799; converted property
@property(assign) BOOL mediaPlaybackAllowsInline;	// G=0x35243575; S=0x352463e5; converted property
@property(assign) BOOL mediaPlaybackRequiresUserGesture;	// G=0x35243555; S=0x352a57b5; converted property
@property(assign) BOOL memoryInfoEnabled;	// G=0x35243439; S=0x352a55dd; converted property
@property(assign) int minimumFontSize;	// G=0x35242ca5; S=0x352a4971; converted property
@property(assign) int minimumLogicalFontSize;	// G=0x35242cc1; S=0x352a498d; converted property
@property(assign) BOOL offlineWebApplicationCacheEnabled;	// G=0x3524323d; S=0x3523be71; converted property
@property(assign) BOOL paginateDuringLayoutEnabled;	// G=0x352433f9; S=0x352a55c1; converted property
@property(retain) id pictographFontFamily;	// G=0x35242cdd; S=0x352a57d1; converted property
@property(assign) unsigned pluginAllowedRunTime;	// G=0x3524335d; S=0x352a556d; converted property
@property(assign) BOOL privateBrowsingEnabled;	// G=0x35242d39; S=0x352463c9; converted property
@property(retain) id sansSerifFontFamily;	// G=0x35242d59; S=0x352a48e5; converted property
@property(retain) id serifFontFamily;	// G=0x35242d75; S=0x352a48c9; converted property
@property(assign) BOOL showDebugBorders;	// G=0x3524331d; S=0x352a542d; converted property
@property(assign) BOOL showRepaintCounter;	// G=0x3524333d; S=0x352a5449; converted property
@property(assign) BOOL shrinksStandaloneImagesToFit;	// G=0x35242ded; S=0x35244091; converted property
@property(assign, getter=isSpatialNavigationEnabled) BOOL spatialNavigationEnabled;	// G=0x352433d9; S=0x352a55a5; converted property
@property(retain) id standardFontFamily;	// G=0x35242d91; S=0x352a4891; converted property
@property(assign) BOOL storageTrackerEnabled;	// G=0x3523df69; S=0x3523c0f1; converted property
@property(assign) int textDirectionSubmenuInclusionBehavior;	// G=0x35242e99; S=0x352a530d; converted property
@property(assign) BOOL usePreHTML5ParserQuirks;	// G=0x352434f1; S=0x352a5631; converted property
@property(assign) BOOL userStyleSheetEnabled;	// G=0x352a42e1; S=0x352a42e5; converted property
@property(retain) id userStyleSheetLocation;	// G=0x352a42e9; S=0x352a42ed; converted property
@property(assign) BOOL usesEncodingDetector;	// G=0x35242b39; S=0x352a5035; converted property
@property(assign) BOOL usesPageCache;	// G=0x35242f51; S=0x352a4a75; converted property
@property(assign) BOOL webArchiveDebugModeEnabled;	// G=0x352431fd; S=0x352a4fa9; converted property
@property(assign) BOOL webAudioEnabled;	// G=0x35243379; S=0x352a5465; converted property
@property(assign) BOOL webGLEnabled;	// G=0x352a5481; S=0x352a54a1; converted property
@property(assign) BOOL webInspectorServerEnabled;	// G=0x352436a5; S=0x352a5511; converted property
@property(assign) short webInspectorServerPort;	// G=0x352a552d; S=0x352a5551; converted property
@property(assign, getter=isWebSecurityEnabled) BOOL webSecurityEnabled;	// G=0x35242c25; S=0x352a5051; converted property
@property(assign, getter=isXSSAuditorEnabled) BOOL xSSAuditorEnabled;	// G=0x3524327d; S=0x352a5019; converted property
@property(assign) BOOL zoomsTextOnly;	// G=0x35243611; S=0x352a4fe1; converted property
+ (id)_IBCreatorID;	// 0x3523b0bd
+ (void)_checkLastReferenceForIdentifier:(id)identifier;	// 0x352a57ed
+ (id)_concatenateKeyWithIBCreatorID:(id)ibcreatorID;	// 0x35262dd5
+ (id)_getInstanceForIdentifier:(id)identifier;	// 0x3523b0cd
+ (void)_removeReferenceForIdentifier:(id)identifier;	// 0x352a583d
+ (void)_setIBCreatorID:(id)anId;	// 0x352a5895
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;	// 0x3523c129
+ (void)_setInstance:(id)instance forIdentifier:(id)identifier;	// 0x3523b119
+ (unsigned long)_systemCFStringEncoding;	// 0x3523c1d9
+ (void)initialize;	// 0x3523a1f5
+ (void)setWebKitLinkTimeVersion:(int)version;	// 0x352a59ad
+ (id)standardPreferences;	// 0x3523aea9
- (id)init;	// 0x352a4311
- (id)initWithCoder:(id)coder;	// 0x352a4b45
- (id)initWithIdentifier:(id)identifier;	// 0x35262dc1
- (id)initWithIdentifier:(id)identifier sendChangeNotification:(BOOL)notification;	// 0x3523aedd
- (int)_NSURLDiskCacheSize;	// 0x3523bca1
- (int)_NSURLMaxRequestSize;	// 0x3523bcbd
- (int)_NSURLMemoryCacheSize;	// 0x3523bc85
- (BOOL)_aggressivePreloading;	// 0x3523bcd9
- (BOOL)_allowCompositingLayerVisualDegradation;	// 0x352a523d
- (BOOL)_allowMultiElementImplicitFormSubmission;	// 0x352430ed
- (BOOL)_alwaysRequestGeolocationPermission;	// 0x352431bd
- (BOOL)_alwaysUseAcceleratedOverflowScroll;	// 0x352431dd
- (BOOL)_alwaysUseBaselineOfPrimaryFont;	// 0x352430cd
- (double)_backForwardCacheExpirationInterval;	// 0x352a50a5
- (BOOL)_boolValueForKey:(id)key;	// 0x3523bcf9
- (id)_diskImageCacheSavedCacheDirectory;	// 0x3523e72d
- (float)_floatValueForKey:(id)key;	// 0x35243165
- (BOOL)_forceFTPDirectoryListings;	// 0x35242b91
- (id)_ftpDirectoryTemplatePath;	// 0x35242bb1
- (int)_integerValueForKey:(id)key;	// 0x3523b285
- (void)_invalidateCachedPreferences;	// 0x352461ed
- (int)_layoutInterval;	// 0x3524312d
- (id)_localStorageDatabasePath;	// 0x3523efc1
- (long long)_longLongValueForKey:(id)key;	// 0x352435b1
- (float)_maxParseDuration;	// 0x35243149
- (unsigned long)_maximumImageSize;	// 0x3524306d
- (float)_minimumZoomFontSize;	// 0x35243631
- (int)_objectCacheSize;	// 0x3523bc69
- (int)_pageCacheSize;	// 0x3523bc4d
- (void)_postPreferencesChangedAPINotification;	// 0x352a5945
- (void)_postPreferencesChangedNotification;	// 0x3523b19d
- (void)_setAggressivePreloading:(BOOL)preloading;	// 0x352a51cd
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)degradation;	// 0x352a5221
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)submission;	// 0x352a5195
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)permission;	// 0x352a51e9
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)scroll;	// 0x352a5205
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)primaryFont;	// 0x35262f21
- (void)_setBoolValue:(BOOL)value forKey:(id)key;	// 0x3523be8d
- (void)_setDiskImageCacheSavedCacheDirectory:(id)directory;	// 0x3523e761
- (void)_setFTPDirectoryTemplatePath:(id)path;	// 0x352a539d
- (void)_setFloatValue:(float)value forKey:(id)key;	// 0x352460b5
- (void)_setForceFTPDirectoryListings:(BOOL)listings;	// 0x352a53d9
- (void)_setIntegerValue:(int)value forKey:(id)key;	// 0x3523bd71
- (void)_setLayoutInterval:(int)interval;	// 0x3524607d
- (void)_setLocalStorageDatabasePath:(id)path;	// 0x3523bf71
- (void)_setLongLongValue:(long long)value forKey:(id)key;	// 0x352a44e5
- (void)_setMaxParseDuration:(float)duration;	// 0x35261f51
- (void)_setMinimumZoomFontSize:(float)size;	// 0x35246099
- (void)_setNSURLDiskCacheSize:(int)size;	// 0x352a515d
- (void)_setNSURLMaxRequestSize:(int)size;	// 0x352a5179
- (void)_setNSURLMemoryCacheSize:(int)size;	// 0x352a5141
- (void)_setObjectCacheSize:(int)size;	// 0x352a5125
- (void)_setPageCacheSize:(int)size;	// 0x352a5109
- (void)_setPreferenceForTestWithValue:(id)value forKey:(id)key;	// 0x352a56b9
- (void)_setStandalone:(BOOL)standalone;	// 0x352a50ed
- (void)_setStringValue:(id)value forKey:(id)key;	// 0x3523bfad
- (void)_setTelephoneNumberParsingEnabled:(BOOL)enabled;	// 0x352440cd
- (void)_setUnsignedLongLongValue:(unsigned long long)value forKey:(id)key;	// 0x352a4645
- (void)_setUnsignedShortValue:(int)value forKey:(id)key;	// 0x352a47b1
- (void)_setUseLegacyNumberInputFieldFormatting:(BOOL)formatting;	// 0x352a51b1
- (void)_setUseSiteSpecificSpoofing:(BOOL)spoofing;	// 0x352a5329
- (BOOL)_standalone;	// 0x3524304d
- (id)_stringValueForKey:(id)key;	// 0x3523c099
- (BOOL)_telephoneNumberParsingEnabled;	// 0x352430ad
- (unsigned long long)_unsignedLongLongValueForKey:(id)key;	// 0x352a45fd
- (int)_unsignedShortValueForKey:(id)key;	// 0x352a475d
- (BOOL)_useLegacyNumberInputFieldFormatting;	// 0x3524310d
- (BOOL)_useSiteSpecificSpoofing;	// 0x35242991
- (id)_valueForKey:(id)key;	// 0x3523b2cd
// converted property getter: - (BOOL)accelerated2dCanvasEnabled;	// 0x35243399
// converted property getter: - (BOOL)acceleratedCompositingEnabled;	// 0x352432bd
// converted property getter: - (BOOL)acceleratedDrawingEnabled;	// 0x352432dd
// converted property getter: - (BOOL)allowFileAccessFromFileURLs;	// 0x35242c65
// converted property getter: - (BOOL)allowUniversalAccessFromFileURLs;	// 0x35242c45
// converted property getter: - (BOOL)allowsAnimatedImageLooping;	// 0x352a4a1d
// converted property getter: - (BOOL)allowsAnimatedImages;	// 0x352a49e1
// converted property getter: - (long long)applicationCacheDefaultOriginQuota;	// 0x35243595
// converted property getter: - (long long)applicationCacheTotalQuota;	// 0x352a525d
// converted property getter: - (BOOL)applicationChromeModeEnabled;	// 0x3524302d
- (BOOL)arePlugInsEnabled;	// 0x35242cf9
// converted property getter: - (BOOL)asynchronousSpellCheckingEnabled;	// 0x35243419
// converted property getter: - (BOOL)authorAndUserStylesEnabled;	// 0x3524300d
// converted property getter: - (BOOL)automaticallyDetectsCacheModel;	// 0x3525d9e1
// converted property getter: - (BOOL)autosaves;	// 0x352a42f1
// converted property getter: - (unsigned)cacheModel;	// 0x3523b269
// converted property getter: - (BOOL)canvasUsesAcceleratedDrawing;	// 0x352432fd
// converted property getter: - (id)cursiveFontFamily;	// 0x352429b1
// converted property getter: - (BOOL)databasesEnabled;	// 0x3523dc05
- (void)dealloc;	// 0x352a4af9
// converted property getter: - (int)defaultFixedFontSize;	// 0x35242ae5
// converted property getter: - (int)defaultFontSize;	// 0x35242b01
// converted property getter: - (id)defaultTextEncodingName;	// 0x35242b1d
// converted property getter: - (BOOL)developerExtrasEnabled;	// 0x35242f71
- (void)didRemoveFromWebView;	// 0x352a564d
// converted property getter: - (BOOL)diskImageCacheEnabled;	// 0x3524364d
// converted property getter: - (unsigned)diskImageCacheMaximumCacheSize;	// 0x35243689
// converted property getter: - (unsigned)diskImageCacheMinimumImageSize;	// 0x3524366d
// converted property getter: - (int)editableLinkBehavior;	// 0x35242e0d
// converted property getter: - (int)editingBehavior;	// 0x35242e65
- (void)encodeWithCoder:(id)coder;	// 0x352a43e5
// converted property getter: - (BOOL)experimentalNotificationsEnabled;	// 0x352a5345
// converted property getter: - (id)fantasyFontFamily;	// 0x35242b59
// converted property getter: - (id)fixedFontFamily;	// 0x35242b75
// converted property getter: - (BOOL)fullScreenEnabled;	// 0x352a56e5
// converted property getter: - (BOOL)hyperlinkAuditingEnabled;	// 0x35243459
- (id)identifier;	// 0x352a42c1
// converted property getter: - (BOOL)isAVFoundationEnabled;	// 0x352a5759
// converted property getter: - (BOOL)isDNSPrefetchingEnabled;	// 0x3524329d
// converted property getter: - (BOOL)isDOMPasteAllowed;	// 0x35242ed9
// converted property getter: - (BOOL)isFrameFlatteningEnabled;	// 0x352433b9
// converted property getter: - (BOOL)isJavaEnabled;	// 0x35242be5
// converted property getter: - (BOOL)isJavaScriptEnabled;	// 0x35242c05
// converted property getter: - (BOOL)isSpatialNavigationEnabled;	// 0x352433d9
// converted property getter: - (BOOL)isWebSecurityEnabled;	// 0x35242c25
// converted property getter: - (BOOL)isXSSAuditorEnabled;	// 0x3524327d
// converted property getter: - (BOOL)javaScriptCanAccessClipboard;	// 0x3524325d
// converted property getter: - (BOOL)javaScriptCanOpenWindowsAutomatically;	// 0x35242c85
// converted property getter: - (BOOL)loadsImagesAutomatically;	// 0x35242dad
// converted property getter: - (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;	// 0x35242dcd
// converted property getter: - (BOOL)localFileContentSniffingEnabled;	// 0x3524321d
// converted property getter: - (BOOL)localStorageEnabled;	// 0x35242d19
// converted property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x352a5779
// converted property getter: - (BOOL)mediaPlaybackAllowsInline;	// 0x35243575
// converted property getter: - (BOOL)mediaPlaybackRequiresUserGesture;	// 0x35243555
// converted property getter: - (BOOL)memoryInfoEnabled;	// 0x35243439
// converted property getter: - (int)minimumFontSize;	// 0x35242ca5
// converted property getter: - (int)minimumLogicalFontSize;	// 0x35242cc1
// converted property getter: - (BOOL)offlineWebApplicationCacheEnabled;	// 0x3524323d
// converted property getter: - (BOOL)paginateDuringLayoutEnabled;	// 0x352433f9
// converted property getter: - (id)pictographFontFamily;	// 0x35242cdd
// converted property getter: - (unsigned)pluginAllowedRunTime;	// 0x3524335d
// converted property getter: - (BOOL)privateBrowsingEnabled;	// 0x35242d39
// converted property getter: - (id)sansSerifFontFamily;	// 0x35242d59
// converted property getter: - (id)serifFontFamily;	// 0x35242d75
// converted property setter: - (void)setAVFoundationEnabled:(BOOL)enabled;	// 0x352a573d
// converted property setter: - (void)setAccelerated2dCanvasEnabled:(BOOL)enabled;	// 0x352a54bd
// converted property setter: - (void)setAcceleratedCompositingEnabled:(BOOL)enabled;	// 0x352a5411
// converted property setter: - (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x35262f05
// converted property setter: - (void)setAllowFileAccessFromFileURLs:(BOOL)fileURLs;	// 0x352a5089
// converted property setter: - (void)setAllowUniversalAccessFromFileURLs:(BOOL)fileURLs;	// 0x352a506d
// converted property setter: - (void)setAllowsAnimatedImageLooping:(BOOL)looping;	// 0x352a4a3d
// converted property setter: - (void)setAllowsAnimatedImages:(BOOL)images;	// 0x352a4a01
// converted property setter: - (void)setApplicationCacheDefaultOriginQuota:(long long)quota;	// 0x352a52c9
// converted property setter: - (void)setApplicationCacheTotalQuota:(long long)quota;	// 0x352a5279
// converted property setter: - (void)setApplicationChromeModeEnabled:(BOOL)enabled;	// 0x352a4f8d
// converted property setter: - (void)setAsynchronousSpellCheckingEnabled:(BOOL)enabled;	// 0x352a5705
// converted property setter: - (void)setAuthorAndUserStylesEnabled:(BOOL)enabled;	// 0x352a4f71
// converted property setter: - (void)setAutomaticallyDetectsCacheModel:(BOOL)model;	// 0x3523be51
// converted property setter: - (void)setAutosaves:(BOOL)autosaves;	// 0x3523bd19
// converted property setter: - (void)setCacheModel:(unsigned)model;	// 0x3523bd39
// converted property setter: - (void)setCanvasUsesAcceleratedDrawing:(BOOL)drawing;	// 0x352a53f5
// converted property setter: - (void)setCursiveFontFamily:(id)family;	// 0x352a4901
// converted property setter: - (void)setDNSPrefetchingEnabled:(BOOL)enabled;	// 0x352a4f39
// converted property setter: - (void)setDOMPasteAllowed:(BOOL)allowed;	// 0x352a5381
// converted property setter: - (void)setDatabasesEnabled:(BOOL)enabled;	// 0x35262eb1
// converted property setter: - (void)setDefaultFixedFontSize:(int)size;	// 0x352a4955
// converted property setter: - (void)setDefaultFontSize:(int)size;	// 0x352a4939
// converted property setter: - (void)setDefaultTextEncodingName:(id)name;	// 0x352a49a9
// converted property setter: - (void)setDeveloperExtrasEnabled:(BOOL)enabled;	// 0x352a4f55
// converted property setter: - (void)setDiskImageCacheEnabled:(BOOL)enabled;	// 0x35262ee9
// converted property setter: - (void)setDiskImageCacheMaximumCacheSize:(unsigned)size;	// 0x352a54f5
// converted property setter: - (void)setDiskImageCacheMinimumImageSize:(unsigned)size;	// 0x352a54d9
// converted property setter: - (void)setEditableLinkBehavior:(int)behavior;	// 0x352a52f1
// converted property setter: - (void)setEditingBehavior:(int)behavior;	// 0x352a5615
// converted property setter: - (void)setExperimentalNotificationsEnabled:(BOOL)enabled;	// 0x352a5365
// converted property setter: - (void)setFantasyFontFamily:(id)family;	// 0x352a491d
// converted property setter: - (void)setFixedFontFamily:(id)family;	// 0x352a48ad
// converted property setter: - (void)setFrameFlatteningEnabled:(BOOL)enabled;	// 0x352a5589
// converted property setter: - (void)setFullScreenEnabled:(BOOL)enabled;	// 0x352a56c9
// converted property setter: - (void)setHyperlinkAuditingEnabled:(BOOL)enabled;	// 0x352a55f9
// converted property setter: - (void)setJavaEnabled:(BOOL)enabled;	// 0x35262e11
// converted property setter: - (void)setJavaScriptCanAccessClipboard:(BOOL)clipboard;	// 0x352a4ffd
// converted property setter: - (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)automatically;	// 0x352a49c5
// converted property setter: - (void)setJavaScriptEnabled:(BOOL)enabled;	// 0x35262e2d
// converted property setter: - (void)setLoadsImagesAutomatically:(BOOL)automatically;	// 0x352a4a59
// converted property setter: - (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)preference;	// 0x352a5721
// converted property setter: - (void)setLocalFileContentSniffingEnabled:(BOOL)enabled;	// 0x352a4fc5
// converted property setter: - (void)setLocalStorageEnabled:(BOOL)enabled;	// 0x35262ecd
// converted property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x352a5799
// converted property setter: - (void)setMediaPlaybackAllowsInline:(BOOL)anInline;	// 0x352463e5
// converted property setter: - (void)setMediaPlaybackRequiresUserGesture:(BOOL)gesture;	// 0x352a57b5
// converted property setter: - (void)setMemoryInfoEnabled:(BOOL)enabled;	// 0x352a55dd
// converted property setter: - (void)setMinimumFontSize:(int)size;	// 0x352a4971
// converted property setter: - (void)setMinimumLogicalFontSize:(int)size;	// 0x352a498d
// converted property setter: - (void)setOfflineWebApplicationCacheEnabled:(BOOL)enabled;	// 0x3523be71
// converted property setter: - (void)setPaginateDuringLayoutEnabled:(BOOL)enabled;	// 0x352a55c1
// converted property setter: - (void)setPictographFontFamily:(id)family;	// 0x352a57d1
- (void)setPlugInsEnabled:(BOOL)enabled;	// 0x3523c10d
// converted property setter: - (void)setPluginAllowedRunTime:(unsigned)time;	// 0x352a556d
// converted property setter: - (void)setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x352463c9
// converted property setter: - (void)setSansSerifFontFamily:(id)family;	// 0x352a48e5
// converted property setter: - (void)setSerifFontFamily:(id)family;	// 0x352a48c9
// converted property setter: - (void)setShowDebugBorders:(BOOL)borders;	// 0x352a542d
// converted property setter: - (void)setShowRepaintCounter:(BOOL)counter;	// 0x352a5449
// converted property setter: - (void)setShrinksStandaloneImagesToFit:(BOOL)fit;	// 0x35244091
// converted property setter: - (void)setSpatialNavigationEnabled:(BOOL)enabled;	// 0x352a55a5
// converted property setter: - (void)setStandardFontFamily:(id)family;	// 0x352a4891
// converted property setter: - (void)setStorageTrackerEnabled:(BOOL)enabled;	// 0x3523c0f1
// converted property setter: - (void)setTextDirectionSubmenuInclusionBehavior:(int)behavior;	// 0x352a530d
// converted property setter: - (void)setUsePreHTML5ParserQuirks:(BOOL)quirks;	// 0x352a5631
// converted property setter: - (void)setUserStyleSheetEnabled:(BOOL)enabled;	// 0x352a42e5
// converted property setter: - (void)setUserStyleSheetLocation:(id)location;	// 0x352a42ed
// converted property setter: - (void)setUsesEncodingDetector:(BOOL)detector;	// 0x352a5035
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x352a4a75
// converted property setter: - (void)setWebArchiveDebugModeEnabled:(BOOL)enabled;	// 0x352a4fa9
// converted property setter: - (void)setWebAudioEnabled:(BOOL)enabled;	// 0x352a5465
// converted property setter: - (void)setWebGLEnabled:(BOOL)enabled;	// 0x352a54a1
// converted property setter: - (void)setWebInspectorServerEnabled:(BOOL)enabled;	// 0x352a5511
// converted property setter: - (void)setWebInspectorServerPort:(short)port;	// 0x352a5551
// converted property setter: - (void)setWebSecurityEnabled:(BOOL)enabled;	// 0x352a5051
// converted property setter: - (void)setXSSAuditorEnabled:(BOOL)enabled;	// 0x352a5019
// converted property setter: - (void)setZoomsTextOnly:(BOOL)only;	// 0x352a4fe1
// converted property getter: - (BOOL)showDebugBorders;	// 0x3524331d
// converted property getter: - (BOOL)showRepaintCounter;	// 0x3524333d
// converted property getter: - (BOOL)shrinksStandaloneImagesToFit;	// 0x35242ded
// converted property getter: - (id)standardFontFamily;	// 0x35242d91
// converted property getter: - (BOOL)storageTrackerEnabled;	// 0x3523df69
// converted property getter: - (int)textDirectionSubmenuInclusionBehavior;	// 0x35242e99
// converted property getter: - (BOOL)usePreHTML5ParserQuirks;	// 0x352434f1
// converted property getter: - (BOOL)userStyleSheetEnabled;	// 0x352a42e1
// converted property getter: - (id)userStyleSheetLocation;	// 0x352a42e9
// converted property getter: - (BOOL)usesEncodingDetector;	// 0x35242b39
// converted property getter: - (BOOL)usesPageCache;	// 0x35242f51
// converted property getter: - (BOOL)webArchiveDebugModeEnabled;	// 0x352431fd
// converted property getter: - (BOOL)webAudioEnabled;	// 0x35243379
// converted property getter: - (BOOL)webGLEnabled;	// 0x352a5481
// converted property getter: - (BOOL)webInspectorServerEnabled;	// 0x352436a5
// converted property getter: - (short)webInspectorServerPort;	// 0x352a552d
- (void)willAddToWebView;	// 0x3523d6b5
// converted property getter: - (BOOL)zoomsTextOnly;	// 0x35243611
@end
