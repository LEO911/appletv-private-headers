/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class EDResources, EDCollection, EDReference, NSString;

@interface EDTable : NSObject {
	EDResources *mResources;	// 4 = 0x4
	unsigned mStyleIndex;	// 8 = 0x8
	unsigned mHeaderRowDxfIndex;	// 12 = 0xc
	unsigned mTotalsRowDxfIndex;	// 16 = 0x10
	unsigned mDataAreaDxfIndex;	// 20 = 0x14
	unsigned mHeaderRowBorderDxfIndex;	// 24 = 0x18
	unsigned mTotalsRowBorderDxfIndex;	// 28 = 0x1c
	unsigned mDataAreaBorderDxfIndex;	// 32 = 0x20
	unsigned mTableBorderDxfIndex;	// 36 = 0x24
	NSString *mName;	// 40 = 0x28
	NSString *mDisplayName;	// 44 = 0x2c
	EDReference *mTableRange;	// 48 = 0x30
	NSString *mStyleName;	// 52 = 0x34
	unsigned mHeaderRowCount;	// 56 = 0x38
	unsigned mTotalsRowCount;	// 60 = 0x3c
	bool mShowFirstColumn;	// 64 = 0x40
	bool mShowLastColumn;	// 65 = 0x41
	bool mShowRowStripes;	// 66 = 0x42
	bool mShowColumnStripes;	// 67 = 0x43
	EDCollection *mTableColumns;	// 68 = 0x44
	EDCollection *mColumnFilters;	// 72 = 0x48
}
@property(retain) id dataAreaBorderDxf;	// G=0x318d7749; S=0x318d7791; converted property
@property(assign) unsigned dataAreaBorderDxfIndex;	// G=0x318d78e1; S=0x318d78f1; converted property
@property(retain) id dataAreaDxf;	// G=0x318d7599; S=0x318d75e1; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x318d78b1; S=0x31899ec9; converted property
@property(retain) id displayName;	// G=0x318d7821; S=0x318694b5; converted property
@property(retain) id headerRowBorderDxf;	// G=0x318d7629; S=0x318d7671; converted property
@property(assign) unsigned headerRowBorderDxfIndex;	// G=0x318d78c1; S=0x31899ea9; converted property
@property(assign) unsigned headerRowCount;	// G=0x3188af01; S=0x318d7841; converted property
@property(retain) id headerRowDxf;	// G=0x318d7479; S=0x318d74c1; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x318d7881; S=0x31898b91; converted property
@property(retain) id name;	// G=0x3186f64d; S=0x31869471; converted property
@property(assign) bool showColumnStripes;	// G=0x3188be89; S=0x3187c1fd; converted property
@property(assign) bool showFirstColumn;	// G=0x3188be69; S=0x3187c1cd; converted property
@property(assign) bool showLastColumn;	// G=0x3188be79; S=0x3187c1dd; converted property
@property(assign) bool showRowStripes;	// G=0x3188d38d; S=0x3187c1ed; converted property
@property(retain) id style;	// G=0x3188b39d; S=0x318d7431; converted property
@property(assign) unsigned styleIndex;	// G=0x318d7861; S=0x318d7871; converted property
@property(retain) id styleName;	// G=0x318d7831; S=0x3188aba5; converted property
@property(retain) id tableBorderDxf;	// G=0x3188b485; S=0x318d77d9; converted property
@property(assign) unsigned tableBorderDxfIndex;	// G=0x318d7901; S=0x3187c1bd; converted property
@property(retain) id tableRange;	// G=0x3188aef1; S=0x318694f9; converted property
@property(retain) id totalsRowBorderDxf;	// G=0x318d76b9; S=0x318d7701; converted property
@property(assign) unsigned totalsRowBorderDxfIndex;	// G=0x318d78d1; S=0x31899eb9; converted property
@property(assign) unsigned totalsRowCount;	// G=0x3188af11; S=0x318d7851; converted property
@property(retain) id totalsRowDxf;	// G=0x318d7509; S=0x318d7551; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x318d7891; S=0x318d78a1; converted property
+ (id)tableWithResources:(id)resources;	// 0x318d73e5
- (id)initWithResources:(id)resources;	// 0x318692e1
- (id)columnFilters;	// 0x3188ab95
// converted property getter: - (id)dataAreaBorderDxf;	// 0x318d7749
// converted property getter: - (unsigned)dataAreaBorderDxfIndex;	// 0x318d78e1
// converted property getter: - (id)dataAreaDxf;	// 0x318d7599
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x318d78b1
- (void)dealloc;	// 0x3187302d
// converted property getter: - (id)displayName;	// 0x318d7821
// converted property getter: - (id)headerRowBorderDxf;	// 0x318d7629
// converted property getter: - (unsigned)headerRowBorderDxfIndex;	// 0x318d78c1
// converted property getter: - (unsigned)headerRowCount;	// 0x3188af01
// converted property getter: - (id)headerRowDxf;	// 0x318d7479
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x318d7881
// converted property getter: - (id)name;	// 0x3186f64d
// converted property setter: - (void)setDataAreaBorderDxf:(id)dxf;	// 0x318d7791
// converted property setter: - (void)setDataAreaBorderDxfIndex:(unsigned)index;	// 0x318d78f1
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x318d75e1
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x31899ec9
// converted property setter: - (void)setDisplayName:(id)name;	// 0x318694b5
// converted property setter: - (void)setHeaderRowBorderDxf:(id)dxf;	// 0x318d7671
// converted property setter: - (void)setHeaderRowBorderDxfIndex:(unsigned)index;	// 0x31899ea9
// converted property setter: - (void)setHeaderRowCount:(unsigned)count;	// 0x318d7841
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x318d74c1
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x31898b91
// converted property setter: - (void)setName:(id)name;	// 0x31869471
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x3187c1fd
// converted property setter: - (void)setShowFirstColumn:(bool)column;	// 0x3187c1cd
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x3187c1dd
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x3187c1ed
// converted property setter: - (void)setStyle:(id)style;	// 0x318d7431
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x318d7871
// converted property setter: - (void)setStyleName:(id)name;	// 0x3188aba5
// converted property setter: - (void)setTableBorderDxf:(id)dxf;	// 0x318d77d9
// converted property setter: - (void)setTableBorderDxfIndex:(unsigned)index;	// 0x3187c1bd
// converted property setter: - (void)setTableRange:(id)range;	// 0x318694f9
// converted property setter: - (void)setTotalsRowBorderDxf:(id)dxf;	// 0x318d7701
// converted property setter: - (void)setTotalsRowBorderDxfIndex:(unsigned)index;	// 0x31899eb9
// converted property setter: - (void)setTotalsRowCount:(unsigned)count;	// 0x318d7851
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x318d7551
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x318d78a1
// converted property getter: - (bool)showColumnStripes;	// 0x3188be89
// converted property getter: - (bool)showFirstColumn;	// 0x3188be69
// converted property getter: - (bool)showLastColumn;	// 0x3188be79
// converted property getter: - (bool)showRowStripes;	// 0x3188d38d
// converted property getter: - (id)style;	// 0x3188b39d
// converted property getter: - (unsigned)styleIndex;	// 0x318d7861
// converted property getter: - (id)styleName;	// 0x318d7831
// converted property getter: - (id)tableBorderDxf;	// 0x3188b485
// converted property getter: - (unsigned)tableBorderDxfIndex;	// 0x318d7901
- (id)tableColumns;	// 0x3186953d
// converted property getter: - (id)tableRange;	// 0x3188aef1
// converted property getter: - (id)totalsRowBorderDxf;	// 0x318d76b9
// converted property getter: - (unsigned)totalsRowBorderDxfIndex;	// 0x318d78d1
// converted property getter: - (unsigned)totalsRowCount;	// 0x3188af11
// converted property getter: - (id)totalsRowDxf;	// 0x318d7509
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x318d7891
@end

