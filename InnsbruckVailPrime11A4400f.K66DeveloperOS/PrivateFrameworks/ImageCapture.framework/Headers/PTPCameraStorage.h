/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "PTPCameraFolder.h"

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {
	NSMutableArray *_tempArrayOfAllObjectHandles;	// 28 = 0x1c
	NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;	// 32 = 0x20
}
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandles;	// G=0x31286e69; converted property
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandlesToBeIgnored;	// G=0x31286e79; converted property
- (id)initWithStorageID:(unsigned long)storageID device:(id)device;	// 0x31286b35
- (void)dealloc;	// 0x31286ba1
- (void)prime;	// 0x31286c85
- (void)refreshInfo;	// 0x31286c05
// converted property getter: - (id)tempArrayOfAllObjectHandles;	// 0x31286e69
// converted property getter: - (id)tempArrayOfAllObjectHandlesToBeIgnored;	// 0x31286e79
@end

