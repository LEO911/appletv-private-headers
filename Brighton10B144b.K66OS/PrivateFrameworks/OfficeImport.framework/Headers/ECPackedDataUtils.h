/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface ECPackedDataUtils : NSObject {
}
+ (id)dumpDataToHexadecimalString:(char *)hexadecimalString start:(unsigned)start stop:(unsigned)stop nicelyFormatted:(bool)formatted;	// 0x34a254b1
+ (char *)prepareForDataOfLength:(unsigned)length atIndex:(unsigned)index withPreviousLength:(unsigned)previousLength inPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size;	// 0x349884c5
+ (id)readStringFromData:(char *)data atOffset:(unsigned)offset withLength:(unsigned)length;	// 0x3499ec25
+ (bool)setData:(char *)data ofLength:(unsigned)length atIndex:(unsigned)index withPreviousLength:(unsigned)previousLength inPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size;	// 0x34a25471
+ (void)writeString:(id)string toPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size atIndex:(unsigned)index withPreviousLength:(unsigned short)previousLength outLength:(unsigned short *)length;	// 0x34988445
@end
