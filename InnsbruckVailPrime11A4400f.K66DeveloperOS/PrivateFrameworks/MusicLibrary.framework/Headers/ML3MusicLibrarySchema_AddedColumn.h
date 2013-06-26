/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSString;

@interface ML3MusicLibrarySchema_AddedColumn : NSObject {
	NSString *_columnName;	// 4 = 0x4
	NSString *_foreignTableName;	// 8 = 0x8
	NSString *_foreignColumnName;	// 12 = 0xc
	NSString *_joinColumnName;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *columnName;	// G=0x315717dd; @synthesize=_columnName
@property(readonly, assign, nonatomic) NSString *foreignColumnName;	// G=0x315717fd; @synthesize=_foreignColumnName
@property(readonly, assign, nonatomic) NSString *foreignTableName;	// G=0x315717ed; @synthesize=_foreignTableName
@property(readonly, assign, nonatomic) NSString *joinColumnName;	// G=0x3157180d; @synthesize=_joinColumnName
- (id)initWithName:(id)name foreignTable:(id)table foreignColumn:(id)column joinColumn:(id)column4;	// 0x315716dd
- (void).cxx_destruct;	// 0x3157181d
// declared property getter: - (id)columnName;	// 0x315717dd
// declared property getter: - (id)foreignColumnName;	// 0x315717fd
// declared property getter: - (id)foreignTableName;	// 0x315717ed
- (BOOL)importFromForeignTable;	// 0x315717c5
// declared property getter: - (id)joinColumnName;	// 0x3157180d
@end
