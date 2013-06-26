/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPDFDocumentRepresentation.h"
#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebPDFDocumentView.h"

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
	BOOL dataSourceHasBeenSet;	// 38 = 0x26
	CGPDFDocumentRef _PDFDocument;	// 40 = 0x28
	NSString *_title;	// 44 = 0x2c
	CGRect *_pageRects;	// 48 = 0x30
}
@property(readonly, retain) NSString *title;	// G=0x365f5325; converted property
+ (Class)_representationClassForWebFrame:(id)webFrame;	// 0x365f4701
+ (CGColorRef)backgroundColor;	// 0x365f460d
+ (CGColorRef)shadowColor;	// 0x365f451d
+ (id)supportedMIMETypes;	// 0x3659dbd1
- (void)_checkPDFTitle;	// 0x365f4f59
- (void)_computePageRects;	// 0x365f4d89
- (id)_pagesInRect:(CGRect)rect;	// 0x365f4965
- (BOOL)canProvideDocumentSource;	// 0x365f531d
- (void)dataSourceUpdated:(id)updated;	// 0x365f4d5d
- (void)dealloc;	// 0x365f4759
- (CGPDFDocumentRef)doc;	// 0x365f5461
- (id)documentSource;	// 0x365f5321
- (void)drawPage:(CGPDFPageRef)page;	// 0x365f47cd
- (void)drawRect:(CGRect)rect;	// 0x365f4b81
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x365f520d
- (void)layout;	// 0x365f4d65
- (unsigned)pageNumberForRect:(CGRect)rect;	// 0x365f5335
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x365f4d81
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x365f4d85
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x365f5471
- (void)setDataSource:(id)source;	// 0x365f4c61
- (void)setNeedsLayout:(BOOL)layout;	// 0x365f4d61
// converted property getter: - (id)title;	// 0x365f5325
- (unsigned)totalPages;	// 0x365f5445
- (void)viewDidMoveToHostWindow;	// 0x365f4d7d
- (void)viewWillMoveToHostWindow:(id)view;	// 0x365f4d79
@end
