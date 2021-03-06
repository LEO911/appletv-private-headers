/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLRemotePrintPageHelper.h"

@class UIWebPaginationInfo, NSMutableArray;

@interface QLLayoutedPrintPageRenderer : QLRemotePrintPageHelper {
	NSMutableArray *_nodes;	// 28 = 0x1c
	UIWebPaginationInfo *_paginationInfo;	// 32 = 0x20
}
- (id)_currentNodes;	// 0x32be0f0d
- (id)_htmlPageXPath;	// 0x32be0d3d
- (void)dealloc;	// 0x32be0cd9
- (int)numberOfPages;	// 0x32be1081
- (id)pdfDataForPageAtIndex:(int)index withSize:(CGSize)size printingDone:(BOOL *)done;	// 0x32be1141
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x32be10a9
@end

