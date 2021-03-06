/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, RTF_OIXMLElement, RTF_CMArchiveManager;

__attribute__((visibility("hidden")))
@interface RTFHTMLWriter : NSObject {
	RTF_CMArchiveManager *_archiver;	// 4 = 0x4
	int _state;	// 8 = 0x8
	NSMutableArray *_textBuffer;	// 12 = 0xc
	NSMutableArray *_tableStack;	// 16 = 0x10
	NSMutableArray *_rowStack;	// 20 = 0x14
	RTF_OIXMLElement *_currentTableParagraph;	// 24 = 0x18
	RTF_OIXMLElement *_currentTable;	// 28 = 0x1c
	RTF_OIXMLElement *_currentRow;	// 32 = 0x20
	BOOL _inited;	// 36 = 0x24
}
- (id)initWithArchiver:(id)archiver;	// 0x33b1fcfd
- (id)_cellStyleStringFromCell:(id)cell;	// 0x33b20491
- (void)_flushParagraph:(id)paragraph;	// 0x33b20d55
- (id)_fontNameByAppendingSerif:(id)serif;	// 0x33b1fe49
- (id)_paragraphStyleStringFromState:(id)state;	// 0x33b201b1
- (id)_tableStyleStringFromCell:(id)cell;	// 0x33b203d9
- (id)_textBumpFromState:(id)state;	// 0x33b1fea9
- (id)_textStyleStringFromState:(id)state;	// 0x33b1ff45
- (void)dealloc;	// 0x33b1fda9
- (void)finishDocumentWithState:(id)state;	// 0x33b210fd
- (void)insertAttachmentNamed:(id)named withData:(id)data;	// 0x33b21c21
- (void)reader:(id)reader didEndTableCell:(id)cell;	// 0x33b21a89
- (void)reader:(id)reader didParseString:(id)string;	// 0x33b21351
- (void)readerDidEndParagraph:(id)reader;	// 0x33b211a9
- (void)readerDidEndTable:(id)reader;	// 0x33b217f5
- (void)readerDidEndTableRow:(id)reader;	// 0x33b21a4d
- (void)readerDidStartTable:(id)reader;	// 0x33b21691
- (void)readerDidStartTableRow:(id)reader;	// 0x33b219d9
- (void)startDocumentWithState:(id)state;	// 0x33b20de1
@end

