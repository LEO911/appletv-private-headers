/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray, NSMutableString, YTVideo;

@interface YTCommentsRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_comments;	// 160 = 0xa0
	unsigned _startIndex;	// 164 = 0xa4
	unsigned _totalResults;	// 168 = 0xa8
	NSMutableString *_moreCommentsURLString;	// 172 = 0xac
	YTVideo *_video;	// 176 = 0xb0
}
+ (unsigned)commentsPerRequest;	// 0x33364c05
- (id)initRequestingCommentsForVideo:(id)video withDelegate:(id)delegate;	// 0x33364cf5
- (void)_requestCommentsFromURL:(id)url;	// 0x33364c09
- (void)dealloc;	// 0x33364dd1
- (void)didAuthenticate:(id)authenticate;	// 0x33364fad
- (void)didParseData;	// 0x33364f35
- (void)failWithError:(id)error;	// 0x3336502d
- (int)parseData:(id)data;	// 0x33364e49
- (void)requestMoreComments;	// 0x33364c61
@end

