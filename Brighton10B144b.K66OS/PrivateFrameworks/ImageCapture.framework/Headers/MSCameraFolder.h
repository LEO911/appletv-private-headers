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
@property(readonly, assign) timespec fsCreationTime;	// G=0x341fd1e1; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x341fd1f9; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x341fd1cd; 
@property(readonly, assign) long long fsSize;	// G=0x341fd211; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x341fd0b9
- (void)dealloc;	// 0x341fd13d
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x341fdaa5
- (void)enumerateContent;	// 0x341fd225
- (void)finalize;	// 0x341fd185
- (id)folderMatchingPath:(id)path;	// 0x341fde91
// declared property getter: - (timespec)fsCreationTime;	// 0x341fd1e1
// declared property getter: - (timespec)fsModificationTime;	// 0x341fd1f9
// declared property getter: - (unsigned long long)fsSN;	// 0x341fd1cd
// declared property getter: - (long long)fsSize;	// 0x341fd211
- (id)itemMatchingName:(id)name fsSN:(unsigned long long)sn fsCreationTime:(timespec *)time fsSize:(long long)size;	// 0x341fdbed
@end

