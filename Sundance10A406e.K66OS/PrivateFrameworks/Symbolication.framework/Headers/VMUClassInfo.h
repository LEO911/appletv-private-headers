/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCoding.h"

@class NSString;

@interface VMUClassInfo : NSObject <NSCoding> {
	id _reader;	// 4 = 0x4
@private
	unsigned long long _remoteIsa;	// 8 = 0x8
@protected
	unsigned _remotePointerSize;	// 16 = 0x10
	unsigned _ivarCount;	// 20 = 0x14
@private
	unsigned _superclassOffset;	// 24 = 0x18
@protected
	unsigned _instanceSize;	// 28 = 0x1c
	unsigned _ro_flags;	// 32 = 0x20
	unsigned _rw_flags;	// 36 = 0x24
	objc_ivar **_localIvarList;	// 40 = 0x28
	int *_ivarSizes;	// 44 = 0x2c
	int _remoteType;	// 48 = 0x30
	NSString *_remoteClassName;	// 52 = 0x34
	NSString *_remoteBinaryName;	// 56 = 0x38
	VMUClassInfo *_superclassLayout;	// 60 = 0x3c
	const char *_weakLayout;	// 64 = 0x40
	const char *_strongLayout;	// 68 = 0x44
	BOOL *_weakMap;	// 72 = 0x48
	BOOL *_strongMap;	// 76 = 0x4c
}
@property(readonly, assign) NSString *binaryName;	// G=0x36df982d; @synthesize=_remoteBinaryName
@property(readonly, assign) NSString *className;	// G=0x36df9b6d; @synthesize=_remoteClassName
@property(readonly, assign) NSString *fullIvarDescription;	// G=0x36df98c9; 
@property(readonly, assign) BOOL hasCppConstructorOrDestructor;	// G=0x36df9b11; 
@property(readonly, assign) int infoType;	// G=0x36df98b9; 
@property(readonly, assign) unsigned instanceSize;	// G=0x36df9b25; @synthesize=_instanceSize
@property(readonly, assign) BOOL isARR;	// G=0x36df9ac1; 
@property(readonly, assign) BOOL isMetaClass;	// G=0x36df9ae9; 
@property(readonly, assign) BOOL isRealized;	// G=0x36df9ad5; 
@property(readonly, assign) BOOL isRootClass;	// G=0x36df9afd; 
@property(readonly, assign) unsigned long long remoteIsa;	// G=0x36df9b39; @synthesize=_remoteIsa
@property(readonly, assign) NSString *shortIvarDescription;	// G=0x36df997d; 
@property(readonly, assign) NSString *typeName;	// G=0x36df9861; 
+ (id)classInfoWithClassName:(id)className binaryName:(id)name type:(int)type;	// 0x36df80a9
+ (id)descriptionForTypeEncoding:(const char *)typeEncoding ivarName:(const char *)name;	// 0x36df980d
+ (void)initialize;	// 0x36df7c2d
- (id)initWithClass:(unsigned long long)aClass infoMap:(id)map symbolicator:(CSTypeRef)symbolicator type:(int)type memoryReader:(id)reader;	// 0x36df8281
- (id)initWithClassName:(id)className binaryName:(id)name type:(int)type;	// 0x36df80f1
- (id)initWithCoder:(id)coder;	// 0x36df8c5d
- (id)initWithIsaPointer:(unsigned)isaPointer symbolicator:(CSTypeRef)symbolicator;	// 0x36df818d
- (objc_ivar *)_copyRemoteIvarAt:(unsigned long long)at;	// 0x36df7dc5
- (const char *)_copyRemoteLayout:(unsigned long long)layout;	// 0x36df7e65
- (const char *)_copyRemoteStringAt:(unsigned long long)at;	// 0x36df7ced
- (id)_initWithClass:(unsigned long long)aClass doLayouts:(BOOL)layouts infoMap:(id)map symbolicator:(CSTypeRef)symbolicator type:(int)type memoryReader:(id)reader;	// 0x36df82c1
- (id)_ivarDescription:(unsigned)description withSpacing:(unsigned)spacing;	// 0x36df90e5
- (void)_logDescriptionWithSuperclasses:(BOOL)superclasses indentation:(int)indentation toLogger:(id)logger;	// 0x36df91ad
- (void)_parseIvarsAndLayouts;	// 0x36df7f41
- (BOOL *)_processARRLayout:(const char *)layout;	// 0x36df7e75
- (int)_readRemoteIntAt:(unsigned long long)at;	// 0x36df7c6d
- (unsigned long long)_readRemotePointerAt:(unsigned long long)at;	// 0x36df7c9d
- (void)_scanFieldsToOffset:(unsigned)offset withBlock:(id)block;	// 0x36df9409
- (void)_setClassNameWithAddress:(unsigned long long)address;	// 0x36df8041
// declared property getter: - (id)binaryName;	// 0x36df982d
// declared property getter: - (id)className;	// 0x36df9b6d
- (void)dealloc;	// 0x36df8835
- (id)debugDescription;	// 0x36df9a31
- (id)description;	// 0x36df9a41
- (void)encodeWithCoder:(id)coder;	// 0x36df89f5
- (void)enumerateIvarsWithBlock:(id)block;	// 0x36df9721
// declared property getter: - (id)fullIvarDescription;	// 0x36df98c9
// declared property getter: - (BOOL)hasCppConstructorOrDestructor;	// 0x36df9b11
- (unsigned)hash;	// 0x36df8f41
// declared property getter: - (int)infoType;	// 0x36df98b9
// declared property getter: - (unsigned)instanceSize;	// 0x36df9b25
// declared property getter: - (BOOL)isARR;	// 0x36df9ac1
- (BOOL)isEqual:(id)equal;	// 0x36df8f75
// declared property getter: - (BOOL)isMetaClass;	// 0x36df9ae9
// declared property getter: - (BOOL)isRealized;	// 0x36df9ad5
// declared property getter: - (BOOL)isRootClass;	// 0x36df9afd
// declared property getter: - (unsigned long long)remoteIsa;	// 0x36df9b39
- (void)scanObject:(unsigned long long)object ofSize:(unsigned)size withBlock:(id)block;	// 0x36df95d1
- (void)setMemoryReader:(id)reader;	// 0x36df96f9
// declared property getter: - (id)shortIvarDescription;	// 0x36df997d
- (id)type;	// 0x36df9851
// declared property getter: - (id)typeName;	// 0x36df9861
@end
