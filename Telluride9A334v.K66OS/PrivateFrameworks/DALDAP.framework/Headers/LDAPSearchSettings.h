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
@property(assign) int scope;	// G=0x3113f315; S=0x3113f325; @synthesize=_scope
@property(retain) NSString *searchBase;	// G=0x3113f2dd; S=0x3113f2f1; @synthesize=_searchBase
@property(retain) NSString *searchDescription;	// G=0x3113f2a5; S=0x3113f2b9; @synthesize=_searchDescription
- (id)initWithSettingsDict:(id)settingsDict;	// 0x3113ef01
- (void)dealloc;	// 0x3113eea1
- (id)description;	// 0x3113f21d
- (BOOL)hasSameScopeAndBaseAsOther:(id)other;	// 0x3113f0a1
- (unsigned)hash;	// 0x3113f161
- (BOOL)isEqual:(id)equal;	// 0x3113f199
// declared property getter: - (int)scope;	// 0x3113f315
// declared property getter: - (id)searchBase;	// 0x3113f2dd
// declared property getter: - (id)searchDescription;	// 0x3113f2a5
// declared property setter: - (void)setScope:(int)scope;	// 0x3113f325
// declared property setter: - (void)setSearchBase:(id)base;	// 0x3113f2f1
// declared property setter: - (void)setSearchDescription:(id)description;	// 0x3113f2b9
- (id)settingsDict;	// 0x3113efd5
@end

