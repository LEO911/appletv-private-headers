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
@property(retain) id filePath;	// G=0x335d89a1; S=0x335d8951; converted property
@property(assign) float micVolume;	// G=0x335d8cfd; S=0x335d8d25; converted property
- (id)init;	// 0x335d8811
- (BOOL)activate:(id *)activate;	// 0x335d8ae1
- (id)attributeForKey:(id)key;	// 0x335d8a39
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x335d8df1
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x335d8dc9
- (unsigned)audioNumDeviceChannels;	// 0x335d8da9
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x335d8cb5
- (void)deactivate;	// 0x335d8cdd
- (void)dealloc;	// 0x335d889d
// converted property getter: - (id)filePath;	// 0x335d89a1
- (void)implNotification:(id)notification;	// 0x335d8a6d
- (BOOL)isActive;	// 0x335d8c65
- (BOOL)isRecording;	// 0x335d8c3d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x335d8e19
// converted property getter: - (float)micVolume;	// 0x335d8cfd
- (double)recordedDuration;	// 0x335d8d71
- (long long)recordedFileSizeInBytes;	// 0x335d8d45
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x335d89e9
// converted property setter: - (void)setFilePath:(id)path;	// 0x335d8951
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x335d8d25
- (BOOL)start;	// 0x335d8bf5
- (void)stop;	// 0x335d8c1d
- (BOOL)takePhoto;	// 0x335d8c8d
@end
