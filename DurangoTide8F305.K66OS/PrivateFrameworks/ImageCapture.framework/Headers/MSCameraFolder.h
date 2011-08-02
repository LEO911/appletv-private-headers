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
@property(readonly, assign) timespec fsCreationTime;	// G=0x312e84ed; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x312e8505; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x312e84dd; 
@property(readonly, assign) long long fsSize;	// G=0x312e851d; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x312e8745
- (void)dealloc;	// 0x312e8801
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x312e92ed
- (void)enumerateContent;	// 0x312e8afd
- (void)finalize;	// 0x312e87bd
- (id)folderMatchingPath:(id)path;	// 0x312e8a25
// declared property getter: - (timespec)fsCreationTime;	// 0x312e84ed
// declared property getter: - (timespec)fsModificationTime;	// 0x312e8505
// declared property getter: - (unsigned long long)fsSN;	// 0x312e84dd
// declared property getter: - (long long)fsSize;	// 0x312e851d
- (id)itemMatchingName:(id)name fsSN:(unsigned long long)sn fsCreationTime:(timespec *)time fsSize:(long long)size;	// 0x312e9661
@end
