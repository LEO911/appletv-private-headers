/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSUUID.h"


__attribute__((visibility("hidden")))
@interface __NSConcreteUUID : NSUUID {
	unsigned char _uuidBytes[16];	// 4 = 0x4
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32661a1d
- (id)init;	// 0x32661a21
- (id)initWithUUIDBytes:(unsigned char [16])uuidbytes;	// 0x32661ae1
- (id)initWithUUIDString:(id)uuidstring;	// 0x32661a65
- (id)UUIDString;	// 0x32661c71
- (XXStruct_eX1N7A)_cfUUIDBytes;	// 0x32661be5
- (Class)classForCoder;	// 0x32661d35
- (id)copyWithZone:(NSZone *)zone;	// 0x32661d51
- (id)description;	// 0x32661ccd
- (void)getUUIDBytes:(unsigned char [16])bytes;	// 0x32661bd1
- (BOOL)isEqual:(id)equal;	// 0x32661b29
@end

