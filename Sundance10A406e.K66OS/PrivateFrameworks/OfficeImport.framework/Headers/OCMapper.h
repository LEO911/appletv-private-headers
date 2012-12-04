/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OCCancel, TSUTemporaryDirectory;

@interface OCMapper : NSObject {
	OCCancel *mCancel;	// 4 = 0x4
	TSUTemporaryDirectory *mTemporaryDirectoryObject;	// 8 = 0x8
}
+ (id)mapperForCurrentThread;	// 0x350bb0b1
- (id)init;	// 0x350bad45
- (void)cancel;	// 0x350bae0d
- (void)dealloc;	// 0x350bada9
- (BOOL)isCancelled;	// 0x350bae2d
- (void)quit;	// 0x350bae51
- (void)setup;	// 0x350bae71
- (void)teardown;	// 0x350baf75
- (id)temporaryDirectoryPath;	// 0x350bb101
@end
