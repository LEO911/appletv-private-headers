/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, NSMutableDictionary;

@interface BRThemeInfo : NSObject {
@private
	CGSize _size;	// 4 = 0x4
	NSString *_controllerBackgroundImageName;	// 12 = 0xc
	NSMutableDictionary *_ratingsImages;	// 16 = 0x10
	NSMutableDictionary *_starRatingsImages;	// 20 = 0x14
	NSMutableDictionary *_cachedImages;	// 24 = 0x18
}
+ (id)sharedTheme;	// 0x302713c9
- (id)init;	// 0x30271411
- (id)_atvImageForFile:(id)file ofType:(id)type;	// 0x301528f9
- (id)_cachedATVImageForFile:(id)file ofType:(id)type;	// 0x30152885
- (id)_cachedImageForFile:(id)file ofType:(id)type;	// 0x302740f1
- (id)_cachedImages;	// 0x302740e1
- (id)_imageForFile:(id)file ofType:(id)type;	// 0x30274161
- (id)actionButtonBackgroundImage;	// 0x30271c7d
- (id)actionButtonSheenImage;	// 0x30271c35
- (id)airportImageForSignalStrength:(long)signalStrength;	// 0x30271f05
- (id)appleTVIcon;	// 0x30271541
- (id)appleTVIconOOB;	// 0x30271a0d
- (float)appleTVIconOOBVerticalOffset;	// 0x30271b49
- (id)appleTVImage;	// 0x30271ee1
- (float)arrowSizeToRowHeightRatio;	// 0x30273e4d
- (id)blankImage;	// 0x30271589
- (id)boxTitleAttributesForRelated:(BOOL)related;	// 0x302732a5
- (CGRect)brandImageFrame;	// 0x30274059
- (id)carouselPlaceholderImage;	// 0x30151ed9
- (id)ccBadge;	// 0x30151d3d
- (CGRect)centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x30273c0d
- (id)checkForPurchasesTextAttributes;	// 0x30152135
- (id)closedCaptionImage;	// 0x30272389
- (float)comboRowHeight;	// 0x30273cfd
- (id)copyrightAttributes;	// 0x3027313d
- (id)currentlyPlayingImage;	// 0x302717a5
- (id)cursorBlueGlowSelectionCenterImage;	// 0x30271b25
- (id)cursorBottomCenterSquareImage;	// 0x30271a95
- (id)cursorLeftCenterSquareImage;	// 0x30271b01
- (id)cursorLowerLeftSquareImage;	// 0x30271add
- (id)cursorTopCenterSquareImage;	// 0x30271a71
- (id)cursorUpperLeftSquareImage;	// 0x30271ab9
- (id)dashedActionButtonOutlineImage;	// 0x30271c59
- (void)dealloc;	// 0x302714b9
- (id)defaultChapterImage;	// 0x302721fd
- (id)deleteActionHighlightedImage;	// 0x30271d0d
- (id)deleteActionImage;	// 0x30271ce9
- (id)digitalExtrasImage;	// 0x30272221
- (id)digitalExtrasMetadataBadge;	// 0x3027228d
- (id)digitalLPMetadataBadge;	// 0x302722b1
- (float)dimValue;	// 0x30273e9d
- (id)dividerLabelAttributes;	// 0x302730b9
- (float)dividerRowHeight;	// 0x30273cad
- (id)dolbyDigitalBadge;	// 0x30151d19
- (id)downloadButtonImage;	// 0x302715ad
- (id)downloadMenuItemPrimaryTextAttributes;	// 0x30152155
- (id)downloadMenuItemSecondaryTextAttributes;	// 0x30152175
- (CGSize)downsampleSize;	// 0x30273fed
- (id)emptyPhotoAlbumImage;	// 0x3027163d
- (id)emptyPhotoEventImage;	// 0x30271619
- (id)emptyPhotoShelfImage;	// 0x302715d1
- (id)emptyPhotoShelfSquareImage;	// 0x302715f5
- (id)errorFailureReasonAttributes;	// 0x30272d49
- (id)errorIcon;	// 0x30271565
- (id)errorSuggestionAttributes;	// 0x30272d69
- (id)folderIcon;	// 0x30272125
- (id)fourByThreePlaceholderImage;	// 0x30151e91
- (float)gearIconHorizontalOffset;	// 0x30272a7d
- (float)gearIconKerningFactor;	// 0x30272a89
- (id)gearImage;	// 0x30272a59
- (id)geniusIcon;	// 0x30272149
- (id)goldenPlaceholderImage;	// 0x30151eb5
- (id)hdBadge;	// 0x302722d5
- (id)hdPosterBadge;	// 0x30151cf5
- (float)heightForDownloadItemRow;	// 0x301521b9
- (id)highlightedCurrentlyPlayingImage;	// 0x302717c9
- (id)highlightedDigitalExtrasImage;	// 0x30272245
- (id)highlightedMenuArrowImage;	// 0x30271929
- (id)highlightedRefreshIcon;	// 0x302721d9
- (id)highlightedReturnToImage;	// 0x302716f1
- (id)highlightedSelectedSettingImage;	// 0x302718e1
- (id)highlightedShuffleImage;	// 0x30271971
- (id)highlightedSyncLinkArrowImage;	// 0x30271781
- (id)highlightedSyncLinkImage;	// 0x30271739
- (id)highlightedVideoItemImage;	// 0x30271fe1
- (float)iTunesAccountSetupHorizontalOffset;	// 0x30271b7d
- (id)iTunesAccountSetupIcon;	// 0x30271b59
- (float)iTunesAccountSetupKerningFactor;	// 0x30271b81
- (float)iTunesAccountSetupScaleFactor;	// 0x30271b8d
- (id)iTunesNotes;	// 0x30271e99
- (id)iTunesNotesWithReflection;	// 0x30271ebd
- (id)imageForFileURLString:(id)fileURLString;	// 0x30152065
- (id)labelTextAttributes;	// 0x30272c69
- (id)largeGeniusIcon;	// 0x3027216d
- (id)largeGeniusIconWithReflection;	// 0x30272191
- (id)largeWirelessImage;	// 0x30271c11
- (id)leftFadeImage;	// 0x30272341
- (float)listIconHeight;	// 0x30273e05
- (float)listRowHeight;	// 0x30273c61
- (id)loadMoreRectangleImage;	// 0x30151d95
- (id)loadMoreSquareImage;	// 0x30151d71
- (id)loadingVideoDetailPageAttributes;	// 0x30273955
- (id)loadingVideoMenuItemAttributes;	// 0x30273a81
- (id)loadingVideoPosterAttributes;	// 0x302737fd
- (id)localContentProviderImage;	// 0x30272b09
- (id)lockedThumbnail;	// 0x30272071
- (id)mainMenuAppTileShadow;	// 0x30271a4d
- (CGSize)mainMenuAppTileShadowSize;	// 0x30271a31
- (id)mainMenuVerticalDividerImage;	// 0x302719ad
- (CGSize)mainMenuVerticalDividerSize;	// 0x30271995
- (id)menuActionFocusedImage;	// 0x3027204d
- (id)menuActionUnfocusedImage;	// 0x30272029
- (id)menuArrowImage;	// 0x30271905
- (id)menuItemBoldTextAttributes;	// 0x30272c29
- (id)menuItemSmallTextAttributes;	// 0x30272ca9
- (id)menuItemTextAttributes;	// 0x30272be9
- (float)menuMaximumWidthFactor;	// 0x30273e41
- (float)menuMinimumWidthFactor;	// 0x30273e35
- (id)menuTitleSubtextAttributes;	// 0x30272d09
- (id)menuTitleTextAttributes;	// 0x30272cc9
- (float)menuTransitionDuration;	// 0x30273e85
- (id)metadataLabelAttributes;	// 0x30272ef5
- (id)metadataLineAttributes;	// 0x30272e29
- (id)metadataNumReviewsAttributes;	// 0x30272f35
- (id)metadataOrangeLineAttributes;	// 0x30272ea9
- (id)metadataSummaryFieldAttributes;	// 0x30272de9
- (id)metadataTitleAttributes;	// 0x30272d89
- (id)metadataTitleSubtextAttributes;	// 0x30272da9
- (float)minimumHorizontalTextLayerSpacing;	// 0x30272b69
- (id)missingImage;	// 0x30272095
- (id)moreActionHighlightedImage;	// 0x30151ff9
- (id)moreActionImage;	// 0x30151fd5
- (id)movieMetadataLabelAttributes;	// 0x30272f75
- (id)multiLineMetadataLineAttributes;	// 0x30272e69
- (id)musicFeaturedPlaceholderImage;	// 0x30151f69
- (id)musicPlaceholderImage;	// 0x30151e25
- (id)networkPhotosImage;	// 0x30271e51
- (id)normalPosterTitleTextAttributes;	// 0x30272ba9
- (id)nowPlayingPlayhead;	// 0x30271685
- (id)nowPlayingTransport;	// 0x30271661
- (float)oneLineWithThumbRowHeight;	// 0x30273d8d
- (float)osdLongTimeOutValue;	// 0x30273e7d
- (float)osdMediumTimeOutValue;	// 0x30273e75
- (float)osdShortTimeOutValue;	// 0x30273e6d
- (float)osdTimeOutValue;	// 0x30273e65
- (float)pageLoadSpinnerDelay;	// 0x30273e95
- (id)pairImage;	// 0x30271e75
- (id)pairingPINTextAttributes;	// 0x30272f99
- (int)paradeCountThreshold;	// 0x30274021
- (float)paragraphRowHeight;	// 0x30273ddd
- (id)partiallyplayedVideoImage;	// 0x30271855
- (id)pauseButtonImage;	// 0x30152221
- (id)photoSettingsImage;	// 0x30271e09
- (id)photosImage;	// 0x30271e2d
- (id)playActionHighlightedImage;	// 0x30271d55
- (id)playActionImage;	// 0x30271d31
- (id)playlistIcon;	// 0x302720b9
- (id)podcastFeaturedPlaceholderImage;	// 0x30151f8d
- (id)podcastPlaceholderImage;	// 0x30151e49
- (id)previewActionHighlightedImage;	// 0x30271cc5
- (id)previewActionImage;	// 0x30271ca1
- (float)previewDelayDuration;	// 0x30273e59
- (id)progressBarActive_Endcap;	// 0x30152331
- (id)progressBarComponents_ActiveEmpty;	// 0x301522b5
- (id)progressBarComponents_ActiveFilled;	// 0x30152239
- (id)progressBarComponents_PausedEmpty;	// 0x301523c5
- (id)progressBarComponents_PausedFilled;	// 0x30152349
- (id)progressBarComponents_Waiting;	// 0x30152459
- (id)progressBarPaused_Endcap;	// 0x30152441
- (id)promptCenteredTextAttributes;	// 0x30273039
- (id)promptTextAttributes;	// 0x30273019
- (id)purchasedPlaylistIcon;	// 0x302720dd
- (void)purgeCache;	// 0x30274091
- (id)queueActionHighlightedImage;	// 0x30271de5
- (id)queueActionImage;	// 0x30271dc1
- (id)radioItemImage;	// 0x30272005
- (id)rateActionHighlightedImage;	// 0x30271d9d
- (id)rateActionImage;	// 0x30271d79
- (id)ratingImageForString:(id)string;	// 0x302723ad
- (id)ratingImageFromStoreString:(id)storeString;	// 0x3027292d
- (id)refreshIcon;	// 0x302721b5
- (id)rentalDetailsAttributesForDate:(id)date;	// 0x30273331
- (id)rentalMenuItemAttributesForDate:(id)date;	// 0x30273655
- (id)rentalPosterAttributesForDate:(id)date;	// 0x302734ad
- (id)returnToImage;	// 0x302716cd
- (id)rightFadeImage;	// 0x30272365
- (float)roundRectCornerRadius;	// 0x30273f81
- (id)scrollWidget;	// 0x302716a9
- (id)segmentedControlLabelTextAttributes;	// 0x30273311
- (id)selectedSettingImage;	// 0x302718bd
- (void)setSize:(CGSize)size;	// 0x30272b2d
- (float)settingsAboutRowHeight;	// 0x30273be5
- (id)settingsItemSmallTextAttributes;	// 0x30273099
- (int)shelfColumnCountForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x301527e1
- (float)shelfCoverflowMarginForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x301526b1
- (float)shelfHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x301524d5
- (float)shelfHorizontalGapForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x30152631
- (float)shelfReflectionAmountForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x301526e1
- (BOOL)shelfScrollabilityForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x30152879
- (id)shuffleImage;	// 0x3027194d
- (float)slightDimValue;	// 0x30273ea9
- (float)smallHeightDividerRowHeight;	// 0x30273cd5
- (id)smallHeightListDividerLabelAttributes;	// 0x302730d9
- (id)smallHeightListItemAttributes;	// 0x302730fd
- (float)smallHeightListRowHeight;	// 0x30273c89
- (id)smallMenuTitleTextAttributes;	// 0x30272c89
- (id)smallTextAttributes;	// 0x30272d29
- (id)smartPlaylistIcon;	// 0x30272101
- (id)spinnerDialogSubtextAttributes;	// 0x302732d1
- (float)spinnerSizeToRowHeightRatio;	// 0x30273e2d
- (id)sportTeamPlaceholderImage;	// 0x30151efd
- (id)starRatingImageForString:(id)string;	// 0x30272731
- (id)storeRentalFeaturedPlaceholderImage;	// 0x30151f21
- (float)storeRentalIconHorizontalOffset;	// 0x30151d61
- (float)storeRentalIconKerningFactor;	// 0x30151d65
- (id)storeRentalPlaceholderImage;	// 0x30151db9
- (id)storeRentalPlaceholderImageLarge;	// 0x30151ddd
- (id)syncLinkArrowImage;	// 0x3027175d
- (id)syncLinkImage;	// 0x30271715
- (id)syncProgressMainAttributes;	// 0x30273221
- (id)syncProgressSecondaryAttributes;	// 0x30273241
- (id)textEntryInputFieldAttributes;	// 0x30272fb9
- (id)textEntryPromptTextAttributesDuJour;	// 0x30272fd9
- (float)textImageNoThumbnailRowHeight;	// 0x30273d59
- (float)textImageRowHeight;	// 0x30273d25
- (float)textMenuDividerInset;	// 0x30273f21
- (float)textMenuItemHDBadgeIconInsetFactor;	// 0x30273ec1
- (float)textMenuItemHDBadgeIconScaleFactor;	// 0x30273eb5
- (float)textMenuItemLeftInsetAndRightInset:(float *)inset;	// 0x30273ecd
- (float)textMenuItemLeftInsetFromOuterMenuEdge;	// 0x30273f2d
- (float)thinBorderWidth;	// 0x30271bb5
- (id)tinyDigitalExtrasImage;	// 0x30272269
- (CGRect)titleSafeFrame;	// 0x30272a8d
- (id)trackInfoPrimaryAttributes;	// 0x30273261
- (id)trackInfoSecondaryAttributes;	// 0x30273281
- (float)trickPlayFrameTransitionDuration;	// 0x30273e8d
- (id)truncationEllipsis;	// 0x30274025
- (id)tvShowFeaturedPlaceholderImage;	// 0x30151f45
- (id)tvShowPlaceholderImage;	// 0x30151e01
- (id)tvShowPlaceholderImageForMenuItem;	// 0x30151fb1
- (float)twoLineRowHeight;	// 0x30273db5
- (id)unboxedLozengeBottom:(BOOL)bottom useBrighterImage:(BOOL)image;	// 0x30272a11
- (id)unboxedLozengeTop:(BOOL)top useBrighterImage:(BOOL)image;	// 0x302729c9
- (id)unplayedVideoImage;	// 0x302717ed
- (id)verticalDividerImage;	// 0x302719e9
- (CGSize)verticalDividerSize;	// 0x302719d1
- (float)verticalSpacingOOB;	// 0x30271b51
- (id)videoClipPlaceholderImage;	// 0x30151e6d
- (id)videoItemImage;	// 0x30271fbd
- (id)waitSpinnerPromptAttributes;	// 0x30273079
- (float)wirelessIconHorizontalOffset;	// 0x30271b99
- (float)wirelessIconKerningFactor;	// 0x30271b9d
- (float)wirelessIconScaleFactor;	// 0x30271ba9
- (id)wirelessImage;	// 0x30271bed
- (id)wishListActionHighlightedImage;	// 0x30152041
- (id)wishListActionImage;	// 0x3015201d
@end

