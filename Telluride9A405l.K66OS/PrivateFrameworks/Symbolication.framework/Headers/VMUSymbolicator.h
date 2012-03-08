/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMUMachTaskContainer, NSMutableArray, NSString, NSArray;

@interface VMUSymbolicator : NSObject {
	NSMutableArray *_symbolOwners;	// 4 = 0x4
	NSArray *_symbolOwnerAddressRanges;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	VMUMachTaskContainer *_machTaskContainer;	// 16 = 0x10
	BOOL _isProtected;	// 20 = 0x14
}
@property(readonly, assign) BOOL isProtected;	// G=0x34f6dd0d; converted property
@property(readonly, retain) NSString *path;	// G=0x34f6dcfd; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x34f6dda9; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x34f70c69
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x34f70bfd
+ (BOOL)isIgnoreFunctionSymbols;	// 0x34f70c0d
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x34f6dff9
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x34f6dea1
+ (id)symbolicatorForPid:(int)pid;	// 0x34f6dfbd
+ (id)symbolicatorForSignature:(id)signature;	// 0x34f6e069
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x34f711c9
+ (id)symbolicatorForTask:(unsigned)task;	// 0x34f6df81
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x34f70d11
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x34f70e59
+ (id)symbolicatorsForPath:(id)path;	// 0x34f6e561
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x34f70ea1
- (BOOL)addSymbolRichFile:(id)file;	// 0x34f6e225
- (id)architecture;	// 0x34f6e871
- (BOOL)containsAddress:(unsigned long long)address;	// 0x34f6dd1d
- (void)dealloc;	// 0x34f6e7c5
- (id)description;	// 0x34f6ddf1
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x34f709b1
- (void)forceFullSymbolExtraction;	// 0x34f6e96d
// converted property getter: - (BOOL)isProtected;	// 0x34f6dd0d
// converted property getter: - (id)path;	// 0x34f6dcfd
- (int)pid;	// 0x34f6ddd1
- (id)programTextForAddress:(unsigned long long)address;	// 0x34f70c1d
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x34f710d5
- (id)regionForAddress:(unsigned long long)address;	// 0x34f703ad
- (id)regions;	// 0x34f704f5
- (id)regionsForName:(id)name;	// 0x34f6ffdd
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x34f70179
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x34f70689
- (id)signature;	// 0x34f6ea95
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x34f6fd4d
- (id)sourceInfos;	// 0x34f6f049
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x34f6ecf1
- (id)symbolForAddress:(unsigned long long)address;	// 0x34f6fe95
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x34f6dd3d
- (id)symbolOwnerForName:(id)name;	// 0x34f6dd65
- (id)symbolOwnerForPath:(id)path;	// 0x34f6f339
// converted property getter: - (id)symbolOwners;	// 0x34f6dda9
- (id)symbolOwnersForName:(id)name;	// 0x34f6f65d
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x34f6fb11
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x34f6f4c5
- (id)symbols;	// 0x34f6f1c1
- (id)symbolsForMangledName:(id)mangledName;	// 0x34f6f819
- (id)symbolsForName:(id)name;	// 0x34f6f995
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x34f6ee9d
@end
