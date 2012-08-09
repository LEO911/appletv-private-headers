/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNumber, NSString;

@interface MLMovieArtist : NSObject <NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x35493515; S=0x35493559; 
@property(copy, nonatomic) NSString *artistName;	// G=0x354934ed; S=0x3549353d; 
- (id)init;	// 0x354933e1
- (id)initWithMovieArtistDictionary:(id)movieArtistDictionary;	// 0x35493409
- (void).cxx_destruct;	// 0x3549361d
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x35493515
- (void)_setValue:(id)value forKey:(id)key;	// 0x35493595
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x354935c9
// declared property getter: - (id)artistName;	// 0x354934ed
- (id)copyMovieArtistDictionary;	// 0x35493575
- (id)copyWithZone:(NSZone *)zone;	// 0x354934a1
// declared property setter: - (void)setArtistName:(id)name;	// 0x3549353d
// declared property setter: - (void)setITunesStoreIdentifier:(id)identifier;	// 0x35493559
@end
