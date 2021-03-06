/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import "PowerlogCoreLoggers-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSString;

@interface PLDuetEvent : NSObject <NSCopying> {
	short _updateType;	// 4 = 0x4
	short _event;	// 6 = 0x6
	NSString *_bundleId;	// 8 = 0x8
	unsigned long long _updateSequenceNumber;	// 12 = 0xc
}
@property(copy) NSString *bundleId;	// G=0x3241b861; S=0x3241b875; @synthesize=_bundleId
@property(assign) short event;	// G=0x3241b91d; S=0x3241b935; @synthesize=_event
@property(assign) unsigned long long updateSequenceNumber;	// G=0x3241b8b5; S=0x3241b8e9; @synthesize=_updateSequenceNumber
@property(assign) short updateType;	// G=0x3241b885; S=0x3241b89d; @synthesize=_updateType
- (id)initWithDuetNotification:(id)duetNotification;	// 0x3241b195
// declared property getter: - (id)bundleId;	// 0x3241b861
- (id)copyWithZone:(NSZone *)zone;	// 0x3241b5b1
- (id)description;	// 0x3241b481
// declared property getter: - (short)event;	// 0x3241b91d
- (unsigned)hash;	// 0x3241b459
- (BOOL)isEqual:(id)equal;	// 0x3241b3b1
- (id)logEntry;	// 0x3241b691
// declared property setter: - (void)setBundleId:(id)anId;	// 0x3241b875
// declared property setter: - (void)setEvent:(short)event;	// 0x3241b935
// declared property setter: - (void)setUpdateSequenceNumber:(unsigned long long)number;	// 0x3241b8e9
// declared property setter: - (void)setUpdateType:(short)type;	// 0x3241b89d
// declared property getter: - (unsigned long long)updateSequenceNumber;	// 0x3241b8b5
// declared property getter: - (short)updateType;	// 0x3241b885
@end

