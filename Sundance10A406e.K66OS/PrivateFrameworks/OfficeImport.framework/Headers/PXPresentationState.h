/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OAVState, NSMutableDictionary, OAXTableStyleCache, OAXDrawingState, PDPresentation;
@protocol OCCancelDelegate;

@interface PXPresentationState : NSObject {
	NSMutableDictionary *mModelObjects;	// 4 = 0x4
	OAXDrawingState *mOfficeArtState;	// 8 = 0x8
	OAVState *mOAVState;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mSlideURLToIndexMap;	// 20 = 0x14
	PDPresentation *mTgtPresentation;	// 24 = 0x18
	id<OCCancelDelegate> mCancel;	// 28 = 0x1c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x34fb5ad9; S=0x34f8df0d; @synthesize=mCancel
@property(retain) id tgtPresentation;	// G=0x34f9272d; S=0x34f8df1d; converted property
- (id)init;	// 0x34f8dca1
// declared property getter: - (id)cancelDelegate;	// 0x34fb5ad9
- (void)dealloc;	// 0x34f9b8fd
- (BOOL)isCancelled;	// 0x34f8f605
- (id)modelObjectForLocation:(id)location;	// 0x34f9559d
- (id)oavState;	// 0x350e1265
- (id)officeArtState;	// 0x34f8e45d
- (void)resetOfficeArtState;	// 0x34f94bd1
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x34f8df0d
- (void)setModelObject:(id)object forLocation:(id)location;	// 0x34f95281
- (void)setSlideIndex:(int)index forSlideURL:(id)slideURL;	// 0x34f8e299
// converted property setter: - (void)setTgtPresentation:(id)presentation;	// 0x34f8df1d
- (int)slideIndexForSlideURL:(id)slideURL;	// 0x35019fdd
- (id)tableStyleCache;	// 0x34f8e2f9
// converted property getter: - (id)tgtPresentation;	// 0x34f9272d
@end
