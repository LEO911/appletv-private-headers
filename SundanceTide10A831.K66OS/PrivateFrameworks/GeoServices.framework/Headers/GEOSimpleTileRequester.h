/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOTileRequester.h"
#import "NSURLConnectionDelegate.h"
#import "GeoServices-Structs.h"

@class NSMutableArray, NSMutableSet;

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLConnectionDelegate> {
	NSMutableArray *_waiting;	// 28 = 0x1c
	NSMutableSet *_running;	// 32 = 0x20
	BOOL _cancelled;	// 36 = 0x24
	BOOL _subclassImplementsTileEdition;	// 37 = 0x25
	NSMutableArray *_errors;	// 40 = 0x28
}
- (id)initWithKeyList:(id)keyList;	// 0x302475c5
- (void)_cleanup;	// 0x302482ed
- (void)_doWorkOrFinish;	// 0x30247cb1
- (void)_operationFailed:(id)failed error:(id)error;	// 0x30247685
- (void)_operationFinished:(id)finished;	// 0x3024777d
- (BOOL)allowsCookies;	// 0x3024764d
- (void)cancel;	// 0x30248515
- (void)dealloc;	// 0x302485f9
- (id)editionHeader;	// 0x30247679
- (BOOL)isRunning;	// 0x30247ea1
- (id)localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x3024766d
- (id)mergeBaseTile:(id)tile withLocalizationTile:(id)localizationTile;	// 0x30247671
- (void)start;	// 0x30247eed
- (unsigned)tileEditionForKey:(GEOTileKey *)key;	// 0x302482d1
- (id)urlForTileKey:(GEOTileKey *)tileKey;	// 0x30247651
@end

