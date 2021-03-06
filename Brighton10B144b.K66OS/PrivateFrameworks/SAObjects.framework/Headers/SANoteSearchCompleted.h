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
@property(copy, nonatomic) NSArray *notes;	// G=0x353ca25d; S=0x353ca2d9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x353ca341; S=0x353ca3e1; 
+ (id)searchCompleted;	// 0x353ca1cd
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353ca211
- (id)encodedClassName;	// 0x353ca1c1
- (id)groupIdentifier;	// 0x353ca1b1
// declared property getter: - (id)notes;	// 0x353ca25d
// declared property getter: - (id)results;	// 0x353ca341
// declared property setter: - (void)setNotes:(id)notes;	// 0x353ca2d9
// declared property setter: - (void)setResults:(id)results;	// 0x353ca3e1
@end

