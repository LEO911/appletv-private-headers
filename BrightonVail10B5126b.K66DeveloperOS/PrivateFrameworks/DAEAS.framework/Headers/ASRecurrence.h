/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSNumber, ASEvent, NSDate;

@interface ASRecurrence : ASItem <NSCoding> {
	NSNumber *_type;	// 40 = 0x28
	NSNumber *_interval;	// 44 = 0x2c
	NSNumber *_dayOfWeek;	// 48 = 0x30
	NSNumber *_dayOfMonth;	// 52 = 0x34
	NSNumber *_weekOfMonth;	// 56 = 0x38
	NSNumber *_monthOfYear;	// 60 = 0x3c
	NSDate *_until;	// 64 = 0x40
	NSNumber *_occurrences;	// 68 = 0x44
	NSNumber *_firstDayOfWeek;	// 72 = 0x48
	NSNumber *_calendarType;	// 76 = 0x4c
	ASEvent *_parentEvent;	// 80 = 0x50
}
@property(retain) NSNumber *calendarType;	// G=0x33a2a0f1; S=0x33a2a105; @synthesize=_calendarType
@property(retain) NSNumber *dayOfMonth;	// G=0x33a2a019; S=0x33a2a02d; @synthesize=_dayOfMonth
@property(retain) NSNumber *dayOfWeek;	// G=0x33a29ff5; S=0x33a2a009; @synthesize=_dayOfWeek
@property(retain) NSNumber *firstDayOfWeek;	// G=0x33a2a0cd; S=0x33a2a0e1; @synthesize=_firstDayOfWeek
@property(retain) NSNumber *interval;	// G=0x33a29fd1; S=0x33a29fe5; @synthesize=_interval
@property(retain) NSNumber *monthOfYear;	// G=0x33a2a061; S=0x33a2a075; @synthesize=_monthOfYear
@property(retain) NSNumber *occurrences;	// G=0x33a2a0a9; S=0x33a2a0bd; @synthesize=_occurrences
@property(retain) NSNumber *type;	// G=0x33a29fad; S=0x33a29fc1; @synthesize=_type
@property(retain) NSDate *until;	// G=0x33a2a085; S=0x33a2a099; @synthesize=_until
@property(retain) NSNumber *weekOfMonth;	// G=0x33a2a03d; S=0x33a2a051; @synthesize=_weekOfMonth
+ (BOOL)acceptsTopLevelLeaves;	// 0x33a27ca1
+ (id)asParseRules;	// 0x33a28085
+ (BOOL)frontingBasicTypes;	// 0x33a27d9d
+ (BOOL)notifyOfUnknownTokens;	// 0x33a27df1
+ (BOOL)parsingLeafNode;	// 0x33a27cf5
+ (BOOL)parsingWithSubItems;	// 0x33a27d49
- (id)initWithCalRecurrence:(void *)calRecurrence parentEvent:(id)event;	// 0x33a296b5
- (id)initWithCoder:(id)coder;	// 0x33a29b65
- (BOOL)_loadAttributesFromCalRecurrence:(void *)calRecurrence parentStartDate:(id)date parentItem:(id)item;	// 0x33a28e5d
- (void *)_newRecurrenceWithParentStartDate:(id)parentStartDate;	// 0x33a28859
- (BOOL)_requiresParentEvent;	// 0x33a28641
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x33a27f75
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x33a27e55
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x33a29741
// declared property getter: - (id)calendarType;	// 0x33a2a0f1
// declared property getter: - (id)dayOfMonth;	// 0x33a2a019
// declared property getter: - (id)dayOfWeek;	// 0x33a29ff5
- (void)dealloc;	// 0x33a29a61
- (void)encodeWithCoder:(id)coder;	// 0x33a29dc1
// declared property getter: - (id)firstDayOfWeek;	// 0x33a2a0cd
// declared property getter: - (id)interval;	// 0x33a29fd1
// declared property getter: - (id)monthOfYear;	// 0x33a2a061
// declared property getter: - (id)occurrences;	// 0x33a2a0a9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x33a28645
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x33a28ddd
// declared property setter: - (void)setCalendarType:(id)type;	// 0x33a2a105
// declared property setter: - (void)setDayOfMonth:(id)month;	// 0x33a2a02d
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x33a2a009
// declared property setter: - (void)setFirstDayOfWeek:(id)week;	// 0x33a2a0e1
// declared property setter: - (void)setInterval:(id)interval;	// 0x33a29fe5
// declared property setter: - (void)setMonthOfYear:(id)year;	// 0x33a2a075
// declared property setter: - (void)setOccurrences:(id)occurrences;	// 0x33a2a0bd
- (void)setParentEvent:(id)event;	// 0x33a27e45
// declared property setter: - (void)setType:(id)type;	// 0x33a29fc1
// declared property setter: - (void)setUntil:(id)until;	// 0x33a2a099
- (void)setUntilString:(id)string;	// 0x33a29a25
// declared property setter: - (void)setWeekOfMonth:(id)month;	// 0x33a2a051
// declared property getter: - (id)type;	// 0x33a29fad
// declared property getter: - (id)until;	// 0x33a2a085
// declared property getter: - (id)weekOfMonth;	// 0x33a2a03d
@end
