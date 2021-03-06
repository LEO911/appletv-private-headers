/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class OAXDrawingState, WDCharacterRun, OCPPackagePart, WXOAVState, NSMutableArray, WDDocument, TSUNoCopyDictionary;
@protocol OCCancelDelegate;

@interface WXState : NSObject {
	WDDocument *mDocument;	// 4 = 0x4
	TSUNoCopyDictionary *mTextNodesToBeAdded;	// 8 = 0x8
	TSUNoCopyDictionary *mMapBookmarkIdToName;	// 12 = 0xc
	TSUNoCopyDictionary *mMapAnnotationIdToAnnotation;	// 16 = 0x10
	OCPPackagePart *mPackagePart;	// 20 = 0x14
	OCPPackagePart *mAnnotationPart;	// 24 = 0x18
	xmlDoc *mFootnoteDocument;	// 28 = 0x1c
	xmlNode *mFootnotes;	// 32 = 0x20
	xmlDoc *mEndnoteDocument;	// 36 = 0x24
	xmlNode *mEndnotes;	// 40 = 0x28
	xmlDoc *mAnnotationDocument;	// 44 = 0x2c
	xmlNode *mAnnotations;	// 48 = 0x30
	NSMutableArray *mDeleteAuthorStack;	// 52 = 0x34
	NSMutableArray *mDeleteDateStack;	// 56 = 0x38
	NSMutableArray *mEditAuthorStack;	// 60 = 0x3c
	NSMutableArray *mEditDateStack;	// 64 = 0x40
	NSMutableArray *mFormatAuthorStack;	// 68 = 0x44
	NSMutableArray *mFormatDateStack;	// 72 = 0x48
	WXOAVState *mWXOavState;	// 76 = 0x4c
	OAXDrawingState *mDrawingState;	// 80 = 0x50
	int mCurrentOfficeArtTextType;	// 84 = 0x54
	WDCharacterRun *mReadSymbolTo;	// 88 = 0x58
	BOOL mNewSectionRequested;	// 92 = 0x5c
	unsigned long mCurrentRowCNFStyle;	// 96 = 0x60
	unsigned long mCurrentCellCNFStyle;	// 100 = 0x64
	BOOL mCurrentTableWraps;	// 104 = 0x68
	id<OCCancelDelegate> mCancelDelegate;	// 108 = 0x6c
	BOOL mIsThumbnail;	// 112 = 0x70
}
@property(retain) id annotationPart;	// G=0x34ac1781; S=0x34ac1791; converted property
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x348f0d0d; S=0x348dc501; @synthesize=mCancelDelegate
@property(assign) unsigned long currentCellCNFStyle;	// G=0x348ea1e5; S=0x348f2d39; converted property
@property(assign, nonatomic) int currentOfficeArtTextType;	// G=0x348f8a71; S=0x348eb75d; @synthesize=mCurrentOfficeArtTextType
@property(assign) unsigned long currentRowCNFStyle;	// G=0x348ea1d5; S=0x348f2f25; converted property
@property(assign) BOOL currentTableWraps;	// G=0x348f2f81; S=0x348e5fc1; converted property
@property(retain) id document;	// G=0x348e2055; S=0x348dc411; converted property
@property(assign) BOOL isThumbnail;	// G=0x34ac19a9; S=0x348dc511; converted property
@property(assign, getter=isNewSectionRequested) BOOL newSectionRequested;	// G=0x348e9ced; S=0x348f0bfd; converted property
@property(retain) id packagePart;	// G=0x348dc279; S=0x348efa39; converted property
@property(retain) id readSymbolTo;	// G=0x349a5d69; S=0x34ac1999; converted property
- (id)init;	// 0x348dbe85
- (id)initNoStacksWith:(id)with;	// 0x34ac13a5
- (void)addAnnotationID:(long)anId annotation:(id)annotation;	// 0x34ac15e5
- (void)addBookmarkId:(int)anId name:(id)name;	// 0x348ea86d
- (void)addText:(id)text node:(xmlNode *)node;	// 0x34ac151d
// converted property getter: - (id)annotationPart;	// 0x34ac1781
- (id)annotationWithID:(long)anId;	// 0x34ac1631
- (id)bookmarkName:(int)name;	// 0x348eeed5
// declared property getter: - (id)cancelDelegate;	// 0x348f0d0d
- (void)clearOutNodesToBeAdded:(id)beAdded;	// 0x348ea311
// converted property getter: - (unsigned long)currentCellCNFStyle;	// 0x348ea1e5
- (id)currentDeleteAuthor;	// 0x348eb1c1
- (id)currentDeleteDate;	// 0x348eb1e1
- (id)currentEditAuthor;	// 0x348eb201
- (id)currentEditDate;	// 0x348eb221
- (id)currentFormatAuthor;	// 0x34ac1959
- (id)currentFormatDate;	// 0x34ac1979
// declared property getter: - (int)currentOfficeArtTextType;	// 0x348f8a71
// converted property getter: - (unsigned long)currentRowCNFStyle;	// 0x348ea1d5
// converted property getter: - (BOOL)currentTableWraps;	// 0x348f2f81
- (void)dealloc;	// 0x348f9af9
// converted property getter: - (id)document;	// 0x348e2055
- (id)drawingState;	// 0x348dcbe5
- (bool)hasAnnotations;	// 0x34ac1679
// converted property getter: - (BOOL)isNewSectionRequested;	// 0x348e9ced
// converted property getter: - (BOOL)isThumbnail;	// 0x34ac19a9
- (id)nodesToBeAdded:(id)beAdded;	// 0x348ea2d9
// converted property getter: - (id)packagePart;	// 0x348dc279
- (void)popDeleteAuthorDate;	// 0x34ac1811
- (void)popEditAuthorDate;	// 0x34ac1895
- (void)popFormatAuthorDate;	// 0x34ac1919
- (void)pushDeleteAuthor:(id)author date:(id)date;	// 0x34ac17cd
- (void)pushEditAuthor:(id)author date:(id)date;	// 0x34ac1851
- (void)pushFormatAuthor:(id)author date:(id)date;	// 0x34ac18d5
// converted property getter: - (id)readSymbolTo;	// 0x349a5d69
// converted property setter: - (void)setAnnotationPart:(id)part;	// 0x34ac1791
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x348dc501
// converted property setter: - (void)setCurrentCellCNFStyle:(unsigned long)style;	// 0x348f2d39
// declared property setter: - (void)setCurrentOfficeArtTextType:(int)type;	// 0x348eb75d
// converted property setter: - (void)setCurrentRowCNFStyle:(unsigned long)style;	// 0x348f2f25
// converted property setter: - (void)setCurrentTableWraps:(BOOL)wraps;	// 0x348e5fc1
// converted property setter: - (void)setDocument:(id)document;	// 0x348dc411
- (void)setDocumentPart:(id)part;	// 0x348e8d69
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x348dc511
// converted property setter: - (void)setNewSectionRequested:(BOOL)requested;	// 0x348f0bfd
// converted property setter: - (void)setPackagePart:(id)part;	// 0x348efa39
// converted property setter: - (void)setReadSymbolTo:(id)to;	// 0x34ac1999
- (id)wxoavState;	// 0x348e6ab1
- (xmlNode *)xmlAnnotationWithID:(long)anId;	// 0x34ac1709
- (xmlNode *)xmlEndnoteWithID:(long)anId;	// 0x34ac1691
- (xmlNode *)xmlFootnoteWithID:(long)anId;	// 0x349b4db1
@end

