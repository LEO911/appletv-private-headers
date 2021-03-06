/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoder.h"


@interface NSUnarchiver : NSCoder {
	void *datax;	// 4 = 0x4
	unsigned cursor;	// 8 = 0x8
	NSZone *objectZone;	// 12 = 0xc
	unsigned systemVersion;	// 16 = 0x10
	BOOL streamerVersion;	// 20 = 0x14
	BOOL swap;	// 21 = 0x15
	BOOL unused1;	// 22 = 0x16
	BOOL unused2;	// 23 = 0x17
	void *pointerTable;	// 24 = 0x18
	void *stringTable;	// 28 = 0x1c
	id classVersions;	// 32 = 0x20
	int lastLabel;	// 36 = 0x24
	void *map;	// 40 = 0x28
	void *allUnarchivedObjects;	// 44 = 0x2c
	id reserved;	// 48 = 0x30
}
@property(assign) NSZone *objectZone;	// G=0x319a5fa9; S=0x319a5f99; converted property
@property(readonly, assign) unsigned systemVersion;	// G=0x319a5fed; converted property
+ (id)classNameDecodedForArchiveClassName:(id)archiveClassName;	// 0x319a6479
+ (void)decodeClassName:(id)name asClassName:(id)name2;	// 0x31967dc5
+ (void)initialize;	// 0x31967d69
+ (id)unarchiveObjectWithData:(id)data;	// 0x319a62f9
+ (id)unarchiveObjectWithFile:(id)file;	// 0x319a6399
- (id)initForReadingWithData:(id)data;	// 0x31967e51
- (void)_setAllowedClasses:(id)classes;	// 0x319a5f55
- (id)classNameDecodedForArchiveClassName:(id)archiveClassName;	// 0x319a64c5
- (id)data;	// 0x319a6001
- (void)dealloc;	// 0x3196aba9
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x319a6015
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x319693a5
- (void)decodeClassName:(id)name asClassName:(id)name2;	// 0x319a63dd
- (id)decodeDataObject;	// 0x319a6249
- (id)decodeObject;	// 0x3196854d
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x3196a615
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x319695ed
- (void)finalize;	// 0x319a5d39
- (BOOL)isAtEnd;	// 0x319a5fb9
// converted property getter: - (NSZone *)objectZone;	// 0x319a5fa9
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x319a5dcd
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x319a5f99
// converted property getter: - (unsigned)systemVersion;	// 0x319a5fed
- (int)versionForClassName:(id)className;	// 0x31969365
@end

