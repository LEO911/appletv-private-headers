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
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x3398b459
+ (void)releaseSharedManager;	// 0x3398a825
+ (id)sharedManager;	// 0x3398a731
- (id)initWithPaths:(id)paths;	// 0x3398bfd1
- (id)allCategoryIDs;	// 0x3398a9a1
- (id)allTransitionIDs;	// 0x3398a981
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x3398b079
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x3398bed9
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x3398bf2d
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x3398abad
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x3398b4b5
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x3398b299
- (void)dealloc;	// 0x3398a8f1
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x3398b391
- (id)descriptionForTransitionID:(id)transitionID;	// 0x3398ac05
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x3398af61
- (id)localizedNameForTransitionID:(id)transitionID withLanguage:(id)language;	// 0x3398ade5
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x3398b1f5
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x3398ad69
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x3398aeb5
- (id)presetsForTransitionID:(id)transitionID;	// 0x3398b411
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x3398b95d
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x3398b241
- (int)transitionNeedsRandomSeedInformation:(id)information;	// 0x3398bf89
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x3398bb91
- (id)transitionsForCategoryID:(id)categoryID;	// 0x3398ac25
- (id)versionOfTransitionID:(id)transitionID;	// 0x3398ab75
@end
