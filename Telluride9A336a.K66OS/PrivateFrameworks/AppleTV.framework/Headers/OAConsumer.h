/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OAConsumer : NSObject {
@private
	NSString *key;	// 4 = 0x4
	NSString *secret;	// 8 = 0x8
	NSString *callback;	// 12 = 0xc
	NSString *verifier;	// 16 = 0x10
}
@property(copy) NSString *callback;	// G=0x33c7ffb8; S=0x33c7ff84; @synthesize
@property(copy) NSString *key;	// G=0x33c7ff10; S=0x33c7fedc; @synthesize
@property(copy) NSString *secret;	// G=0x33c7ff64; S=0x33c7ff30; @synthesize
+ (id)consumerWithKey:(id)key secret:(id)secret callback:(id)callback;	// 0x33c7fe74
- (id)initWithKey:(id)key secret:(id)secret callback:(id)callback;	// 0x33c7ffd8
// declared property getter: - (id)callback;	// 0x33c7ffb8
- (void)dealloc;	// 0x33c80084
// declared property getter: - (id)key;	// 0x33c7ff10
// declared property getter: - (id)secret;	// 0x33c7ff64
// declared property setter: - (void)setCallback:(id)callback;	// 0x33c7ff84
// declared property setter: - (void)setKey:(id)key;	// 0x33c7fedc
// declared property setter: - (void)setSecret:(id)secret;	// 0x33c7ff30
@end
