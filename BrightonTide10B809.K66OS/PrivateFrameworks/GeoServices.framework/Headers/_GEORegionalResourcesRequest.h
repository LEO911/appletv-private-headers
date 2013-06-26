/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSMutableSet, GEOTileKeyMap, GEOTileKeyList;
@protocol _GEORegionalResourcesRequestDelegate;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesRequest : NSObject {
	GEOTileKeyList *_list;	// 4 = 0x4
	GEOTileKeyList *_keysWithResources;	// 8 = 0x8
	GEOTileKeyList *_completedList;	// 12 = 0xc
	GEOTileKeyMap *_keysToResourceIdentifiers;	// 16 = 0x10
	NSMutableSet *_resourceIdentifiers;	// 20 = 0x14
	id<_GEORegionalResourcesRequestDelegate> _delegate;	// 24 = 0x18
}
@property(assign, nonatomic) id<_GEORegionalResourcesRequestDelegate> delegate;	// G=0x33fdc59d; S=0x33fdc5ad; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSSet *resourceIdentifiers;	// G=0x33fdc5cd; @synthesize=_resourceIdentifiers
@property(readonly, assign, nonatomic) GEOTileKeyList *tileKeys;	// G=0x33fdc5bd; @synthesize=_list
- (id)initWithTileKeys:(id)tileKeys;	// 0x33fdbfed
- (void)addCompletedResourceIdentifier:(id)identifier;	// 0x33fdc371
- (void)addResourceIdentifiers:(id)identifiers forTileKeys:(id)tileKeys;	// 0x33fdc0e5
- (void)dealloc;	// 0x33fdc045
// declared property getter: - (id)delegate;	// 0x33fdc59d
// declared property getter: - (id)resourceIdentifiers;	// 0x33fdc5cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33fdc5ad
// declared property getter: - (id)tileKeys;	// 0x33fdc5bd
@end
