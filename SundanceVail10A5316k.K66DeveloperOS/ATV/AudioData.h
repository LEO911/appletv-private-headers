/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AudioData : XXUnknownSuperclass {
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int audioFormat;	// 12 = 0xc
	int channelCount;	// 16 = 0x10
	int sampleCount;	// 20 = 0x14
	NSString *audioLanguageCode;	// 24 = 0x18
}
- (id)initWithBuffer:(id)buffer;	// 0x449c0d
- (void)dealloc;	// 0x449db5
- (int)getAudioFormat;	// 0x449d75
- (id)getAudioLanguageCode;	// 0x449da5
- (int)getChannelCount;	// 0x449d85
- (int)getFlags;	// 0x449d55
- (int)getPID;	// 0x449d65
- (int)getSampleCount;	// 0x449d95
@end
