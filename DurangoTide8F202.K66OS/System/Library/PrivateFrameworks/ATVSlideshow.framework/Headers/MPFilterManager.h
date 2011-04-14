/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray;

@interface MPFilterManager : NSObject {
	NSMutableDictionary *mFilters;	// 4 = 0x4
	NSArray *mFilterCategories;	// 8 = 0x8
	NSMutableDictionary *mFilterPresets;	// 12 = 0xc
}
+ (void)loadFilterManagerWithPaths:(id)paths;	// 0x3145ef9d
+ (void)releaseSharedManager;	// 0x3145e225
+ (id)sharedManager;	// 0x3145e1dd
- (id)initWithPaths:(id)paths;	// 0x3145effd
- (id)animationsForFilterID:(id)filterID andPresetID:(id)anId;	// 0x3145e42d
- (id)attributesForFilterID:(id)filterID andPresetID:(id)anId;	// 0x3145e36d
- (id)constraintsForFilterPresetsMatchingList:(id)filterPresetsMatchingList andCriteria:(id)criteria;	// 0x3145e509
- (void)dealloc;	// 0x3145e255
- (id)filterCategoryIDs;	// 0x3145e31d
- (id)filterIDsForCategoryID:(id)categoryID;	// 0x3145e319
- (id)filterPresetsMatchingCriteria:(id)criteria;	// 0x3145ebf5
- (id)presetIDsForFilterID:(id)filterID;	// 0x3145e32d
- (id)randomFilter:(BOOL)filter;	// 0x3145ef49
- (id)randomFilterPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x3145e9a1
- (id)versionOfFilterID:(id)filterID;	// 0x3145e2e9
@end
