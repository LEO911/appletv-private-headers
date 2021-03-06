/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAReminderPayload.h"

@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSString *recipient;	// G=0x326bb77d; S=0x326bb799; 
+ (id)phonePayload;	// 0x326bb6ed
+ (id)phonePayloadWithDictionary:(id)dictionary context:(id)context;	// 0x326bb731
- (id)encodedClassName;	// 0x326bb6e1
- (id)groupIdentifier;	// 0x326bb6d1
// declared property getter: - (id)recipient;	// 0x326bb77d
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x326bb799
@end

