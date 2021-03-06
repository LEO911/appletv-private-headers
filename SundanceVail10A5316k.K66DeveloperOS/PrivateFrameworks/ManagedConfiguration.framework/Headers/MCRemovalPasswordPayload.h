/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {
@private
	NSString *_removalPasscode;	// 40 = 0x28
}
@property(retain, nonatomic) NSString *removalPasscode;	// G=0x305c3dbd; S=0x305c3dcd; @synthesize=_removalPasscode
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x305c3a4d
+ (id)typeStrings;	// 0x305c3a25
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305c3a5d
- (void).cxx_destruct;	// 0x305c3df5
// declared property getter: - (id)removalPasscode;	// 0x305c3dbd
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x305c3dcd
- (id)stubDictionary;	// 0x305c3d51
@end

