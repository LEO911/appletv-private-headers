/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSData, NSMutableDictionary;

@interface MLPhotoBakedThumbnailsCollection : NSObject {
@private
	NSData *_data;	// 4 = 0x4
	NSMutableDictionary *_bakedThumbnails;	// 8 = 0x8
}
+ (void)setTesting:(BOOL)testing;	// 0x3181fe75
- (id)init;	// 0x318200e1
- (id)initWithContentsOfFile:(id)file;	// 0x31820155
- (void)_parseDataWithContentsOfFile:(id)file;	// 0x318206c5
- (id)availableFormats;	// 0x318200c1
- (id)bakedThumbnailsForFormat:(int)format;	// 0x3181ff79
- (void)dealloc;	// 0x318200f9
- (void)saveToFile:(id)file;	// 0x31820199
- (void)setBakedThumbnails:(id)thumbnails forFormat:(int)format;	// 0x3181fe81
@end
