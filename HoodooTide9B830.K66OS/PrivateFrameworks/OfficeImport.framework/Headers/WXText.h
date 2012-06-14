/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXText : NSObject {
}
+ (id)addNewSectionTo:(id)to state:(id)state;	// 0x3127c051
+ (void)createChildren:(xmlNode *)children baseStyle:(id)style to:(id)to state:(id)state;	// 0x31274c89
+ (void)createChildrenFromStream:(xmlTextReader *)stream baseStyle:(id)style to:(id)to state:(id)state;	// 0x3127554d
+ (void)readFrom:(xmlNode *)from baseStyle:(id)style to:(id)to state:(id)state;	// 0x31274c69
+ (void)readFrom:(xmlNode *)from state:(id)state;	// 0x3136a425
+ (void)readFromParagraph:(xmlNode *)paragraph baseStyle:(id)style to:(id)to state:(id)state;	// 0x31275d41
+ (void)readFromStream:(xmlTextReader *)stream baseStyle:(id)style to:(id)to state:(id)state;	// 0x3127552d
+ (void)readFromStream:(xmlTextReader *)stream state:(id)state;	// 0x312754a1
+ (void)readFromString:(id)string to:(id)to;	// 0x3136a4b1
+ (void)readFromTable:(xmlNode *)table baseStyle:(id)style to:(id)to state:(id)state;	// 0x3127c221
+ (void)updateTextBoxIdsFromState:(id)state;	// 0x31283c01
@end
