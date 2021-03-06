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
- (id)init;	// 0x30c4c931
- (id)initWithPath:(id)path;	// 0x30bf2df1
- (id)_alarmsMatchingPredicate:(id)predicate;	// 0x30c4c945
- (id)_managedObjectModel;	// 0x30bf3205
- (id)_pathForPersistentStore;	// 0x30bf3159
- (id)_persistentStoreCoordinator;	// 0x30bf2ea5
- (void)_removeSqliteFiles;	// 0x30c4cce1
- (id)_settingForKey:(id)key;	// 0x30bf3ab5
- (id)_urlForPersistentStore;	// 0x30bf3121
- (id)alarmsBetweenStartDate:(id)date endDate:(id)date2;	// 0x30c4caf1
- (void)deleteAllAlarms;	// 0x30c4ca19
- (id)insertNewAlarm;	// 0x30c4cac9
- (id)nextAlarmFireTime;	// 0x30bf38bd
- (id)rootDirectory;	// 0x30bf318d
- (void)setSetting:(id)setting forKey:(id)key;	// 0x30c4cc4d
- (id)settingForKey:(id)key;	// 0x30bf3a81
@end

