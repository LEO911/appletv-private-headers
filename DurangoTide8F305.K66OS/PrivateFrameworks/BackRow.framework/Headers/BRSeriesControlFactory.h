/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <NSObject.h> // Unknown library

@protocol BRSelectionHandler;

@interface BRSeriesControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	int _controlType;	// 4 = 0x4
	float _textImageMenuItemLayerHeight;	// 8 = 0x8
	float _dividerHeight;	// 12 = 0xc
	BOOL _hidePartialPlayedImages;	// 16 = 0x10
	id<BRSelectionHandler> _selectionHandler;	// 20 = 0x14
}
@property(retain) id selectionHandler;	// G=0x3295ec55; S=0x3295f6dd; converted property
+ (id)factoryForControlType:(int)controlType hidePartialPlayedImages:(BOOL)images;	// 0x3295f7e1
- (id)initFactoryForControlType:(int)controlType hidePartialPlayedImages:(BOOL)images;	// 0x3295f75d
- (id)_acquiredDateBasedAssetListItem:(id)item currentControl:(id)control;	// 0x3295f5ad
- (id)_acquiredDateFromAsset:(id)asset;	// 0x3295ef5d
- (id)_airedDateFromAsset:(id)asset;	// 0x3295ef31
- (void)_assets:(id)assets areHD:(BOOL *)hd haveUnplayed:(BOOL *)unplayed havePartiallyPlayed:(BOOL *)played latestDate:(id *)date;	// 0x3295ecb9
- (void)_badgeListItem:(id)item withInfoFromAsset:(id)asset setRightJustifiedText:(BOOL *)text;	// 0x3295edc5
- (id)_episodeBasedAssetListItem:(id)item currentControl:(id)control;	// 0x3295f369
- (id)_listItemForAsset:(id)asset currentControl:(id)control;	// 0x3295f699
- (void)_markPlayedUnplayedState:(id)state markNew:(BOOL)aNew markPartialPlayed:(BOOL)played;	// 0x3295ec65
- (id)_posterControlForSeriesArray:(id)seriesArray currentControl:(id)control;	// 0x3295f0c5
- (id)_previewControlForData:(id)data currentControl:(id)control;	// 0x3295ef89
- (id)_showBasedAssetListItem:(id)item currentControl:(id)control;	// 0x3295f4b1
- (id)_showBasedSeriesItem:(id)item currentControl:(id)control;	// 0x3295f1f5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3295f825
- (void)dealloc;	// 0x3295f715
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x3295faf5
// converted property getter: - (id)selectionHandler;	// 0x3295ec55
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x3295f6dd
@end
