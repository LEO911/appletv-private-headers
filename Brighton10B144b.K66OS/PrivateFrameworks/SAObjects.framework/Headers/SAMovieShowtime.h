/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, NSNumber, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;	// G=0x353fc8cd; S=0x353fc921; 
@property(copy, nonatomic) NSNumber *childTicketQuantity;	// G=0x353fc95d; S=0x353fc979; 
@property(assign, nonatomic) BOOL is3d;	// G=0x353fc9c9; S=0x353fca41; 
@property(assign, nonatomic) BOOL isImax;	// G=0x353fca85; S=0x353fcafd; 
@property(copy, nonatomic) NSNumber *regularTicketQuantity;	// G=0x353fcb41; S=0x353fcb5d; 
@property(copy, nonatomic) NSNumber *seniorTicketQuantity;	// G=0x353fcbad; S=0x353fcbc9; 
@property(retain, nonatomic) SACalendar *showtime;	// G=0x353fcc19; S=0x353fcc6d; 
+ (id)showtime;	// 0x353fc83d
+ (id)showtimeWithDictionary:(id)dictionary context:(id)context;	// 0x353fc881
// declared property getter: - (id)buyTicketsPunchout;	// 0x353fc8cd
// declared property getter: - (id)childTicketQuantity;	// 0x353fc95d
- (id)encodedClassName;	// 0x353fc831
- (id)groupIdentifier;	// 0x353fc821
// declared property getter: - (BOOL)is3d;	// 0x353fc9c9
// declared property getter: - (BOOL)isImax;	// 0x353fca85
// declared property getter: - (id)regularTicketQuantity;	// 0x353fcb41
// declared property getter: - (id)seniorTicketQuantity;	// 0x353fcbad
// declared property setter: - (void)setBuyTicketsPunchout:(id)punchout;	// 0x353fc921
// declared property setter: - (void)setChildTicketQuantity:(id)quantity;	// 0x353fc979
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x353fca41
// declared property setter: - (void)setIsImax:(BOOL)imax;	// 0x353fcafd
// declared property setter: - (void)setRegularTicketQuantity:(id)quantity;	// 0x353fcb5d
// declared property setter: - (void)setSeniorTicketQuantity:(id)quantity;	// 0x353fcbc9
// declared property setter: - (void)setShowtime:(id)showtime;	// 0x353fcc6d
// declared property getter: - (id)showtime;	// 0x353fcc19
@end
