/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSDictionary, NSArray, LSApplicationProxy, NSString;

@interface LSResourceProxy : NSObject {
	NSString *_localizedName;	// 4 = 0x4
	NSString *_boundApplicationIdentifier;	// 8 = 0x8
	NSURL *_boundContainerURL;	// 12 = 0xc
	NSURL *_boundResourcesDirURL;	// 16 = 0x10
	NSDictionary *_boundIconsDictionary;	// 20 = 0x14
	NSString *_boundIconCacheKey;	// 24 = 0x18
	NSArray *_boundIconFileNames;	// 28 = 0x1c
	LSApplicationProxy *_typeOwner;	// 32 = 0x20
	BOOL _boundIconIsPrerendered;	// 36 = 0x24
	BOOL _boundIconIsBadge;	// 37 = 0x25
}
@property(retain) NSString *boundApplicationIdentifier;	// G=0x3729c059; S=0x3729c069; converted property
@property(retain) NSURL *boundContainerURL;	// G=0x3729c0ad; S=0x3729c0bd; converted property
@property(retain) NSString *boundIconCacheKey;	// G=0x3729c1b9; S=0x3729c1c9; converted property
@property(retain) NSArray *boundIconFileNames;	// G=0x3729c20d; S=0x3729c21d; converted property
@property(readonly, assign, nonatomic) BOOL boundIconIsBadge;	// G=0x3729c2d5; 
@property(assign) BOOL boundIconIsPrerendered;	// G=0x3729c2b5; S=0x3729c2c5; converted property
@property(retain) NSDictionary *boundIconsDictionary;	// G=0x3729c155; S=0x3729c175; converted property
@property(retain) id boundResourcesDirectoryURL;	// G=0x3729c101; S=0x3729c111; converted property
@property(readonly, assign, nonatomic) NSDictionary *iconsDictionary;	// G=0x3729c165; 
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x3729c88d; @synthesize=_localizedName
@property(retain) LSApplicationProxy *typeOwner;	// G=0x3729c261; S=0x3729c271; converted property
- (id)_initWithLocalizedName:(id)localizedName;	// 0x3729bf09
- (id)_initWithLocalizedName:(id)localizedName boundApplicationIdentifier:(id)identifier boundContainerURL:(id)url boundResourcesDirectoryURL:(id)url4 boundIconsDictionary:(id)dictionary boundIconCacheKey:(id)key boundIconFileNames:(id)names typeOwner:(id)owner boundIconIsPrerendered:(BOOL)prerendered boundIconIsBadge:(BOOL)badge;	// 0x3729bde5
// converted property getter: - (id)boundApplicationIdentifier;	// 0x3729c059
// converted property getter: - (id)boundContainerURL;	// 0x3729c0ad
// converted property getter: - (id)boundIconCacheKey;	// 0x3729c1b9
// converted property getter: - (id)boundIconFileNames;	// 0x3729c20d
// declared property getter: - (BOOL)boundIconIsBadge;	// 0x3729c2d5
// converted property getter: - (BOOL)boundIconIsPrerendered;	// 0x3729c2b5
// converted property getter: - (id)boundIconsDictionary;	// 0x3729c155
// converted property getter: - (id)boundResourcesDirectoryURL;	// 0x3729c101
- (void)dealloc;	// 0x3729bf39
- (id)iconDataForStyle:(id)style width:(int)width height:(int)height options:(unsigned)options;	// 0x3729c2f5
- (id)iconDataForVariant:(int)variant;	// 0x3729c4cd
- (id)iconStyleDomain;	// 0x3729c881
// declared property getter: - (id)iconsDictionary;	// 0x3729c165
// declared property getter: - (id)localizedName;	// 0x3729c88d
// converted property setter: - (void)setBoundApplicationIdentifier:(id)identifier;	// 0x3729c069
// converted property setter: - (void)setBoundContainerURL:(id)url;	// 0x3729c0bd
// converted property setter: - (void)setBoundIconCacheKey:(id)key;	// 0x3729c1c9
// converted property setter: - (void)setBoundIconFileNames:(id)names;	// 0x3729c21d
- (void)setBoundIconIsBadge:(BOOL)badge;	// 0x3729c2e5
// converted property setter: - (void)setBoundIconIsPrerendered:(BOOL)prerendered;	// 0x3729c2c5
// converted property setter: - (void)setBoundIconsDictionary:(id)dictionary;	// 0x3729c175
// converted property setter: - (void)setBoundResourcesDirectoryURL:(id)url;	// 0x3729c111
- (void)setLocalizedName:(id)name;	// 0x3729c015
// converted property setter: - (void)setTypeOwner:(id)owner;	// 0x3729c271
// converted property getter: - (id)typeOwner;	// 0x3729c261
@end
