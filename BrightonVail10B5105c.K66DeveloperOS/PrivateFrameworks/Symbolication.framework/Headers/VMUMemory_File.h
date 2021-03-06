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
	unsigned long _mappedSize;	// 8 = 0x8
	NSDate *_lastModifiedTimestamp;	// 12 = 0xc
	VMURange _addressRange;	// 16 = 0x10
	VMURange _fileRange;	// 32 = 0x20
	NSString *_path;	// 48 = 0x30
	VMUArchitecture *_architecture;	// 52 = 0x34
	NSMutableDictionary *_sharedCacheMap;	// 56 = 0x38
}
@property(readonly, assign) VMURange addressRange;	// G=0x34ea5ed1; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x34ea5ef5; converted property
@property(readonly, retain) NSDate *lastModifiedTimestamp;	// G=0x34ea5921; converted property
@property(readonly, retain) NSString *path;	// G=0x34ea5911; converted property
+ (id)headerFromSharedCacheWithPath:(id)path;	// 0x34ea5539
+ (id)headerWithPath:(id)path;	// 0x34ea5491
+ (id)memoryWithPath:(id)path;	// 0x34ea56fd
+ (id)memoryWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x34ea5779
- (id)initWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x34ea57e9
// converted property getter: - (VMURange)addressRange;	// 0x34ea5ed1
// converted property getter: - (id)architecture;	// 0x34ea5ef5
- (void)buildSharedCacheMap;	// 0x34ea5931
- (void)dealloc;	// 0x34ea5d6d
- (id)description;	// 0x34ea5cd9
- (void)finalize;	// 0x34ea5e79
- (BOOL)isContiguous;	// 0x34ea5f05
// converted property getter: - (id)lastModifiedTimestamp;	// 0x34ea5921
- (BOOL)map;	// 0x34ea5a85
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x34ea5f09
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x34ea60a1
// converted property getter: - (id)path;	// 0x34ea5911
- (unsigned long long)sharedCacheHeaderOffsetForPath:(id)path;	// 0x34ea5a4d
- (id)swappedView;	// 0x34ea62b5
- (id)view;	// 0x34ea6255
@end

