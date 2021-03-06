/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library

@class _IDSDevice, NSString;

@interface IDSDevice : NSObject {
	_IDSDevice *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *modelIdentifier;	// G=0x3117a37d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3117a555; 
@property(readonly, assign, nonatomic) NSString *service;	// G=0x3117a72d; 
- (id)initWithDictionary:(id)dictionary;	// 0x31179eb9
- (void)_addIdentity:(id)identity;	// 0x3117acb5
- (id)_identities;	// 0x3117aadd
- (id)_initWithDictionary:(id)dictionary;	// 0x31179e19
- (id)_internal;	// 0x3117ad8d
- (id)_pushToken;	// 0x3117a905
- (void)dealloc;	// 0x31179ff9
- (id)description;	// 0x3117a1a5
// declared property getter: - (id)modelIdentifier;	// 0x3117a37d
// declared property getter: - (id)name;	// 0x3117a555
// declared property getter: - (id)service;	// 0x3117a72d
@end

