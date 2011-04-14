/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRDataStoreProvider.h"


@interface BRSeriesProvider : BRDataStoreProvider {
}
- (id)initWithDataStore:(id)dataStore;	// 0x3293aab5
- (void)_dataStoreInsertionNotification:(id)notification;	// 0x3293a9c1
- (void)_dataStoreModificationNotification:(id)notification;	// 0x3293a959
- (void)_dataStoreRemovedNotification:(id)notification;	// 0x3293a8f1
- (void)_databaseObjectWasAdded:(id)added;	// 0x3293a899
- (void)dealloc;	// 0x3293aa61
- (id)hashForDataAtIndex:(long)index;	// 0x3293aa29
@end
