/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFolder.h"
#import "ImageCapture-Structs.h"


@interface MSCameraFolder : ICCameraFolder {
@private
	void *_msCameraFolderProperties;	// 12 = 0xc
}
@property(readonly, assign) timespec fsCreationTime;	// G=0x358c2ef1; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x358c2f09; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x358c2edd; 
@property(readonly, assign) long long fsSize;	// G=0x358c2f21; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x358c311d
- (void)dealloc;	// 0x358c3f6d
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x358c3521
- (void)enumerateContent;	// 0x358c3659
- (void)finalize;	// 0x358c3f25
- (id)folderMatchingPath:(id)path;	// 0x358c31a5
// declared property getter: - (timespec)fsCreationTime;	// 0x358c2ef1
// declared property getter: - (timespec)fsModificationTime;	// 0x358c2f09
// declared property getter: - (unsigned long long)fsSN;	// 0x358c2edd
// declared property getter: - (long long)fsSize;	// 0x358c2f21
- (id)itemMatchingName:(id)name fsSN:(unsigned long long)sn fsCreationTime:(timespec *)time fsSize:(long long)size;	// 0x358c329d
@end
