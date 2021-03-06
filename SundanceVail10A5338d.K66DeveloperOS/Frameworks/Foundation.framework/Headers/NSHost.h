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
@property(readonly, retain) NSArray *addresses;	// G=0x373807ed; converted property
@property(readonly, retain) NSArray *names;	// G=0x373805dd; converted property
@property(assign, nonatomic) __NSHostExtraIvars *reserved;	// G=0x3738093d; S=0x3738094d; @synthesize
+ (id)currentHost;	// 0x3737edd5
+ (void)flushHostCache;	// 0x37380939
+ (id)hostWithAddress:(id)address;	// 0x3737ee6d
+ (id)hostWithName:(id)name;	// 0x3737ee21
+ (BOOL)isHostCacheEnabled;	// 0x37380931
+ (void)setHostCacheEnabled:(BOOL)enabled;	// 0x37380935
- (id)initToResolve:(id)resolve as:(int)as;	// 0x3737ecf5
- (void)__resolveWithFlags:(int)flags resultArray:(id)array handler:(id)handler;	// 0x3737f2ad
- (id)address;	// 0x37380609
// converted property getter: - (id)addresses;	// 0x373807ed
- (void)blockingResolveUntil:(int)until;	// 0x3737f115
- (void)dealloc;	// 0x373808b9
- (id)description;	// 0x3738082d
- (BOOL)isEqualToHost:(id)host;	// 0x373802f1
- (id)localizedName;	// 0x37380819
- (id)name;	// 0x373803e5
// converted property getter: - (id)names;	// 0x373805dd
// declared property getter: - (id)reserved;	// 0x3738093d
- (void)resolve:(id)resolve;	// 0x3737eeb9
- (void)resolveCurrentHostWithHandler:(id)handler;	// 0x3737fa51
// declared property setter: - (void)setReserved:(id)reserved;	// 0x3738094d
@end

