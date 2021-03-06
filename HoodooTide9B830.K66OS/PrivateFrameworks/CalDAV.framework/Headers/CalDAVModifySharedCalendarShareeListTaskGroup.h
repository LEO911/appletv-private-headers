/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPostTaskDelegate.h"

@class NSURL, NSSet, NSMutableSet, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
	NSSet *_shareesToRemove;	// 44 = 0x2c
	NSSet *_shareesToSet;	// 48 = 0x30
	NSURL *_calendarURL;	// 52 = 0x34
	NSString *_summary;	// 56 = 0x38
	NSMutableSet *_invalidSharees;	// 60 = 0x3c
}
@property(retain) NSURL *calendarURL;	// G=0x3147f8d9; S=0x3147f8b5; @synthesize=_calendarURL
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) NSMutableSet *invalidSharees;	// G=0x3147f951; S=0x3147f92d; @synthesize=_invalidSharees
@property(retain) NSSet *shareesToRemove;	// G=0x3147f861; S=0x3147f83d; @synthesize=_shareesToRemove
@property(retain) NSSet *shareesToSet;	// G=0x3147f89d; S=0x3147f879; @synthesize=_shareesToSet
@property(retain) NSString *summary;	// G=0x3147f915; S=0x3147f8f1; @synthesize=_summary
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x3147f745
- (id)initWithShareesToSet:(id)set shareesToRemove:(id)remove summary:(id)summary atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3147f78d
// declared property getter: - (id)calendarURL;	// 0x3147f8d9
- (void)dealloc;	// 0x31480231
- (id)description;	// 0x31480205
- (id)generateModificationMessageBody;	// 0x3147fdd1
// declared property getter: - (id)invalidSharees;	// 0x3147f951
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x3147f8b5
// declared property setter: - (void)setInvalidSharees:(id)sharees;	// 0x3147f92d
// declared property setter: - (void)setShareesToRemove:(id)remove;	// 0x3147f83d
// declared property setter: - (void)setShareesToSet:(id)set;	// 0x3147f879
// declared property setter: - (void)setSummary:(id)summary;	// 0x3147f8f1
// declared property getter: - (id)shareesToRemove;	// 0x3147f861
// declared property getter: - (id)shareesToSet;	// 0x3147f89d
- (void)startTaskGroup;	// 0x3147f5b9
// declared property getter: - (id)summary;	// 0x3147f915
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3147f969
@end

