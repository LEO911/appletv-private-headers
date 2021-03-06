/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSUserDefaults.h> // Unknown library


@interface NSUserDefaults (NSKeyValueCoding)
- (void)setValue:(id)value forKey:(id)key;	// 0x36097d91
- (id)valueForKey:(id)key;	// 0x36097cd9
@end

@interface NSUserDefaults (NSUserDefaults)
@property(retain) id searchList;	// G=0x3611df1d; S=0x3611df45; converted property
+ (void)resetStandardUserDefaults;	// 0x3611e051
+ (void)setStandardUserDefaults:(id)defaults;	// 0x3611dfd9
+ (id)standardUserDefaults;	// 0x3606d5b5
- (id)init;	// 0x3611df99
- (id)initWithUser:(id)user;	// 0x3608a5e9
- (id)URLForKey:(id)key;	// 0x3611dced
- (void)addSuiteNamed:(id)named;	// 0x3611df71
- (id)arrayForKey:(id)key;	// 0x36085c7d
- (BOOL)boolForKey:(id)key;	// 0x3606d649
- (id)dataForKey:(id)key;	// 0x3611da4d
- (id)dictionaryForKey:(id)key;	// 0x3611da11
- (id)dictionaryRepresentation;	// 0x3611def1
- (double)doubleForKey:(id)key;	// 0x36099d09
- (float)floatForKey:(id)key;	// 0x3608fa89
- (int)integerForKey:(id)key;	// 0x3607a071
- (long long)longForKey:(id)key;	// 0x3611dc35
- (id)objectForKey:(id)key;	// 0x3606d765
- (id)objectForKey:(id)key inDomain:(id)domain;	// 0x3611d785
- (BOOL)objectIsForcedForKey:(id)key;	// 0x3611e3fd
- (BOOL)objectIsForcedForKey:(id)key inDomain:(id)domain;	// 0x3611e419
- (id)persistentDomainForName:(id)name;	// 0x360717a9
- (id)persistentDomainNames;	// 0x3611e1c5
- (void)registerDefaults:(id)defaults;	// 0x36091461
- (oneway void)release;	// 0x3607516d
- (void)removeObjectForKey:(id)key;	// 0x3607504d
- (void)removeObjectForKey:(id)key inDomain:(id)domain;	// 0x3611d9e9
- (void)removePersistentDomainForName:(id)name;	// 0x3611e3e5
- (void)removeSuiteNamed:(id)named;	// 0x3611df85
- (void)removeVolatileDomainForName:(id)name;	// 0x3611e175
// converted property getter: - (id)searchList;	// 0x3611df1d
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x360751e1
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x360a669d
- (void)setFloat:(float)aFloat forKey:(id)key;	// 0x3611de05
- (void)setInteger:(int)integer forKey:(id)key;	// 0x360a6799
- (void)setLong:(long long)aLong forKey:(id)key;	// 0x3611ddc9
- (void)setObject:(id)object forKey:(id)key;	// 0x360750ad
- (void)setObject:(id)object forKey:(id)key inDomain:(id)domain;	// 0x3611d87d
- (void)setPersistentDomain:(id)domain forName:(id)name;	// 0x3611e299
// converted property setter: - (void)setSearchList:(id)list;	// 0x3611df45
- (void)setURL:(id)url forKey:(id)key;	// 0x3611de49
- (void)setVolatileDomain:(id)domain forName:(id)name;	// 0x3611e125
- (id)stringArrayForKey:(id)key;	// 0x3611da89
- (id)stringForKey:(id)key;	// 0x360996e5
- (BOOL)synchronize;	// 0x36094fd9
- (id)volatileDomainForName:(id)name;	// 0x3611e0f9
- (id)volatileDomainNames;	// 0x3611e0cd
@end

@interface NSUserDefaults (NSUserDefaults_NSURLExtras)
+ (void)_ensureAndLockPreferredLanguageLock;	// 0x3612db0d
+ (void)_web_addDefaultsChangeObserver;	// 0x3612dbdd
+ (void)_web_defaultsDidChange;	// 0x3612db89
+ (id)_web_preferredLanguageCode;	// 0x3612dc91
@end

