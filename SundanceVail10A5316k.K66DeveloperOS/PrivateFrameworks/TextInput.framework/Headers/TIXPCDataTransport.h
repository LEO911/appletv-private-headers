/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "NSXPCListenerDelegate.h"
#import <NSObject.h> // Unknown library

@class NSXPCListener, NSMutableDictionary;
@protocol TIUserDictionaryServer;

__attribute__((visibility("hidden")))
@interface TIXPCDataTransport : NSObject <NSXPCListenerDelegate> {
@private
	NSXPCListener *_server;	// 4 = 0x4
	NSMutableDictionary *_dataSources;	// 8 = 0x8
	NSMutableDictionary *_readyDescriptors;	// 12 = 0xc
	id<TIUserDictionaryServer> _userDictionaryServer;	// 16 = 0x10
}
@property(retain, nonatomic) id<TIUserDictionaryServer> userDictionaryServer;	// G=0x31f48bf5; S=0x31f48c05; @synthesize=_userDictionaryServer
+ (id)_cachePath;	// 0x31f48459
+ (id)sharedInstance;	// 0x31f47e69
+ (id)transportInterface;	// 0x31f47ed5
- (id)init;	// 0x31f48139
- (void)_createCachePathIfNeeded;	// 0x31f48539
- (oneway void)_handleForPurpose:(id)purpose withReplyBlock:(id)replyBlock;	// 0x31f485d5
- (oneway void)_userDictionaryKeepAlive;	// 0x31f48ba5
- (oneway void)_userDictionaryReload;	// 0x31f48b7d
- (oneway void)_userDictionarySaveChanges;	// 0x31f48bcd
- (id)cachedDataForPurpose:(id)purpose;	// 0x31f480a1
- (id)connectToServer;	// 0x31f48359
- (id)dataSourceForPurpose:(id)purpose;	// 0x31f47f4d
- (void)dealloc;	// 0x31f48165
- (id)fileHandleWithData:(id)data;	// 0x31f48939
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;	// 0x31f482f1
- (void)setCachedData:(id)data forPurpose:(id)purpose;	// 0x31f480fd
- (void)setDataSource:(id)source forPurpose:(id)purpose;	// 0x31f47fa9
// declared property setter: - (void)setUserDictionaryServer:(id)server;	// 0x31f48c05
- (void)setupListener;	// 0x31f481f1
// declared property getter: - (id)userDictionaryServer;	// 0x31f48bf5
@end

