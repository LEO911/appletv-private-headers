/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFData : NSMutableData {
}
@property(assign) unsigned length;	// G=0x32787759; S=0x3278777d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x327866dd
- (const void *)bytes;	// 0x32787765
- (id)copyWithZone:(NSZone *)zone;	// 0x32787709
- (void)finalize;	// 0x327876cd
- (unsigned)hash;	// 0x327876a5
- (BOOL)isEqual:(id)equal;	// 0x32787691
// converted property getter: - (unsigned)length;	// 0x32787759
- (void *)mutableBytes;	// 0x32787771
- (oneway void)release;	// 0x32786b49
- (id)retain;	// 0x327876b1
- (unsigned)retainCount;	// 0x327876c1
// converted property setter: - (void)setLength:(unsigned)length;	// 0x3278777d
@end

