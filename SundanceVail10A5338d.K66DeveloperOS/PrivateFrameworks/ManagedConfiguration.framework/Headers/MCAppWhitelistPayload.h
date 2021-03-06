/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAppWhitelistPayload : MCPayload {
	NSArray *_whitelistedAppsAndOptions;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *whitelistedAppsAndOptions;	// G=0x3368b0d5; S=0x3368b0e5; @synthesize=_whitelistedAppsAndOptions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3368a9dd
+ (id)typeStrings;	// 0x3368a9b5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3368aa65
- (void).cxx_destruct;	// 0x3368b10d
- (id)description;	// 0x3368b03d
// declared property setter: - (void)setWhitelistedAppsAndOptions:(id)options;	// 0x3368b0e5
- (id)stubDictionary;	// 0x3368aec9
- (id)subtitle1Description;	// 0x3368af79
- (id)subtitle1Label;	// 0x3368af65
// declared property getter: - (id)whitelistedAppsAndOptions;	// 0x3368b0d5
@end

