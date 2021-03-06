/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISStoreURLOperationDelegate.h"

@class ISURLBag, NSArray, BRBackgroundTask, ATVStoreEnvironment, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVStoreFront : XXUnknownSuperclass <ISStoreURLOperationDelegate> {
	BRBackgroundTask *_bagReloadTask;	// 4 = 0x4
	NSArray *_storeFronts;	// 8 = 0x8
	NSDictionary *_currentStoreFront;	// 12 = 0xc
	NSArray *_rootCollection;	// 16 = 0x10
	NSArray *_vendorBags;	// 20 = 0x14
	ISURLBag *_bag;	// 24 = 0x18
	BOOL _isStoreFrontChanging;	// 28 = 0x1c
	ATVStoreEnvironment *_environment;	// 32 = 0x20
	unsigned _loadBagRetryAttempt;	// 36 = 0x24
	unsigned _loadStoreFrontRetryAttempt;	// 40 = 0x28
	unsigned _loadAvailableStoreFrontRetryAttempt;	// 44 = 0x2c
	BOOL _bagCanBeRefreshedByStoreServices;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSDictionary *atvHeaders;	// G=0x3cdf55; 
@property(readonly, assign, nonatomic) ISURLBag *bag;	// G=0x3ce5dd; @synthesize=_bag
@property(assign) BOOL bagCanBeRefreshedByStoreServices;	// G=0x3cfcf9; S=0x3cfd11; @synthesize=_bagCanBeRefreshedByStoreServices
@property(readonly, assign, nonatomic) NSDictionary *commonHeaders;	// G=0x3cdc3d; 
@property(retain) NSDictionary *currentStoreFront;	// G=0x3cfba1; S=0x3cfbb5; @synthesize=_currentStoreFront
@property(retain, nonatomic) ATVStoreEnvironment *environment;	// G=0x3cfc3d; S=0x3cfc4d; @synthesize=_environment
@property(assign) BOOL isChangingStoreFront;	// G=0x3cfc0d; S=0x3cfc25; @synthesize=_isStoreFrontChanging
@property(assign) unsigned loadAvailableStoreFrontRetryAttempt;	// G=0x3cfccd; S=0x3cfce1; @synthesize=_loadAvailableStoreFrontRetryAttempt
@property(assign) unsigned loadBagRetryAttempt;	// G=0x3cfc75; S=0x3cfc89; @synthesize=_loadBagRetryAttempt
@property(assign) unsigned loadStoreFrontRetryAttempt;	// G=0x3cfca1; S=0x3cfcb5; @synthesize=_loadStoreFrontRetryAttempt
@property(retain) NSArray *rootCollection;	// G=0x3cfbc5; S=0x3cfbd9; @synthesize=_rootCollection
@property(retain) NSArray *storeFronts;	// G=0x3cfb7d; S=0x3cfb91; @synthesize=_storeFronts
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersDictionary;	// G=0x3cdd11; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersWithDsid;	// G=0x3cddd5; 
@property(retain) NSArray *vendorBags;	// G=0x3cfbe9; S=0x3cfbfd; @synthesize=_vendorBags
+ (id)storeFront;	// 0x3cd8e5
- (id)init;	// 0x3cd99d
- (void).cxx_destruct;	// 0x3cfd29
- (double)_BagReloadInterval;	// 0x3cfef9
- (id)_acceptLanguage;	// 0x3cf849
- (void)_accountStoreChanged:(id)changed;	// 0x3ce6ed
- (id)_bagContext;	// 0x3ceaa1
- (id)_init;	// 0x3cd9ed
- (void)_internetStateChanged:(id)changed;	// 0x3ce661
- (void)_languageChanged:(id)changed;	// 0x3ce739
- (void)_loadAvailableStoreFronts;	// 0x3cebad
- (void)_loadBag;	// 0x3ce779
- (void)_loadStoreFront;	// 0x3cefbd
- (void)_processStoreFront:(id)front;	// 0x3cf311
- (void)_retry:(unsigned)retry withSelector:(SEL)selector;	// 0x3cf761
- (void)_setCurrentStoreFront;	// 0x3cf58d
- (void)_sniffEnvironment:(id)environment;	// 0x3cfad1
- (void)_storeFrontChanged:(id)changed;	// 0x3ce6a1
- (BOOL)_switchToStoreFront:(id)storeFront force:(BOOL)force;	// 0x3ce18d
- (void)_updateDateAndTimeFromResponse:(id)response;	// 0x3cf8f9
- (void)_updateReloadTaskWithInterval:(double)interval;	// 0x3cfdc1
- (id)_userIdentifier;	// 0x3ceb21
// declared property getter: - (id)atvHeaders;	// 0x3cdf55
// declared property getter: - (id)bag;	// 0x3ce5dd
// declared property getter: - (BOOL)bagCanBeRefreshedByStoreServices;	// 0x3cfcf9
- (id)bagURLForKey:(id)key;	// 0x3ce051
- (id)bagValueForKey:(id)key;	// 0x3ce0b1
// declared property getter: - (id)commonHeaders;	// 0x3cdc3d
// declared property getter: - (id)currentStoreFront;	// 0x3cfba1
- (void)dealloc;	// 0x3cdbd1
// declared property getter: - (id)environment;	// 0x3cfc3d
// declared property getter: - (BOOL)isChangingStoreFront;	// 0x3cfc0d
// declared property getter: - (unsigned)loadAvailableStoreFrontRetryAttempt;	// 0x3cfccd
// declared property getter: - (unsigned)loadBagRetryAttempt;	// 0x3cfc75
// declared property getter: - (unsigned)loadStoreFrontRetryAttempt;	// 0x3cfca1
- (void)refreshURLBag;	// 0x3ce111
// declared property getter: - (id)rootCollection;	// 0x3cfbc5
- (id)rootCollectionForMediaType:(id)mediaType;	// 0x3ce3dd
// declared property setter: - (void)setBagCanBeRefreshedByStoreServices:(BOOL)services;	// 0x3cfd11
// declared property setter: - (void)setCurrentStoreFront:(id)front;	// 0x3cfbb5
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x3cfc4d
// declared property setter: - (void)setIsChangingStoreFront:(BOOL)front;	// 0x3cfc25
// declared property setter: - (void)setLoadAvailableStoreFrontRetryAttempt:(unsigned)attempt;	// 0x3cfce1
// declared property setter: - (void)setLoadBagRetryAttempt:(unsigned)attempt;	// 0x3cfc89
// declared property setter: - (void)setLoadStoreFrontRetryAttempt:(unsigned)attempt;	// 0x3cfcb5
// declared property setter: - (void)setRootCollection:(id)collection;	// 0x3cfbd9
// declared property setter: - (void)setStoreFronts:(id)fronts;	// 0x3cfb91
// declared property setter: - (void)setVendorBags:(id)bags;	// 0x3cfbfd
// declared property getter: - (id)storeFronts;	// 0x3cfb7d
// declared property getter: - (id)storeHeadersDictionary;	// 0x3cdd11
// declared property getter: - (id)storeHeadersWithDsid;	// 0x3cddd5
- (BOOL)switchToStoreFront:(id)storeFront;	// 0x3ce3c5
// declared property getter: - (id)vendorBags;	// 0x3cfbe9
@end

