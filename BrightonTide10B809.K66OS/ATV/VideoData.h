/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VideoData : XXUnknownSuperclass {
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int videoType;	// 12 = 0xc
	int width;	// 16 = 0x10
	int height;	// 20 = 0x14
	int parX;	// 24 = 0x18
	int parY;	// 28 = 0x1c
	long long averageFrameTime;	// 32 = 0x20
	int averageBitRate;	// 40 = 0x28
}
- (id)initWithBuffer:(id)buffer;	// 0x4b6ed1
- (int)getAverageBitRate;	// 0x4b70f5
- (long long)getAverageFrameTime;	// 0x4b70dd
- (int)getFlags;	// 0x4b706d
- (int)getHeight;	// 0x4b70ad
- (int)getPID;	// 0x4b707d
- (int)getParX;	// 0x4b70bd
- (int)getParY;	// 0x4b70cd
- (int)getVideoType;	// 0x4b708d
- (int)getWidth;	// 0x4b709d
@end

