/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCopying.h"

@class NSString, NSArray, NSDictionary;
@protocol VMUMemory;

@interface VMUSymbolOwner : NSObject <NSCopying> {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_signature;	// 8 = 0x8
	id<VMUMemory> _textMemory;	// 12 = 0xc
	NSArray *_regions;	// 16 = 0x10
	NSArray *_symbols;	// 20 = 0x14
	NSArray *_sourceInfos;	// 24 = 0x18
	unsigned _flags;	// 28 = 0x1c
	unsigned _currentVersion;	// 32 = 0x20
	unsigned _compatibilityVersion;	// 36 = 0x24
}
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x32cac551; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x32cac541; converted property
@property(readonly, assign) unsigned flags;	// G=0x32cac531; converted property
@property(readonly, retain) NSString *name;	// G=0x32cac4e1; converted property
@property(readonly, retain) NSArray *regions;	// G=0x32cac501; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x32cac4f1; converted property
@property(readonly, retain) NSArray *sourceInfos;	// G=0x32cac521; converted property
@property(readonly, retain) NSArray *symbols;	// G=0x32cac511; converted property
+ (id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x32cac7e1
- (id)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x32cac619
- (id)architecture;	// 0x32cad165
- (int)compare:(id)compare;	// 0x32cacc91
// converted property getter: - (unsigned)compatibilityVersion;	// 0x32cac551
- (BOOL)containsAddress:(unsigned long long)address;	// 0x32cad13d
- (id)copyWithZone:(NSZone *)zone;	// 0x32cac851
// converted property getter: - (unsigned)currentVersion;	// 0x32cac541
- (void)dealloc;	// 0x32cacb29
- (id)description;	// 0x32cacc09
// converted property getter: - (unsigned)flags;	// 0x32cac531
- (BOOL)isAOut;	// 0x32cac5b1
- (BOOL)isBundle;	// 0x32cac5ed
- (BOOL)isCommpage;	// 0x32cac59d
- (BOOL)isDsym;	// 0x32cac605
- (BOOL)isDyld;	// 0x32cac5d9
- (BOOL)isDylib;	// 0x32cac5c5
- (BOOL)isEqualToSymbolOwner:(id)symbolOwner;	// 0x32cacd9d
- (BOOL)isLazy;	// 0x32cada71
- (BOOL)isMachO;	// 0x32cac561
- (BOOL)isPEF;	// 0x32cac589
- (BOOL)isProtected;	// 0x32cac575
// converted property getter: - (id)name;	// 0x32cac4e1
- (id)path;	// 0x32cad195
- (id)programTextForAddress:(unsigned long long)address;	// 0x32cadc19
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x32cadc75
- (id)regionForAddress:(unsigned long long)address;	// 0x32cad059
// converted property getter: - (id)regions;	// 0x32cac501
- (id)regionsForName:(id)name;	// 0x32cad071
// converted property getter: - (id)signature;	// 0x32cac4f1
- (unsigned long long)size;	// 0x32cadf05
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x32cadcdd
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x32cace4d
// converted property getter: - (id)sourceInfos;	// 0x32cac521
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x32cacded
- (id)symbolForAddress:(unsigned long long)address;	// 0x32cad041
- (id)symbolForName:(id)name;	// 0x32cacf31
- (id)symbolOwnerByAddingContentsOfOwner:(id)owner;	// 0x32cada79
// converted property getter: - (id)symbols;	// 0x32cac511
- (id)symbolsForMangledName:(id)mangledName;	// 0x32cace65
- (id)symbolsForName:(id)name;	// 0x32cacf75
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x32cace1d
- (BOOL)validate;	// 0x32cada75
@end

