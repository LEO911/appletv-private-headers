/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebSelectionGraph : NSObject {
	NSMutableArray *_selectionNodes;	// 4 = 0x4
}
- (id)init;	// 0x2f48933d
- (id)addNodeFromSelection:(id)selection;	// 0x2f74f20d
- (void)clearNodes;	// 0x2f74f1c5
- (void)dealloc;	// 0x2f74f159
- (void)exploreFromNode:(id)node;	// 0x2f74f2f1
- (void)exploreFromNode:(id)node outwards:(BOOL)outwards maxDepth:(int)depth;	// 0x2f74f27d
@end

