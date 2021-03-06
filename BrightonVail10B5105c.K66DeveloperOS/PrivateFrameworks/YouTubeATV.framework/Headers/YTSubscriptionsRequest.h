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
+ (id)URLForSubscription:(id)subscription;	// 0x352d4da5
+ (id)displayStringForSubscription:(id)subscription;	// 0x352d4c89
+ (BOOL)isSubscription:(id)subscription channelOfUser:(id)user;	// 0x352d4d25
+ (unsigned)resultsPerRequest;	// 0x352d4c85
- (id)init;	// 0x352d4dc5
- (void)_doRequestWithURL:(id)url;	// 0x352d5065
- (void)createPlaylistNamed:(id)named;	// 0x352d52bd
- (void)dealloc;	// 0x352d4e45
- (void)didAuthenticate:(id)authenticate;	// 0x352d4fe5
- (void)didParseData;	// 0x352d4f55
- (void)failWithError:(id)error;	// 0x352d55f5
- (int)parseData:(id)data;	// 0x352d4e91
- (void)requestPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results searchTerm:(id)term;	// 0x352d520d
- (void)requestUserPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x352d5161
- (void)requestUserSubscriptionsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x352d50b5
- (void)setDelegate:(id)delegate;	// 0x352d5669
- (void)subscribeToUser:(id)user;	// 0x352d5481
@end

