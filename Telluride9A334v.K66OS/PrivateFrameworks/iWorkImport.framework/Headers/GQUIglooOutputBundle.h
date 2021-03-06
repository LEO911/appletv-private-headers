/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQUOutputBundle.h"


__attribute__((visibility("hidden")))
@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {
@private
	CFDictionaryRef mAttachments;	// 4 = 0x4
	CFDataRef mMainHtmlData;	// 8 = 0x8
	CFStringRef mUriPrefix;	// 12 = 0xc
	CFStringRef mUuidStr;	// 16 = 0x10
}
- (id)init;	// 0x32c0fda9
- (CFDictionaryRef)attachments;	// 0x32c0f3b5
- (CFDictionaryRef)createOutputDictionary;	// 0x32c0fbbd
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x32c0fca5
- (void)dealloc;	// 0x32c0fd21
- (CFDataRef)mainHtmlData;	// 0x32c0f3a5
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x32c0fc31
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x32c0fc85
- (void)setDocumentSize:(CGSize)size;	// 0x32c0f3c5
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x32c0f3c9
- (void)setUriPrefix:(CFStringRef)prefix;	// 0x32c0fcf9
@end

