/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRPhotoMediaCollection.h> // Unknown library


@interface ATVDefaultPhotos : BRPhotoMediaCollection {
@private
	int _photosType;	// 44 = 0x2c
}
+ (id)appleDefaultPhotos:(int)photos;	// 0x3071a57d
+ (id)appleDefaultPhotosCollection:(int)collection;	// 0x3071a4e9
- (id)initWithPhotosType:(int)photosType;	// 0x3071a3f9
- (id)collectionID;	// 0x3071a3cd
- (id)collectionName;	// 0x3071a461
- (id)mediaAssets;	// 0x3071a435
@end

