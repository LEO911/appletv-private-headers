/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPredicate.h"
#import "EventKit-Structs.h"

@class NSString, NSDate;

@interface EKRemindersPredicate : EKPredicate {
}
@property(readonly, assign, nonatomic) BOOL queryCompleted;	// G=0x324b98d9; 
@property(readonly, assign, nonatomic) NSDate *queryDueAfter;	// G=0x324b98dd; 
@property(readonly, assign, nonatomic) NSDate *queryDueBefore;	// G=0x324b98e1; 
@property(readonly, assign, nonatomic) BOOL queryLimitToCompletedOrIncomplete;	// G=0x324b98d5; 
@property(readonly, assign, nonatomic) NSString *queryListTitle;	// G=0x324b98d1; 
@property(readonly, assign, nonatomic) NSString *querySearchTerm;	// G=0x324b98ed; 
@property(readonly, assign, nonatomic) int querySortOrder;	// G=0x324b98f1; 
@property(readonly, assign, nonatomic) NSString *queryTitle;	// G=0x324b98cd; 
@property(readonly, assign, nonatomic) BOOL queryUseDueDateAsCompletionDate;	// G=0x324b98e5; 
- (id)copyWithZone:(NSZone *)zone;	// 0x324b98f5
- (BOOL)isEqual:(id)equal;	// 0x324b9905
// declared property getter: - (BOOL)queryCompleted;	// 0x324b98d9
// declared property getter: - (id)queryDueAfter;	// 0x324b98dd
// declared property getter: - (id)queryDueBefore;	// 0x324b98e1
- (BOOL)queryIncludeRemindersDueBefore;	// 0x324b98e9
// declared property getter: - (BOOL)queryLimitToCompletedOrIncomplete;	// 0x324b98d5
// declared property getter: - (id)queryListTitle;	// 0x324b98d1
// declared property getter: - (id)querySearchTerm;	// 0x324b98ed
// declared property getter: - (int)querySortOrder;	// 0x324b98f1
// declared property getter: - (id)queryTitle;	// 0x324b98cd
// declared property getter: - (BOOL)queryUseDueDateAsCompletionDate;	// 0x324b98e5
@end

