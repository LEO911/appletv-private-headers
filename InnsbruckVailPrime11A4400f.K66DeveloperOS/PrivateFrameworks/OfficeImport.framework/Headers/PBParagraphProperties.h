/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface PBParagraphProperties : NSObject {
}
+ (int)pptAlignmentTypeWithOADTextAlignType:(int)oadtextAlignType;	// 0x31914c95
+ (int)pptFontAlignWithOADTextFontAlign:(int)oadtextFontAlign;	// 0x31914cad
+ (short)pptTextSpacingWithOADParaSpacing:(id)oadparaSpacing defaultPptParaSpacing:(short)spacing;	// 0x31914be9
+ (void)readAlign:(id)align pptAlignmentType:(int)type;	// 0x316c1225
+ (void)readParagraphProperties:(id)properties paragraphProperty:(PptParaProperty *)property bulletStyle:(PptParaProperty9 *)style isMaster:(BOOL)master state:(id)state;	// 0x316c0905
+ (void)readParagraphProperties:(id)properties paragraphPropertyRun:(PptParaRun *)run bulletStyle:(PptParaProperty9 *)style state:(id)state;	// 0x316d5315
+ (void)writeParagraphProperties:(id)properties paragraphProperties:(PptParaProperty *)properties2 bulletStyle:(PptParaProperty9 *)style state:(id)state;	// 0x31914249
+ (void)writeTabStopsFromParagraphProperties:(id)paragraphProperties toParagraphProperties:(PptParaProperty *)paragraphProperties2 state:(id)state;	// 0x31914acd
@end

