/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSXPCCoder.h"

@class NSMutableArray, NSXPCConnection;
@protocol OS_xpc_object, NSXPCEncoderDelegate;

@interface NSXPCEncoder : NSXPCCoder {
	NSMutableArray *_containers;	// 12 = 0xc
	NSObject<OS_xpc_object> *_oolObjects;	// 16 = 0x10
	NSXPCConnection *_connection;	// 20 = 0x14
	CFDictionaryRef _replacedObjects;	// 24 = 0x18
	CFDictionaryRef _replacedByDelegateObjects;	// 28 = 0x1c
	id<NSXPCEncoderDelegate> _delegate;	// 32 = 0x20
	BOOL _askForReplacement;	// 36 = 0x24
}
@property(assign) NSXPCConnection *_connection;	// G=0x31aa7a31; S=0x3198eb9d; @synthesize
@property(assign) id<NSXPCEncoderDelegate> delegate;	// G=0x31aa7a45; S=0x3198ebb9; @synthesize=_delegate
- (id)init;	// 0x3198ea99
- (void)_addObject:(id)object forKey:(id)key;	// 0x3198f17d
// declared property getter: - (id)_connection;	// 0x31aa7a31
- (id)_createRootXPCObject;	// 0x3198fbdd
- (void)_encodeArrayOfObjects:(id)objects forKey:(id)key;	// 0x31aa7465
- (id)_encodeXPCObject:(id)object;	// 0x31aa7299
- (void)_popContainer;	// 0x3198fbbd
- (void)_pushContainer:(id)container;	// 0x3198eb7d
- (void)_pushContainerForKey:(id)key;	// 0x3198f129
- (id)_topContainer;	// 0x3198f23d
- (BOOL)allowsKeyedCoding;	// 0x31aa743d
- (void)dealloc;	// 0x3198fca5
- (id)debugDescription;	// 0x31aa737d
// declared property getter: - (id)delegate;	// 0x31aa7a45
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x3198fb79
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x31aa78dd
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x31aa79e9
- (void)encodeDataObject:(id)object;	// 0x31aa7451
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x31aa784d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x31aa7809
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x31aa7775
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x31aa77b9
- (void)encodeInt:(int)int forKey:(id)key;	// 0x31aa7731
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x31aa789d
- (void)encodeInvocation:(id)invocation;	// 0x3198f28d
- (void)encodeObject:(id)object;	// 0x3198fb01
- (void)encodeObject:(id)object forKey:(id)key;	// 0x3198ebe9
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x31aa7445
- (void)encodeXPCObject:(id)object forKey:(id)key;	// 0x31aa79b5
- (void)finalize;	// 0x31aa730d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3198ebb9
// declared property setter: - (void)set_connection:(id)connection;	// 0x3198eb9d
@end
