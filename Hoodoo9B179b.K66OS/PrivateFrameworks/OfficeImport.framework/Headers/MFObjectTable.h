/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : NSObject {
@private
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x327cb0bd
- (void)clear;	// 0x327d1645
- (void)dealloc;	// 0x327c61a5
- (int)deleteObject:(unsigned)object;	// 0x327cf739
- (id)getObject:(unsigned)object;	// 0x329fbff9
- (unsigned)insertPos;	// 0x327cd021
- (int)putObject:(id)object :(unsigned)arg2;	// 0x327cce31
- (int)selectInto:(int)into :(id)arg2;	// 0x327cd139
- (int)size;	// 0x328b42e1
@end
