/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSPredicate.h> // Unknown library

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : NSPredicate {
	NSString *_externalIdentifier;	// 8 = 0x8
}
- (id)initWithCoder:(id)coder;	// 0x34b745d9
- (id)initWithExternalIdentifier:(id)externalIdentifier;	// 0x34b74529
- (id)copyWithZone:(NSZone *)zone;	// 0x34b7457d
- (void)dealloc;	// 0x34b7458d
- (void)encodeWithCoder:(id)coder;	// 0x34b74649
- (BOOL)evaluateWithObject:(id)object;	// 0x34b746a5
@end
