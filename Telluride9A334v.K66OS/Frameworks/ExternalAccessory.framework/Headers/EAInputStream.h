/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSInputStream.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSThread, NSCondition, NSMutableData, EASession, EAAccessory;

@interface EAInputStream : NSInputStream {
	id _delegate;	// 4 = 0x4
	EAAccessory *_accessory;	// 8 = 0x8
	EASession *_session;	// 12 = 0xc
	int _inputFromAccFd;	// 16 = 0x10
	char *_inputFromAccBuffer;	// 20 = 0x14
	NSMutableData *_inputFromAccData;	// 24 = 0x18
	NSCondition *_inputFromAccCondition;	// 28 = 0x1c
	NSThread *_inputFromAccThread;	// 32 = 0x20
	BOOL _isOpenCompletedEventSent;	// 36 = 0x24
	BOOL _hasNewBytesAvailable;	// 37 = 0x25
	BOOL _isAtEndEventSent;	// 38 = 0x26
	unsigned _streamStatus;	// 40 = 0x28
	CFRunLoopRef _runLoop;	// 44 = 0x2c
	CFRunLoopSourceRef _runLoopSource;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x31a4c2ed; S=0x31a4c2fd; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x31a4c4b1; converted property
- (id)initWithAccessory:(id)accessory forSession:(id)session;	// 0x31a4bd11
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x31a4c6d5
- (void)_performAtEndOfStreamValidation;	// 0x31a4c6e5
- (void)_readInputFromAccThread;	// 0x31a4c975
- (void)_scheduleCallback;	// 0x31a4c919
- (void)_streamEventTrigger;	// 0x31a4c73d
- (void)close;	// 0x31a4c15d
- (void)dealloc;	// 0x31a4be19
// converted property getter: - (id)delegate;	// 0x31a4c2ed
- (void)endStream;	// 0x31a4c6a5
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x31a4c5ed
- (BOOL)hasBytesAvailable;	// 0x31a4c5f1
- (void)open;	// 0x31a4be99
- (void)openCompleted;	// 0x31a4c675
- (id)propertyForKey:(id)key;	// 0x31a4c321
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x31a4c4dd
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a4c455
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a4c329
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a4c2fd
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x31a4c325
- (id)streamError;	// 0x31a4c4d9
// converted property getter: - (unsigned)streamStatus;	// 0x31a4c4b1
@end

