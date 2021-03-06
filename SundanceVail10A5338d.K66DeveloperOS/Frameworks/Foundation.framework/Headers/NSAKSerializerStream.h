/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSSerializerStream.h"
#import "Foundation-Structs.h"


@interface NSAKSerializerStream : NSObject <NSSerializerStream> {
	void *memory;	// 4 = 0x4
	unsigned current;	// 8 = 0x8
	unsigned max;	// 12 = 0xc
	CFDictionaryRef roomForIntLocations;	// 16 = 0x10
}
- (void)copySerializationInto:(void *)into;	// 0x37409da9
- (void)dealloc;	// 0x37409719
- (void)finalize;	// 0x374097e5
- (unsigned)writeAlignedDataSize:(unsigned)size;	// 0x374099a5
- (unsigned)writeData:(const void *)data length:(unsigned)length;	// 0x37409a71
- (void)writeDelayedInt:(unsigned)int for:(int)aFor;	// 0x37409be9
- (unsigned)writeInt:(unsigned)int;	// 0x37409849
- (unsigned)writeRoomForInt:(int *)int;	// 0x37409b51
- (BOOL)writeToPath:(id)path safely:(BOOL)safely;	// 0x37409cb1
@end

