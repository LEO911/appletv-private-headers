/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSMutableSet, NSLock;

__attribute__((visibility("hidden")))
@interface BRPreferenceManager : NSObject {
@private
	NSLock *_preferencesLock;	// 4 = 0x4
	NSTimer *_prefsSyncTimer;	// 8 = 0x8
	NSMutableSet *_domains;	// 12 = 0xc
}
+ (id)sharedPreferences;	// 0x332dac71
- (id)init;	// 0x332dacb9
- (void)_applicationTerminating:(id)terminating;	// 0x332db8f9
- (void)_backgroundTasksSuspending:(id)suspending;	// 0x332db9ad
- (void)_diskWillBeFlushed:(id)_disk;	// 0x332dba61
- (void)_flushPreferences:(id)preferences;	// 0x332db7c1
- (void)_markPreferencesAsDirty;	// 0x332db615
- (void)_setValue:(id)value forKey:(id)key forDomain:(id)domain;	// 0x332db3cd
- (void)_synchronizeDomains;	// 0x332dbb2d
- (id)_valueForKey:(id)key forDomain:(id)domain;	// 0x332db50d
- (BOOL)boolForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x332db069
- (BOOL)canSetPreferencesForKey:(id)key forDomain:(id)domain;	// 0x332db111
- (void)dealloc;	// 0x332dadfd
- (id)descriptionForKey:(id)key forDomain:(id)domain;	// 0x332db0e9
- (double)doubleForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(double)missingPrefs;	// 0x332dafcd
- (float)floatForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(float)missingPrefs;	// 0x332daf31
- (int)integerForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(int)missingPrefs;	// 0x332dae9d
- (id)objectForKey:(id)key forDomain:(id)domain;	// 0x332dae8d
- (BOOL)setBool:(BOOL)aBool forKey:(id)key forDomain:(id)domain;	// 0x332db29d
- (BOOL)setDouble:(double)aDouble forKey:(id)key forDomain:(id)domain;	// 0x332db21d
- (BOOL)setFloat:(float)aFloat forKey:(id)key forDomain:(id)domain;	// 0x332db1a1
- (BOOL)setInteger:(int)integer forKey:(id)key forDomain:(id)domain;	// 0x332db129
- (BOOL)setObject:(id)object forKey:(id)key forDomain:(id)domain;	// 0x332db315
- (id)stringForKey:(id)key forDomain:(id)domain;	// 0x332db08d
- (void)syncDomain:(id)domain;	// 0x332db36d
@end

