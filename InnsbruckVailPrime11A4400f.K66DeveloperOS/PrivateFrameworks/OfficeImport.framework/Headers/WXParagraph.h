/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface WXParagraph : NSObject {
}
+ (void)readAnnotationFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31954155
+ (void)readFrom:(xmlNode *)from baseStyle:(id)style to:(id)to state:(id)state;	// 0x31819211
+ (void)readFromString:(id)string to:(id)to;	// 0x3181f6c9
+ (void)readHyperlinkFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31820f39
+ (void)readRFrom:(xmlNode *)from to:(id)to targetRun:(id)run state:(id)state;	// 0x31819b95
+ (void)readRunsFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to targetRun:(id)run state:(id)state;	// 0x3181969d
+ (void)readRunsTo:(id)to state:(id)state;	// 0x31819515
+ (void)readSimpleFieldFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x3181f709
+ (void)readTrackingFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x31954055
@end

