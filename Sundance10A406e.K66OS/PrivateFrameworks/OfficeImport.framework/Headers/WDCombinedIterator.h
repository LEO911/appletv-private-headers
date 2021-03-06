/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDIterator.h"


@interface WDCombinedIterator : WDIterator {
	WDIterator *mParentIterator;	// 4 = 0x4
	WDIterator *mChildIterator;	// 8 = 0x8
}
@property(retain, nonatomic) WDIterator *childIterator;	// G=0x35107fe9; S=0x35107ff9; @synthesize=mChildIterator
- (id)initWithParentIterator:(id)parentIterator;	// 0x35107ea5
// declared property getter: - (id)childIterator;	// 0x35107fe9
- (id)childIteratorFrom:(id)from;	// 0x35107f71
- (void)dealloc;	// 0x35107f0d
- (BOOL)hasNext;	// 0x35107f79
- (void)incrementChildIterator;	// 0x35108009
- (id)newChildIteratorFrom:(id)from;	// 0x35107f75
- (id)next;	// 0x35107f91
// declared property setter: - (void)setChildIterator:(id)iterator;	// 0x35107ff9
@end

