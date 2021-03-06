/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *favoriteFacetime;	// G=0x3424835d; S=0x34248379; 
@property(copy, nonatomic) NSNumber *favoriteVoice;	// G=0x342483c9; S=0x342483e5; 
@property(copy, nonatomic) NSString *label;	// G=0x34248435; S=0x34248451; 
@property(copy, nonatomic) NSString *number;	// G=0x342484a1; S=0x342484bd; 
+ (id)phone;	// 0x342482cd
+ (id)phoneWithDictionary:(id)dictionary context:(id)context;	// 0x34248311
- (id)encodedClassName;	// 0x342482c1
// declared property getter: - (id)favoriteFacetime;	// 0x3424835d
// declared property getter: - (id)favoriteVoice;	// 0x342483c9
- (id)groupIdentifier;	// 0x342482b1
// declared property getter: - (id)label;	// 0x34248435
// declared property getter: - (id)number;	// 0x342484a1
// declared property setter: - (void)setFavoriteFacetime:(id)facetime;	// 0x34248379
// declared property setter: - (void)setFavoriteVoice:(id)voice;	// 0x342483e5
// declared property setter: - (void)setLabel:(id)label;	// 0x34248451
// declared property setter: - (void)setNumber:(id)number;	// 0x342484bd
@end

