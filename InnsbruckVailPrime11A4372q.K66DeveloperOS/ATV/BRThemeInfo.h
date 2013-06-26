/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRThemeInfo : XXUnknownSuperclass {
	CGSize _size;	// 4 = 0x4
	NSString *_controllerBackgroundImageName;	// 12 = 0xc
	NSMutableDictionary *_ratingsImages;	// 16 = 0x10
	NSMutableDictionary *_starRatingsImages;	// 20 = 0x14
	NSMutableDictionary *_cachedImages;	// 24 = 0x18
}
+ (id)sharedTheme;	// 0x317b59
- (id)init;	// 0x317ba1
- (id)QImage;	// 0x318175
- (id)_atvImageForFile:(id)file ofType:(id)type;	// 0x31bf8d
- (id)_cachedATVImageForFile:(id)file ofType:(id)type;	// 0x31bf21
- (id)_cachedImageForFile:(id)file ofType:(id)type;	// 0x31b1ed
- (id)_imageForFile:(id)file ofType:(id)type;	// 0x31b25d
- (id)actionButtonBackgroundImage;	// 0x31849d
- (id)actionButtonSheenImage;	// 0x318455
- (CGRect)actionSafeFrame;	// 0x3192c9
- (id)airportImageForSignalStrength:(long)signalStrength;	// 0x318725
- (id)appleTVIconOOB;	// 0x318211
- (float)appleTVIconOOBVerticalOffset;	// 0x3183b5
- (id)appleTVImage;	// 0x318701
- (float)arrowSizeToRowHeightRatio;	// 0x31af69
- (id)blankImage;	// 0x317cfd
- (id)boxTitleAttributesForRelated:(BOOL)related;	// 0x319f15
- (CGRect)brandImageFrame;	// 0x31b175
- (id)carouselPlaceholderImage;	// 0x31b49d
- (id)ccBadge;	// 0x31b301
- (CGRect)centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x31ad21
- (id)checkForPurchasesTextAttributes;	// 0x31b6f5
- (id)closedCaptionImage;	// 0x318bf9
- (float)comboRowHeight;	// 0x31ae11
- (id)copyrightAttributes;	// 0x319d49
- (id)currentlyPlayingImage;	// 0x317f19
- (id)cursorBlueGlowSelectionCenterImage;	// 0x318391
- (id)cursorBottomCenterSquareImage;	// 0x318295
- (id)cursorLeftCenterSquareImage;	// 0x318301
- (id)cursorLowerLeftSquareImage;	// 0x3182dd
- (id)cursorLowerRightSquareImage;	// 0x318349
- (id)cursorRightCenterSquareImage;	// 0x31836d
- (id)cursorTopCenterSquareImage;	// 0x318271
- (id)cursorUpperLeftSquareImage;	// 0x3182b9
- (id)cursorUpperRightSquareImage;	// 0x318325
- (id)dashedActionButtonOutlineImage;	// 0x318479
- (void)dealloc;	// 0x317c4d
- (id)defaultChapterImage;	// 0x318a1d
- (id)deleteActionHighlightedImage;	// 0x31852d
- (id)deleteActionImage;	// 0x318509
- (id)digitalExtrasImage;	// 0x318a41
- (id)digitalExtrasMetadataBadge;	// 0x318aad
- (id)digitalLPMetadataBadge;	// 0x318ad1
- (float)dimValue;	// 0x31afb9
- (id)dividerLabelAttributes;	// 0x319c81
- (float)dividerRowHeight;	// 0x31adc1
- (id)dolbyDigitalBadge;	// 0x31b2dd
- (id)downloadButtonImage;	// 0x317d21
- (id)downloadMenuItemPrimaryTextAttributes;	// 0x31b71d
- (id)downloadMenuItemSecondaryTextAttributes;	// 0x31b745
- (CGSize)downsampleSize;	// 0x31b109
- (id)emptyPhotoAlbumImage;	// 0x317db1
- (id)emptyPhotoEventImage;	// 0x317d8d
- (id)emptyPhotoShelfImage;	// 0x317d45
- (id)emptyPhotoShelfSquareImage;	// 0x317d69
- (id)errorFailureReasonAttributes;	// 0x3196f9
- (id)errorIcon;	// 0x317cd9
- (id)errorSuggestionAttributes;	// 0x319721
- (id)folderIcon;	// 0x318945
- (id)fourByThreePlaceholderImage;	// 0x31b455
- (id)fullScreenPhotoCaptionAttributes;	// 0x319fe9
- (id)geniusIcon;	// 0x318969
- (id)goldenPlaceholderImage;	// 0x31b479
- (id)hdBadge;	// 0x318af5
- (id)hdPosterBadge;	// 0x31b2b9
- (float)heightForDownloadItemRow;	// 0x31b7b9
- (id)highlightedCurrentlyPlayingImage;	// 0x317f3d
- (id)highlightedDigitalExtrasImage;	// 0x318a65
- (id)highlightedDragBarImage;	// 0x318151
- (id)highlightedMenuArrowImage;	// 0x3180e5
- (id)highlightedRefreshIcon;	// 0x3189f9
- (id)highlightedReturnToImage;	// 0x317e65
- (id)highlightedSelectedRightCheckMark;	// 0x31809d
- (id)highlightedSelectedSettingImage;	// 0x318055
- (id)highlightedShuffleImage;	// 0x31812d
- (id)highlightedSyncLinkArrowImage;	// 0x317ef5
- (id)highlightedSyncLinkImage;	// 0x317ead
- (id)highlightedVideoItemImage;	// 0x318801
- (float)iTunesAccountSetupHorizontalOffset;	// 0x3183e9
- (id)iTunesAccountSetupIcon;	// 0x3183c5
- (float)iTunesAccountSetupKerningFactor;	// 0x3183ed
- (float)iTunesAccountSetupScaleFactor;	// 0x3183f9
- (id)iTunesNotes;	// 0x3186b9
- (id)iTunesNotesWithReflection;	// 0x3186dd
- (id)imageForFileURLString:(id)fileURLString;	// 0x31b629
- (id)labelTextAttributes;	// 0x3195e9
- (id)largeGeniusIcon;	// 0x31898d
- (id)largeGeniusIconWithReflection;	// 0x3189b1
- (id)leftFadeImage;	// 0x318bb1
- (id)likesBadgeTextAttributes;	// 0x31a359
- (float)listIconHeight;	// 0x31af21
- (float)listRowHeight;	// 0x31ad75
- (id)loadMoreRectangleImage;	// 0x31b359
- (id)loadMoreSquareImage;	// 0x31b335
- (id)loadingVideoDetailPageAttributes;	// 0x31a9f9
- (id)loadingVideoDetailPageAttributesWithColor:(id)color;	// 0x31aa0d
- (id)loadingVideoMenuItemAttributes;	// 0x31ab41
- (id)loadingVideoPosterAttributes;	// 0x31a8a1
- (id)localContentProviderImage;	// 0x3193a9
- (id)localContentProviderImageProxy;	// 0x3193cd
- (id)lockedThumbnail;	// 0x318891
- (id)mainMenuAppTileShadow;	// 0x31824d
- (CGSize)mainMenuAppTileShadowSize;	// 0x318235
- (id)mainMenuVerticalDividerImage;	// 0x3181b1
- (CGSize)mainMenuVerticalDividerSize;	// 0x318199
- (id)menuActionFocusedImage;	// 0x31886d
- (id)menuActionUnfocusedImage;	// 0x318849
- (id)menuArrowImage;	// 0x3180c1
- (id)menuItemBoldTextAttributes;	// 0x319509
- (id)menuItemDetailedTextAttributes;	// 0x31959d
- (id)menuItemRightTextAttributes;	// 0x319551
- (id)menuItemSmallTextAttributes;	// 0x319639
- (id)menuItemTextAttributes;	// 0x3194c1
- (float)menuMaximumWidthFactor;	// 0x31af5d
- (float)menuMinimumWidthFactor;	// 0x31af51
- (id)menuTitleSubtextAttributes;	// 0x3196a9
- (id)menuTitleTextAttributes;	// 0x319661
- (float)menuTransitionDuration;	// 0x31afa1
- (id)metadataLabelAttributes;	// 0x3199c5
- (id)metadataLineAttributes;	// 0x319859
- (id)metadataNumReviewsAttributes;	// 0x319a39
- (id)metadataOrangeLineAttributes;	// 0x319941
- (id)metadataSummaryFieldAttributes;	// 0x3197e5
- (id)metadataTitleAttributes;	// 0x319749
- (id)metadataTitleSubtextAttributes;	// 0x319771
- (float)minimumHorizontalTextLayerSpacing;	// 0x319439
- (id)missingImage;	// 0x3188b5
- (id)moreActionHighlightedImage;	// 0x31b5bd
- (id)moreActionImage;	// 0x31b599
- (id)movieMetadataLabelAttributes;	// 0x319aad
- (id)multiLineMetadataLineAttributes;	// 0x3198cd
- (id)musicFeaturedPlaceholderImage;	// 0x31b52d
- (id)musicPlaceholderImage;	// 0x31b3e9
- (id)networkPhotosImage;	// 0x318671
- (id)normalPosterTitleTextAttributes;	// 0x319479
- (id)nowPlayingPlayhead;	// 0x317df9
- (id)nowPlayingTransport;	// 0x317dd5
- (id)numberBadgeAttributes;	// 0x31be95
- (float)oneLineWithThumbRowHeight;	// 0x31aea9
- (float)osdLongTimeOutValue;	// 0x31af99
- (float)osdMediumTimeOutValue;	// 0x31af91
- (float)osdShortTimeOutValue;	// 0x31af89
- (float)osdTimeOutValue;	// 0x31af81
- (float)pageLoadSpinnerDelay;	// 0x31afb1
- (id)pairImage;	// 0x318695
- (id)pairingPINTextAttributes;	// 0x319ad9
- (int)paradeCountThreshold;	// 0x31b13d
- (float)paragraphRowHeight;	// 0x31aef9
- (id)partiallyplayedVideoImage;	// 0x317fc9
- (id)pauseButtonImage;	// 0x31b829
- (id)photoCommentFooterAttributes;	// 0x31a2b9
- (id)photoMetadataHeaderAttributes;	// 0x31a219
- (id)photoSettingsImage;	// 0x318629
- (id)photosImage;	// 0x31864d
- (id)playActionHighlightedImage;	// 0x318575
- (id)playActionImage;	// 0x318551
- (id)playlistIcon;	// 0x3188d9
- (id)podcastFeaturedPlaceholderImage;	// 0x31b551
- (id)podcastPlaceholderImage;	// 0x31b40d
- (id)previewActionHighlightedImage;	// 0x3184e5
- (id)previewActionImage;	// 0x3184c1
- (float)previewDelayDuration;	// 0x31af75
- (id)progressBarActive_Endcap;	// 0x31b939
- (id)progressBarComponents_ActiveEmpty;	// 0x31b8bd
- (id)progressBarComponents_ActiveFilled;	// 0x31b841
- (id)progressBarComponents_PausedEmpty;	// 0x31b9cd
- (id)progressBarComponents_PausedFilled;	// 0x31b951
- (id)progressBarComponents_Waiting;	// 0x31ba61
- (id)progressBarPaused_Endcap;	// 0x31ba49
- (id)promptCenteredTextAttributes;	// 0x319bbd
- (id)promptTextAttributes;	// 0x319b95
- (id)purchasedPlaylistIcon;	// 0x3188fd
- (void)purgeCache;	// 0x31b199
- (id)queueActionHighlightedImage;	// 0x318605
- (id)queueActionImage;	// 0x3185e1
- (id)radioItemImage;	// 0x318825
- (id)rateActionHighlightedImage;	// 0x3185bd
- (id)rateActionImage;	// 0x318599
- (id)ratingImageForString:(id)string;	// 0x318c1d
- (id)ratingImageFromStoreString:(id)storeString;	// 0x319199
- (id)refreshIcon;	// 0x3189d5
- (id)rentalDetailsAttributesForDate:(id)date;	// 0x31a3a5
- (id)rentalDetailsAttributesForDate:(id)date color:(id)color;	// 0x31a3b9
- (id)rentalMenuItemAttributesForDate:(id)date;	// 0x31a6f1
- (id)rentalPosterAttributesForDate:(id)date;	// 0x31a541
- (id)returnToImage;	// 0x317e41
- (id)rightFadeImage;	// 0x318bd5
- (float)roundRectCornerRadius;	// 0x31b09d
- (id)scrollWidget;	// 0x317e1d
- (id)segmentedControlLabelTextAttributes;	// 0x319fc1
- (id)selectedRightCheckMark;	// 0x318079
- (id)selectedSettingImage;	// 0x318031
- (void)setSize:(CGSize)size;	// 0x3193fd
- (float)settingsAboutRowHeight;	// 0x31acf9
- (id)settingsItemSmallTextAttributes;	// 0x319c59
- (int)shelfColumnCountForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x31bdf1
- (float)shelfCoverflowMarginForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x31bcbd
- (float)shelfHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x31badd
- (float)shelfHorizontalGapForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x31bc41
- (float)shelfReflectionAmountForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x31bce5
- (BOOL)shelfScrollabilityForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x31be89
- (id)shuffleImage;	// 0x318109
- (float)slightDimValue;	// 0x31afc5
- (float)smallHeightDividerRowHeight;	// 0x31ade9
- (id)smallHeightListDividerLabelAttributes;	// 0x319ca9
- (id)smallHeightListItemAttributes;	// 0x319cd5
- (float)smallHeightListRowHeight;	// 0x31ad9d
- (id)smallMenuTitleTextAttributes;	// 0x319611
- (id)smallTextAttributes;	// 0x3196d1
- (id)smartPlaylistIcon;	// 0x318921
- (id)spinnerDialogSubtextAttributes;	// 0x319f4d
- (float)spinnerSizeToRowHeightRatio;	// 0x31af49
- (id)sportTeamPlaceholderImage;	// 0x31b4c1
- (id)starRatingImageForString:(id)string;	// 0x318fa9
- (id)stationsSubtitleAttributes;	// 0x31aca5
- (id)storeRentalFeaturedPlaceholderImage;	// 0x31b4e5
- (float)storeRentalIconHorizontalOffset;	// 0x31b325
- (float)storeRentalIconKerningFactor;	// 0x31b329
- (id)storeRentalPlaceholderImage;	// 0x31b37d
- (id)storeRentalPlaceholderImageLarge;	// 0x31b3a1
- (id)superHDBadge;	// 0x318b45
- (id)syncLinkArrowImage;	// 0x317ed1
- (id)syncLinkImage;	// 0x317e89
- (id)syncProgressMainAttributes;	// 0x319e71
- (id)syncProgressSecondaryAttributes;	// 0x319e99
- (id)textEntryInputFieldAttributes;	// 0x319b01
- (id)textEntryPromptTextAttributesDuJour;	// 0x319b29
- (float)textImageNoThumbnailRowHeight;	// 0x31ae71
- (float)textImageRowHeight;	// 0x31ae39
- (float)textMenuDividerInset;	// 0x31b03d
- (float)textMenuItemHDBadgeIconInsetFactor;	// 0x31afdd
- (float)textMenuItemHDBadgeIconScaleFactor;	// 0x31afd1
- (float)textMenuItemLeftInsetAndRightInset:(float *)inset;	// 0x31afe9
- (float)textMenuItemLeftInsetFromOuterMenuEdge;	// 0x31b049
- (float)thinBorderWidth;	// 0x318421
- (id)tinyDigitalExtrasImage;	// 0x318a89
- (CGRect)titleSafeFrame;	// 0x319339
- (id)trackInfoPrimaryAttributes;	// 0x319ec1
- (id)trackInfoSecondaryAttributes;	// 0x319ee9
- (float)trickPlayFrameTransitionDuration;	// 0x31afa9
- (id)truncationEllipsis;	// 0x31b141
- (id)tvShowFeaturedPlaceholderImage;	// 0x31b509
- (id)tvShowPlaceholderImage;	// 0x31b3c5
- (id)tvShowPlaceholderImageForMenuItem;	// 0x31b575
- (float)twoLineRowHeight;	// 0x31aed1
- (id)unboxedLozengeBottom:(BOOL)bottom useBrighterImage:(BOOL)image;	// 0x31927d
- (id)unboxedLozengeTop:(BOOL)top useBrighterImage:(BOOL)image;	// 0x319235
- (id)unplayedVideoImage;	// 0x317f61
- (id)verticalDividerImage;	// 0x3181ed
- (CGSize)verticalDividerSize;	// 0x3181d5
- (float)verticalSpacingOOB;	// 0x3183bd
- (id)videoClipPlaceholderImage;	// 0x31b431
- (id)videoItemImage;	// 0x3187dd
- (id)waitSpinnerPromptAttributes;	// 0x319c31
- (float)wirelessIconHorizontalOffset;	// 0x318405
- (float)wirelessIconKerningFactor;	// 0x318409
- (float)wirelessIconScaleFactor;	// 0x318415
- (id)wishListActionHighlightedImage;	// 0x31b605
- (id)wishListActionImage;	// 0x31b5e1
- (int)ytApproximateTotalResults:(int)results;	// 0x27631d
- (id)ytFormattedTotalResults:(int)results;	// 0x2763a5
- (id)ytListMenuIconImage;	// 0x276075
- (id)ytLogoPreviewController;	// 0x2761f9
- (id)ytPlaceHolderImage;	// 0x275fc9
- (void)ytSetupListHeader:(id)header withTitle:(id)title;	// 0x276109
@end
