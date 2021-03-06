/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *locales;	// G=0x34249549; S=0x34249565; 
+ (id)setSupportedLocales;	// 0x342494b9
+ (id)setSupportedLocalesWithDictionary:(id)dictionary context:(id)context;	// 0x342494fd
- (id)encodedClassName;	// 0x342494ad
- (id)groupIdentifier;	// 0x3424949d
// declared property getter: - (id)locales;	// 0x34249549
- (BOOL)requiresResponse;	// 0x342495b5
// declared property setter: - (void)setLocales:(id)locales;	// 0x34249565
@end

