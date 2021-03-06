/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class __NSHostExtraIvars, NSArray;

@interface NSHost : NSObject {
	NSArray *names;	// 4 = 0x4
	NSArray *addresses;	// 8 = 0x8
	id reserved;	// 12 = 0xc
}
@property(readonly, retain) NSArray *addresses;	// G=0x3257cec1; converted property
@property(readonly, retain) NSArray *names;	// G=0x3257ccb1; converted property
@property(assign, nonatomic) __NSHostExtraIvars *reserved;	// G=0x3257d011; S=0x3257d021; @synthesize
+ (id)currentHost;	// 0x3257b4a9
+ (void)flushHostCache;	// 0x3257d00d
+ (id)hostWithAddress:(id)address;	// 0x3257b541
+ (id)hostWithName:(id)name;	// 0x3257b4f5
+ (BOOL)isHostCacheEnabled;	// 0x3257d005
+ (void)setHostCacheEnabled:(BOOL)enabled;	// 0x3257d009
- (id)initToResolve:(id)resolve as:(int)as;	// 0x3257b3c9
- (void)__resolveWithFlags:(int)flags resultArray:(id)array handler:(id)handler;	// 0x3257b981
- (id)address;	// 0x3257ccdd
// converted property getter: - (id)addresses;	// 0x3257cec1
- (void)blockingResolveUntil:(int)until;	// 0x3257b7e9
- (void)dealloc;	// 0x3257cf8d
- (id)description;	// 0x3257cf01
- (BOOL)isEqualToHost:(id)host;	// 0x3257c9c5
- (id)localizedName;	// 0x3257ceed
- (id)name;	// 0x3257cab9
// converted property getter: - (id)names;	// 0x3257ccb1
// declared property getter: - (id)reserved;	// 0x3257d011
- (void)resolve:(id)resolve;	// 0x3257b58d
- (void)resolveCurrentHostWithHandler:(id)handler;	// 0x3257c125
// declared property setter: - (void)setReserved:(id)reserved;	// 0x3257d021
@end

