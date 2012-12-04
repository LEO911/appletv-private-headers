/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSMetadataQuery : NSObject {
	unsigned _flags;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	id _private[11];	// 16 = 0x10
	void *_reserved;	// 60 = 0x3c
}
@property(assign) id delegate;	// G=0x3199fc55; S=0x3199fc69; converted property
@property(retain) id groupingAttributes;	// G=0x3199ff4d; S=0x3199ff61; converted property
@property(assign) double notificationBatchingInterval;	// G=0x319a01b9; S=0x319a01d1; converted property
@property(retain) id predicate;	// G=0x3199fcf5; S=0x3199fd05; converted property
@property(retain) id searchItemURLs;	// G=0x319a0315; S=0x319a0329; converted property
@property(retain) id searchScopes;	// G=0x319a0251; S=0x319a0265; converted property
@property(retain) id sortDescriptors;	// G=0x3199fdc5; S=0x3199fdd9; converted property
@property(retain) id valueListAttributes;	// G=0x3199fe89; S=0x3199fe9d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3199f801
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3199f721
- (id)init;	// 0x3199f805
- (id)_allAttributes;	// 0x319a010d
- (void)_noteNote1:(id)a1;	// 0x319a0441
- (void)_noteNote2:(id)a2;	// 0x319a0485
- (void)_noteNote3:(id)a3;	// 0x319a0515
- (void)_noteNote4:(id)a4;	// 0x319a05a5
- (id)_queryString;	// 0x319a06a9
- (void)_recreateQuery;	// 0x319a07bd
- (void)_resetQueryState;	// 0x319a06c9
- (void)_setBatchingParams;	// 0x319a03d9
- (id)_sortingAttributes;	// 0x319a0011
- (void)_update;	// 0x319a14ed
- (void)_zapResultArray;	// 0x319a1635
- (void)dealloc;	// 0x3199f93d
// converted property getter: - (id)delegate;	// 0x3199fc55
- (void)disableUpdates;	// 0x319a144d
- (void)enableUpdates;	// 0x319a1495
- (void)finalize;	// 0x3199fb65
- (id)groupedResults;	// 0x319a1b29
// converted property getter: - (id)groupingAttributes;	// 0x3199ff4d
- (unsigned)indexOfResult:(id)result;	// 0x319a17b9
- (BOOL)isGathering;	// 0x319a1425
- (BOOL)isStarted;	// 0x319a1411
- (BOOL)isStopped;	// 0x319a1439
// converted property getter: - (double)notificationBatchingInterval;	// 0x319a01b9
// converted property getter: - (id)predicate;	// 0x3199fcf5
- (id)resultAtIndex:(unsigned)index;	// 0x319a157d
- (unsigned)resultCount;	// 0x319a1555
- (id)results;	// 0x319a16a9
// converted property getter: - (id)searchItemURLs;	// 0x319a0315
// converted property getter: - (id)searchScopes;	// 0x319a0251
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3199fc69
// converted property setter: - (void)setGroupingAttributes:(id)attributes;	// 0x3199ff61
// converted property setter: - (void)setNotificationBatchingInterval:(double)interval;	// 0x319a01d1
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x3199fd05
// converted property setter: - (void)setSearchItemURLs:(id)urls;	// 0x319a0329
// converted property setter: - (void)setSearchScopes:(id)scopes;	// 0x319a0265
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x3199fdd9
// converted property setter: - (void)setValueListAttributes:(id)attributes;	// 0x3199fe9d
// converted property getter: - (id)sortDescriptors;	// 0x3199fdc5
- (BOOL)startQuery;	// 0x319a123d
- (void)stopQuery;	// 0x319a1325
// converted property getter: - (id)valueListAttributes;	// 0x3199fe89
- (id)valueLists;	// 0x319a17f1
- (id)valueOfAttribute:(id)attribute forResultAtIndex:(unsigned)index;	// 0x319a1cfd
@end
