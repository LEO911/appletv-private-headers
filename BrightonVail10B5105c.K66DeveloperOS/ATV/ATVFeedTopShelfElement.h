/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTopShelfElement : ATVFeedRootElement {
	int _columnCount;	// 8 = 0x8
	int _refreshIntervalSec;	// 12 = 0xc
	NSArray *_sections;	// 16 = 0x10
}
@property(assign, nonatomic) int columnCount;	// G=0x1588b5; S=0x1588c5; @synthesize=_columnCount
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x1588d5; S=0x1588e5; @synthesize=_refreshIntervalSec
@property(retain, nonatomic) NSArray *sections;	// G=0x1588f5; S=0x158905; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x158671
// declared property getter: - (int)columnCount;	// 0x1588b5
- (void)dealloc;	// 0x158869
// declared property getter: - (int)refreshIntervalSec;	// 0x1588d5
// declared property getter: - (id)sections;	// 0x1588f5
// declared property setter: - (void)setColumnCount:(int)count;	// 0x1588c5
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x1588e5
// declared property setter: - (void)setSections:(id)sections;	// 0x158905
@end
