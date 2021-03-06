/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class NSString, NSMutableDictionary, VMUArchitecture, NSDate;

@interface VMUMemory_File : VMUMemory_Base <VMUMemory> {
	char *_mappedAddress;	// 4 = 0x4
	unsigned _mappedSize;	// 8 = 0x8
	NSDate *_lastModifiedTimestamp;	// 12 = 0xc
	VMURange _addressRange;	// 16 = 0x10
	VMURange _fileRange;	// 32 = 0x20
	NSString *_path;	// 48 = 0x30
	VMUArchitecture *_architecture;	// 52 = 0x34
	NSMutableDictionary *_sharedCacheMap;	// 56 = 0x38
}
@property(readonly, assign) VMURange addressRange;	// G=0x30bb62ed; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x30bb6311; converted property
@property(readonly, retain) NSDate *lastModifiedTimestamp;	// G=0x30bb62dd; converted property
@property(readonly, retain) NSString *path;	// G=0x30bb62cd; converted property
+ (id)headerFromSharedCacheWithPath:(id)path;	// 0x30bb653d
+ (id)headerWithPath:(id)path;	// 0x30bb6711
+ (id)memoryWithPath:(id)path;	// 0x30bb64c1
+ (id)memoryWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x30bb6451
- (id)initWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x30bb6325
// converted property getter: - (VMURange)addressRange;	// 0x30bb62ed
// converted property getter: - (id)architecture;	// 0x30bb6311
- (void)buildSharedCacheMap;	// 0x30bb7055
- (void)dealloc;	// 0x30bb6c11
- (id)description;	// 0x30bb6d15
- (void)finalize;	// 0x30bb6bb5
- (BOOL)isContiguous;	// 0x30bb6321
// converted property getter: - (id)lastModifiedTimestamp;	// 0x30bb62dd
- (BOOL)map;	// 0x30bb6dad
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x30bb6a0d
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x30bb686d
// converted property getter: - (id)path;	// 0x30bb62cd
- (unsigned long long)sharedCacheHeaderOffsetForPath:(id)path;	// 0x30bb7019
- (id)swappedView;	// 0x30bb67b5
- (id)view;	// 0x30bb6811
@end

