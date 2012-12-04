/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "GeoServices-Structs.h"

@class GEOSimpleTileRequester, NSURL, NSMutableData, NSURLConnection, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate> {
	NSURL *_url;	// 4 = 0x4
	NSMutableData *_data;	// 8 = 0x8
	NSURLConnection *_conn;	// 12 = 0xc
	GEOTileKey _key;	// 16 = 0x10
	BOOL _finished;	// 32 = 0x20
	NSString *_editionHeader;	// 36 = 0x24
	unsigned _tileEdition;	// 40 = 0x28
	NSString *_userAgent;	// 44 = 0x2c
	BOOL _useCookies;	// 48 = 0x30
	_GEOTileDownloadOp *_baseTile;	// 52 = 0x34
	_GEOTileDownloadOp *_localizationTile;	// 56 = 0x38
	unsigned _contentLength;	// 60 = 0x3c
	GEOSimpleTileRequester *_delegate;	// 64 = 0x40
	BOOL _gotData;	// 68 = 0x44
	_GEOTileDownloadOp *localizationTile;	// 72 = 0x48
}
@property(retain, nonatomic) _GEOTileDownloadOp *baseTile;	// G=0x379583e9; S=0x379583f9; @synthesize=_baseTile
@property(retain, nonatomic) NSURLConnection *conn;	// G=0x3795833d; S=0x3795834d; @synthesize=_conn
@property(readonly, assign, nonatomic) unsigned contentLength;	// G=0x37958429; @synthesize=_contentLength
@property(retain, nonatomic) NSMutableData *data;	// G=0x3795831d; S=0x3795832d; @synthesize=_data
@property(assign, nonatomic) GEOSimpleTileRequester *delegate;	// G=0x37958449; S=0x37958459; @synthesize=_delegate
@property(retain, nonatomic) NSString *editionHeader;	// G=0x3795835d; S=0x3795836d; @synthesize=_editionHeader
@property(readonly, assign, nonatomic) BOOL finished;	// G=0x37958439; @synthesize=_finished
@property(assign) GEOTileKey key;	// G=0x379582a1; S=0x379582c5; @synthesize=_key
@property(retain, nonatomic) _GEOTileDownloadOp *localizationTile;	// G=0x37958409; S=0x37958419; @synthesize
@property(assign) unsigned tileEdition;	// G=0x3795837d; S=0x37958391; @synthesize=_tileEdition
@property(retain, nonatomic) NSURL *url;	// G=0x37958281; S=0x37958291; @synthesize=_url
@property(assign, nonatomic) BOOL useCookies;	// G=0x379583c9; S=0x379583d9; @synthesize=_useCookies
@property(retain, nonatomic) NSString *userAgent;	// G=0x379583a9; S=0x379583b9; @synthesize=_userAgent
// declared property getter: - (id)baseTile;	// 0x379583e9
- (void)cancel;	// 0x37957c7d
// declared property getter: - (id)conn;	// 0x3795833d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x37958135
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x37957f4d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x37957cb9
- (void)connectionDidFinishLoading:(id)connection;	// 0x37957f9d
// declared property getter: - (unsigned)contentLength;	// 0x37958429
// declared property getter: - (id)data;	// 0x3795831d
- (void)dealloc;	// 0x37957901
// declared property getter: - (id)delegate;	// 0x37958449
- (id)description;	// 0x379579d1
// declared property getter: - (id)editionHeader;	// 0x3795835d
// declared property getter: - (BOOL)finished;	// 0x37958439
// declared property getter: - (GEOTileKey)key;	// 0x379582a1
// declared property getter: - (id)localizationTile;	// 0x37958409
// declared property setter: - (void)setBaseTile:(id)tile;	// 0x379583f9
// declared property setter: - (void)setConn:(id)conn;	// 0x3795834d
// declared property setter: - (void)setData:(id)data;	// 0x3795832d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37958459
// declared property setter: - (void)setEditionHeader:(id)header;	// 0x3795836d
// declared property setter: - (void)setKey:(GEOTileKey)key;	// 0x379582c5
// declared property setter: - (void)setLocalizationTile:(id)tile;	// 0x37958419
// declared property setter: - (void)setTileEdition:(unsigned)edition;	// 0x37958391
// declared property setter: - (void)setUrl:(id)url;	// 0x37958291
// declared property setter: - (void)setUseCookies:(BOOL)cookies;	// 0x379583d9
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x379583b9
- (void)start;	// 0x37957a75
// declared property getter: - (unsigned)tileEdition;	// 0x3795837d
// declared property getter: - (id)url;	// 0x37958281
// declared property getter: - (BOOL)useCookies;	// 0x379583c9
// declared property getter: - (id)userAgent;	// 0x379583a9
@end
