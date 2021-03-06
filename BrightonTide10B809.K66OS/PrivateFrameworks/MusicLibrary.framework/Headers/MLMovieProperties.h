/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray, NSString;

@interface MLMovieProperties : NSObject <NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *castMembers;	// G=0x346edd39; S=0x346ede01; 
@property(copy, nonatomic) NSString *copyrightWarning;	// G=0x346edd61; S=0x346ede1d; 
@property(copy, nonatomic) NSArray *directors;	// G=0x346edd89; S=0x346ede39; 
@property(copy, nonatomic) NSArray *producers;	// G=0x346eddb1; S=0x346ede55; 
@property(copy, nonatomic) NSArray *screenwriters;	// G=0x346eddd9; S=0x346ede71; 
@property(copy, nonatomic) NSString *studioName;	// G=0x346edea9; S=0x346ede8d; 
- (id)init;	// 0x346edc2d
- (id)initWithMoviePropertiesDictionary:(id)moviePropertiesDictionary;	// 0x346edc55
- (void).cxx_destruct;	// 0x346edfa9
- (void)_setValue:(id)value forKey:(id)key;	// 0x346edef1
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x346edf45
// declared property getter: - (id)castMembers;	// 0x346edd39
- (id)copyMoviePropertiesDictionary;	// 0x346eded1
- (id)copyWithZone:(NSZone *)zone;	// 0x346edced
// declared property getter: - (id)copyrightWarning;	// 0x346edd61
// declared property getter: - (id)directors;	// 0x346edd89
// declared property getter: - (id)producers;	// 0x346eddb1
// declared property getter: - (id)screenwriters;	// 0x346eddd9
// declared property setter: - (void)setCastMembers:(id)members;	// 0x346ede01
// declared property setter: - (void)setCopyrightWarning:(id)warning;	// 0x346ede1d
// declared property setter: - (void)setDirectors:(id)directors;	// 0x346ede39
// declared property setter: - (void)setProducers:(id)producers;	// 0x346ede55
// declared property setter: - (void)setScreenwriters:(id)screenwriters;	// 0x346ede71
// declared property setter: - (void)setStudioName:(id)name;	// 0x346ede8d
// declared property getter: - (id)studioName;	// 0x346edea9
@end

