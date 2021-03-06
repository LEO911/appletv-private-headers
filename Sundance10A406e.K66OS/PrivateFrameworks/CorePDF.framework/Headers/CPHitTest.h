/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, CPPage;

@interface CPHitTest : NSObject {
	CPPage *page;	// 4 = 0x4
	NSMutableArray *objectsOnPage;	// 8 = 0x8
	float mapTemp;	// 12 = 0xc
}
@property(readonly, retain) CPPage *page;	// G=0x32ad5d39; converted property
- (id)initWithPage:(id)page;	// 0x32ad5c81
- (id)column:(CGPoint)column;	// 0x32ad6115
- (unsigned)columnsAt:(CGPoint)at;	// 0x32ad60e1
- (int)compareByReadingOrder:(CGPoint)order to:(CGPoint)to;	// 0x32ad6325
- (void)dealloc;	// 0x32ad5cd9
- (id)findBestMatch:(id)match atPoint:(CGPoint)point;	// 0x32ad69d9
- (void)findClickableObjects:(BOOL)objects;	// 0x32ad644d
- (id)findObjectIn:(id)anIn at:(CGPoint)at count:(int *)count;	// 0x32ad6b09
- (BOOL)hitTestGraphicObject:(id)object point:(CGPoint)point;	// 0x32ad675d
- (BOOL)hitTestParagraph:(id)paragraph point:(CGPoint)point;	// 0x32ad6871
- (id)layoutArea:(CGPoint)area;	// 0x32ad6079
- (id)objectAtPoint:(CGPoint)point;	// 0x32ad62f1
// converted property getter: - (id)page;	// 0x32ad5d39
- (id)paragraph:(CGPoint)paragraph;	// 0x32ad5d49
- (id)paragraphNear:(CGPoint)near;	// 0x32ad5f09
- (id)textLine:(CGPoint)line;	// 0x32ad6169
@end

