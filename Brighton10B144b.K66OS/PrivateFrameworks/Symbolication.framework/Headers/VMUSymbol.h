/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString *_name;	// 20 = 0x14
	NSString *_mangledName;	// 24 = 0x18
	VMUSymbolOwner *_owner;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, assign) unsigned flags;	// G=0x35595c79; converted property
@property(readonly, retain) NSString *mangledName;	// G=0x35595a85; converted property
@property(readonly, retain) NSString *name;	// G=0x35595a05; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x35595abd; S=0x355960e1; converted property
+ (id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x355958d5
- (id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x35595945
- (VMURange)addressRange;	// 0x35595a95
- (int)compare:(id)compare;	// 0x35595d31
- (id)copyWithZone:(NSZone *)zone;	// 0x35596041
- (void)dealloc;	// 0x35595fc9
- (id)description;	// 0x35595f49
// converted property getter: - (unsigned)flags;	// 0x35595c79
- (BOOL)isArm;	// 0x35595d15
- (BOOL)isDwarf;	// 0x35595d01
- (BOOL)isDyldStub;	// 0x35595cc5
- (BOOL)isEqualToSymbol:(id)symbol;	// 0x35595df5
- (BOOL)isExternal;	// 0x35595cd9
- (BOOL)isFunction;	// 0x35595c89
- (BOOL)isJavaMethod;	// 0x35595cb1
- (BOOL)isObjcMethod;	// 0x35595c9d
- (BOOL)isStab;	// 0x35595ced
- (BOOL)isThumb;	// 0x35595d2d
// converted property getter: - (id)mangledName;	// 0x35595a85
// converted property getter: - (id)name;	// 0x35595a05
// converted property getter: - (id)owner;	// 0x35595abd
// converted property setter: - (void)setOwner:(id)owner;	// 0x355960e1
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x35595b15
- (id)sourceInfos;	// 0x35595acd
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x35595b85
- (id)text;	// 0x35595c15
@end

