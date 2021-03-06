/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSString, NSDictionary, NSNumber;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse {
}
@property(readonly, assign, nonatomic) NSDictionary *responseParameters;	// G=0x36f71f35; 
@property(readonly, assign, nonatomic) NSNumber *status;	// G=0x36f71ecd; 
@property(readonly, assign, nonatomic) NSString *statusMessage;	// G=0x36f71f01; 
// declared property getter: - (id)responseParameters;	// 0x36f71f35
- (id)responseParametersForServiceIdentifier:(id)serviceIdentifier;	// 0x36f71f69
// declared property getter: - (id)status;	// 0x36f71ecd
// declared property getter: - (id)statusMessage;	// 0x36f71f01
@end

