/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSException.h> // Unknown library
#import "OfficeImport-Structs.h"

@class CPMessageEntry;

__attribute__((objc_exception))
@interface CPMessageException : NSException {
	CPMessageEntry *m_entry;	// 20 = 0x14
}
+ (id)exceptionWithMessage:(CPTaggedMessageStructure *)message;	// 0x37a9f891
+ (id)exceptionWithUntaggedMessage:(id)untaggedMessage;	// 0x37a9f931
+ (void)initialize;	// 0x3789fdd1
+ (id)nsError:(id)error domain:(id)domain;	// 0x37a9fae9
+ (void)raise:(CPTaggedMessageStructure *)raise;	// 0x379ee469
+ (void)raiseUntaggedMessage:(id)message;	// 0x37a9f9ed
- (id)initWithMessage:(CPTaggedMessageStructure *)message;	// 0x37a9f755
- (id)initWithUntaggedMessage:(id)untaggedMessage;	// 0x37a9f7ed
- (void)dealloc;	// 0x379ee8a9
- (id)description;	// 0x37a9fa99
- (id)getEntry;	// 0x37a9f9dd
@end
