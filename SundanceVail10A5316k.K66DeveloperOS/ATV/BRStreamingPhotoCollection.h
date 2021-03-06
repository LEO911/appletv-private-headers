/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class NSArray, ATVDataClient, BRImageManager, BRMediaCollectionType, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
	ATVDataCollection *_collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClient *_dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, retain) ATVDataClient *dataClient;	// G=0x279f19; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x279f49; 
@property(assign) BOOL useForScreenSaver;	// G=0x279f39; S=0x279f29; converted property
+ (id)collectionWithATVMediaCollection:(id)atvmediaCollection;	// 0x2793ed
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x279429
- (id)initWithATVItems:(id)atvitems dataClient:(id)client;	// 0x27951d
- (id)initWithATVMediaCollection:(id)atvmediaCollection;	// 0x279491
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(id)client;	// 0x27958d
- (id)atvCollection;	// 0x279a3d
- (id)collectionID;	// 0x279905
- (id)collectionName;	// 0x279ce5
- (id)collectionType;	// 0x279cf5
- (int)count;	// 0x2799d1
// converted property getter: - (id)dataClient;	// 0x279f19
- (void)dealloc;	// 0x2795fd
- (id)description;	// 0x27968d
- (id)imageProxy;	// 0x2798a9
- (BOOL)isLibrary;	// 0x279e75
- (BOOL)isLocal;	// 0x279e35
- (id)keyAssetID;	// 0x279e39
- (id)mediaAssets;	// 0x279a4d
- (id)mediaTypes;	// 0x279ed5
- (id)photoAssets;	// 0x279c35
// declared property getter: - (id)preferredImageManager;	// 0x279f49
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x279f29
- (id)title;	// 0x279ca9
// converted property getter: - (BOOL)useForScreenSaver;	// 0x279f39
@end

