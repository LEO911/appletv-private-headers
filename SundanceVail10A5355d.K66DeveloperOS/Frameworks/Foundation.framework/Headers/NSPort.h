/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSPort : NSObject <NSCopying, NSCoding> {
}
@property(assign) id delegate;	// G=0x346d23b5; S=0x346d2391; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34669919
+ (id)port;	// 0x346d22b9
+ (id)portWithMachPort:(unsigned)machPort;	// 0x346d22f5
- (id)initWithCoder:(id)coder;	// 0x346d2465
- (id)initWithMachPort:(unsigned)machPort;	// 0x346d2341
- (Class)classForCoder;	// 0x346d240d
- (Class)classForPortCoder;	// 0x346d23f1
- (id)copyWithZone:(NSZone *)zone;	// 0x346d23dd
// converted property getter: - (id)delegate;	// 0x346d23b5
- (void)encodeWithCoder:(id)coder;	// 0x346d2495
- (void)invalidate;	// 0x346d2345
- (BOOL)isValid;	// 0x346d2369
- (unsigned)machPort;	// 0x346d238d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x346d24e5
- (id)replacementObjectForCoder:(id)coder;	// 0x346d23ed
- (unsigned)reservedSpaceLength;	// 0x346d23d9
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x346d24e1
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x346d2499
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x346d24bd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x346d2391
@end

