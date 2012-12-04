/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSDictionary, NSBundle, NSURL;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
	NSURL *_url;	// 4 = 0x4
	NSBundle *_localizationBundle;	// 8 = 0x8
	NSString *_modelStringsFileName;	// 12 = 0xc
	NSDictionary *_localizationDictionary;	// 16 = 0x10
	BOOL _hasSetLocalizationDictionary;	// 20 = 0x14
}
@property(retain) NSDictionary *localizationDictionary;	// G=0x3631894d; S=0x36318985; converted property
- (id)initWithURL:(id)url;	// 0x36239065
- (id)_cachedObjectForKey:(id)key value:(void *)value;	// 0x363188c1
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x363187cd
- (void)_ensureLocalizationDictionaryIsInitialized;	// 0x3631864d
- (id)_localizedPropertyNameForProperty:(id)property entity:(id)entity;	// 0x36318a29
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x36318879
- (id)copyWithZone:(NSZone *)zone;	// 0x36318595
- (void)dealloc;	// 0x36239129
// converted property getter: - (id)localizationDictionary;	// 0x3631894d
- (id)localizedEntityNameForEntity:(id)entity;	// 0x363189d9
- (id)localizedModelStringForKey:(id)key;	// 0x36318b8d
- (id)localizedPropertyNameForProperty:(id)property;	// 0x36318b0d
// converted property setter: - (void)setLocalizationDictionary:(id)dictionary;	// 0x36318985
@end
