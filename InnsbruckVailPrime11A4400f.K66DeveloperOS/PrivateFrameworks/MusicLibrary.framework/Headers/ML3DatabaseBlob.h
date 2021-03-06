/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>
#import "MusicLibrary-Structs.h"


@interface ML3DatabaseBlob : NSObject {
	sqlite3_blob *_sqliteHandle;	// 4 = 0x4
}
- (id)init;	// 0x315a21bd
- (id)initWithSQLiteHandle:(sqlite3_blob *)sqliteHandle;	// 0x315a2201
- (id)data;	// 0x315a2361
- (void)dealloc;	// 0x315a2241
- (unsigned)length;	// 0x315a2285
- (int)readData:(id)data numberOfBytes:(unsigned)bytes offset:(unsigned)offset;	// 0x315a22a1
- (int)writeData:(id)data numberOfBytes:(unsigned)bytes offset:(unsigned)offset;	// 0x315a230d
@end

