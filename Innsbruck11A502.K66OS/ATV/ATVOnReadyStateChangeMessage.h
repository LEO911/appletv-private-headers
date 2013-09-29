/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVOnReadyStateChangeMessage : XXUnknownSuperclass {
	unsigned _readyState;	// 4 = 0x4
	unsigned _statusCode;	// 8 = 0x8
	NSString *_statusText;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned readyState;	// G=0x167c4d; @synthesize=_readyState
@property(readonly, assign, nonatomic) unsigned statusCode;	// G=0x167c5d; @synthesize=_statusCode
@property(copy, nonatomic) NSString *statusText;	// G=0x167c6d; S=0x167c81; @synthesize=_statusText
- (id)initWithReadyState:(unsigned)readyState statusCode:(unsigned)code statusText:(id)text;	// 0x167b8d
- (void)dealloc;	// 0x167c01
// declared property getter: - (unsigned)readyState;	// 0x167c4d
// declared property setter: - (void)setStatusText:(id)text;	// 0x167c81
// declared property getter: - (unsigned)statusCode;	// 0x167c5d
// declared property getter: - (id)statusText;	// 0x167c6d
@end
