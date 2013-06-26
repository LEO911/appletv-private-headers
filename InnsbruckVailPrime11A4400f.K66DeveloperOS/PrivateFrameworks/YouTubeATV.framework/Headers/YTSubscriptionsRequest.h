/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray;

@interface YTSubscriptionsRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_subscriptions;	// 160 = 0xa0
	int _mode;	// 164 = 0xa4
	int _startIndex;	// 168 = 0xa8
	int _totalResults;	// 172 = 0xac
	int _resultsPerPage;	// 176 = 0xb0
}
+ (id)URLForSubscription:(id)subscription;	// 0x33aafc69
+ (id)displayStringForSubscription:(id)subscription;	// 0x33aafb49
+ (BOOL)isSubscription:(id)subscription channelOfUser:(id)user;	// 0x33aafbe9
+ (unsigned)resultsPerRequest;	// 0x33aafb45
- (id)init;	// 0x33aafc89
- (void)_doRequestWithURL:(id)url;	// 0x33aaff31
- (void)createPlaylistNamed:(id)named;	// 0x33ab0191
- (void)dealloc;	// 0x33aafd09
- (void)didAuthenticate:(id)authenticate;	// 0x33aafeb1
- (void)didParseData;	// 0x33aafe19
- (void)failWithError:(id)error;	// 0x33ab04c9
- (int)parseData:(id)data;	// 0x33aafd55
- (void)requestPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results searchTerm:(id)term;	// 0x33ab00e1
- (void)requestUserPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x33ab0035
- (void)requestUserSubscriptionsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x33aaff89
- (void)setDelegate:(id)delegate;	// 0x33ab053d
- (void)subscribeToUser:(id)user;	// 0x33ab0355
@end
