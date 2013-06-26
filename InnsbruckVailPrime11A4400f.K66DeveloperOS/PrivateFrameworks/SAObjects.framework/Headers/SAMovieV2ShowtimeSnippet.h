/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class SALocalSearchBusiness2, NSString, NSArray;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet {
}
@property(copy, nonatomic) NSString *movieName;	// G=0x326f7425; S=0x326f7441; 
@property(copy, nonatomic) NSArray *showtimes;	// G=0x326f7491; S=0x326f74f9; 
@property(retain, nonatomic) SALocalSearchBusiness2 *theater;	// G=0x326f7561; S=0x326f75a5; 
@property(copy, nonatomic) NSString *theaterName;	// G=0x326f75e1; S=0x326f75fd; 
+ (id)showtimeSnippet;	// 0x326f7395
+ (id)showtimeSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x326f73d9
- (id)encodedClassName;	// 0x326f7389
- (id)groupIdentifier;	// 0x326f7379
// declared property getter: - (id)movieName;	// 0x326f7425
// declared property setter: - (void)setMovieName:(id)name;	// 0x326f7441
// declared property setter: - (void)setShowtimes:(id)showtimes;	// 0x326f74f9
// declared property setter: - (void)setTheater:(id)theater;	// 0x326f75a5
// declared property setter: - (void)setTheaterName:(id)name;	// 0x326f75fd
// declared property getter: - (id)showtimes;	// 0x326f7491
// declared property getter: - (id)theater;	// 0x326f7561
// declared property getter: - (id)theaterName;	// 0x326f75e1
@end
