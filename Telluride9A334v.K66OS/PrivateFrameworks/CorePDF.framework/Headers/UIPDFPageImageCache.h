/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject {
	UIPDFDocument *_document;	// 4 = 0x4
	unsigned _lookAhead;	// 8 = 0x8
	unsigned _jobCount;	// 12 = 0xc
	UIPDFPageRenderJob **_jobsPrioritized;	// 16 = 0x10
	unsigned nextJobIndex;	// 20 = 0x14
	unsigned _pageCount;	// 24 = 0x18
	UIPDFPageRenderJob **_jobsByPage;	// 28 = 0x1c
	NSOperationQueue *_renderQueue;	// 32 = 0x20
	int _lock;	// 36 = 0x24
}
@property(readonly, assign) UIPDFDocument *document;	// G=0x307eed65; @synthesize=_document
@property(readonly, assign) unsigned lookAhead;	// G=0x307eed45; @synthesize=_lookAhead
@property(readonly, assign) unsigned pageCount;	// G=0x307eed55; @synthesize=_pageCount
- (id)initWithDocument:(id)document;	// 0x307eed75
- (id)initWithDocument:(id)document cacheCount:(unsigned)count lookAhead:(unsigned)ahead;	// 0x307eeecd
- (void)addRenderJob:(id)job;	// 0x307eed95
- (void)cacheImageOfPage:(unsigned)page maxSize:(CGSize)size;	// 0x307ef595
- (void)cancelPendingRenderOperations;	// 0x307ef1bd
- (void)cancelPendingRenderOperationsForTarget:(id)target;	// 0x307ef139
- (void)dealloc;	// 0x307ef669
- (void)deliverImageOfPage:(unsigned)page maxSize:(CGSize)size receiver:(id)receiver selector:(SEL)selector info:(id)info;	// 0x307ef251
- (void)didReceiveMemoryWarning:(id)warning;	// 0x307ef04d
// declared property getter: - (id)document;	// 0x307eed65
// declared property getter: - (unsigned)lookAhead;	// 0x307eed45
// declared property getter: - (unsigned)pageCount;	// 0x307eed55
@end

