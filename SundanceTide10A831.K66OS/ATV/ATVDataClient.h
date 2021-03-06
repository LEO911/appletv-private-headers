/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, NSMutableDictionary, ATVDataServer;

__attribute__((visibility("hidden")))
@interface ATVDataClient : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	unsigned long _clientType;	// 8 = 0x8
	int _status;	// 12 = 0xc
	NSString *_identifier;	// 16 = 0x10
	NSMutableDictionary *_metadataDict;	// 20 = 0x14
	int _maxConcurrentQueryCount;	// 24 = 0x18
	ATVDataServer *_dataServer;	// 28 = 0x1c
}
@property(assign, nonatomic) unsigned long clientType;	// G=0xcb07d; S=0xcb08d; @synthesize=_clientType
@property(assign) __weak ATVDataServer *dataServer;	// G=0xcb131; S=0xcb151; @synthesize=_dataServer
@property(copy, nonatomic) NSString *identifier;	// G=0xcb0c9; S=0xcb0dd; @synthesize=_identifier
@property(assign, nonatomic) int maxConcurrentQueryCount;	// G=0xcb111; S=0xcb121; @synthesize=_maxConcurrentQueryCount
@property(retain) NSMutableDictionary *metadataDict;	// G=0xcb0ed; S=0xcb101; @synthesize=_metadataDict
@property(copy, nonatomic) NSString *name;	// G=0xcb059; S=0xcb06d; @synthesize=_name
@property(assign) int status;	// G=0xcb09d; S=0xcb0b1; @synthesize=_status
- (id)initWithName:(id)name clientType:(unsigned long)type;	// 0xca561
- (void).cxx_destruct;	// 0xcb165
- (BOOL)canProcessQueryConcurrently:(id)concurrently;	// 0xcafe1
- (void)cancelImageRequest:(id)request;	// 0xcb04d
// declared property getter: - (unsigned long)clientType;	// 0xcb07d
- (void)concreteDataClientConnect;	// 0xcafb9
- (void)concreteDataClientDisconnect;	// 0xcafcd
- (void)connect;	// 0xca87d
- (void)connectionCompletedWithStatus:(int)status;	// 0xca8ad
// declared property getter: - (id)dataServer;	// 0xcb131
- (id)description;	// 0xca7e1
- (void)disconnect;	// 0xca921
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xcafe5
- (BOOL)groupingSupportsProperty:(id)property;	// 0xcafd9
- (unsigned)hash;	// 0xca78d
// declared property getter: - (id)identifier;	// 0xcb0c9
- (id)imageRequestWithAsset:(id)asset imageID:(id)anId size:(CGSize)size crop:(BOOL)crop context:(id)context;	// 0xcb049
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0xcb051
- (BOOL)isEqual:(id)equal;	// 0xca6ad
// declared property getter: - (int)maxConcurrentQueryCount;	// 0xcb111
// declared property getter: - (id)metadataDict;	// 0xcb0ed
// declared property getter: - (id)name;	// 0xcb059
- (id)networkTestURLWithOptions:(id)options headers:(id *)headers;	// 0xcb055
- (id)objectForKey:(id)key;	// 0xcaf99
- (BOOL)processQueryAsync:(id)async;	// 0xcafdd
- (void)queryCompleted:(id)completed withStatus:(unsigned long)status;	// 0xcaf01
- (BOOL)queryFilterSupportsProperty:(id)property;	// 0xcafd5
- (void)setClientStatus:(int)status;	// 0xca995
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0xcb08d
// declared property setter: - (void)setDataServer:(id)server;	// 0xcb151
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0xcb0dd
// declared property setter: - (void)setMaxConcurrentQueryCount:(int)count;	// 0xcb121
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xcb101
// declared property setter: - (void)setName:(id)name;	// 0xcb06d
- (void)setObject:(id)object forKey:(id)key;	// 0xcaf45
// declared property setter: - (void)setStatus:(int)status;	// 0xcb0b1
// declared property getter: - (int)status;	// 0xcb09d
- (void)submitDataQuery:(id)query priority:(int)priority withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xcac11
- (BOOL)supportsProperty:(id)property;	// 0xcafd1
@end

