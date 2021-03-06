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
@property(retain) id filePath;	// G=0x30bc1449; S=0x30bc13bd; converted property
@property(assign) float micVolume;	// G=0x30bc1865; S=0x30bc188d; converted property
- (id)init;	// 0x30bc1221
- (BOOL)activate:(id *)activate;	// 0x30bc1649
- (id)attributeForKey:(id)key;	// 0x30bc1559
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x30bc1a2d
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x30bc1a05
- (unsigned)audioNumDeviceChannels;	// 0x30bc19a1
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x30bc181d
- (void)deactivate;	// 0x30bc1845
- (void)dealloc;	// 0x30bc12d1
// converted property getter: - (id)filePath;	// 0x30bc1449
- (void)implNotification:(id)notification;	// 0x30bc15d5
- (BOOL)isActive;	// 0x30bc17cd
- (BOOL)isRecording;	// 0x30bc17a5
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x30bc1a55
// converted property getter: - (float)micVolume;	// 0x30bc1865
- (double)recordedDuration;	// 0x30bc1921
- (long long)recordedFileSizeInBytes;	// 0x30bc18ad
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x30bc14cd
// converted property setter: - (void)setFilePath:(id)path;	// 0x30bc13bd
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x30bc188d
- (BOOL)start;	// 0x30bc175d
- (void)stop;	// 0x30bc1785
- (BOOL)takePhoto;	// 0x30bc17f5
@end

