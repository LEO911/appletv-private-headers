/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate, NSNumber;

@interface SAReminderSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *completionStatus;	// G=0x353d4edd; S=0x353d4ef9; 
@property(copy, nonatomic) NSDate *dueAfter;	// G=0x353d4f49; S=0x353d4f65; 
@property(copy, nonatomic) NSDate *dueBefore;	// G=0x353d4fb5; S=0x353d4fd1; 
@property(copy, nonatomic) NSString *listName;	// G=0x353d5021; S=0x353d503d; 
@property(copy, nonatomic) NSString *subject;	// G=0x353d508d; S=0x353d50a9; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353d4e01; S=0x353d4e7d; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353d50f9; S=0x353d5115; 
+ (id)search;	// 0x353d4d71
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353d4db5
// declared property getter: - (id)completionStatus;	// 0x353d4edd
// declared property getter: - (id)dueAfter;	// 0x353d4f49
// declared property getter: - (id)dueBefore;	// 0x353d4fb5
- (id)encodedClassName;	// 0x353d4d65
- (id)groupIdentifier;	// 0x353d4d55
// declared property getter: - (id)listName;	// 0x353d5021
- (BOOL)requiresResponse;	// 0x353d5165
// declared property setter: - (void)setCompletionStatus:(id)status;	// 0x353d4ef9
// declared property setter: - (void)setDueAfter:(id)after;	// 0x353d4f65
// declared property setter: - (void)setDueBefore:(id)before;	// 0x353d4fd1
// declared property setter: - (void)setListName:(id)name;	// 0x353d503d
// declared property setter: - (void)setSubject:(id)subject;	// 0x353d50a9
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353d4e7d
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353d5115
// declared property getter: - (id)subject;	// 0x353d508d
// declared property getter: - (id)targetAppId;	// 0x353d4e01
// declared property getter: - (id)timeZoneId;	// 0x353d50f9
@end
