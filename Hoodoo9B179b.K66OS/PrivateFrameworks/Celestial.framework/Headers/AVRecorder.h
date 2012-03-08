/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


@interface AVRecorder : NSObject {
@private
	AVRecorderPrivate *_priv;	// 4 = 0x4
}
@property(retain) id filePath;	// G=0x30eab6c1; S=0x30eab66d; converted property
@property(assign) float micVolume;	// G=0x30eaba2d; S=0x30eaba69; converted property
- (id)init;	// 0x30eab521
- (BOOL)activate:(id *)activate;	// 0x30eab80d
- (id)attributeForKey:(id)key;	// 0x30eab761
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x30eabb41
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x30eabb19
- (unsigned)audioNumDeviceChannels;	// 0x30eabaf9
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x30eab9e5
- (void)deactivate;	// 0x30eaba0d
- (void)dealloc;	// 0x30eab5b1
// converted property getter: - (id)filePath;	// 0x30eab6c1
- (void)implNotification:(id)notification;	// 0x30eab799
- (BOOL)isActive;	// 0x30eab995
- (BOOL)isRecording;	// 0x30eab96d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x30eabb69
// converted property getter: - (float)micVolume;	// 0x30eaba2d
- (double)recordedDuration;	// 0x30eabab9
- (long long)recordedFileSizeInBytes;	// 0x30eaba89
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x30eab709
// converted property setter: - (void)setFilePath:(id)path;	// 0x30eab66d
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x30eaba69
- (BOOL)start;	// 0x30eab925
- (void)stop;	// 0x30eab94d
- (BOOL)takePhoto;	// 0x30eab9bd
@end
