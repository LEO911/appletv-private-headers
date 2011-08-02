/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCCancelDelegate.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OCCancel : NSObject <OCCancelDelegate> {
@private
	BOOL mIsCancelled;	// 4 = 0x4
	BOOL mIsQuit;	// 5 = 0x5
}
- (id)init;	// 0x345f3f11
- (void)cancel;	// 0x345f3ec5
- (BOOL)isCancelled;	// 0x345f3ed5
- (BOOL)isQuit;	// 0x345f3f01
- (void)quit;	// 0x345f3ee5
@end
