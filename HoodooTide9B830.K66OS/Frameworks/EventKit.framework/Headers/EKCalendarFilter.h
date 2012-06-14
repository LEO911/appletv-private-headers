/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKCalendarFilter : NSObject <NSCopying> {
@private
	opaque_pthread_mutex_t _lock;	// 4 = 0x4
	NSMutableSet *_calendarUIDs;	// 48 = 0x30
	CalDatabase *_database;	// 52 = 0x34
	NSMutableDictionary *_queryCache;	// 56 = 0x38
	NSString *_searchTerm;	// 60 = 0x3c
	int _entityType;	// 64 = 0x40
}
@property(copy, nonatomic) NSString *searchTerm;	// G=0x32457189; S=0x324934cd; @synthesize=_searchTerm
+ (void)_addCalendarUIDsFromPrefs:(id)prefs toSet:(id)set database:(CalDatabase *)database;	// 0x32456e89
+ (void)_addCalendarWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x32456f65
+ (void)_addCalendarsForStoreWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x324931e9
- (id)initFilteringAllWithDatabase:(CalDatabase *)database;	// 0x32492d45
- (id)initWithDatabase:(CalDatabase *)database;	// 0x324567fd
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type;	// 0x32492d21
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type calendarUIDs:(id)uids;	// 0x3245681d
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type showingCalendarsWithUIDs:(id)uids;	// 0x32492df9
- (id)initWithDatabase:(CalDatabase *)database filteringCalendars:(id)calendars;	// 0x32492e51
- (id)initWithDatabase:(CalDatabase *)database showingCalendars:(id)calendars;	// 0x3246fe41
- (id)initWithDatabase:(CalDatabase *)database showingCalendarsWithUIDs:(id)uids;	// 0x32492d9d
- (id)initWithPersistentIdentifier:(id)persistentIdentifier database:(CalDatabase *)database;	// 0x324569ad
- (id)_UIDAntiSetWithCalendars:(id)calendars;	// 0x32461b55
- (id)_UIDSetWithCalendars:(id)calendars;	// 0x32459865
- (id)_addFilterToQuery:(id)query creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x32461709
- (id)_calendarUIDsFromPersistentIdentifier:(id)persistentIdentifier;	// 0x32456a09
- (void)_databaseWillChange:(id)_database;	// 0x32492ead
- (id)_generateUIDSetToFilterAllCalendars;	// 0x32492fc9
- (id)_generateUIDSetToFilterCalendars:(id)filterCalendars;	// 0x32492ef5
- (id)_generateUIDSetToShowCalendarUIDs:(id)showCalendarUIDs;	// 0x32492f45
- (id)_generateUIDSetToShowCalendars:(id)showCalendars;	// 0x3246fe9d
- (BOOL)_isFilteringAllWhileLocked;	// 0x324597d5
- (id)calendarIDClauseForQueryWithVariableName:(id)variableName;	// 0x32461919
- (id)copyWithZone:(NSZone *)zone;	// 0x32493181
- (void)dealloc;	// 0x32457199
- (id)filterQueryForKey:(id)key prefix:(id)prefix whereClause:(id)clause creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x324932a9
- (id)filterQueryForQueryString:(id)queryString creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x32461691
- (id)filteredCalendars;	// 0x32493039
- (BOOL)isCalendarUIDVisible:(id)visible;	// 0x3246df95
- (BOOL)isEqual:(id)equal;	// 0x32457061
- (BOOL)isFilteringAll;	// 0x32459749
- (BOOL)isShowingAll;	// 0x3245751d
- (id)persistentIdentifier;	// 0x3245dc09
- (void)removeCalendarWithUID:(id)uid;	// 0x32493161
// declared property getter: - (id)searchTerm;	// 0x32457189
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x324934cd
- (void)validate;	// 0x3246e459
- (int)visibleCalendarCountWithOptions:(int)options;	// 0x32457561
- (id)visibleCalendarsWithOptions:(int)options;	// 0x324577dd
@end
