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
+ (id)sharedTheme;	// 0x331e3589
- (id)init;	// 0x331e35d1
- (id)_atvImageForFile:(id)file ofType:(id)type;	// 0x330bc1c9
- (id)_cachedATVImageForFile:(id)file ofType:(id)type;	// 0x330bc155
- (id)_cachedImageForFile:(id)file ofType:(id)type;	// 0x331e5ff9
- (id)_cachedImages;	// 0x331e5fe9
- (id)_imageForFile:(id)file ofType:(id)type;	// 0x331e6069
- (id)actionButtonBackgroundImage;	// 0x331e3cbd
- (id)actionButtonSheenImage;	// 0x331e3c75
- (id)airportImageForSignalStrength:(long)signalStrength;	// 0x331e3f45
- (id)appleTVIcon;	// 0x331e3701
- (id)appleTVIconGlow;	// 0x330bb5c5
- (id)appleTVIconGlow;	// 0x331e3725
- (id)appleTVIconOOB;	// 0x331e3b9d
- (float)appleTVIconOOBVerticalOffset;	// 0x331e3bc1
- (id)appleTVImage;	// 0x331e3f21
- (float)arrowSizeToRowHeightRatio;	// 0x331e5dad
- (id)blankImage;	// 0x331e376d
- (id)boxTitleAttributesForRelated:(BOOL)related;	// 0x331e5225
- (CGRect)brandImageFrame;	// 0x331e5fb1
- (id)ccBadge;	// 0x330bb631
- (CGRect)centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x331e5b6d
- (id)checkForPurchasesTextAttributes;	// 0x330bba05
- (id)closedCaptionImage;	// 0x331e43c9
- (float)comboRowHeight;	// 0x331e5c5d
- (id)copyrightAttributes;	// 0x331e5161
- (id)currentlyPlayingImage;	// 0x331e3989
- (id)dashedActionButtonOutlineImage;	// 0x331e3c99
- (void)dealloc;	// 0x331e3679
- (id)defaultChapterImage;	// 0x331e423d
- (id)deleteActionHighlightedImage;	// 0x331e3d4d
- (id)deleteActionImage;	// 0x331e3d29
- (id)digitalExtrasImage;	// 0x331e4261
- (id)digitalExtrasMetadataBadge;	// 0x331e42cd
- (id)digitalLPMetadataBadge;	// 0x331e42f1
- (float)dimValue;	// 0x331e5df5
- (id)dividerLabelAttributes;	// 0x331e50dd
- (float)dividerRowHeight;	// 0x331e5c0d
- (id)dolbyDigitalBadge;	// 0x330bb60d
- (id)downloadButtonImage;	// 0x331e3791
- (id)downloadMenuItemPrimaryTextAttributes;	// 0x330bba25
- (id)downloadMenuItemSecondaryTextAttributes;	// 0x330bba45
- (CGSize)downsampleSize;	// 0x331e5f45
- (id)emptyPhotoAlbumImage;	// 0x331e3821
- (id)emptyPhotoEventImage;	// 0x331e37fd
- (id)emptyPhotoShelfImage;	// 0x331e37b5
- (id)emptyPhotoShelfSquareImage;	// 0x331e37d9
- (id)errorFailureReasonAttributes;	// 0x331e4d6d
- (id)errorIcon;	// 0x331e3749
- (id)errorSuggestionAttributes;	// 0x331e4d8d
- (id)folderIcon;	// 0x331e4165
- (id)fourByThreePlaceholderImage;	// 0x330bb785
- (float)gearIconHorizontalOffset;	// 0x331e4ac1
- (float)gearIconKerningFactor;	// 0x331e4acd
- (id)gearImage;	// 0x331e4a9d
- (id)geniusIcon;	// 0x331e4189
- (id)goldenPlaceholderImage;	// 0x330bb7a9
- (id)hdBadge;	// 0x331e4315
- (id)hdPosterBadge;	// 0x330bb5e9
- (float)heightForDownloadItemRow;	// 0x330bba89
- (id)highlightedCurrentlyPlayingImage;	// 0x331e39ad
- (id)highlightedDigitalExtrasImage;	// 0x331e4285
- (id)highlightedMenuArrowImage;	// 0x331e3b0d
- (id)highlightedRefreshIcon;	// 0x331e4219
- (id)highlightedReturnToImage;	// 0x331e38d5
- (id)highlightedSelectedSettingImage;	// 0x331e3ac5
- (id)highlightedShuffleImage;	// 0x331e3b55
- (id)highlightedSyncLinkArrowImage;	// 0x331e3965
- (id)highlightedSyncLinkImage;	// 0x331e391d
- (id)highlightedVideoItemImage;	// 0x331e4021
- (float)iTunesAccountSetupHorizontalOffset;	// 0x331e3bf5
- (id)iTunesAccountSetupIcon;	// 0x331e3bd1
- (float)iTunesAccountSetupKerningFactor;	// 0x331e3bf9
- (float)iTunesAccountSetupScaleFactor;	// 0x331e3c05
- (id)iTunesNotes;	// 0x331e3ed9
- (id)iTunesNotesWithReflection;	// 0x331e3efd
- (id)imageForFileURLString:(id)fileURLString;	// 0x330bb935
- (id)labelTextAttributes;	// 0x331e4c8d
- (id)largeGeniusIcon;	// 0x331e41ad
- (id)largeGeniusIconWithReflection;	// 0x331e41d1
- (id)largeWirelessImage;	// 0x331e3c51
- (id)leftFadeImage;	// 0x331e4381
- (float)listIconHeight;	// 0x331e5d65
- (float)listRowHeight;	// 0x331e5bc1
- (id)loadMoreRectangleImage;	// 0x330bb689
- (id)loadMoreSquareImage;	// 0x330bb665
- (id)loadingVideoDetailPageAttributes;	// 0x331e58b5
- (id)loadingVideoMenuItemAttributes;	// 0x331e59e1
- (id)loadingVideoPosterAttributes;	// 0x331e575d
- (id)localContentProviderImage;	// 0x331e4b4d
- (id)localContentProviderImage;	// 0x330bb5a1
- (id)lockedThumbnail;	// 0x331e40b1
- (id)menuActionFocusedImage;	// 0x331e408d
- (id)menuActionUnfocusedImage;	// 0x331e4069
- (id)menuArrowImage;	// 0x331e3ae9
- (id)menuItemBoldTextAttributes;	// 0x331e4c4d
- (id)menuItemSmallTextAttributes;	// 0x331e4ccd
- (id)menuItemTextAttributes;	// 0x331e4c0d
- (float)menuMaximumWidthFactor;	// 0x331e5da1
- (float)menuMinimumWidthFactor;	// 0x331e5d95
- (id)menuTitleSubtextAttributes;	// 0x331e4d2d
- (id)menuTitleTextAttributes;	// 0x331e4ced
- (float)menuTransitionDuration;	// 0x331e5de5
- (id)metadataLabelAttributes;	// 0x331e4f19
- (id)metadataLineAttributes;	// 0x331e4e4d
- (id)metadataNumReviewsAttributes;	// 0x331e4f59
- (id)metadataOrangeLineAttributes;	// 0x331e4ecd
- (id)metadataSummaryFieldAttributes;	// 0x331e4e0d
- (id)metadataTitleAttributes;	// 0x331e4dad
- (id)metadataTitleSubtextAttributes;	// 0x331e4dcd
- (float)minimumHorizontalTextLayerSpacing;	// 0x331e4b8d
- (id)missingImage;	// 0x331e40d5
- (id)moreActionHighlightedImage;	// 0x330bb8c9
- (id)moreActionImage;	// 0x330bb8a5
- (id)movieMetadataLabelAttributes;	// 0x331e4f99
- (id)multiLineMetadataLineAttributes;	// 0x331e4e8d
- (id)musicFeaturedPlaceholderImage;	// 0x330bb839
- (id)musicPlaceholderImage;	// 0x330bb719
- (id)networkPhotosImage;	// 0x331e3e91
- (id)normalPosterTitleTextAttributes;	// 0x331e4bcd
- (id)nowPlayingPlayhead;	// 0x331e3869
- (id)nowPlayingTransport;	// 0x331e3845
- (float)oneLineWithThumbRowHeight;	// 0x331e5ced
- (float)osdLongTimeOutValue;	// 0x331e5ddd
- (float)osdMediumTimeOutValue;	// 0x331e5dd5
- (float)osdShortTimeOutValue;	// 0x331e5dcd
- (float)osdTimeOutValue;	// 0x331e5dc5
- (id)pairImage;	// 0x331e3eb5
- (id)pairingPINTextAttributes;	// 0x331e4fbd
- (int)paradeCountThreshold;	// 0x331e5f79
- (float)paragraphRowHeight;	// 0x331e5d3d
- (id)partiallyplayedVideoImage;	// 0x331e3a39
- (id)pauseButtonImage;	// 0x330bbaf1
- (id)photoSettingsImage;	// 0x331e3e49
- (id)photosImage;	// 0x331e3e6d
- (id)playActionHighlightedImage;	// 0x331e3d95
- (id)playActionImage;	// 0x331e3d71
- (id)playlistIcon;	// 0x331e40f9
- (id)podcastFeaturedPlaceholderImage;	// 0x330bb85d
- (id)podcastPlaceholderImage;	// 0x330bb73d
- (id)previewActionHighlightedImage;	// 0x331e3d05
- (id)previewActionImage;	// 0x331e3ce1
- (float)previewDelayDuration;	// 0x331e5db9
- (id)progressBarActive_Endcap;	// 0x330bbc01
- (id)progressBarComponents_ActiveEmpty;	// 0x330bbb85
- (id)progressBarComponents_ActiveFilled;	// 0x330bbb09
- (id)progressBarComponents_PausedEmpty;	// 0x330bbc95
- (id)progressBarComponents_PausedFilled;	// 0x330bbc19
- (id)progressBarComponents_Waiting;	// 0x330bbd29
- (id)progressBarPaused_Endcap;	// 0x330bbd11
- (id)promptCenteredTextAttributes;	// 0x331e505d
- (id)promptTextAttributes;	// 0x331e503d
- (id)purchasedPlaylistIcon;	// 0x331e411d
- (id)queueActionHighlightedImage;	// 0x331e3e25
- (id)queueActionImage;	// 0x331e3e01
- (id)radioItemImage;	// 0x331e4045
- (id)rateActionHighlightedImage;	// 0x331e3ddd
- (id)rateActionImage;	// 0x331e3db9
- (id)ratingImageForString:(id)string;	// 0x331e43ed
- (id)ratingImageFromStoreString:(id)storeString;	// 0x331e4971
- (id)refreshIcon;	// 0x331e41f5
- (id)rentalDetailsAttributesForDate:(id)date;	// 0x331e5291
- (id)rentalMenuItemAttributesForDate:(id)date;	// 0x331e55b5
- (id)rentalPosterAttributesForDate:(id)date;	// 0x331e540d
- (id)returnToImage;	// 0x331e38b1
- (id)rightFadeImage;	// 0x331e43a5
- (float)roundRectCornerRadius;	// 0x331e5ed9
- (id)scrollWidget;	// 0x331e388d
- (id)selectedSettingImage;	// 0x331e3aa1
- (void)setSize:(CGSize)size;	// 0x331e4b51
- (float)settingsAboutRowHeight;	// 0x331e5b45
- (id)settingsItemSmallTextAttributes;	// 0x331e50bd
- (int)shelfColumnCountForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x330bc0b1
- (float)shelfCoverflowMarginForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x330bbf81
- (float)shelfHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x330bbda5
- (float)shelfHorizontalGapForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x330bbf01
- (float)shelfReflectionAmountForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x330bbfb1
- (BOOL)shelfScrollabilityForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x330bc149
- (id)shuffleImage;	// 0x331e3b31
- (float)slightDimValue;	// 0x331e5e01
- (float)smallHeightDividerRowHeight;	// 0x331e5c35
- (id)smallHeightListDividerLabelAttributes;	// 0x331e50fd
- (id)smallHeightListItemAttributes;	// 0x331e5121
- (float)smallHeightListRowHeight;	// 0x331e5be9
- (id)smallMenuTitleTextAttributes;	// 0x331e4cad
- (id)smallTextAttributes;	// 0x331e4d4d
- (id)smartPlaylistIcon;	// 0x331e4141
- (id)spinnerDialogSubtextAttributes;	// 0x331e5251
- (float)spinnerSizeToRowHeightRatio;	// 0x331e5d8d
- (id)sportTeamPlaceholderImage;	// 0x330bb7cd
- (id)starRatingImageForString:(id)string;	// 0x331e4775
- (id)storeRentalFeaturedPlaceholderImage;	// 0x330bb7f1
- (float)storeRentalIconHorizontalOffset;	// 0x330bb655
- (float)storeRentalIconKerningFactor;	// 0x330bb659
- (id)storeRentalPlaceholderImage;	// 0x330bb6ad
- (id)storeRentalPlaceholderImageLarge;	// 0x330bb6d1
- (id)syncLinkArrowImage;	// 0x331e3941
- (id)syncLinkImage;	// 0x331e38f9
- (id)syncProgressMainAttributes;	// 0x331e51a1
- (id)syncProgressSecondaryAttributes;	// 0x331e51c1
- (id)textEntryInputFieldAttributes;	// 0x331e4fdd
- (id)textEntryPromptTextAttributesDuJour;	// 0x331e4ffd
- (float)textImageNoThumbnailRowHeight;	// 0x331e5cb9
- (float)textImageRowHeight;	// 0x331e5c85
- (float)textMenuDividerInset;	// 0x331e5e79
- (float)textMenuItemHDBadgeIconInsetFactor;	// 0x331e5e19
- (float)textMenuItemHDBadgeIconScaleFactor;	// 0x331e5e0d
- (float)textMenuItemLeftInsetAndRightInset:(float *)inset;	// 0x331e5e25
- (float)textMenuItemLeftInsetFromOuterMenuEdge;	// 0x331e5e85
- (id)tinyDigitalExtrasImage;	// 0x331e42a9
- (CGRect)titleSafeFrame;	// 0x331e4ad1
- (id)trackInfoPrimaryAttributes;	// 0x331e51e1
- (id)trackInfoSecondaryAttributes;	// 0x331e5201
- (float)trickPlayFrameTransitionDuration;	// 0x331e5ded
- (id)truncationEllipsis;	// 0x331e5f7d
- (id)tvShowFeaturedPlaceholderImage;	// 0x330bb815
- (id)tvShowPlaceholderImage;	// 0x330bb6f5
- (id)tvShowPlaceholderImageForMenuItem;	// 0x330bb881
- (float)twoLineRowHeight;	// 0x331e5d15
- (id)unboxedLozengeBottom:(BOOL)bottom useBrighterImage:(BOOL)image;	// 0x331e4a55
- (id)unboxedLozengeTop:(BOOL)top useBrighterImage:(BOOL)image;	// 0x331e4a0d
- (id)unplayedVideoImage;	// 0x331e39d1
- (id)verticalDividerImage;	// 0x331e3b79
- (float)verticalSpacingOOB;	// 0x331e3bc9
- (id)videoClipPlaceholderImage;	// 0x330bb761
- (id)videoItemImage;	// 0x331e3ffd
- (id)waitSpinnerPromptAttributes;	// 0x331e509d
- (float)wirelessIconHorizontalOffset;	// 0x331e3c11
- (float)wirelessIconKerningFactor;	// 0x331e3c15
- (float)wirelessIconScaleFactor;	// 0x331e3c21
- (id)wirelessImage;	// 0x331e3c2d
- (id)wishListActionHighlightedImage;	// 0x330bb911
- (id)wishListActionImage;	// 0x330bb8ed
@end

