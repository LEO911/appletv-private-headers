/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SAWebSiteSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *provider;	// G=0x353d800d; S=0x353d8029; 
@property(copy, nonatomic) NSString *query;	// G=0x353d8079; S=0x353d8095; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353d7f31; S=0x353d7fad; 
+ (id)siteSearch;	// 0x353d7ea1
+ (id)siteSearchWithDictionary:(id)dictionary context:(id)context;	// 0x353d7ee5
- (id)encodedClassName;	// 0x353d7e95
- (id)groupIdentifier;	// 0x353d7e85
// declared property getter: - (id)provider;	// 0x353d800d
// declared property getter: - (id)query;	// 0x353d8079
- (BOOL)requiresResponse;	// 0x353d80e5
// declared property setter: - (void)setProvider:(id)provider;	// 0x353d8029
// declared property setter: - (void)setQuery:(id)query;	// 0x353d8095
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353d7fad
// declared property getter: - (id)targetAppId;	// 0x353d7f31
@end

