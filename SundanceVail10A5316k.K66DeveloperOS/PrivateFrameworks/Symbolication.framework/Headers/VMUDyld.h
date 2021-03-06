/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSArray, VMUMachOHeader;

@interface VMUDyld : NSObject {
	VMUMachOHeader *_dyldMachOHeader;	// 4 = 0x4
	NSArray *_machOHeaders;	// 8 = 0x8
}
@property(readonly, retain) NSArray *machOHeaders;	// G=0x313bd1a1; converted property
+ (id)dyldWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x313bc4f9
+ (id)nativeSharedCachePath;	// 0x313bc539
+ (id)nativeSharedCacheTimestamp;	// 0x313bc701
- (id)initWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x313bc791
- (void)dealloc;	// 0x313bd1b1
- (id)findMachOHeadersInMemory:(id)memory;	// 0x313bc819
// converted property getter: - (id)machOHeaders;	// 0x313bd1a1
- (id)name;	// 0x313bd181
@end

