/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedGenericCollectionElement.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedListByNavigationElement : ATVFeedGenericCollectionElement {
	int _currentIndex;	// 8 = 0x8
	NSArray *_navigationItems;	// 12 = 0xc
	NSString *_onNavigate;	// 16 = 0x10
}
@property(assign, nonatomic) int currentIndex;	// G=0x13438d; S=0x13439d; @synthesize=_currentIndex
@property(retain, nonatomic) NSArray *navigationItems;	// G=0x1343ad; S=0x1343bd; @synthesize=_navigationItems
@property(copy, nonatomic) NSString *onNavigate;	// G=0x1343cd; S=0x1343e1; @synthesize=_onNavigate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x134129
// declared property getter: - (int)currentIndex;	// 0x13438d
- (void)dealloc;	// 0x134329
// declared property getter: - (id)navigationItems;	// 0x1343ad
// declared property getter: - (id)onNavigate;	// 0x1343cd
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x13439d
// declared property setter: - (void)setNavigationItems:(id)items;	// 0x1343bd
// declared property setter: - (void)setOnNavigate:(id)navigate;	// 0x1343e1
@end

