/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTextTableDataSet : XXUnknownSuperclass {
	NSMutableArray *_rows;	// 4 = 0x4
	NSArray *_headerLabels;	// 8 = 0x8
}
@property(retain) NSArray *headerLabels;	// G=0x152281; S=0x152295; @synthesize=_headerLabels
@property(readonly, assign) NSArray *rows;	// G=0x1521c9; 
- (id)init;	// 0x152109
- (void)addRow:(id)row;	// 0x1521d9
- (void)dealloc;	// 0x152165
// declared property getter: - (id)headerLabels;	// 0x152281
// declared property getter: - (id)rows;	// 0x1521c9
// declared property setter: - (void)setHeaderLabels:(id)labels;	// 0x152295
@end
