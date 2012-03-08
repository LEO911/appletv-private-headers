/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRImageManager, BRImageLoadJob, NSMutableData;

__attribute__((visibility("hidden")))
@interface BRImageLoadDelegate : NSObject {
@private
	BRImageManager *_manager;	// 4 = 0x4
	BRImageLoadJob *_job;	// 8 = 0x8
	NSMutableData *_data;	// 12 = 0xc
}
@property(readonly, retain) BRImageLoadJob *job;	// G=0x35ec89c1; converted property
+ (id)imageLoadDelegateForManager:(id)manager withJob:(id)job;	// 0x35ec87bd
- (id)initForManager:(id)manager withJob:(id)job;	// 0x35ec87fd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x35ec891d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x35ec8959
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x35ec88c1
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x35ec89bd
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x35ec8919
- (void)connectionDidFinishLoading:(id)connection;	// 0x35ec899d
- (id)content;	// 0x35ec89d1
- (void)dealloc;	// 0x35ec8861
// converted property getter: - (id)job;	// 0x35ec89c1
@end
