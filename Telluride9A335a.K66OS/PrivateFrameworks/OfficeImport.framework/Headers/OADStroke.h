/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"

@class OADDash, OADColor, OADLineJoin, OADLineEnd, OADFill;

__attribute__((visibility("hidden")))
@interface OADStroke : OADProperties <NSCopying> {
@private
	OADColor *mColor;	// 12 = 0xc
	OADFill *mFill;	// 16 = 0x10
	OADDash *mDash;	// 20 = 0x14
	OADLineJoin *mJoin;	// 24 = 0x18
	OADLineEnd *mHead;	// 28 = 0x1c
	OADLineEnd *mTail;	// 32 = 0x20
	float mWidth;	// 36 = 0x24
	unsigned char mCap;	// 40 = 0x28
	unsigned char mCompoundType;	// 41 = 0x29
	unsigned char mPenAlignment;	// 42 = 0x2a
	unsigned mIsColorOverridden : 1;	// 43 = 0x2b
	unsigned mIsCompoundTypeOverridden : 1;	// 43 = 0x2b
	unsigned mIsCapOverridden : 1;	// 43 = 0x2b
	unsigned mIsWidthOverridden : 1;	// 43 = 0x2b
	unsigned mIsJoinOverridden : 1;	// 43 = 0x2b
	unsigned mIsDashOverridden : 1;	// 43 = 0x2b
	unsigned mIsFillOverridden : 1;	// 43 = 0x2b
	unsigned mIsPenAlignmentOverridden : 1;	// 43 = 0x2b
}
@property(assign) int cap;	// G=0x351af0f5; S=0x351a2fed; converted property
@property(retain) id color;	// G=0x351aed99; S=0x351a2701; converted property
@property(assign) int compoundType;	// G=0x351af161; S=0x351a3095; converted property
@property(retain) id dash;	// G=0x351aee05; S=0x351a2a81; converted property
@property(retain) id fill;	// G=0x35129551; S=0x351a28b9; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x351a206d; S=0x353cca8d; @synthesize=mHead
@property(retain) id join;	// G=0x351aef91; S=0x351a2b81; converted property
@property(assign) int penAlignment;	// G=0x353cc835; S=0x351e41d9; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x351a207d; S=0x353ccab5; @synthesize=mTail
@property(assign) float width;	// G=0x351af089; S=0x351a2f51; converted property
+ (id)blackStroke;	// 0x353cca1d
+ (id)defaultProperties;	// 0x351a1e35
+ (id)nullStroke;	// 0x3528a4f9
- (id)init;	// 0x351a1da1
- (id)initWithDefaults;	// 0x351e3f91
// converted property getter: - (int)cap;	// 0x351af0f5
// converted property getter: - (id)color;	// 0x351aed99
// converted property getter: - (int)compoundType;	// 0x351af161
- (id)copyWithZone:(NSZone *)zone;	// 0x35290895
// converted property getter: - (id)dash;	// 0x351aee05
- (void)dealloc;	// 0x351afbed
// converted property getter: - (id)fill;	// 0x35129551
- (unsigned)hash;	// 0x353cc865
// declared property getter: - (id)head;	// 0x351a206d
- (BOOL)isCapOverridden;	// 0x351af0b9
- (BOOL)isColorOverridden;	// 0x351aed5d
- (BOOL)isCompoundTypeOverridden;	// 0x351af125
- (BOOL)isDashOverridden;	// 0x351aedc9
- (BOOL)isEqual:(id)equal;	// 0x351ae8e5
- (BOOL)isFillOverridden;	// 0x35129581
- (BOOL)isJoinOverridden;	// 0x351aef55
- (BOOL)isPenAlignmentOverridden;	// 0x351af191
- (BOOL)isWidthOverridden;	// 0x351af04d
// converted property getter: - (id)join;	// 0x351aef91
// converted property getter: - (int)penAlignment;	// 0x353cc835
// converted property setter: - (void)setCap:(int)cap;	// 0x351a2fed
// converted property setter: - (void)setColor:(id)color;	// 0x351a2701
// converted property setter: - (void)setCompoundType:(int)type;	// 0x351a3095
// converted property setter: - (void)setDash:(id)dash;	// 0x351a2a81
// converted property setter: - (void)setFill:(id)fill;	// 0x351a28b9
// declared property setter: - (void)setHead:(id)head;	// 0x353cca8d
// converted property setter: - (void)setJoin:(id)join;	// 0x351a2b81
- (void)setParent:(id)parent;	// 0x351a1e7d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x351e41d9
- (void)setStyleColor:(id)color;	// 0x352dfc25
// declared property setter: - (void)setTail:(id)tail;	// 0x353ccab5
// converted property setter: - (void)setWidth:(float)width;	// 0x351a2f51
// declared property getter: - (id)tail;	// 0x351a207d
// converted property getter: - (float)width;	// 0x351af089
@end

