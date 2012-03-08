/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"

@class NSString;

@interface ATVFlickrCollection : ATVInternetPhotosCollection {
@private
	NSString *_keyImageFlickrIdentifier;	// 64 = 0x40
}
@property(retain) NSString *keyImageFlickrIdentifier;	// G=0x330d6515; S=0x330d65e1; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x330d63c9
- (id)archivableCollectionInfo;	// 0x330d66b1
- (id)collectionType;	// 0x330d67e5
- (void)dealloc;	// 0x330d64c9
// converted property getter: - (id)keyImageFlickrIdentifier;	// 0x330d6515
- (id)mediaTypes;	// 0x330d67a1
// converted property setter: - (void)setKeyImageFlickrIdentifier:(id)identifier;	// 0x330d65e1
@end
