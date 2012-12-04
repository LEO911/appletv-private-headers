/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSLock, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRPreferenceManager : XXUnknownSuperclass {
	NSLock *_preferencesLock;	// 4 = 0x4
	NSTimer *_prefsSyncTimer;	// 8 = 0x8
	NSMutableSet *_domains;	// 12 = 0xc
}
+ (id)sharedPreferences;	// 0x39ed49
- (id)init;	// 0x39ed91
- (void)_applicationTerminating:(id)terminating;	// 0x39f9d1
- (void)_backgroundTasksSuspending:(id)suspending;	// 0x39fa95
- (void)_diskWillBeFlushed:(id)_disk;	// 0x39fb59
- (void)_flushPreferences:(id)preferences;	// 0x39f88d
- (void)_markPreferencesAsDirty;	// 0x39f6cd
- (void)_setValue:(id)value forKey:(id)key forDomain:(id)domain;	// 0x39f489
- (void)_synchronizeDomains;	// 0x39fc35
- (id)_valueForKey:(id)key forDomain:(id)domain;	// 0x39f5c5
- (BOOL)boolForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x39f125
- (BOOL)canSetPreferencesForKey:(id)key forDomain:(id)domain;	// 0x39f1cd
- (void)dealloc;	// 0x39eed1
- (id)descriptionForKey:(id)key forDomain:(id)domain;	// 0x39f1a5
- (double)doubleForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(double)missingPrefs;	// 0x39f091
- (float)floatForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(float)missingPrefs;	// 0x39effd
- (int)integerForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(int)missingPrefs;	// 0x39ef71
- (id)objectForKey:(id)key forDomain:(id)domain;	// 0x39ef61
- (BOOL)setBool:(BOOL)aBool forKey:(id)key forDomain:(id)domain;	// 0x39f359
- (BOOL)setDouble:(double)aDouble forKey:(id)key forDomain:(id)domain;	// 0x39f2d9
- (BOOL)setFloat:(float)aFloat forKey:(id)key forDomain:(id)domain;	// 0x39f25d
- (BOOL)setInteger:(int)integer forKey:(id)key forDomain:(id)domain;	// 0x39f1e5
- (BOOL)setObject:(id)object forKey:(id)key forDomain:(id)domain;	// 0x39f3d1
- (id)stringForKey:(id)key forDomain:(id)domain;	// 0x39f149
- (void)syncDomain:(id)domain;	// 0x39f429
@end
