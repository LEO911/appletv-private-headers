/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {
	id<VMUMemory> _parent;	// 4 = 0x4
	char *_data;	// 8 = 0x8
	VMURange _addressRange;	// 12 = 0xc
	VMUArchitecture *_architecture;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x36dcb399; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x36dcb3bd; converted property
- (id)initWithParent:(id)parent addressRange:(VMURange)range architecture:(id)architecture data:(char *)data;	// 0x36dcb2ed
// converted property getter: - (VMURange)addressRange;	// 0x36dcb399
// converted property getter: - (id)architecture;	// 0x36dcb3bd
- (void)dealloc;	// 0x36dcb87d
- (id)description;	// 0x36dcb805
- (BOOL)isContiguous;	// 0x36dcb3cd
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x36dcb3d1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x36dcb57d
- (id)swappedView;	// 0x36dcb7a5
- (id)view;	// 0x36dcb745
@end

