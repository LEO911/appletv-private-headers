/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class SSSQLiteDatabase;

@interface SSUpdatesDatabaseSession : NSObject {
	SSSQLiteDatabase *_database;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) SSSQLiteDatabase *database;	// G=0x3285370d; @synthesize=_database
- (id)initWithDatabase:(id)database;	// 0x3285366d
// declared property getter: - (id)database;	// 0x3285370d
- (void)dealloc;	// 0x328536c1
@end

