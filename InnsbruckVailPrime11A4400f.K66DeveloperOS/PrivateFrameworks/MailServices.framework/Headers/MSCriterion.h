/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import </libobjc.A.h>
#import "NSCoding.h"

@class NSString;
@protocol NSObject;

@interface MSCriterion : NSObject <NSCoding> {
	NSString *_type;	// 4 = 0x4
	NSString *_qualifier;	// 8 = 0x8
	id<NSObject> _criteria;	// 12 = 0xc
}
@property(readonly, retain) NSString *qualifier;	// G=0x313414e9; converted property
@property(readonly, retain) NSString *type;	// G=0x313414d9; converted property
- (id)init;	// 0x31340c09
- (id)initWithCoder:(id)coder;	// 0x31341121
- (id)initWithCriteria:(id)criteria allRequired:(BOOL)required;	// 0x313410ad
- (id)initWithType:(id)type qualifier:(id)qualifier expression:(id)expression;	// 0x31341051
- (id)_initWithType:(id)type qualifier:(id)qualifier criteria:(id)criteria;	// 0x31340c21
- (id)criteria;	// 0x313414f9
- (void)dealloc;	// 0x31340f89
- (id)description;	// 0x31340fd5
- (void)encodeWithCoder:(id)coder;	// 0x313413f5
// converted property getter: - (id)qualifier;	// 0x313414e9
// converted property getter: - (id)type;	// 0x313414d9
@end

