/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {
	NSMutableDictionary *mTransitions;	// 4 = 0x4
	NSMutableDictionary *mTransitionCategories;	// 8 = 0x8
	NSMutableDictionary *mTransitionPresets;	// 12 = 0xc
}
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x32434011
+ (void)releaseSharedManager;	// 0x324333dd
+ (id)sharedManager;	// 0x324332e9
- (id)initWithPaths:(id)paths;	// 0x32434b89
- (id)allCategoryIDs;	// 0x32433559
- (id)allTransitionIDs;	// 0x32433539
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x32433c31
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x32434a91
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x32434ae5
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x32433765
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x3243406d
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x32433e51
- (void)dealloc;	// 0x324334a9
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x32433f49
- (id)descriptionForTransitionID:(id)transitionID;	// 0x324337bd
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x32433b19
- (id)localizedNameForTransitionID:(id)transitionID withLanguage:(id)language;	// 0x3243399d
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x32433dad
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x32433921
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x32433a6d
- (id)presetsForTransitionID:(id)transitionID;	// 0x32433fc9
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x32434515
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x32433df9
- (int)transitionNeedsRandomSeedInformation:(id)information;	// 0x32434b41
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x32434749
- (id)transitionsForCategoryID:(id)categoryID;	// 0x324337dd
- (id)versionOfTransitionID:(id)transitionID;	// 0x3243372d
@end

