/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPredicate.h"
#import "EventKit-Structs.h"

@class NSDate, NSString;

@interface EKReminderPredicate : EKPredicate {
	NSString *_title;	// 12 = 0xc
	NSString *_listTitle;	// 16 = 0x10
	BOOL _limitToCompletedOrIncomplete;	// 20 = 0x14
	BOOL _completed;	// 21 = 0x15
	NSDate *_dueAfter;	// 24 = 0x18
	NSDate *_dueBefore;	// 28 = 0x1c
	BOOL _useDueDateAsCompletionDate;	// 32 = 0x20
	NSString *_searchTerm;	// 36 = 0x24
	int _sortOrder;	// 40 = 0x28
	unsigned _maxResults;	// 44 = 0x2c
	BOOL _useCompletionDateAsAlternate;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL completed;	// G=0x31fcca11; S=0x31fcca21; @synthesize=_completed
@property(retain, nonatomic) NSDate *dueAfter;	// G=0x31fcca31; S=0x31fcca41; @synthesize=_dueAfter
@property(retain, nonatomic) NSDate *dueBefore;	// G=0x31fcca51; S=0x31fcca61; @synthesize=_dueBefore
@property(assign, nonatomic) BOOL limitToCompletedOrIncomplete;	// G=0x31fcc9f1; S=0x31fcca01; @synthesize=_limitToCompletedOrIncomplete
@property(retain, nonatomic) NSString *listTitle;	// G=0x31fcc9d1; S=0x31fcc9e1; @synthesize=_listTitle
@property(assign, nonatomic) unsigned maxResults;	// G=0x31fccad1; S=0x31fccae1; @synthesize=_maxResults
@property(retain, nonatomic) NSString *searchTerm;	// G=0x31fcca91; S=0x31fccaa1; @synthesize=_searchTerm
@property(assign, nonatomic) int sortOrder;	// G=0x31fccab1; S=0x31fccac1; @synthesize=_sortOrder
@property(retain, nonatomic) NSString *title;	// G=0x31fcc9b1; S=0x31fcc9c1; @synthesize=_title
@property(assign, nonatomic) BOOL useCompletionDateAsAlternate;	// G=0x31fccaf1; S=0x31fccb01; @synthesize=_useCompletionDateAsAlternate
@property(assign, nonatomic) BOOL useDueDateAsCompletionDate;	// G=0x31fcca71; S=0x31fcca81; @synthesize=_useDueDateAsCompletionDate
+ (id)predicateWithCalendars:(id)calendars;	// 0x31fcbf79
- (id)initWithCalendars:(id)calendars;	// 0x31fcbfb5
- (id)initWithCoder:(id)coder;	// 0x31fcc5a5
// declared property getter: - (BOOL)completed;	// 0x31fcca11
- (id)copyWithZone:(NSZone *)zone;	// 0x31fcc095
- (void)dealloc;	// 0x31fcbff5
// declared property getter: - (id)dueAfter;	// 0x31fcca31
// declared property getter: - (id)dueBefore;	// 0x31fcca51
- (void)encodeWithCoder:(id)coder;	// 0x31fcc7b1
- (BOOL)isEqual:(id)equal;	// 0x31fcc28d
// declared property getter: - (BOOL)limitToCompletedOrIncomplete;	// 0x31fcc9f1
// declared property getter: - (id)listTitle;	// 0x31fcc9d1
// declared property getter: - (unsigned)maxResults;	// 0x31fccad1
// declared property getter: - (id)searchTerm;	// 0x31fcca91
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x31fcca21
// declared property setter: - (void)setDueAfter:(id)after;	// 0x31fcca41
// declared property setter: - (void)setDueBefore:(id)before;	// 0x31fcca61
// declared property setter: - (void)setLimitToCompletedOrIncomplete:(BOOL)completedOrIncomplete;	// 0x31fcca01
// declared property setter: - (void)setListTitle:(id)title;	// 0x31fcc9e1
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x31fccae1
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x31fccaa1
// declared property setter: - (void)setSortOrder:(int)order;	// 0x31fccac1
// declared property setter: - (void)setTitle:(id)title;	// 0x31fcc9c1
// declared property setter: - (void)setUseCompletionDateAsAlternate:(BOOL)alternate;	// 0x31fccb01
// declared property setter: - (void)setUseDueDateAsCompletionDate:(BOOL)date;	// 0x31fcca81
// declared property getter: - (int)sortOrder;	// 0x31fccab1
// declared property getter: - (id)title;	// 0x31fcc9b1
// declared property getter: - (BOOL)useCompletionDateAsAlternate;	// 0x31fccaf1
// declared property getter: - (BOOL)useDueDateAsCompletionDate;	// 0x31fcca71
@end

