/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SANoteSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *notes;	// G=0x34230315; S=0x34230391; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x342303f9; S=0x34230499; 
+ (id)searchCompleted;	// 0x34230285
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x342302c9
- (id)encodedClassName;	// 0x34230279
- (id)groupIdentifier;	// 0x34230269
// declared property getter: - (id)notes;	// 0x34230315
// declared property getter: - (id)results;	// 0x342303f9
// declared property setter: - (void)setNotes:(id)notes;	// 0x34230391
// declared property setter: - (void)setResults:(id)results;	// 0x34230499
@end

