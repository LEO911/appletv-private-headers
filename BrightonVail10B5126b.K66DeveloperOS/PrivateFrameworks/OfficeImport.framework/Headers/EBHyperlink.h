/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBHyperlink : NSObject {
}
+ (void)addToolTip:(XlHLinkToolTip *)tip toEdHyperLink:(id)edHyperLink edResources:(id)resources;	// 0x34a095b9
+ (id)edHyperlinkFromXlHLink:(XlHLink *)xlHLink edResources:(id)resources;	// 0x34a09465
+ (int)edTypeFromXlHyperlinkType:(int)xlHyperlinkType;	// 0x34a099a9
+ (XlHLink *)xlHLinkFromEDHyperlink:(id)edhyperlink state:(id)state;	// 0x34a095f9
+ (XlHLinkToolTip *)xlToolTipFromEDHyperLink:(id)edhyperLink state:(id)state;	// 0x34a0985d
+ (int)xlTypeFromEDHyperlinkType:(int)edhyperlinkType;	// 0x34a099b5
@end

