/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface IMTimer : NSObject {
	id _timer;	// 4 = 0x4
	id _target;	// 8 = 0x8
	NSDictionary *_userInfo;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	double _timeInterval;	// 20 = 0x14
	SEL _selector;	// 28 = 0x1c
	BOOL _wakeDevice;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) id userInfo;	// G=0x34a9511d; @synthesize=_userInfo
- (id)initWithTimeInterval:(double)timeInterval name:(id)name shouldWake:(BOOL)wake target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x34a94c0d
- (void)dealloc;	// 0x34a95095
- (void)invalidate;	// 0x34a95075
- (void)setFireTimeInterval:(double)interval;	// 0x34a94e51
// declared property getter: - (id)userInfo;	// 0x34a9511d
@end

