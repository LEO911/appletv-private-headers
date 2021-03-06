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
@property(copy, nonatomic) NSString *diplayedText;	// G=0x353f4f31; S=0x353f4f4d; 
@property(copy, nonatomic) NSNumber *displayTeamLocationOverName;	// G=0x353f4f9d; S=0x353f4fb9; 
@property(copy, nonatomic) NSString *identifier;	// G=0x353f5009; S=0x353f5025; 
@property(retain, nonatomic) SASportsSeason *season;	// G=0x353f5075; S=0x353f50c9; 
@property(copy, nonatomic) NSString *sport;	// G=0x353f5105; S=0x353f5121; 
+ (id)league;	// 0x353f4ea1
+ (id)leagueWithDictionary:(id)dictionary context:(id)context;	// 0x353f4ee5
// declared property getter: - (id)diplayedText;	// 0x353f4f31
// declared property getter: - (id)displayTeamLocationOverName;	// 0x353f4f9d
- (id)encodedClassName;	// 0x353f4e95
- (id)groupIdentifier;	// 0x353f4e85
// declared property getter: - (id)identifier;	// 0x353f5009
// declared property getter: - (id)season;	// 0x353f5075
// declared property setter: - (void)setDiplayedText:(id)text;	// 0x353f4f4d
// declared property setter: - (void)setDisplayTeamLocationOverName:(id)name;	// 0x353f4fb9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353f5025
// declared property setter: - (void)setSeason:(id)season;	// 0x353f50c9
// declared property setter: - (void)setSport:(id)sport;	// 0x353f5121
// declared property getter: - (id)sport;	// 0x353f5105
@end

