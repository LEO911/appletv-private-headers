/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAsynchronousKeyValueLoading.h"
#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSLocale, NSDate, NSDictionary, NSData, NSNumber, AVMetadataItemInternal, NSString;
@protocol NSObject;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign) NSString *commonKey;	// G=0x36889741; 
@property(readonly, assign) NSData *dataValue;	// G=0x36887ea1; 
@property(readonly, assign) NSDate *dateValue;	// G=0x36887dc9; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x36889891; 
@property(readonly, assign) NSDictionary *extraAttributes;	// G=0x36889969; 
@property(readonly, assign) id<NSCopying, NSObject> key;	// G=0x36889701; 
@property(readonly, assign) NSString *keySpace;	// G=0x36889781; 
@property(readonly, assign) NSLocale *locale;	// G=0x368897c1; 
@property(readonly, assign) NSNumber *numberValue;	// G=0x36887c91; 
@property(readonly, assign) NSString *stringValue;	// G=0x36887bd1; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x36889801; 
@property(readonly, assign) id<NSCopying, NSObject> value;	// G=0x36889909; 
+ (id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;	// 0x368893e9
+ (id)metadataItemsFromArray:(id)array filteredAndSortedAccordingToPreferredLanguages:(id)preferredLanguages;	// 0x3688800d
+ (id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;	// 0x3688831d
+ (id)metadataItemsFromArray:(id)array withLocale:(id)locale;	// 0x36887f21
+ (id)metadataItemsFromArray:(id)array withStringValue:(id)stringValue;	// 0x368885b9
- (id)init;	// 0x3688866d
- (void)_extractPropertiesFromDictionary:(id)dictionary;	// 0x368878a9
- (id)_figMetadataDictionary;	// 0x36889119
- (id)_figMetadataFormat;	// 0x368892f5
- (id)_figMetadataProperties;	// 0x368891e9
- (id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;	// 0x368887b9
- (id)_initWithReader:(OpaqueFigMetadataReader *)reader itemIndex:(long)index;	// 0x3688875d
- (id)_keyAsString;	// 0x36887acd
- (void)_makePropertiesReady;	// 0x36887795
- (void)_makeValueReady;	// 0x368876f5
- (void)_updateCommonKey;	// 0x3688784d
- (void)cancelLoading;	// 0x368899b9
// declared property getter: - (id)commonKey;	// 0x36889741
- (id)copyWithZone:(NSZone *)zone;	// 0x36888929
// declared property getter: - (id)dataValue;	// 0x36887ea1
// declared property getter: - (id)dateValue;	// 0x36887dc9
- (void)dealloc;	// 0x368887ed
- (id)description;	// 0x36888b11
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x36889891
// declared property getter: - (id)extraAttributes;	// 0x36889969
- (void)finalize;	// 0x368888cd
- (unsigned)hash;	// 0x36888f9d
- (CGImageRef)imageValue;	// 0x36887f1d
- (BOOL)isEqual:(id)equal;	// 0x36888ced
// declared property getter: - (id)key;	// 0x36889701
// declared property getter: - (id)keySpace;	// 0x36889781
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x368899ad
// declared property getter: - (id)locale;	// 0x368897c1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36888951
// declared property getter: - (id)numberValue;	// 0x36887c91
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x368899a9
// declared property getter: - (id)stringValue;	// 0x36887bd1
// declared property getter: - (XXStruct_pwHToB)time;	// 0x36889801
// declared property getter: - (id)value;	// 0x36889909
@end

