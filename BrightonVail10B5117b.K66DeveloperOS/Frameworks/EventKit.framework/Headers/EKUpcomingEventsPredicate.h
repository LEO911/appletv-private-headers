/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"


@interface EKUpcomingEventsPredicate : NSPredicate {
	int _limit;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int limit;	// G=0x318d867d; @synthesize=_limit
+ (id)predicateWithLimit:(int)limit;	// 0x318d8571
- (id)initWithCoder:(id)coder;	// 0x318d85c1
- (id)initWithLimit:(int)limit;	// 0x318d8531
- (id)copyWithZone:(NSZone *)zone;	// 0x318d85b1
- (void)encodeWithCoder:(id)coder;	// 0x318d8621
- (BOOL)evaluateWithObject:(id)object;	// 0x318d85ad
// declared property getter: - (int)limit;	// 0x318d867d
@end

