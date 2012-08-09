/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDTable, EDReference;

@interface EFTableData : NSObject {
	EFRefTok mRefTok;	// 4 = 0x4
	EDTable *mTable;	// 24 = 0x18
	EDReference *mReference;	// 28 = 0x1c
	int mMakeups;	// 32 = 0x20
}
- (id)initWith:(EFStrTok *)with;	// 0x31d58f69
- (id).cxx_construct;	// 0x31d59365
- (void)dealloc;	// 0x31d5901d
- (void)makeup:(id)makeup with:(int)with;	// 0x31d590c5
- (unsigned short *)ptgData;	// 0x31d59091
- (const EFRefTok *)refTok;	// 0x31d59081
- (id)reference;	// 0x31d590b5
- (id)table;	// 0x31d590a5
@end
