/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "PTPCameraFolder.h"

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {
	NSMutableArray *_tempArrayOfAllObjectHandles;	// 20 = 0x14
	NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandles;	// G=0x358c997d; converted property
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandlesToBeIgnored;	// G=0x358c998d; converted property
- (id)initWithStorageID:(unsigned long)storageID device:(id)device;	// 0x358cd439
- (void)dealloc;	// 0x358cd7c9
- (void)prime;	// 0x358cd4a9
- (void)refreshInfo;	// 0x358cd749
// converted property getter: - (id)tempArrayOfAllObjectHandles;	// 0x358c997d
// converted property getter: - (id)tempArrayOfAllObjectHandlesToBeIgnored;	// 0x358c998d
@end

