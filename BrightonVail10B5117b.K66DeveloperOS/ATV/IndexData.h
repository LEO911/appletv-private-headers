/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface IndexData : XXUnknownSuperclass {
	int flags;	// 4 = 0x4
	int ivSize;	// 8 = 0x8
	NSArray *chunkList;	// 12 = 0xc
}
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x4a50f1
- (void)dealloc;	// 0x4a52d1
- (id)getChunks;	// 0x4a52c1
- (int)getFlags;	// 0x4a52a1
- (int)getIVSize;	// 0x4a52b1
@end
