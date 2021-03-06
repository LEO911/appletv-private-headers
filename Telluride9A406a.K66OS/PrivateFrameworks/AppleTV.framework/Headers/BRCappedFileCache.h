/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface BRCappedFileCache : NSObject {
@private
	unsigned long long _maxSize;	// 4 = 0x4
	unsigned long long _currentSize;	// 12 = 0xc
	unsigned long long _purgeThreshold;	// 20 = 0x14
	unsigned long _purgeCount;	// 28 = 0x1c
	NSString *_cachePath;	// 32 = 0x20
	BOOL _purgingCache;	// 36 = 0x24
	NSMutableDictionary *_files;	// 40 = 0x28
}
@property(readonly, assign) unsigned long long currentSize;	// G=0x33134011; converted property
@property(readonly, assign) unsigned long long maxSize;	// G=0x33134029; converted property
@property(assign) unsigned long purgeCount;	// G=0x331340b1; S=0x331340c1; converted property
@property(assign) unsigned long long purgeThreshold;	// G=0x33134041; S=0x33134059; converted property
- (id)initForPath:(id)path withMaxSize:(unsigned long long)maxSize;	// 0x33133dd1
- (void)_clearCacheFolder;	// 0x33134a31
- (id)_generateCacheFilePathForKey:(id)key extension:(id)extension;	// 0x33134861
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x33134935
- (void)_maintainCacheSize:(id)size;	// 0x33134aa1
- (void)_terminateNotification:(id)notification;	// 0x33134dc9
- (id)addFileForKey:(id)key size:(unsigned long long)size extension:(id)extension;	// 0x331342e5
// converted property getter: - (unsigned long long)currentSize;	// 0x33134011
- (void)dealloc;	// 0x33133f71
- (id)filePathForKey:(id)key;	// 0x331340d1
// converted property getter: - (unsigned long long)maxSize;	// 0x33134029
// converted property getter: - (unsigned long)purgeCount;	// 0x331340b1
// converted property getter: - (unsigned long long)purgeThreshold;	// 0x33134041
- (void)removedFileWithKey:(id)key;	// 0x33134649
// converted property setter: - (void)setPurgeCount:(unsigned long)count;	// 0x331340c1
// converted property setter: - (void)setPurgeThreshold:(unsigned long long)threshold;	// 0x33134059
@end

