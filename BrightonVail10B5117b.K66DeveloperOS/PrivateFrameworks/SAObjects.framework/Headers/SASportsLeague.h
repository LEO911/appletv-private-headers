/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *diplayedText;	// G=0x355d0339; S=0x355d0355; 
@property(copy, nonatomic) NSNumber *displayTeamLocationOverName;	// G=0x355d03a5; S=0x355d03c1; 
@property(copy, nonatomic) NSString *identifier;	// G=0x355d0411; S=0x355d042d; 
@property(retain, nonatomic) SASportsSeason *season;	// G=0x355d047d; S=0x355d04d1; 
@property(copy, nonatomic) NSString *sport;	// G=0x355d050d; S=0x355d0529; 
+ (id)league;	// 0x355d02a9
+ (id)leagueWithDictionary:(id)dictionary context:(id)context;	// 0x355d02ed
// declared property getter: - (id)diplayedText;	// 0x355d0339
// declared property getter: - (id)displayTeamLocationOverName;	// 0x355d03a5
- (id)encodedClassName;	// 0x355d029d
- (id)groupIdentifier;	// 0x355d028d
// declared property getter: - (id)identifier;	// 0x355d0411
// declared property getter: - (id)season;	// 0x355d047d
// declared property setter: - (void)setDiplayedText:(id)text;	// 0x355d0355
// declared property setter: - (void)setDisplayTeamLocationOverName:(id)name;	// 0x355d03c1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x355d042d
// declared property setter: - (void)setSeason:(id)season;	// 0x355d04d1
// declared property setter: - (void)setSport:(id)sport;	// 0x355d0529
// declared property getter: - (id)sport;	// 0x355d050d
@end
