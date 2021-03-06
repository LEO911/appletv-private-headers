/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSURLConnectionDelegate.h"
#import "GEOTileRequester.h"
#import "GEOTileRequesterDelegate.h"

@class GEOVoltaireSimple3DTileRequester, GEOTileKeyList, GEONetworkDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOVoltaire3DTileRequester : GEOTileRequester <GEOTileRequesterDelegate, NSURLConnectionDelegate> {
	GEONetworkDataReader *_reader;	// 28 = 0x1c
	GEOTileKeyList *_requestedKeys;	// 32 = 0x20
	BOOL _gotError;	// 36 = 0x24
	GEOVoltaireSimple3DTileRequester *_simpleRequester;	// 40 = 0x28
	BOOL _simpleRequesterRunning;	// 44 = 0x2c
	unsigned _numTilesLoaded;	// 48 = 0x30
	NSMutableArray *_connections;	// 52 = 0x34
	NSMutableDictionary *_sharedPrefixes;	// 56 = 0x38
}
+ (unsigned char)tileProviderIdentifier;	// 0x324d7581
- (id)_baseURLStringForTileKey:(GEOTileKey *)tileKey;	// 0x324d7979
- (id)_multiTileURLStringForTileKey:(GEOTileKey *)tileKey;	// 0x324d79d5
- (GEOTileKey)_patchTileKey:(GEOTileKey *)key;	// 0x324d7945
- (void)_startWithTileKeys:(id)tileKeys;	// 0x324d7a31
- (GEOTileKey)_tileKeyForURL:(id)url edition:(unsigned *)edition;	// 0x324d85f9
- (void)_tryParseTilesFromURL:(id)url;	// 0x324d8919
- (id)_urlForTileKey:(GEOTileKey *)tileKey;	// 0x324d7615
- (void)cleanup;	// 0x324d8c0d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x324d8f21
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x324d8e2d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x324d8ce9
- (void)connectionDidFinishLoading:(id)connection;	// 0x324d8ee5
- (void)dealloc;	// 0x324d74e1
- (void)start;	// 0x324d75b9
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key userInfo:(id)info;	// 0x324d8f95
- (void)tileRequester:(id)requester receivedError:(id)error;	// 0x324d9005
- (void)tileRequesterFinished:(id)finished;	// 0x324d9049
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x324d7585
- (void)tryFinish;	// 0x324d8c4d
@end

