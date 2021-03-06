/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQUProgressiveHelper : NSObject {
	const void *mClient;	// 4 = 0x4
	XXStruct_1D5yyA *mCallBacks;	// 8 = 0x8
	unsigned char started;	// 12 = 0xc
	CFStringRef mNumbersSheetUri;	// 16 = 0x10
	float mPreviewHeight;	// 20 = 0x14
	float mPreviewWidth;	// 24 = 0x18
	BOOL mStartedMainHTML;	// 28 = 0x1c
}
- (id)initWithClient:(const void *)client andCallbacks:(XXStruct_1D5yyA *)callbacks;	// 0x34c5f969
- (void)appendDataToAttachment:(CFURLRef)attachment chunk:(CFDataRef)chunk;	// 0x34c5faa9
- (void)closeAttachment:(CFURLRef)attachment;	// 0x34c5fb15
- (CFURLRef)createAttachment:(CFStringRef)attachment options:(CFDictionaryRef)options;	// 0x34c5fa7d
- (void)dealloc;	// 0x34c5f9e9
- (void)displayGenericError:(CFErrorRef)error;	// 0x34c5fbbd
- (CFStringRef)getNumbersSheetUri;	// 0x34c5fb6d
- (float)getPreviewHeight;	// 0x34c5fbad
- (float)getPreviewWidth;	// 0x34c5fb9d
- (BOOL)previewHasStreamedMainHTML;	// 0x34c5fbe1
- (void)setNumbersSheetUri:(CFStringRef)uri;	// 0x34c5fb3d
- (void)setPreviewHeight:(float)height andWidth:(float)width;	// 0x34c5fb7d
- (void)startDataWithOptions:(CFDictionaryRef)options;	// 0x34c5fa2d
@end

