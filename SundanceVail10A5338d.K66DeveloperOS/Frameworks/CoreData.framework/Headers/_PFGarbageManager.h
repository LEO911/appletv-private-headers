/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {
	NSMutableDictionary *_storeLinksDirs;	// 4 = 0x4
	NSMutableDictionary *_filesToCleanUp;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x365b77f5
+ (id)defaultInstance;	// 0x365b7805
+ (void)initialize;	// 0x365b77c1
- (void)_deleteIfNecessary:(id)necessary;	// 0x365b7831
- (void)_doCleanupForDir:(id)dir exceptURLs:(id)urls;	// 0x365b78a9
- (id)_init__;	// 0x365b7731
- (BOOL)_isDeallocating;	// 0x365b7825
- (BOOL)_tryRetain;	// 0x365b7829
- (id)autorelease;	// 0x365b782d
- (void)doCleanupForURL:(id)url;	// 0x365b7f51
- (BOOL)registerURLForCleanup:(id)cleanup;	// 0x365b7b0d
- (void)release;	// 0x365b7821
- (void)removeDirectory:(id)directory;	// 0x365b7f0d
- (id)retain;	// 0x365b7815
- (unsigned)retainCount;	// 0x365b7819
- (id)temporaryLinksDirectoryForStore:(id)store;	// 0x365b7cf9
@end

