/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacParserDelegateProtocol.h"
#import "BRBaseParserDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacParserDelegate : BRBaseParserDelegate <ATVDotMacParserDelegateProtocol> {
	NSMutableArray *_entries;	// 12 = 0xc
	BOOL _entryCreated;	// 16 = 0x10
	int _curIndex;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *entries;	// G=0x183831; converted property
+ (id)delegate;	// 0x1836b5
- (id)init;	// 0x1836ed
- (void)__atv_end_entry;	// 0x18380d
- (void)__atv_start_entry:(id)entry;	// 0x1837b9
- (id)_selectorForElement:(id)element qName:(id)name end:(BOOL)end;	// 0x183a51
- (void)dealloc;	// 0x183769
- (id)endSelectors;	// 0x183a4d
// converted property getter: - (id)entries;	// 0x183831
- (id)modDate;	// 0x1837b5
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x183991
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x1838c9
- (void)setEntryObject:(id)object forKey:(id)key;	// 0x18385d
- (id)startSelectors;	// 0x183a49
@end

