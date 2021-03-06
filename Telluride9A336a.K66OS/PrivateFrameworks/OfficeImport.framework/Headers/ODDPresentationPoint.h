/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDPresentationPoint : ODDPoint {
@private
	ODDPresentationPoint *mParent;	// 20 = 0x14
	NSMutableArray *mChildren;	// 24 = 0x18
}
- (void)addChild:(id)child order:(unsigned long)order;	// 0x34d482e1
- (id)children;	// 0x34e2d9b1
- (void)dealloc;	// 0x34d4e655
- (id)parent;	// 0x34e2d9a1
- (void)setType:(int)type;	// 0x34d47801
@end

