/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *movieShowtimes;	// G=0x3663b3f9; S=0x3663b475; 
@property(copy, nonatomic) NSArray *showtimes;	// G=0x3663b4dd; S=0x3663b4f9; 
@property(retain, nonatomic) SALocalSearchBusiness2 *theater;	// G=0x3663b549; S=0x3663b59d; 
+ (id)movieTheaterShowtimes;	// 0x3663b369
+ (id)movieTheaterShowtimesWithDictionary:(id)dictionary context:(id)context;	// 0x3663b3ad
- (id)encodedClassName;	// 0x3663b35d
- (id)groupIdentifier;	// 0x3663b34d
// declared property getter: - (id)movieShowtimes;	// 0x3663b3f9
// declared property setter: - (void)setMovieShowtimes:(id)showtimes;	// 0x3663b475
// declared property setter: - (void)setShowtimes:(id)showtimes;	// 0x3663b4f9
// declared property setter: - (void)setTheater:(id)theater;	// 0x3663b59d
// declared property getter: - (id)showtimes;	// 0x3663b4dd
// declared property getter: - (id)theater;	// 0x3663b549
@end

