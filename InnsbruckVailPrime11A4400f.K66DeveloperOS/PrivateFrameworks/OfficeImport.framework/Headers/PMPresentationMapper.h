/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class CMArchiveManager, NSMutableArray, PDPresentation, NSString, OIXMLDocument, OIXMLElement;

@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
	int mWidth;	// 8 = 0x8
	PDPresentation *mPresentation;	// 12 = 0xc
	NSMutableArray *mSlideNames;	// 16 = 0x10
	NSMutableArray *mSlideGuids;	// 20 = 0x14
	NSString *mResourceUrlPrefix;	// 24 = 0x18
	NSString *mResourceUrlProtocol;	// 28 = 0x1c
	CMArchiveManager *mArchiver;	// 32 = 0x20
	OIXMLDocument *mXhtmlDoc;	// 36 = 0x24
	OIXMLElement *mBodyElement;	// 40 = 0x28
	unsigned mNextCommit;	// 44 = 0x2c
	unsigned mCurrentSlide;	// 48 = 0x30
	BOOL mHasPushedFirstSlides;	// 52 = 0x34
	float mSlideOriginY;	// 56 = 0x38
}
- (id)initWithPDPresentation:(id)pdpresentation archiver:(id)archiver;	// 0x316df799
- (void)_pushEmptySlideWithMessage:(id)message;	// 0x318aa679
- (id)archiver;	// 0x316e0c01
- (id)blipAtIndex:(unsigned)index;	// 0x3171e289
- (void)dealloc;	// 0x317237b9
- (id)documentTitle;	// 0x316e0311
- (void)finishMappingWithState:(id)state;	// 0x3171f151
- (void)mapDefaultCssStylesAt:(id)at;	// 0x316e080d
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x31714c09
- (CGSize)pageSizeForDevice;	// 0x316dfef1
- (void)setHtmlDocumentSizeInArchiver;	// 0x316dfe59
- (CGSize)slideSize;	// 0x316dfaad
- (void)startMappingWithState:(id)state;	// 0x316dfadd
@end
