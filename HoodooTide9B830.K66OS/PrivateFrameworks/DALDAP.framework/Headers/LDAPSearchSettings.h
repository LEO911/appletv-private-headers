/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface LDAPSearchSettings : NSObject {
	NSString *_searchDescription;	// 4 = 0x4
	NSString *_searchBase;	// 8 = 0x8
	int _scope;	// 12 = 0xc
}
@property(assign) int scope;	// G=0x31793309; S=0x31793319; @synthesize=_scope
@property(retain) NSString *searchBase;	// G=0x317932d1; S=0x317932e5; @synthesize=_searchBase
@property(retain) NSString *searchDescription;	// G=0x31793299; S=0x317932ad; @synthesize=_searchDescription
- (id)initWithSettingsDict:(id)settingsDict;	// 0x31792ef5
- (void)dealloc;	// 0x31792e95
- (id)description;	// 0x31793211
- (BOOL)hasSameScopeAndBaseAsOther:(id)other;	// 0x31793095
- (unsigned)hash;	// 0x31793155
- (BOOL)isEqual:(id)equal;	// 0x3179318d
// declared property getter: - (int)scope;	// 0x31793309
// declared property getter: - (id)searchBase;	// 0x317932d1
// declared property getter: - (id)searchDescription;	// 0x31793299
// declared property setter: - (void)setScope:(int)scope;	// 0x31793319
// declared property setter: - (void)setSearchBase:(id)base;	// 0x317932e5
// declared property setter: - (void)setSearchDescription:(id)description;	// 0x317932ad
- (id)settingsDict;	// 0x31792fc9
@end

