/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OADTableRow : NSObject {
	NSMutableArray *mCells;	// 4 = 0x4
	float mHeight;	// 8 = 0x8
}
@property(assign) float height;	// G=0x36b5bde9; S=0x36b5a6ad; converted property
- (id)init;	// 0x36b5a581
- (id)addCell;	// 0x36b5a6bd
- (id)cellAtIndex:(unsigned)index;	// 0x36b5b0e1
- (unsigned)cellCount;	// 0x36b5b0c1
- (void)dealloc;	// 0x36b5cd49
// converted property getter: - (float)height;	// 0x36b5bde9
// converted property setter: - (void)setHeight:(float)height;	// 0x36b5a6ad
@end
