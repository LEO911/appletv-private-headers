/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRBaseMenuItemLayerPopulator : XXUnknownSuperclass {
	id _object;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	unsigned _matchOrder;	// 12 = 0xc
}
@property(readonly, assign) unsigned matchOrder;	// G=0x30ddfd; converted property
+ (BOOL)canHandleObject:(id)object;	// 0x305d25
- (id)init;	// 0x305d29
- (void)dealloc;	// 0x305de1
- (id)dividerLayer;	// 0x305f49
- (id)lowerCenteredString;	// 0x305fc9
- (id)lowerLeftString;	// 0x305fc5
- (id)lowerRightImage;	// 0x305fd5
// converted property getter: - (unsigned)matchOrder;	// 0x30ddfd
- (id)menuItem;	// 0x305f2d
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x305e2d
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x305e8d
- (id)rightJustifiedText;	// 0x305fbd
- (void)setObject:(id)object;	// 0x305ef1
- (BOOL)shouldUseMultilineItem:(id)item;	// 0x305fd9
- (id)subtitle;	// 0x305fc1
- (id)thumbnailImage;	// 0x305fcd
- (id)title;	// 0x305fb9
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x305e91
- (id)upperRightImage;	// 0x305fd1
@end

