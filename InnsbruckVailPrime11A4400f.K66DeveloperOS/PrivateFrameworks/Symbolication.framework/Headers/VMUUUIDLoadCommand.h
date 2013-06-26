/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSData;

@interface VMUUUIDLoadCommand : VMULoadCommand {
	NSData *_uuid;	// 16 = 0x10
}
@property(readonly, retain) NSData *uuid;	// G=0x3290c1dd; converted property
- (id)initWithMemory:(id)memory;	// 0x3290c149
- (void)dealloc;	// 0x3290c1f1
- (BOOL)isUUID;	// 0x3290c1ed
// converted property getter: - (id)uuid;	// 0x3290c1dd
@end
