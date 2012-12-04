/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class WDParagraphProperties, NSMutableArray;

@interface WDParagraph : WDBlock {
	WDParagraphProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRuns;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x36ab0db1
- (id)initWithText:(id)text string:(id)string;	// 0x36c787c1
- (id)addAnnotation:(int)annotation;	// 0x36c7890d
- (id)addBookmark;	// 0x36ab160d
- (id)addBookmark:(id)bookmark type:(int)type;	// 0x36b133c1
- (id)addCharacterRun;	// 0x36ab5f1d
- (id)addDateTime:(id)time;	// 0x36c7897d
- (id)addEndnote;	// 0x36b58cad
- (id)addFieldMarker;	// 0x36ab7e05
- (id)addFieldMarker:(int)marker;	// 0x36ab7dd5
- (id)addFootnote;	// 0x36b7b8f1
- (void)addRun:(id)run;	// 0x36ab5d09
- (id)addSpecialCharacter;	// 0x36b591c5
- (id)addSymbol;	// 0x36b0c969
- (int)blockType;	// 0x36ab7cb9
- (void)clearProperties;	// 0x36c78865
- (void)clearRuns;	// 0x36c788e1
- (void)dealloc;	// 0x36acfb99
- (void)insertRun:(id)run atIndex:(unsigned)index;	// 0x36c788a1
- (BOOL)isContinuationOf:(id)of;	// 0x36b1d959
- (BOOL)isEmpty;	// 0x36c78b81
- (BOOL)isTextFrame;	// 0x36ac3ad1
- (float)maxReflectionDistance;	// 0x36c789ed
- (id)newRunIterator;	// 0x36c78b3d
- (id)properties;	// 0x36ab11a5
- (void)removeLastCharacter:(unsigned short)character;	// 0x36af91f5
- (void)removeRun:(id)run;	// 0x36c788c1
- (id)runAt:(int)at;	// 0x36ac5831
- (int)runCount;	// 0x36ab5e95
- (id)runIterator;	// 0x36c78ae9
- (id)runs;	// 0x36c78891
@end
