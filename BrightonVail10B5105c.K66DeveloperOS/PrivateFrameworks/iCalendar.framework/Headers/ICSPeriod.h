/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ICSDuration, ICSDateValue;

@interface ICSPeriod : NSObject <NSCoding> {
	ICSDateValue *_start;	// 4 = 0x4
	ICSDateValue *_end;	// 8 = 0x8
	ICSDuration *_duration;	// 12 = 0xc
}
@property(readonly, retain) ICSDuration *duration;	// G=0x31b6db49; converted property
@property(readonly, retain) ICSDateValue *end;	// G=0x31b6db39; converted property
@property(readonly, retain) ICSDateValue *start;	// G=0x31b6db29; converted property
- (id)initWithCoder:(id)coder;	// 0x31b6dbed
- (id)initWithStart:(id)start;	// 0x31b6d9dd
- (id)initWithStart:(id)start duration:(id)duration;	// 0x31b6da71
- (id)initWithStart:(id)start end:(id)end;	// 0x31b6da31
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x31b4a1b5
- (void)dealloc;	// 0x31b6dab1
// converted property getter: - (id)duration;	// 0x31b6db49
- (void)encodeWithCoder:(id)coder;	// 0x31b6db75
// converted property getter: - (id)end;	// 0x31b6db39
- (BOOL)isDurationBased;	// 0x31b6db59
// converted property getter: - (id)start;	// 0x31b6db29
@end

