/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


@interface UIGroupInsertionItem : NSObject {
@private
	int _index;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
}
@property(readonly, assign) NSRange range;	// G=0x35878245; converted property
- (id)initWithExistingGroup:(int)existingGroup andRowRange:(NSRange)range;	// 0x358781b9
- (id)initWithNewGroupBeforeGroup:(int)newGroupBeforeGroup andRowCount:(int)count;	// 0x3587820d
- (int)groupIndex;	// 0x35878235
// converted property getter: - (NSRange)range;	// 0x35878245
@end

