/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"


@interface NSArchiver : NSCoder {
@private
	void *mdata;	// 4 = 0x4
	void *pointerTable;	// 8 = 0x8
	void *stringTable;	// 12 = 0xc
	void *ids;	// 16 = 0x10
	void *map;	// 20 = 0x14
	void *replacementTable;	// 24 = 0x18
	void *reserved;	// 28 = 0x1c
}
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x3103a8c9
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x3103be95
+ (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x3103b101
+ (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x3103ad3d
+ (void)initialize;	// 0x3103a8f5
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x3103d225
- (id)archiverData;	// 0x3103a741
- (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x3103b0b9
- (id)data;	// 0x3103a751
- (void)dealloc;	// 0x3103abb1
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x3103bad9
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x3103afd1
- (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x3103ace1
- (void)encodeConditionalObject:(id)object;	// 0x3103bdf1
- (void)encodeDataObject:(id)object;	// 0x3103bc59
- (void)encodeObject:(id)object;	// 0x3103b371
- (void)encodeRootObject:(id)object;	// 0x3103bd25
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x3103d321
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3103ba81
- (void)finalize;	// 0x3103ab29
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x3103ad8d
- (int)versionForClassName:(id)className;	// 0x3103ae01
@end

