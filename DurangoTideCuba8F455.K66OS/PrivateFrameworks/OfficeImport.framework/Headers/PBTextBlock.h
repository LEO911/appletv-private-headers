/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBTextBlock : NSObject {
}
+ (void)applyTextRuler:(PptTextRulerAtom *)ruler toTextBlock:(id)textBlock;	// 0x32b90961
+ (void)readClientTextBox:(id)box textBody:(id)body state:(id)state;	// 0x32b89e6d
+ (void)readParagraph:(id)paragraph paragraph:(CFAttributedStringRef)paragraph2 textType:(int)type state:(id)state;	// 0x32b8ad4d
+ (void)styledPargraphs:(CFArrayRef)pargraphs styledText:(CFAttributedStringRef)text;	// 0x32b8aae9
+ (void)styledText:(CFAttributedStringRef)text textBlock:(id)block;	// 0x32b8a76d
@end

