/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


__attribute__((visibility("hidden")))
@interface _UIViewAnimationAttributes : NSObject <NSCoding> {
	double _duration;	// 4 = 0x4
	double _delay;	// 12 = 0xc
	unsigned _options;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=_delay) double delay;	// G=0x3472302d; @synthesize=_delay
@property(readonly, assign, nonatomic, getter=_duration) double duration;	// G=0x34723015; @synthesize=_duration
- (id)initWithCoder:(id)coder;	// 0x34722e61
// declared property getter: - (double)_delay;	// 0x3472302d
// declared property getter: - (double)_duration;	// 0x34723015
- (void)encodeWithCoder:(id)coder;	// 0x34722f59
@end
