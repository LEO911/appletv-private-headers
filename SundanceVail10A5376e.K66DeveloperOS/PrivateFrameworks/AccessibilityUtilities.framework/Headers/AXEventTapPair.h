/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AXEventTapPair : NSObject {
	id handler;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	int priority;	// 12 = 0xc
}
@property(copy, nonatomic) id handler;	// G=0x341a04d5; S=0x341a04e9; @synthesize
@property(copy, nonatomic) NSString *identifier;	// G=0x341a04f9; S=0x341a050d; @synthesize
@property(assign, nonatomic) int priority;	// G=0x341a051d; S=0x341a052d; @synthesize
- (void)dealloc;	// 0x341a0411
- (id)description;	// 0x341a0475
// declared property getter: - (id)handler;	// 0x341a04d5
// declared property getter: - (id)identifier;	// 0x341a04f9
// declared property getter: - (int)priority;	// 0x341a051d
// declared property setter: - (void)setHandler:(id)handler;	// 0x341a04e9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x341a050d
// declared property setter: - (void)setPriority:(int)priority;	// 0x341a052d
@end

