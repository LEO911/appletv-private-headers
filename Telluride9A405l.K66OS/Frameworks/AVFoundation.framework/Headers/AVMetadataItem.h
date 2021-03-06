/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSNumber, NSDate, AVMetadataItemInternal, NSDictionary, NSData, NSLocale, NSString;
@protocol NSObject;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal *_priv;	// 4 = 0x4
}
@property(readonly, copy) NSString *commonKey;	// G=0x3468d3e1; 
@property(readonly, assign) NSData *dataValue;	// G=0x3468cc75; 
@property(readonly, assign) NSDate *dateValue;	// G=0x3468e3c5; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x3468c6b5; 
@property(readonly, copy) NSDictionary *extraAttributes;	// G=0x3468d599; 
@property(readonly, copy) id<NSCopying, NSObject> key;	// G=0x3468d3a1; 
@property(readonly, copy) NSString *keySpace;	// G=0x3468d421; 
@property(readonly, copy) NSLocale *locale;	// G=0x3468d461; 
@property(readonly, assign) NSNumber *numberValue;	// G=0x3468e1bd; 
@property(readonly, assign) NSString *stringValue;	// G=0x3468cba9; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x3468d4a1; 
@property(readonly, copy) id<NSCopying, NSObject> value;	// G=0x3468d539; 
+ (id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;	// 0x3468f559
+ (id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;	// 0x3468d6a1
+ (id)metadataItemsFromArray:(id)array withLocale:(id)locale;	// 0x3468d5d9
+ (id)metadataItemsFromArray:(id)array withStringValue:(id)stringValue;	// 0x3468d91d
- (id)init;	// 0x3468f465
- (void)_extractPropertiesFromDictionary:(id)dictionary;	// 0x3468dddd
- (id)_figMetadataDictionary;	// 0x3468d1d9
- (id)_figMetadataFormat;	// 0x3468d2ad
- (id)_figMetadataProperties;	// 0x3468f85d
- (id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;	// 0x3468ccf1
- (id)_initWithReader:(OpaqueFigMetadataReader *)reader itemIndex:(long)index;	// 0x34690015
- (id)_keyAsString;	// 0x3468e095
- (void)_makePropertiesReady;	// 0x3468cae9
- (void)_makeValueReady;	// 0x3468ca39
- (void)_updateCommonKey;	// 0x3468dd85
- (void)cancelLoading;	// 0x3468c71d
// declared property getter: - (id)commonKey;	// 0x3468d3e1
- (id)copyWithZone:(NSZone *)zone;	// 0x3468cd25
// declared property getter: - (id)dataValue;	// 0x3468cc75
// declared property getter: - (id)dateValue;	// 0x3468e3c5
- (void)dealloc;	// 0x3468ff2d
- (id)description;	// 0x3468fd2d
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3468c6b5
// declared property getter: - (id)extraAttributes;	// 0x3468d599
- (void)finalize;	// 0x3468fed1
- (unsigned)hash;	// 0x3468f96d
- (CGImageRef)imageValue;	// 0x3468c6b1
- (BOOL)isEqual:(id)equal;	// 0x3468fad5
// declared property getter: - (id)key;	// 0x3468d3a1
// declared property getter: - (id)keySpace;	// 0x3468d421
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3468c715
// declared property getter: - (id)locale;	// 0x3468d461
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3468cd51
// declared property getter: - (id)numberValue;	// 0x3468e1bd
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3468c711
// declared property getter: - (id)stringValue;	// 0x3468cba9
// declared property getter: - (XXStruct_pwHToB)time;	// 0x3468d4a1
// declared property getter: - (id)value;	// 0x3468d539
@end

