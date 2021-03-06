/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface ChunkData : XXUnknownSuperclass {
	int reserved;	// 4 = 0x4
	long long pts;	// 8 = 0x8
	long long startOffset;	// 16 = 0x10
	int chunkSize;	// 24 = 0x18
	NSData *iv;	// 28 = 0x1c
}
- (id)initWithBuffer:(id)buffer ivSize:(unsigned)size;	// 0x491865
- (void)dealloc;	// 0x491a3d
- (int)getChunkSize;	// 0x491a1d
- (id)getIV;	// 0x491a2d
- (long long)getPTS;	// 0x4919e1
- (long long)getPTSInNS;	// 0x4919c9
- (int)getReserved;	// 0x4919b9
- (long long)getStartOffset;	// 0x491a05
@end

