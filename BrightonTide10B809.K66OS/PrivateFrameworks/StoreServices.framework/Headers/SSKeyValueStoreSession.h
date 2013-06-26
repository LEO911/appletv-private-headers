/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject {
	SSSQLiteDatabase *_database;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) SSSQLiteDatabase *database;	// G=0x355090d5; @synthesize=_database
- (id)initWithDatabase:(id)database;	// 0x3550889d
- (id)copyAccountDictionaryForDomain:(id)domain;	// 0x3550893d
- (id)copyDataForDomain:(id)domain key:(id)key;	// 0x35508c8d
- (id)copyValueForDomain:(id)domain key:(id)key;	// 0x35508f11
// declared property getter: - (id)database;	// 0x355090d5
- (void)dealloc;	// 0x355088f1
- (id)existingEntityForDomain:(id)domain key:(id)key;	// 0x35508f81
- (id)iTunesValueForKey:(id)key usedDomain:(id *)domain;	// 0x35509061
@end
