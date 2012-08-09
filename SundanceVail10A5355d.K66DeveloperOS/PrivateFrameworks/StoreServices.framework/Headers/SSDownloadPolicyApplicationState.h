/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSSet, NSString;

@interface SSDownloadPolicyApplicationState : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	NSString *_applicationIdentifier;	// 4 = 0x4
	NSSet *_applicationStates;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *applicationIdentifier;	// G=0x319484f5; S=0x31948509; @synthesize=_applicationIdentifier
@property(copy, nonatomic) NSSet *applicationStates;	// G=0x31948519; S=0x3194852d; @synthesize=_applicationStates
- (id)initWithApplicationIdentifier:(id)applicationIdentifier;	// 0x31947de5
- (id)initWithCoder:(id)coder;	// 0x31948205
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x319483c9
- (void)addApplicationState:(int)state;	// 0x31947e91
// declared property getter: - (id)applicationIdentifier;	// 0x319484f5
// declared property getter: - (id)applicationStates;	// 0x31948519
- (id)copyWithZone:(NSZone *)zone;	// 0x319482d9
- (id)copyXPCEncoding;	// 0x31948365
- (void)dealloc;	// 0x31947e2d
- (void)encodeWithCoder:(id)coder;	// 0x31948199
- (unsigned)hash;	// 0x31948099
- (BOOL)isEqual:(id)equal;	// 0x319480b9
// declared property setter: - (void)setApplicationIdentifier:(id)identifier;	// 0x31948509
// declared property setter: - (void)setApplicationStates:(id)states;	// 0x3194852d
- (void)setNotRunningApplicationStates;	// 0x31947f8d
@end
