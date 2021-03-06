/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSSet, _IDSService;

@interface IDSService : NSObject {
	_IDSService *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) _IDSService *_internal;	// G=0x31171a41; 
@property(readonly, assign, nonatomic) NSSet *accounts;	// G=0x31171f99; 
@property(readonly, assign, nonatomic) NSArray *devices;	// G=0x31172171; 
- (id)initWithService:(id)service;	// 0x31171881
- (id)initWithService:(id)service commands:(id)commands;	// 0x31171719
// declared property getter: - (id)_internal;	// 0x31171a41
// declared property getter: - (id)accounts;	// 0x31171f99
- (void)addDelegate:(id)delegate queue:(id)queue;	// 0x31171a85
- (void)dealloc;	// 0x31171895
// declared property getter: - (id)devices;	// 0x31172171
- (void)removeDelegate:(id)delegate;	// 0x31171b79
- (void)requestKeepAlive;	// 0x31172349
- (BOOL)sendMessage:(id)message fromAccount:(id)account toDestinations:(id)destinations options:(id)options identifier:(id *)identifier error:(id *)error;	// 0x31171d21
- (BOOL)sendMessage:(id)message fromAccount:(id)account toDestinations:(id)destinations priority:(int)priority options:(id)options identifier:(id *)identifier error:(id *)error;	// 0x31171d59
@end

