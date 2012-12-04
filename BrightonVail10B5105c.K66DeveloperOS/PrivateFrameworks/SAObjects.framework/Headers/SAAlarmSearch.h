/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL, NSNumber;

@interface SAAlarmSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *enabled;	// G=0x303a010d; S=0x303a0129; 
@property(copy, nonatomic) NSArray *frequency;	// G=0x303a0179; S=0x303a0195; 
@property(copy, nonatomic) NSNumber *hour;	// G=0x303a01e5; S=0x303a0201; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x303a0251; S=0x303a02cd; 
@property(copy, nonatomic) NSString *label;	// G=0x303a032d; S=0x303a0349; 
@property(copy, nonatomic) NSNumber *minute;	// G=0x303a0399; S=0x303a03b5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303a0031; S=0x303a00ad; 
+ (id)search;	// 0x3039ffa1
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x3039ffe5
// declared property getter: - (id)enabled;	// 0x303a010d
- (id)encodedClassName;	// 0x3039ff95
// declared property getter: - (id)frequency;	// 0x303a0179
- (id)groupIdentifier;	// 0x3039ff85
// declared property getter: - (id)hour;	// 0x303a01e5
// declared property getter: - (id)identifier;	// 0x303a0251
// declared property getter: - (id)label;	// 0x303a032d
// declared property getter: - (id)minute;	// 0x303a0399
- (BOOL)requiresResponse;	// 0x303a0405
// declared property setter: - (void)setEnabled:(id)enabled;	// 0x303a0129
// declared property setter: - (void)setFrequency:(id)frequency;	// 0x303a0195
// declared property setter: - (void)setHour:(id)hour;	// 0x303a0201
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x303a02cd
// declared property setter: - (void)setLabel:(id)label;	// 0x303a0349
// declared property setter: - (void)setMinute:(id)minute;	// 0x303a03b5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303a00ad
// declared property getter: - (id)targetAppId;	// 0x303a0031
@end
