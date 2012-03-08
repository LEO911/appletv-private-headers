/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {
	NSMutableSet *_responses;	// 24 = 0x18
	NSMutableSet *_successfulICS;	// 28 = 0x1c
	NSMutableSet *_failedResponseItems;	// 32 = 0x20
}
@property(retain) NSMutableSet *failedResponseItems;	// G=0x35950485; S=0x35950461; @synthesize=_failedResponseItems
@property(retain) NSMutableSet *responses;	// G=0x3595040d; S=0x359503e9; @synthesize=_responses
@property(retain) NSMutableSet *successfulICS;	// G=0x35950449; S=0x35950425; @synthesize=_successfulICS
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35950755
- (void)addNewTopLevelItem:(id)item;	// 0x3595050d
- (id)copyParseRules;	// 0x3594fa79
- (void)dealloc;	// 0x35950381
- (id)description;	// 0x3595049d
// declared property getter: - (id)failedResponseItems;	// 0x35950485
// declared property getter: - (id)responses;	// 0x3595040d
// declared property setter: - (void)setFailedResponseItems:(id)items;	// 0x35950461
// declared property setter: - (void)setResponses:(id)responses;	// 0x359503e9
// declared property setter: - (void)setSuccessfulICS:(id)ics;	// 0x35950425
// declared property getter: - (id)successfulICS;	// 0x35950449
@end
