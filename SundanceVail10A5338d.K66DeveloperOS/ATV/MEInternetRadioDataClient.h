/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDataClient.h"

@class ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MEInternetRadioDataClient : ATVDataClient {
	ITTunerCategoryList *_categories;	// 4 = 0x4
	AppContext *_appContext;	// 8 = 0x8
	ATVDataQuery *_stationQuery;	// 12 = 0xc
	id _stationQueryCompletionBlock;	// 16 = 0x10
}
@property(retain, nonatomic) ATVDataQuery *stationQuery;	// G=0x3c9b1; S=0x3c9c1; @synthesize=_stationQuery
@property(copy) id stationQueryCompletionBlock;	// G=0x3c9e9; S=0x3c9fd; @synthesize=_stationQueryCompletionBlock
+ (id)internetRadioDataClientWithAppContext:(AppContext *)appContext;	// 0x3b4c1
- (id)initWithAppContext:(AppContext *)appContext;	// 0x3b63d
- (void).cxx_destruct;	// 0x3ca0d
- (BOOL)applyFilter:(id)filter toObject:(id)object;	// 0x3c799
- (void)categoriesLoaded:(ITTunerCategoryList *)loaded withStatus:(long)status;	// 0x3b78d
- (id)collectionForCategory:(ITTunerCategoryInfo *)category;	// 0x3c749
- (void)concreteDataClientConnect;	// 0x3bd11
- (void)concreteDataClientDisconnect;	// 0x3bd61
- (void)dealloc;	// 0x3b689
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3be51
- (id)itemForStation:(ITTunerStationInfo *)station categoryID:(unsigned long)anId;	// 0x3c639
- (BOOL)processQueryAsync:(id)async;	// 0x3be31
// declared property setter: - (void)setStationQuery:(id)query;	// 0x3c9c1
// declared property setter: - (void)setStationQueryCompletionBlock:(id)block;	// 0x3c9fd
// declared property getter: - (id)stationQuery;	// 0x3c9b1
// declared property getter: - (id)stationQueryCompletionBlock;	// 0x3c9e9
- (void)stationsLoaded:(ITTunerStationList *)loaded withStatus:(long)status;	// 0x3b7c5
- (BOOL)supportsProperty:(id)property;	// 0x3bdfd
@end
