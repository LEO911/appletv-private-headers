/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCopying.h"
#import "VMUAddressRange.h"

@class NSString;

@interface VMUSourceInfo : VMUAddressRange <NSCopying> {
	NSString *_path;	// 20 = 0x14
	unsigned _lineNumber;	// 24 = 0x18
	unsigned _fileOffset;	// 28 = 0x1c
}
@property(readonly, assign) unsigned fileOffset;	// G=0x30126609; converted property
@property(readonly, assign) unsigned lineNumber;	// G=0x301265f9; converted property
@property(readonly, retain) NSString *path;	// G=0x301265e9; converted property
+ (id)sourceInfoWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;	// 0x3012674d
- (id)initWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;	// 0x301266a1
- (VMURange)addressRange;	// 0x30126619
- (int)compare:(id)compare;	// 0x30126641
- (id)copyWithZone:(NSZone *)zone;	// 0x301267ad
- (void)dealloc;	// 0x3012683d
- (id)description;	// 0x30126891
- (id)fileName;	// 0x30126a21
// converted property getter: - (unsigned)fileOffset;	// 0x30126609
- (BOOL)isEqualToSourceInfo:(id)sourceInfo;	// 0x30126925
// converted property getter: - (unsigned)lineNumber;	// 0x301265f9
// converted property getter: - (id)path;	// 0x301265e9
@end

