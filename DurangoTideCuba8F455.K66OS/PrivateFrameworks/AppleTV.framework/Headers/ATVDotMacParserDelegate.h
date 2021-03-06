/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBaseParserDelegate.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacParserDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_entries;	// 12 = 0xc
	BOOL _entryCreated;	// 16 = 0x10
	int _curIndex;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *entries;	// G=0x30657921; converted property
+ (id)delegate;	// 0x30657a51
- (id)init;	// 0x306579e1
- (void)__atv_end_entry;	// 0x306576d9
- (void)__atv_start_entry:(id)entry;	// 0x3065794d
- (id)_selectorForElement:(id)element qName:(id)name end:(BOOL)end;	// 0x30657701
- (void)dealloc;	// 0x30657999
- (id)endSelectors;	// 0x306576fd
// converted property getter: - (id)entries;	// 0x30657921
- (id)modDate;	// 0x306576d5
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x30657751
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x30657801
- (void)setEntryObject:(id)object forKey:(id)key;	// 0x306578b9
- (id)startSelectors;	// 0x306576f9
@end

