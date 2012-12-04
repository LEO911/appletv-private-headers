/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PBPresentation : NSObject {
}
+ (void)addHeadersFootersToDocumentContainer:(id)documentContainer instance:(int)instance;	// 0x36c3ee39
+ (void)finalizeWritingGlobalsWithPresentationState:(id)presentationState;	// 0x36c3fe0d
+ (void)processLayoutTypesFromDocument:(id)document masterLayoutMap:(id)map state:(id)state;	// 0x36a3a159
+ (void)readFrom:(PptBinaryReader *)from to:(id)to cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x369cddc5
+ (void)readMasterAndLayouts:(id)layouts masterLayoutMap:(id)map state:(id)state;	// 0x369e5b35
+ (void)readNotes:(id)notes masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state;	// 0x36c40075
+ (void)readSlides:(id)slides masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state isThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x36a3bd79
+ (void)scanSlideListForLayoutTypes:(id)layoutTypes slideListHolder:(id)holder masterLayoutMap:(id)map;	// 0x36a39a9d
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)environmentHolder state:(id)state;	// 0x369dcbc1
+ (void)setFontEntites:(id)entites environmentHolder:(id)holder;	// 0x369dc8cd
+ (void)writeGlobalsWithPresentationState:(id)presentationState;	// 0x36c3ef51
+ (void)writeNotesMasterWithPresentationState:(id)presentationState;	// 0x36c3fe11
+ (void)writeSlideMastersWithPresentationState:(id)presentationState;	// 0x36c3fe7d
+ (void)writeSlidesWithPresentationState:(id)presentationState;	// 0x36c3ff69
@end
