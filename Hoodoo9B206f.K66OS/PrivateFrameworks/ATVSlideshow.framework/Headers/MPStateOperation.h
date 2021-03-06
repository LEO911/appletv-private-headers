/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString;

@interface MPStateOperation : MPAction {
	NSString *_operation;	// 16 = 0x10
	NSString *_stateKey;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *operation;	// G=0x3096a1e1; S=0x30969ec9; @synthesize=_operation
@property(copy, nonatomic) NSString *stateKey;	// G=0x3096a1f1; S=0x30969f95; @synthesize=_stateKey
+ (id)stateOperation;	// 0x30969d35
- (id)init;	// 0x30969d79
- (id)initWithCoder:(id)coder;	// 0x30969dc5
- (id)copyWithZone:(NSZone *)zone;	// 0x3096a0ed
- (void)dealloc;	// 0x30969e69
- (void)encodeWithCoder:(id)coder;	// 0x3096a061
// declared property getter: - (id)operation;	// 0x3096a1e1
- (void)setAction:(id)action;	// 0x3096a161
// declared property setter: - (void)setOperation:(id)operation;	// 0x30969ec9
// declared property setter: - (void)setStateKey:(id)key;	// 0x30969f95
// declared property getter: - (id)stateKey;	// 0x3096a1f1
@end

