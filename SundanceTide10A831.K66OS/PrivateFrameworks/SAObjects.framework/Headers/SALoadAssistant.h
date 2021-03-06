/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *activationToken;	// G=0x304fbb95; S=0x304fbbb1; 
@property(copy, nonatomic) NSString *assistantId;	// G=0x304fbc01; S=0x304fbc1d; 
@property(copy, nonatomic) NSString *connectionType;	// G=0x304fbc6d; S=0x304fbc89; 
@property(copy, nonatomic) NSString *language;	// G=0x304fbcd9; S=0x304fbcf5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSData *sessionValidationData;	// G=0x304fbd45; S=0x304fbd61; 
@property(copy, nonatomic) NSString *speechId;	// G=0x304fbdb1; S=0x304fbdcd; 
+ (id)loadAssistant;	// 0x304fbb05
+ (id)loadAssistantWithDictionary:(id)dictionary context:(id)context;	// 0x304fbb49
// declared property getter: - (id)activationToken;	// 0x304fbb95
// declared property getter: - (id)assistantId;	// 0x304fbc01
// declared property getter: - (id)connectionType;	// 0x304fbc6d
- (id)encodedClassName;	// 0x304fbaf9
- (id)groupIdentifier;	// 0x304fbae9
// declared property getter: - (id)language;	// 0x304fbcd9
// declared property getter: - (id)sessionValidationData;	// 0x304fbd45
// declared property setter: - (void)setActivationToken:(id)token;	// 0x304fbbb1
// declared property setter: - (void)setAssistantId:(id)anId;	// 0x304fbc1d
// declared property setter: - (void)setConnectionType:(id)type;	// 0x304fbc89
// declared property setter: - (void)setLanguage:(id)language;	// 0x304fbcf5
// declared property setter: - (void)setSessionValidationData:(id)data;	// 0x304fbd61
// declared property setter: - (void)setSpeechId:(id)anId;	// 0x304fbdcd
// declared property getter: - (id)speechId;	// 0x304fbdb1
@end

