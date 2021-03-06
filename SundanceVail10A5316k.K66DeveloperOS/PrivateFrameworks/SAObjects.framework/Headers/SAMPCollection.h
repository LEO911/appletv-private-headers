/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity {
}
@property(copy, nonatomic) NSArray *items;	// G=0x32f38309; S=0x32f38385; 
+ (id)collection;	// 0x32f38279
+ (id)collectionWithDictionary:(id)dictionary context:(id)context;	// 0x32f382bd
- (id)encodedClassName;	// 0x32f3826d
- (id)groupIdentifier;	// 0x32f3825d
// declared property getter: - (id)items;	// 0x32f38309
// declared property setter: - (void)setItems:(id)items;	// 0x32f38385
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f383ed
@end

