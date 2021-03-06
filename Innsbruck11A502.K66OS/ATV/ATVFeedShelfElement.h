/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfElement : ATVFeedElement {
	BOOL _center;	// 4 = 0x4
	int _columnCount;	// 8 = 0x8
	NSArray *_sections;	// 12 = 0xc
	NSString *_onItemFocused;	// 16 = 0x10
	UIColor *_selectionColor;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL center;	// G=0x12f8d5; S=0x12f8e5; @synthesize=_center
@property(assign, nonatomic) int columnCount;	// G=0x12f8b5; S=0x12f8c5; @synthesize=_columnCount
@property(copy, nonatomic) NSString *onItemFocused;	// G=0x12f92d; S=0x12f941; @synthesize=_onItemFocused
@property(retain, nonatomic) NSArray *sections;	// G=0x12f8f5; S=0x12f905; @synthesize=_sections
@property(copy, nonatomic) UIColor *selectionColor;	// G=0x12f951; S=0x12f965; @synthesize=_selectionColor
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12f58d
- (void).cxx_destruct;	// 0x12f975
// declared property getter: - (BOOL)center;	// 0x12f8d5
// declared property getter: - (int)columnCount;	// 0x12f8b5
// declared property getter: - (id)onItemFocused;	// 0x12f92d
// declared property getter: - (id)sections;	// 0x12f8f5
// declared property getter: - (id)selectionColor;	// 0x12f951
// declared property setter: - (void)setCenter:(BOOL)center;	// 0x12f8e5
// declared property setter: - (void)setColumnCount:(int)count;	// 0x12f8c5
// declared property setter: - (void)setOnItemFocused:(id)focused;	// 0x12f941
// declared property setter: - (void)setSections:(id)sections;	// 0x12f905
// declared property setter: - (void)setSelectionColor:(id)color;	// 0x12f965
@end

