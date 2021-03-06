/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate;

@interface SANoteSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *contentQuery;	// G=0x34230121; S=0x3423013d; 
@property(copy, nonatomic) NSDate *fromDate;	// G=0x3423018d; S=0x342301a9; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x34230045; S=0x342300c1; 
@property(copy, nonatomic) NSDate *toDate;	// G=0x342301f9; S=0x34230215; 
+ (id)search;	// 0x3422ffb5
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x3422fff9
// declared property getter: - (id)contentQuery;	// 0x34230121
- (id)encodedClassName;	// 0x3422ffa9
// declared property getter: - (id)fromDate;	// 0x3423018d
- (id)groupIdentifier;	// 0x3422ff99
- (BOOL)requiresResponse;	// 0x34230265
// declared property setter: - (void)setContentQuery:(id)query;	// 0x3423013d
// declared property setter: - (void)setFromDate:(id)date;	// 0x342301a9
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x342300c1
// declared property setter: - (void)setToDate:(id)date;	// 0x34230215
// declared property getter: - (id)targetAppId;	// 0x34230045
// declared property getter: - (id)toDate;	// 0x342301f9
@end

