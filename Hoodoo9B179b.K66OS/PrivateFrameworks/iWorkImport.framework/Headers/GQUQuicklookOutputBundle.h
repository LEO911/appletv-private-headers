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
@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle> {
@private
	CFDictionaryRef mQuicklookProperties;	// 4 = 0x4
	CFDictionaryRef mAttachments;	// 8 = 0x8
	CFDataRef mMainHtmlData;	// 12 = 0xc
	CFStringRef mUriScheme;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
}
- (id)init;	// 0x359b23e1
- (id)initWithUriScheme:(CFStringRef)uriScheme;	// 0x359b2869
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x359b2789
- (void)dealloc;	// 0x359b27cd
- (BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)previewRequest;	// 0x359b238d
- (CFDataRef)mainHtmlData;	// 0x359b236d
- (CFDictionaryRef)quicklookDictionary;	// 0x359b237d
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x359b267d
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x359b2769
- (void)setDocumentSize:(CGSize)size;	// 0x359b2609
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x359b23a5
@end

