/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRTableRow : BRControl {
	NSArray *_items;	// 80 = 0x50
	NSArray *_widthValues;	// 84 = 0x54
}
+ (id)tableRowWithItems:(id)items widthValues:(id)values;	// 0x27f46d
- (id)initWithItems:(id)items widthValues:(id)values;	// 0x27f4ad
- (void)dealloc;	// 0x27f525
- (void)layoutSubcontrols;	// 0x27f675
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x27f589
@end

