/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface CMOutlineState : NSObject {
	int counter[10];	// 4 = 0x4
	int listId;	// 44 = 0x2c
}
@property(readonly, assign) int listId;	// G=0x36afb16d; converted property
- (id)init;	// 0x36a3c515
- (id)initWithListId:(int)listId;	// 0x36afae31
- (int)counterAtLevel:(int)level;	// 0x36ace109
- (void)increaseCounterAtLevel:(int)level;	// 0x36acd6d1
// converted property getter: - (int)listId;	// 0x36afb16d
- (void)reset;	// 0x36a3c55d
- (void)setCounterTo:(int)to atLevel:(int)level;	// 0x36afafbd
@end
