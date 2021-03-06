/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

#import </libobjc.A.h>

@class CommunicationFilterItem;

__attribute__((visibility("hidden")))
@interface CommunicationFilterItemCache : NSObject {
	CommunicationFilterItem *_filterItem;	// 4 = 0x4
	long long _isInList;	// 8 = 0x8
}
@property(assign, nonatomic) long long isInList;	// G=0x30428a71; S=0x30428a89; @synthesize=_isInList
- (id)initWithFilterItem:(id)filterItem isInList:(long long)list;	// 0x30428985
- (void)dealloc;	// 0x304289fd
// declared property getter: - (long long)isInList;	// 0x30428a71
- (BOOL)matchesItem:(id)item;	// 0x30428a49
// declared property setter: - (void)setIsInList:(long long)list;	// 0x30428a89
@end

