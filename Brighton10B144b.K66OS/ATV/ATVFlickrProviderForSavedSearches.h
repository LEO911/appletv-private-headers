/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFlickrProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForSavedSearches : ATVFlickrProvider {
	NSMutableArray *_savedSearchCollections;	// 24 = 0x18
}
+ (id)providerOfSavedSearchCollections;	// 0x1bde31
- (id)init;	// 0x1bde69
- (id)_data;	// 0x1be1dd
- (BOOL)_handlesObject:(id)object;	// 0x1be1ed
- (void)_newSavedSearchToAddCollectionFor:(id)aFor;	// 0x1be2d5
- (void)_savedSearchTermRemoved:(id)removed;	// 0x1be3f1
- (void)dealloc;	// 0x1be0c1
- (id)hashForDataAtIndex:(long)index;	// 0x1be181
@end

