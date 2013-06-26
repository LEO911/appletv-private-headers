/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MEInternetRadioDataClient : XXUnknownSuperclass {
	ITTunerCategoryList *_categories;	// 4 = 0x4
	AppContext *_appContext;	// 8 = 0x8
	ATVDataQuery *_stationQuery;	// 12 = 0xc
	id _stationQueryCompletionBlock;	// 16 = 0x10
}
@property(retain, nonatomic) ATVDataQuery *stationQuery;	// G=0x21cdd; S=0x21ced; @synthesize=_stationQuery
@property(copy) id stationQueryCompletionBlock;	// G=0x21d15; S=0x21d29; @synthesize=_stationQueryCompletionBlock
+ (id)internetRadioDataClientWithAppContext:(AppContext *)appContext;	// 0x200ed
- (id)initWithAppContext:(AppContext *)appContext;	// 0x20291
- (void).cxx_destruct;	// 0x21d39
- (id)_convertCategory:(id)category;	// 0x21af5
- (BOOL)applyFilter:(id)filter toObject:(id)object;	// 0x213f1
- (void)cancelLoad:(id)load;	// 0x21af1
- (void)categoriesLoaded:(ITTunerCategoryList *)loaded withStatus:(long)status;	// 0x203dd
- (id)collectionForCategory:(ITTunerCategoryInfo *)category;	// 0x213b1
- (void)concreteDataClientConnect;	// 0x20989
- (void)concreteDataClientDisconnect;	// 0x209dd
- (void)dealloc;	// 0x202dd
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x20acd
- (id)imageKeyForObject:(id)object;	// 0x21629
- (id)itemForStation:(ITTunerStationInfo *)station categoryID:(unsigned long)anId;	// 0x212a1
- (id)loadImageForObject:(id)object size:(CGSize)size crop:(BOOL)crop completionHandler:(id)handler;	// 0x217ed
- (BOOL)processQueryAsync:(id)async;	// 0x20aad
// declared property setter: - (void)setStationQuery:(id)query;	// 0x21ced
// declared property setter: - (void)setStationQueryCompletionBlock:(id)block;	// 0x21d29
// declared property getter: - (id)stationQuery;	// 0x21cdd
// declared property getter: - (id)stationQueryCompletionBlock;	// 0x21d15
- (void)stationsLoaded:(ITTunerStationList *)loaded withStatus:(long)status;	// 0x20415
- (BOOL)supportsProperty:(id)property;	// 0x20a79
@end
