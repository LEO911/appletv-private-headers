/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRImageProxy.h"

@class NSString;

@interface BRInternetRadioImageProxy : NSObject <BRImageProxy> {
@private
	NSString *_category;	// 4 = 0x4
}
- (id)initWithCategory:(id)category;	// 0x329ed9d1
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x329ed821
- (void)dealloc;	// 0x329ed989
- (id)defaultImageForImageSize:(int)imageSize;	// 0x329ed835
- (id)imageForImageSize:(int)imageSize;	// 0x329ed86d
- (id)imageIDForImageSize:(int)imageSize;	// 0x329ed951
- (id)object;	// 0x329ed825
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x329ed80d
@end

