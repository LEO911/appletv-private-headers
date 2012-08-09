/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *attributes;	// G=0x37988dc9; S=0x37988e45; 
@property(copy, nonatomic) NSURL *endpoint;	// G=0x37988ead; S=0x37988f29; 
@property(copy, nonatomic) NSData *rawRequest;	// G=0x37988f89; S=0x37988fa5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x37988ced; S=0x37988d69; 
@property(assign, nonatomic) int timeoutInSeconds;	// G=0x37988ff5; S=0x37989065; 
+ (id)sendToProtobufConduit;	// 0x37988c5d
+ (id)sendToProtobufConduitWithDictionary:(id)dictionary context:(id)context;	// 0x37988ca1
// declared property getter: - (id)attributes;	// 0x37988dc9
- (id)encodedClassName;	// 0x37988c51
// declared property getter: - (id)endpoint;	// 0x37988ead
- (id)groupIdentifier;	// 0x37988c41
// declared property getter: - (id)rawRequest;	// 0x37988f89
- (BOOL)requiresResponse;	// 0x379890a9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x37988e45
// declared property setter: - (void)setEndpoint:(id)endpoint;	// 0x37988f29
// declared property setter: - (void)setRawRequest:(id)request;	// 0x37988fa5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x37988d69
// declared property setter: - (void)setTimeoutInSeconds:(int)seconds;	// 0x37989065
// declared property getter: - (id)targetAppId;	// 0x37988ced
// declared property getter: - (int)timeoutInSeconds;	// 0x37988ff5
@end
