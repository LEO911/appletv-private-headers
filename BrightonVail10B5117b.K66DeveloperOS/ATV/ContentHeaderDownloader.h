/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ContentDownloadData;
@protocol ContentHeaderDownloaderProtocol;

@interface ContentHeaderDownloader : XXUnknownSuperclass {
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
	shared_ptr<netflix::http::HttpStreamReader> iFrameHttpReader;	// 72 = 0x48
	id<ContentHeaderDownloaderProtocol> delegate_;	// 80 = 0x50
}
@property(assign) id<ContentHeaderDownloaderProtocol> delegate;	// G=0x4f5d9d; S=0x4f5db1; @synthesize=delegate_
- (id)initWithContentDownloadData:(id)contentDownloadData delegate:(id)delegate;	// 0x4f4139
- (id).cxx_construct;	// 0x4f5efd
- (void).cxx_destruct;	// 0x4f5dc9
- (void)dealloc;	// 0x4f4319
// declared property getter: - (id)delegate;	// 0x4f5d9d
- (void)downloadContentHeader:(id)header;	// 0x4f5bd9
- (BOOL)downloadContentHeaderInternal;	// 0x4f43fd
- (const char *)mediaTypeToDLType:(int)dltype;	// 0x4f43bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4f5db1
- (id)urlAsRangeRequest:(id)request startOffset:(long long)offset endOffset:(long long)offset3;	// 0x4f5ce9
@end

