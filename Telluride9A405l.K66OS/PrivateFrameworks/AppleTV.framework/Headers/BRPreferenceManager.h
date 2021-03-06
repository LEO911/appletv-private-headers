/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSTimer, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRPreferenceManager : NSObject {
@private
	NSLock *_preferencesLock;	// 4 = 0x4
	NSTimer *_prefsSyncTimer;	// 8 = 0x8
	NSMutableSet *_domains;	// 12 = 0xc
}
+ (id)sharedPreferences;	// 0x35ed00a9
- (id)init;	// 0x35ed00f1
- (void)_applicationTerminating:(id)terminating;	// 0x35ed0d31
- (void)_backgroundTasksSuspending:(id)suspending;	// 0x35ed0de5
- (void)_diskWillBeFlushed:(id)_disk;	// 0x35ed0e99
- (void)_flushPreferences:(id)preferences;	// 0x35ed0bf9
- (void)_markPreferencesAsDirty;	// 0x35ed0a4d
- (void)_setValue:(id)value forKey:(id)key forDomain:(id)domain;	// 0x35ed0805
- (void)_synchronizeDomains;	// 0x35ed0f65
- (id)_valueForKey:(id)key forDomain:(id)domain;	// 0x35ed0945
- (BOOL)boolForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x35ed04a1
- (BOOL)canSetPreferencesForKey:(id)key forDomain:(id)domain;	// 0x35ed0549
- (void)dealloc;	// 0x35ed0235
- (id)descriptionForKey:(id)key forDomain:(id)domain;	// 0x35ed0521
- (double)doubleForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(double)missingPrefs;	// 0x35ed0405
- (float)floatForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(float)missingPrefs;	// 0x35ed0369
- (int)integerForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(int)missingPrefs;	// 0x35ed02d5
- (id)objectForKey:(id)key forDomain:(id)domain;	// 0x35ed02c5
- (BOOL)setBool:(BOOL)aBool forKey:(id)key forDomain:(id)domain;	// 0x35ed06d5
- (BOOL)setDouble:(double)aDouble forKey:(id)key forDomain:(id)domain;	// 0x35ed0655
- (BOOL)setFloat:(float)aFloat forKey:(id)key forDomain:(id)domain;	// 0x35ed05d9
- (BOOL)setInteger:(int)integer forKey:(id)key forDomain:(id)domain;	// 0x35ed0561
- (BOOL)setObject:(id)object forKey:(id)key forDomain:(id)domain;	// 0x35ed074d
- (id)stringForKey:(id)key forDomain:(id)domain;	// 0x35ed04c5
- (void)syncDomain:(id)domain;	// 0x35ed07a5
@end

