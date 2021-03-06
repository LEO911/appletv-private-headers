/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)ISOCountryCodes;	// 0x3116d929
+ (id)ISOCurrencyCodes;	// 0x3116d955
+ (id)ISOLanguageCodes;	// 0x3116d8fd
+ (id)allocWithZone:(NSZone *)zone;	// 0x310d0e75
+ (id)availableLocaleIdentifiers;	// 0x3116d8d1
+ (id)canonicalLanguageIdentifierFromString:(id)string;	// 0x310de391
+ (id)canonicalLocaleIdentifierFromString:(id)string;	// 0x310fb299
+ (unsigned)characterDirectionForLanguage:(id)language;	// 0x3116d9f1
+ (id)commonISOCurrencyCodes;	// 0x3116d981
+ (id)componentsFromLocaleIdentifier:(id)localeIdentifier;	// 0x310ddfd9
+ (id)currentLocale;	// 0x310d005d
+ (id)internetServicesRegion;	// 0x3116da2d
+ (unsigned)lineDirectionForLanguage:(id)language;	// 0x3116d9f9
+ (id)localeIdentifierFromComponents:(id)components;	// 0x310de0c5
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned)windowsLocaleCode;	// 0x3116d9ad
+ (id)localeWithLocaleIdentifier:(id)localeIdentifier;	// 0x3116d895
+ (id)preferredLanguages;	// 0x310e98ed
+ (BOOL)supportsSecureCoding;	// 0x3116d851
+ (id)systemLocale;	// 0x3116d86d
+ (unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)localeIdentifier;	// 0x3116d9e9
- (id)init;	// 0x3116d78d
- (id)initWithCoder:(id)coder;	// 0x3116d855
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x3116d871
- (unsigned long)_cfTypeID;	// 0x3116d7a1
- (id)_copyDisplayNameForKey:(id)key value:(id)value;	// 0x3116da01
- (id)_prefs;	// 0x3116da29
- (id)copyWithZone:(NSZone *)zone;	// 0x310f0dc5
- (id)displayNameForKey:(id)key value:(id)value;	// 0x3116d769
- (void)encodeWithCoder:(id)coder;	// 0x3116d859
- (unsigned)hash;	// 0x3116d7a5
- (id)identifier;	// 0x3116d85d
- (BOOL)isEqual:(id)equal;	// 0x3116d7cd
- (id)localeIdentifier;	// 0x310f3485
- (id)objectForKey:(id)key;	// 0x3116d745
@end

