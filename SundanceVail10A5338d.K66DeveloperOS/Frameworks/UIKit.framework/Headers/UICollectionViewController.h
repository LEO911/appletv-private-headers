/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UIViewController.h"

@class UICollectionView, UICollectionViewLayout;

@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
	UICollectionViewLayout *_layout;	// 184 = 0xb8
	UICollectionView *_collectionView;	// 188 = 0xbc
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	} _collectionViewControllerFlags;	// 192 = 0xc0
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// G=0x3100fa19; S=0x3100f9f9; 
@property(retain, nonatomic) UICollectionView *collectionView;	// G=0x3100ff41; S=0x3100ff69; 
- (id)initWithCoder:(id)coder;	// 0x3100f8b1
- (id)initWithCollectionViewLayout:(id)collectionViewLayout;	// 0x3100f845
- (id)_newCollectionViewWithFrame:(CGRect)frame collectionViewLayout:(id)layout;	// 0x310100e9
- (id)_wrappingView;	// 0x3100fa2d
// declared property getter: - (BOOL)clearsSelectionOnViewWillAppear;	// 0x3100fa19
// declared property getter: - (id)collectionView;	// 0x3100ff41
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;	// 0x310100e5
- (int)collectionView:(id)view numberOfItemsInSection:(int)section;	// 0x310100e1
- (void)dealloc;	// 0x3100f9ad
- (void)encodeWithCoder:(id)coder;	// 0x3100f949
- (void)loadView;	// 0x3100fae9
// declared property setter: - (void)setClearsSelectionOnViewWillAppear:(BOOL)appear;	// 0x3100f9f9
// declared property setter: - (void)setCollectionView:(id)view;	// 0x3100ff69
- (void)viewWillAppear:(BOOL)view;	// 0x3100fe95
- (void)viewWillUnload;	// 0x3100fe0d
@end
