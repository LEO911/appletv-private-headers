/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQWrapPointGenerator.h"
#import "GQHState.h"

@class GQHStyle, GQDWPContainerHint, GQDSStyle, GQWrapPointSet;

__attribute__((visibility("hidden")))
@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
@private
	CFDictionaryRef mFloatingDrawables;	// 108 = 0x6c
	int mMode;	// 112 = 0x70
	CFDictionaryRef mHeaders;	// 116 = 0x74
	CFDictionaryRef mFooters;	// 120 = 0x78
	CFArrayRef mSectionStyles;	// 124 = 0x7c
	CFDictionaryRef mPageWrapPointsMap;	// 128 = 0x80
	int mCurrentPageIndex;	// 132 = 0x84
	int mStartPageAt;	// 136 = 0x88
	int mStartPageAtValueChangedAtPageIndex;	// 140 = 0x8c
	GQHStyle *mCurrentLayoutStyle;	// 144 = 0x90
	GQHStyle *mCurrentParagraphStyle;	// 148 = 0x94
	GQDSStyle *mCurrentBaseParagraphStyle;	// 152 = 0x98
	CFStringRef mCurrentCachedParagraphClass;	// 156 = 0x9c
	GQHStyle *mCurrentSpanStyle;	// 160 = 0xa0
	GQDSStyle *mCurrentBaseSpanStyle;	// 164 = 0xa4
	CFStringRef mCurrentCachedSpanClass;	// 168 = 0xa8
	GQWrapPointSet *mCurrentWrapPointSet;	// 172 = 0xac
	CGRect mLastFrame;	// 176 = 0xb0
	BOOL mMappingFloatingDrawables;	// 192 = 0xc0
	BOOL mStartedPage;	// 193 = 0xc1
	BOOL mStartedSection;	// 194 = 0xc2
	BOOL mDidInsertPageHeader;	// 195 = 0xc3
	BOOL mDidFindContainerHint;	// 196 = 0xc4
	GQDWPContainerHint *mLastInsertedContainerHint;	// 200 = 0xc8
	CFArrayRef mAttachmentPositions;	// 204 = 0xcc
	long mAttachmentIdCounter;	// 208 = 0xd0
	long mFirstAttachmentId;	// 212 = 0xd4
	BOOL mSplitNextAttachment;	// 216 = 0xd8
	GQDSStyle *mCurrentSectionStyle;	// 220 = 0xdc
	BOOL mHasLayoutDrawables;	// 224 = 0xe0
	int mCurrentHintPageIndex;	// 228 = 0xe4
	int mCurrentHintColumnIndex;	// 232 = 0xe8
	BOOL mIsMappingHeadersFooters;	// 236 = 0xec
	int mHeaderFooterPageNumber;	// 240 = 0xf0
	CFDictionaryRef mDrawablePagesOrderToCssZOrderClassMap;	// 244 = 0xf4
	CGSize mPageSize;	// 248 = 0xf8
	CFArrayRef mTocHrefStack;	// 256 = 0x100
	BOOL mCurrentFrameHasSandbagFloats;	// 260 = 0x104
	int mProgressiveIndex;	// 264 = 0x108
}
@property(assign) int currentPageIndex;	// G=0x304a8d51; S=0x304a8d61; converted property
@property(assign) BOOL hasLayoutDrawables;	// G=0x304a8df5; S=0x304a8de5; converted property
@property(assign) BOOL isMappingHeadersFooters;	// G=0x304a8e15; S=0x304a8e05; converted property
@property(assign) int mode;	// G=0x304a8d31; S=0x304a8d41; converted property
@property(assign) CGSize pageSize;	// G=0x304a8ec5; S=0x304a8edd; converted property
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x304a8f09
- (void)addAttachmentPosition:(double)position;	// 0x304aa471
- (void)addFloatingDrawable:(id)drawable;	// 0x304aadcd
- (void)addSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages;	// 0x304aa9c5
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x304a92e5
- (void)addWrapPoint:(id)point;	// 0x304a9851
- (BOOL)allowInlineWrap;	// 0x304a8ef1
- (void)beginWrapPointSet;	// 0x304a99a9
- (void)clearFloatingDrawables;	// 0x304aad19
- (void)clearWrapPoints;	// 0x304a8de1
- (void)closeStateLayoutElementsAndStyles;	// 0x304ab3d9
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x304a95d5
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x304a92b1
- (CFStringRef)cssZOrderClassForDrawablePagesOrder:(int)drawablePagesOrder;	// 0x304a921d
- (long)currentAttachmentId;	// 0x304a8da9
- (double)currentAttachmentPosition;	// 0x304aa425
// converted property getter: - (int)currentPageIndex;	// 0x304a8d51
- (void)dealloc;	// 0x304aaead
- (id)drawableAtIndex:(int)index;	// 0x304aad99
- (void)endSection;	// 0x304a9059
- (void)endWrapPointSet;	// 0x304a9915
- (void)finishedWithSplitAttachment;	// 0x304aa4b5
- (long)firstAttachmentId;	// 0x304a8dd1
- (int)floatingDrawablesCount;	// 0x304aae7d
- (id)footerForName:(CFStringRef)name;	// 0x304aabc1
- (void)handleContainerHint:(id)hint;	// 0x304a9dbd
// converted property getter: - (BOOL)hasLayoutDrawables;	// 0x304a8df5
- (id)headerForName:(CFStringRef)name;	// 0x304aac91
- (void)inContent;	// 0x304a9349
- (void)insertAttachmentPlaceholder;	// 0x304aa33d
// converted property getter: - (BOOL)isMappingHeadersFooters;	// 0x304a8e15
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned)index;	// 0x304aa4e1
// converted property getter: - (int)mode;	// 0x304a8d31
- (double)moveToNextAttachmentPosition;	// 0x304aa3e9
- (BOOL)needAbsolutelyPositionedTables;	// 0x304a9039
- (long)nextAttachmentId;	// 0x304a8db9
- (void)openStateLayoutElementsAndStyles;	// 0x304ab5f9
- (void)overrideSectionStyle:(id)style;	// 0x304aa8a1
- (CFArrayRef)pageDrawables:(int)drawables;	// 0x304aacb5
- (int)pageNumberForHeaderOrFooter;	// 0x304a8e25
// converted property getter: - (CGSize)pageSize;	// 0x304a8ec5
- (CFDictionaryRef)pagesOrderToCssZOrderClassMapDictionary;	// 0x304a8eb5
- (void)popTocHref;	// 0x304a9181
- (void)pushTocHref:(CFStringRef)href;	// 0x304a91b5
- (XXStruct_ny2fMB)rangeForSectionStyleAtPageIndex:(int)pageIndex;	// 0x304aa8d1
- (void)resolveHeaderName:(const CFStringRef *)name footerName:(const CFStringRef *)name2;	// 0x304a99ed
- (id)sectionStyleForPageIndex:(int)pageIndex;	// 0x304aa93d
- (id)sectionStyleRunForRunBeforePageIndex:(int)runBeforePageIndex;	// 0x304ab899
- (void)setCurrentLayoutStyle:(id)style;	// 0x304aa84d
// converted property setter: - (void)setCurrentPageIndex:(int)index;	// 0x304a8d61
- (void)setCurrentParagraphStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x304aa755
- (void)setCurrentSpanStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x304aa65d
- (void)setDidFindContainerHint:(BOOL)findContainerHint;	// 0x304a8d81
- (void)setDidInsertPageHeader:(BOOL)insertPageHeader;	// 0x304a8d71
- (void)setFooters:(CFArrayRef)footers;	// 0x304aab15
// converted property setter: - (void)setHasLayoutDrawables:(BOOL)drawables;	// 0x304a8de5
- (void)setHeaders:(CFArrayRef)headers;	// 0x304aabe5
// converted property setter: - (void)setIsMappingHeadersFooters:(BOOL)footers;	// 0x304a8e05
// converted property setter: - (void)setMode:(int)mode;	// 0x304a8d41
- (void)setOutlineLevel:(int)level;	// 0x304a8e6d
- (void)setOutlineStyleType:(int)type;	// 0x304a8e91
// converted property setter: - (void)setPageSize:(CGSize)size;	// 0x304a8edd
- (bool)splitNextAttachment;	// 0x304a8d91
- (void)startLayout;	// 0x304ab1d9
- (void)startSection;	// 0x304ab0f1
- (unsigned)tocDepth;	// 0x304a91fd
- (BOOL)useOutline;	// 0x304a8e55
- (id)wrapPointSetForPage:(int)page;	// 0x304ab595
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)wrapPoints;	// 0x304a9819
@end

