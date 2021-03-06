/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MusicController.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface MusicGenresController : MusicController {
}
+ (id)allGenresControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x303b5501
- (int)_headerCount;	// 0x303b5af5
- (ATVMediaQueryRef)createDataQuery;	// 0x303b5589
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x303b5631
- (id)errorForNoContent;	// 0x303b5611
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x303b58f9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x303b5989
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x303b58a5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x303b5771
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x303b58b1
@end

