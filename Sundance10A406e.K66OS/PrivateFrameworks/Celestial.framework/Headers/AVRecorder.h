/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVRecorder : NSObject {
	AVRecorderPrivate *_priv;	// 4 = 0x4
}
@property(retain) id filePath;	// G=0x36cbcaf1; S=0x36cbcaa1; converted property
@property(assign) float micVolume;	// G=0x36cbce4d; S=0x36cbce75; converted property
- (id)init;	// 0x36cbc961
- (BOOL)activate:(id *)activate;	// 0x36cbcc31
- (id)attributeForKey:(id)key;	// 0x36cbcb89
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x36cbcf41
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x36cbcf19
- (unsigned)audioNumDeviceChannels;	// 0x36cbcef9
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x36cbce05
- (void)deactivate;	// 0x36cbce2d
- (void)dealloc;	// 0x36cbc9ed
// converted property getter: - (id)filePath;	// 0x36cbcaf1
- (void)implNotification:(id)notification;	// 0x36cbcbbd
- (BOOL)isActive;	// 0x36cbcdb5
- (BOOL)isRecording;	// 0x36cbcd8d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x36cbcf69
// converted property getter: - (float)micVolume;	// 0x36cbce4d
- (double)recordedDuration;	// 0x36cbcec1
- (long long)recordedFileSizeInBytes;	// 0x36cbce95
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x36cbcb39
// converted property setter: - (void)setFilePath:(id)path;	// 0x36cbcaa1
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x36cbce75
- (BOOL)start;	// 0x36cbcd45
- (void)stop;	// 0x36cbcd6d
- (BOOL)takePhoto;	// 0x36cbcddd
@end
