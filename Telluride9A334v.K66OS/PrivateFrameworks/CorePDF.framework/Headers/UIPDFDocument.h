/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, UIPDFPageImageCache;

@interface UIPDFDocument : NSObject {
	CGPDFDocumentRef _cgDocument;	// 4 = 0x4
	UIPDFPage **_pageArray;	// 8 = 0x8
	unsigned _numberOfPages;	// 12 = 0xc
	float _cachedWidth;	// 16 = 0x10
	NSString *_documentName;	// 20 = 0x14
	UIPDFPageImageCache *_pageImageCache;	// 24 = 0x18
	unsigned _imageCacheCount;	// 28 = 0x1c
	unsigned _imageCacheLookAhead;	// 32 = 0x20
	int _lock;	// 36 = 0x24
	int _imageCacheLock;	// 40 = 0x28
}
@property(readonly, assign) unsigned numberOfPages;	// G=0x307e06c5; @dynamic
@property(retain) UIPDFPageImageCache *pageImageCache;	// G=0x307e0b91; S=0x307e0c31; @dynamic
+ (id)documentNamed:(id)named;	// 0x307e0535
- (id)initWithCGPDFDocument:(CGPDFDocumentRef)cgpdfdocument;	// 0x307e0889
- (id)initWithURL:(id)url;	// 0x307e07b1
- (void)_clearCachedState;	// 0x307e0aa1
- (CGPDFDocumentRef)copyCGPDFDocument;	// 0x307e09b1
- (void)dealloc;	// 0x307e0749
- (float)maxHeight;	// 0x307e0d41
- (float)maxWidth;	// 0x307e0c9d
// declared property getter: - (unsigned)numberOfPages;	// 0x307e06c5
- (id)pageAtIndex:(unsigned)index;	// 0x307e05d9
// declared property getter: - (id)pageImageCache;	// 0x307e0b91
- (void)purgePagesBefore:(unsigned)before;	// 0x307e09e9
- (void)setCGPDFDocument:(CGPDFDocumentRef)document;	// 0x307e0921
- (void)setImageCacheCount:(unsigned)count lookAhead:(unsigned)ahead;	// 0x307e06f9
// declared property setter: - (void)setPageImageCache:(id)cache;	// 0x307e0c31
- (float)sumHeight;	// 0x307e0e2d
- (float)sumWidth;	// 0x307e0dbd
@end

