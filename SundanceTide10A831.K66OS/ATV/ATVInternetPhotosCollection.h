/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosCollection : BRPhotoMediaCollection {
	NSDate *_modDate;	// 44 = 0x2c
	NSDate *_lastCheckedDate;	// 48 = 0x30
	NSString *_parentAccountName;	// 52 = 0x34
	NSString *_parentAccountID;	// 56 = 0x38
	NSString *_previewURL;	// 60 = 0x3c
}
@property(retain) NSDate *lastCheckedDate;	// G=0x1b5ce9; S=0x1b5dc5; converted property
@property(retain) NSDate *modDate;	// G=0x1b576d; S=0x1b5849; converted property
@property(retain) NSString *parentAccountID;	// G=0x1b5af5; S=0x1b5bd1; converted property
@property(retain) NSString *parentAccountName;	// G=0x1b5931; S=0x1b5a0d; converted property
@property(retain) NSString *previewURL;	// G=0x1b5f95; S=0x1b5ead; converted property
- (id)collectionDictionary;	// 0x1b5ce1
- (void)dealloc;	// 0x1b56cd
- (BOOL)isLocal;	// 0x1b5ce5
// converted property getter: - (id)lastCheckedDate;	// 0x1b5ce9
// converted property getter: - (id)modDate;	// 0x1b576d
- (long)numberOfPhotos;	// 0x1b5cb9
// converted property getter: - (id)parentAccountID;	// 0x1b5af5
// converted property getter: - (id)parentAccountName;	// 0x1b5931
// converted property getter: - (id)previewURL;	// 0x1b5f95
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x1b5dc5
// converted property setter: - (void)setModDate:(id)date;	// 0x1b5849
// converted property setter: - (void)setParentAccountID:(id)anId;	// 0x1b5bd1
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x1b5a0d
// converted property setter: - (void)setPreviewURL:(id)url;	// 0x1b5ead
@end
