/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMAttributedStringParserContext.h"
#import "IMFoundation-Structs.h"

@class NSMutableArray, NSArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext {
	NSMutableArray *_inlinedFileTransferGUIDs;	// 8 = 0x8
	NSMutableArray *_standaloneFileTransferGUIDs;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *inlinedFileTransferGUIDs;	// G=0x32d46ccd; @synthesize=_inlinedFileTransferGUIDs
@property(readonly, assign, nonatomic) NSArray *standaloneFileTransferGUIDs;	// G=0x32d46cdd; @synthesize=_standaloneFileTransferGUIDs
- (id)initWithAttributedString:(id)attributedString;	// 0x32d44dd5
- (void)dealloc;	// 0x32d452ad
// declared property getter: - (id)inlinedFileTransferGUIDs;	// 0x32d46ccd
- (id)name;	// 0x32d5a1d5
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range;	// 0x32d450a5
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range characters:(id)characters;	// 0x32d5a229
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range fileTransferGUID:(id)guid filename:(id)filename bookmark:(id)bookmark width:(id)width height:(id)height;	// 0x32d46f5d
- (void)parserDidStart:(id)parser;	// 0x32d44f3d
- (void)parserDidStart:(id)parser bodyAttributes:(id)attributes;	// 0x32d5a225
- (id)resultsForLogging;	// 0x32d5a1e1
// declared property getter: - (id)standaloneFileTransferGUIDs;	// 0x32d46cdd
@end

