/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload {
@private
	NSMutableDictionary *_restrictions;	// 40 = 0x28
}
@property(readonly, assign) NSDictionary *restrictions;	// G=0x30073a6d; @synthesize=_restrictions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x30074ad5
+ (id)typeStrings;	// 0x30073b91
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30073e79
- (id)_defaultMediaSettings;	// 0x30074aa5
- (void)_insertRestrictedBoolForKey:(id)key value:(id)value preferenc:(BOOL)preferenc;	// 0x30073a7d
- (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x30073b35
- (id)_localizedStrings;	// 0x30074b2d
- (void)dealloc;	// 0x30073c2d
- (id)description;	// 0x30073bb9
// declared property getter: - (id)restrictions;	// 0x30073a6d
- (id)stubDictionary;	// 0x30073c75
- (id)subtitle1Description;	// 0x30074361
@end

