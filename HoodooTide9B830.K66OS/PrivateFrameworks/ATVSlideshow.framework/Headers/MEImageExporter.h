/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSOperation.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MEImageExporter : NSOperation {
	NSString *mOriginalPath;	// 12 = 0xc
	CGImageRef mOriginalImage;	// 16 = 0x10
	CGSize mSize;	// 20 = 0x14
	NSString *mDestinationPath;	// 28 = 0x1c
}
+ (id)operationWithOriginalPath:(id)originalPath loadedImage:(CGImageRef)image size:(CGSize)size andDestinationPath:(id)path;	// 0x321ec135
+ (id)operationWithOriginalPath:(id)originalPath size:(CGSize)size andDestinationPath:(id)path;	// 0x321ec0dd
- (id)initWithOriginalPath:(id)originalPath loadedImage:(CGImageRef)image size:(CGSize)size andDestinationPath:(id)path;	// 0x321ec24d
- (id)initWithOriginalPath:(id)originalPath size:(CGSize)size andDestinationPath:(id)path;	// 0x321ec195
- (void)cleanup;	// 0x321ec351
- (void)dealloc;	// 0x321ec311
- (void)main;	// 0x321ec3c1
@end

