/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIReferenceLibraryViewController, DCSDictionaryAssetQuery, ASAsset, _UIDictionaryDownloadConfirmView, _UIDictionaryDownloadProgressView;

__attribute__((visibility("hidden")))
@interface _UIDictionaryDownloadViewController : UIViewController {
@private
	_UIDictionaryDownloadConfirmView *_downloadConfirmView;	// 180 = 0xb4
	_UIDictionaryDownloadProgressView *_downloadProgressView;	// 184 = 0xb8
	DCSDictionaryAssetQuery *_assetQuery;	// 188 = 0xbc
	ASAsset *_dictionaryAsset;	// 192 = 0xc0
	UIReferenceLibraryViewController *_referenceLibraryController;	// 196 = 0xc4
}
@property(retain) ASAsset *dictionaryAsset;	// G=0x304cc541; S=0x304cc555; @synthesize=_dictionaryAsset
@property(assign, nonatomic) UIReferenceLibraryViewController *referenceLibraryController;	// G=0x304cc565; S=0x304cc575; @synthesize=_referenceLibraryController
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x304cbbad
- (void)dealloc;	// 0x304cbdd5
// declared property getter: - (id)dictionaryAsset;	// 0x304cc541
- (void)didReceiveMemoryWarning;	// 0x304cbe71
// declared property getter: - (id)referenceLibraryController;	// 0x304cc565
// declared property setter: - (void)setDictionaryAsset:(id)asset;	// 0x304cc555
// declared property setter: - (void)setReferenceLibraryController:(id)controller;	// 0x304cc575
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x304cbfed
- (void)userWantsToDownload:(id)download;	// 0x304cbff9
- (void)viewDidLoad;	// 0x304cbe9d
- (void)viewDidUnload;	// 0x304cbfc1
@end

