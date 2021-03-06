/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVMediaSelectionGroupInternal, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
	AVMediaSelectionGroupInternal *_mediaSelectionGroup;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL allowsEmptySelection;	// G=0x326d7d75; 
@property(readonly, assign, nonatomic) NSArray *options;	// G=0x326d7d71; 
+ (id)mediaSelectionGroupWithAsset:(id)asset dictionary:(id)dictionary;	// 0x326d7ac1
+ (id)mediaSelectionOptionsFromArray:(id)array filteredAndSortedAccordingToPreferredLanguages:(id)preferredLanguages;	// 0x326d83d1
+ (id)mediaSelectionOptionsFromArray:(id)array withLocale:(id)locale;	// 0x326d82e5
+ (id)mediaSelectionOptionsFromArray:(id)array withMediaCharacteristics:(id)mediaCharacteristics;	// 0x326d86e1
+ (id)mediaSelectionOptionsFromArray:(id)array withoutMediaCharacteristics:(id)characteristics;	// 0x326d885d
+ (id)playableMediaSelectionOptionsFromArray:(id)array;	// 0x326d8251
- (id)init;	// 0x326d7b31
- (id)_defaultOption;	// 0x326d7ebd
- (id)_groupID;	// 0x326d7dc5
- (BOOL)_isAlternateTrackGroup;	// 0x326d7eb5
- (BOOL)_isKeyValueGroup;	// 0x326d7eb9
- (BOOL)_matchesGroupID:(id)anId mediaType:(id)type;	// 0x326d7e35
- (id)_mediaType;	// 0x326d7dfd
- (id)_optionWithID:(id)anId displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x326d7ec1
- (id)_weakReference;	// 0x326d7bed
// declared property getter: - (BOOL)allowsEmptySelection;	// 0x326d7d75
- (id)asset;	// 0x326d7d6d
- (id)copyWithZone:(NSZone *)zone;	// 0x326d7cbd
- (void)dealloc;	// 0x326d7c0d
- (id)description;	// 0x326d7ccd
- (id)dictionary;	// 0x326d7dc1
- (void)finalize;	// 0x326d7c79
- (id)mediaSelectionOptionWithPropertyList:(id)propertyList;	// 0x326d7fcd
// declared property getter: - (id)options;	// 0x326d7d71
@end

