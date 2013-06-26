/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSMutableAttributedString.h> // Unknown library


@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)_changeIntAttribute:(id)attribute by:(int)by range:(NSRange)range;	// 0x35aaf8a1
- (BOOL)_shouldSetOriginalFontAttribute;	// 0x35aaddbd
- (void)convertBidiControlCharactersToWritingDirection;	// 0x35aafde1
- (NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned)index;	// 0x35aafb11
- (void)convertWritingDirectionToBidiControlCharacters;	// 0x35ab01e5
- (NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned)index;	// 0x35aafe69
- (void)fixAttachmentAttributeInRange:(NSRange)range;	// 0x35aaf44d
- (void)fixAttributesInRange:(NSRange)range;	// 0x35aadd59
- (void)fixFontAttributeInRange:(NSRange)range;	// 0x35aaddd5
- (void)fixGlyphInfoAttributeInRange:(NSRange)range;	// 0x35aaf5ed
- (void)fixParagraphStyleAttributeInRange:(NSRange)range;	// 0x35aaf2b5
- (BOOL)readFromData:(id)data options:(id)options documentAttributes:(id *)attributes;	// 0x35aafaed
- (BOOL)readFromData:(id)data options:(id)options documentAttributes:(id *)attributes error:(id *)error;	// 0x35aafaa9
- (BOOL)readFromURL:(id)url options:(id)options documentAttributes:(id *)attributes;	// 0x35aafac9
- (BOOL)readFromURL:(id)url options:(id)options documentAttributes:(id *)attributes error:(id *)error;	// 0x35aafa89
- (void)setAlignment:(int)alignment range:(NSRange)range;	// 0x35aaf5f1
- (void)setBaseWritingDirection:(int)direction range:(NSRange)range;	// 0x35aaf749
- (void)subscriptRange:(NSRange)range;	// 0x35aafa25
- (void)superscriptRange:(NSRange)range;	// 0x35aaf9f5
- (void)unscriptRange:(NSRange)range;	// 0x35aafa59
@end
