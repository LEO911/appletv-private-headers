/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSDate;

@interface SANotificationObject : SADomainObject {
}
@property(copy, nonatomic) NSDate *date;	// G=0x32f6dbe9; S=0x32f6dc05; 
@property(copy, nonatomic) NSString *type;	// G=0x32f6dc55; S=0x32f6dc71; 
+ (id)object;	// 0x32f6db59
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x32f6db9d
// declared property getter: - (id)date;	// 0x32f6dbe9
- (id)encodedClassName;	// 0x32f6db4d
- (id)groupIdentifier;	// 0x32f6db3d
// declared property setter: - (void)setDate:(id)date;	// 0x32f6dc05
// declared property setter: - (void)setType:(id)type;	// 0x32f6dc71
// declared property getter: - (id)type;	// 0x32f6dc55
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f6dcc1
@end

