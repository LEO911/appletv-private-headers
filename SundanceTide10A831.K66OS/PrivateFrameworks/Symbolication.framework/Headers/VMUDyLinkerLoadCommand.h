/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString;

@interface VMUDyLinkerLoadCommand : VMULoadCommand {
	NSString *_name;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x379b0251; converted property
- (id)initWithMemory:(id)memory;	// 0x379b01a1
- (void)dealloc;	// 0x379b02a9
- (id)description;	// 0x379b0261
- (BOOL)isDyLinker;	// 0x379b024d
// converted property getter: - (id)name;	// 0x379b0251
@end
