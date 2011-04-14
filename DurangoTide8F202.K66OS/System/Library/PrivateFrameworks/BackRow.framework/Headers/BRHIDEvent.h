/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BREvent.h"


@interface BRHIDEvent : BREvent {
@private
	unsigned short _page;	// 30 = 0x1e
	unsigned short _usage;	// 32 = 0x20
	unsigned long long _extendedSignature;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long extendedSignature;	// G=0x328e6a7d; converted property
@property(readonly, assign) unsigned short page;	// G=0x328e6a5d; converted property
@property(readonly, assign) unsigned short usage;	// G=0x328e6a6d; converted property
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x328e6c29
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x328e6c6d
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x328e6cb9
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x328e6d05
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x328e6bed
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x328e6b71
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x328e6ba9
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x328e6e69
- (id)description;	// 0x328e6d59
// converted property getter: - (unsigned long long)extendedSignature;	// 0x328e6a7d
- (BOOL)isEqual:(id)equal;	// 0x328e6a8d
// converted property getter: - (unsigned short)page;	// 0x328e6a5d
// converted property getter: - (unsigned short)usage;	// 0x328e6a6d
@end
