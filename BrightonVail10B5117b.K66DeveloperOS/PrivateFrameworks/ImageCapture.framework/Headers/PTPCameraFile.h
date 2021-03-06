/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"

@class NSString;

@interface PTPCameraFile : ICCameraFile {
	void *_ptpCameraFileProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x343e4fd1; S=0x343e4fe5; 
@property(readonly, assign) unsigned long objHandle;	// G=0x343e4fbd; 
@property(retain) NSString *path;	// G=0x343e5d9d; S=0x343e5db1; @synthesize=_path
@property(readonly, assign) unsigned long storageID;	// G=0x343e4fa9; 
@property(readonly, assign) unsigned type;	// G=0x343e4f95; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x343e4e79
- (void)dealloc;	// 0x343e4edd
- (void)finalize;	// 0x343e4f39
// declared property getter: - (id)info;	// 0x343e4fd1
- (id)metadataDict;	// 0x343e5539
// declared property getter: - (unsigned long)objHandle;	// 0x343e4fbd
// declared property getter: - (id)path;	// 0x343e5d9d
// declared property setter: - (void)setInfo:(id)info;	// 0x343e4fe5
// declared property setter: - (void)setPath:(id)path;	// 0x343e5db1
// declared property getter: - (unsigned long)storageID;	// 0x343e4fa9
- (id)thumbData;	// 0x343e51a1
// declared property getter: - (unsigned)type;	// 0x343e4f95
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x343e5029
@end

