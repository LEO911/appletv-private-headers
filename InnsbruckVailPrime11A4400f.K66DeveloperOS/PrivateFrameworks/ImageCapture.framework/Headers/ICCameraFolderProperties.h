/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>

@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject {
	NSMutableArray *_files;	// 4 = 0x4
	NSMutableArray *_folders;	// 8 = 0x8
}
@property(retain) NSMutableArray *files;	// G=0x31275dd1; S=0x31275de5; @synthesize=_files
@property(retain) NSMutableArray *folders;	// G=0x31275e15; S=0x31275e29; @synthesize=_folders
- (void)dealloc;	// 0x31275d21
// declared property getter: - (id)files;	// 0x31275dd1
- (void)finalize;	// 0x31275d79
// declared property getter: - (id)folders;	// 0x31275e15
// declared property setter: - (void)setFiles:(id)files;	// 0x31275de5
// declared property setter: - (void)setFolders:(id)folders;	// 0x31275e29
@end
