/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraFolder.h"


@interface MSCameraFolder : ICCameraFolder {
	void *_msCameraFolderProperties;	// 20 = 0x14
}
@property(readonly, assign) timespec fsCreationTime;	// G=0x34b154a1; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x34b154b9; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x34b1548d; 
@property(readonly, assign) long long fsSize;	// G=0x34b154d1; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x34b15379
- (void)dealloc;	// 0x34b153fd
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x34b15d65
- (void)enumerateContent;	// 0x34b154e5
- (void)finalize;	// 0x34b15445
- (id)folderMatchingPath:(id)path;	// 0x34b16151
// declared property getter: - (timespec)fsCreationTime;	// 0x34b154a1
// declared property getter: - (timespec)fsModificationTime;	// 0x34b154b9
// declared property getter: - (unsigned long long)fsSN;	// 0x34b1548d
// declared property getter: - (long long)fsSize;	// 0x34b154d1
- (id)itemMatchingName:(id)name fsSN:(unsigned long long)sn fsCreationTime:(timespec *)time fsSize:(long long)size;	// 0x34b15ead
@end

