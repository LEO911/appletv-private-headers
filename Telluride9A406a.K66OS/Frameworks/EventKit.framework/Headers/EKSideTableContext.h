/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSManagedObjectContext.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKSideTableContext : NSManagedObjectContext {
@private
	NSString *_path;	// 128 = 0x80
}
- (id)init;	// 0x3458f215
- (id)initWithPath:(id)path;	// 0x34535fb1
- (id)_alarmsMatchingPredicate:(id)predicate;	// 0x3458f229
- (id)_managedObjectModel;	// 0x345363c5
- (id)_pathForPersistentStore;	// 0x34536319
- (id)_persistentStoreCoordinator;	// 0x34536065
- (void)_removeSqliteFiles;	// 0x3458f5c5
- (id)_settingForKey:(id)key;	// 0x34536c75
- (id)_urlForPersistentStore;	// 0x345362e1
- (id)alarmsBetweenStartDate:(id)date endDate:(id)date2;	// 0x3458f3d5
- (void)deleteAllAlarms;	// 0x3458f2fd
- (id)insertNewAlarm;	// 0x3458f3ad
- (id)nextAlarmFireTime;	// 0x34536a7d
- (id)rootDirectory;	// 0x3453634d
- (void)setSetting:(id)setting forKey:(id)key;	// 0x3458f531
- (id)settingForKey:(id)key;	// 0x34536c41
@end

