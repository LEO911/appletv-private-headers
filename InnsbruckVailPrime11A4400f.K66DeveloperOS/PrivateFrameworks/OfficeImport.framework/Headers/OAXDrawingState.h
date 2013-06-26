/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class OADFontScheme, OADColorMap, OADColorScheme, OAVState, NSMutableArray, OCPPackagePart, NSMutableDictionary, OAXTableStyleCache, OADBlipCollection, OAXClient, OADStyleMatrix;

@interface OAXDrawingState : NSObject {
	OAXClient *mClient;	// 4 = 0x4
	OCPPackagePart *mPackagePart;	// 8 = 0x8
	OADStyleMatrix *mStyleMatrix;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	id mDocumentState;	// 24 = 0x18
	OADBlipCollection *mTgtBlipCollection;	// 28 = 0x1c
	NSMutableDictionary *mSrcURLToTgtBlipIndexMap;	// 32 = 0x20
	NSMutableArray *mTgtBulletBlips;	// 36 = 0x24
	NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;	// 40 = 0x28
	OAVState *mOavState;	// 44 = 0x2c
	OADColorScheme *mColorScheme;	// 48 = 0x30
	OADColorMap *mColorMap;	// 52 = 0x34
	OADFontScheme *mFontScheme;	// 56 = 0x38
	unsigned mGroupDepth;	// 60 = 0x3c
}
@property(retain) id colorMap;	// G=0x31869921; S=0x31833529; converted property
@property(retain) id colorScheme;	// G=0x31869911; S=0x31810945; converted property
@property(retain) id documentState;	// G=0x3184d021; S=0x31831e3d; converted property
@property(retain) id fontScheme;	// G=0x31869931; S=0x318334ed; converted property
@property(retain) id oavState;	// G=0x3181d0d1; S=0x3180c0dd; converted property
@property(retain) id packagePart;	// G=0x318108b9; S=0x3180ca09; converted property
@property(retain, nonatomic) NSMutableDictionary *sourceURLToTargetBlipIndexMap;	// G=0x318374a5; S=0x318374c5; @synthesize=mSrcURLToTgtBlipIndexMap
@property(retain, nonatomic) NSMutableDictionary *sourceURLToTargetBulletBlipIndexMap;	// G=0x318374b5; S=0x318374d5; @synthesize=mSrcURLToTgtBulletBlipIndexMap
@property(retain) id styleMatrix;	// G=0x3180dc01; S=0x3180d091; converted property
@property(retain) id tableStyleCache;	// G=0x31835195; S=0x31833471; converted property
@property(retain) id targetBlipCollection;	// G=0x3181dd29; S=0x3180c175; converted property
- (id)init;	// 0x318f805d
- (id)initWithClient:(id)client;	// 0x3180c045
- (id)blipRefForURL:(id)url;	// 0x3181beed
- (id)blipRefWithURL:(id)url blipArray:(id)array blipURLtoIndexMap:(id)map;	// 0x3181bfa5
- (id)bulletBlipRefForURL:(id)url;	// 0x318447b1
- (void)clearTargetBlipCollection;	// 0x31869941
- (id)client;	// 0x3181cf2d
// converted property getter: - (id)colorMap;	// 0x31869921
// converted property getter: - (id)colorScheme;	// 0x31869911
- (void)dealloc;	// 0x3182746d
// converted property getter: - (id)documentState;	// 0x3184d021
- (id)drawableForShapeId:(unsigned long)shapeId;	// 0x3183fde5
// converted property getter: - (id)fontScheme;	// 0x31869931
- (BOOL)isInsideGroup;	// 0x3181cbdd
// converted property getter: - (id)oavState;	// 0x3181d0d1
// converted property getter: - (id)packagePart;	// 0x318108b9
- (void)popGroup;	// 0x3183d6d9
- (void)pushGroup;	// 0x3183d6c5
- (void)resetForNewDrawing;	// 0x31817781
// converted property setter: - (void)setColorMap:(id)map;	// 0x31833529
// converted property setter: - (void)setColorScheme:(id)scheme;	// 0x31810945
// converted property setter: - (void)setDocumentState:(id)state;	// 0x31831e3d
- (void)setDrawable:(id)drawable forShapeId:(unsigned long)shapeId;	// 0x3181d601
// converted property setter: - (void)setFontScheme:(id)scheme;	// 0x318334ed
// converted property setter: - (void)setOavState:(id)state;	// 0x3180c0dd
// converted property setter: - (void)setPackagePart:(id)part;	// 0x3180ca09
// declared property setter: - (void)setSourceURLToTargetBlipIndexMap:(id)targetBlipIndexMap;	// 0x318374c5
// declared property setter: - (void)setSourceURLToTargetBulletBlipIndexMap:(id)targetBulletBlipIndexMap;	// 0x318374d5
// converted property setter: - (void)setStyleMatrix:(id)matrix;	// 0x3180d091
// converted property setter: - (void)setTableStyleCache:(id)cache;	// 0x31833471
// converted property setter: - (void)setTargetBlipCollection:(id)collection;	// 0x3180c175
- (void)setTargetBulletBlipArray:(id)array;	// 0x31831f55
// declared property getter: - (id)sourceURLToTargetBlipIndexMap;	// 0x318374a5
// declared property getter: - (id)sourceURLToTargetBulletBlipIndexMap;	// 0x318374b5
// converted property getter: - (id)styleMatrix;	// 0x3180dc01
// converted property getter: - (id)tableStyleCache;	// 0x31835195
// converted property getter: - (id)targetBlipCollection;	// 0x3181dd29
@end
