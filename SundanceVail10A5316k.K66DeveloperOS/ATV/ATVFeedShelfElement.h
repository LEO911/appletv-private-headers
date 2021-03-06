/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfElement : ATVFeedElement {
	int _columnCount;	// 4 = 0x4
	BOOL _center;	// 8 = 0x8
	NSArray *_sections;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL center;	// G=0x136cd1; S=0x136ce1; @synthesize=_center
@property(assign, nonatomic) int columnCount;	// G=0x136cb1; S=0x136cc1; @synthesize=_columnCount
@property(retain, nonatomic) NSArray *sections;	// G=0x136cf1; S=0x136d01; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x136a61
// declared property getter: - (BOOL)center;	// 0x136cd1
// declared property getter: - (int)columnCount;	// 0x136cb1
- (void)dealloc;	// 0x136c65
// declared property getter: - (id)sections;	// 0x136cf1
// declared property setter: - (void)setCenter:(BOOL)center;	// 0x136ce1
// declared property setter: - (void)setColumnCount:(int)count;	// 0x136cc1
// declared property setter: - (void)setSections:(id)sections;	// 0x136d01
@end

