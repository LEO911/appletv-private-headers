/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"


__attribute__((visibility("hidden")))
@interface ATVDefaultPhotos : BRPhotoMediaCollection {
	int _photosType;	// 44 = 0x2c
}
+ (id)appleDefaultPhotos:(int)photos;	// 0x138995
+ (id)appleDefaultPhotosCollection:(int)collection;	// 0x138b75
+ (int)unsetDefaultPhotosType;	// 0x138c4d
- (id)initWithPhotosType:(int)photosType;	// 0x138c51
- (id)collectionID;	// 0x138cdd
- (id)collectionName;	// 0x138c95
- (id)mediaAssets;	// 0x138d21
@end
