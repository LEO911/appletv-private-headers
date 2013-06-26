/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <Foundation/NSOperation.h>
#import "NSURLConnectionDelegate.h"

@class SSVURLDataConsumer, NSURL, SSMetricsPageEvent, NSObject, NSMutableData, NSHTTPURLResponse, NSRunLoop, NSCachedURLResponse, NSURLRequest;
@protocol OS_dispatch_queue;

@interface SSVLoadURLOperation : NSOperation <NSURLConnectionDelegate> {
	NSMutableData *_dataBuffer;	// 12 = 0xc
	SSVURLDataConsumer *_dataConsumer;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 20 = 0x14
	id _expiredOutputBlock;	// 24 = 0x18
	BOOL _iTunesStoreRequest;	// 28 = 0x1c
	SSMetricsPageEvent *_metricsPageEvent;	// 32 = 0x20
	id _outputBlock;	// 36 = 0x24
	BOOL _recordsMetrics;	// 40 = 0x28
	NSHTTPURLResponse *_response;	// 44 = 0x2c
	NSRunLoop *_runLoop;	// 48 = 0x30
	BOOL _stopped;	// 52 = 0x34
	NSURLRequest *_urlRequest;	// 56 = 0x38
}
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x327ec69d; S=0x327ecc59; 
@property(readonly, assign) NSURL *URL;	// G=0x327ece61; 
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x327ece81; 
@property(readonly, assign) NSCachedURLResponse *cachedURLResponse;	// G=0x327ec3b1; 
@property(retain) SSVURLDataConsumer *dataConsumer;	// G=0x327ec41d; S=0x327eca71; 
@property(copy) id expiredOutputBlock;	// G=0x327ec569; S=0x327ecb61; 
@property(readonly, assign) SSMetricsPageEvent *metricsPageEvent;	// G=0x327ec771; 
@property(copy) id outputBlock;	// G=0x327ec881; S=0x327ecce1; 
@property(assign) BOOL recordsMetrics;	// G=0x327ec99d; S=0x327ecdd9; 
- (id)init;	// 0x327ec0d1
- (id)initWithURL:(id)url;	// 0x327ec0e1
- (id)initWithURLRequest:(id)urlrequest;	// 0x327ec12d
- (id)initWithURLRequestProperties:(id)urlrequestProperties;	// 0x327ec185
- (void).cxx_destruct;	// 0x327eed45
// declared property getter: - (id)URL;	// 0x327ece61
// declared property getter: - (id)URLRequest;	// 0x327ece81
- (void)_applyResponseToMetrics:(id)metrics;	// 0x327ede7d
- (void)_finishWithData:(id)data;	// 0x327edfbd
- (id)_initSSVLoadURLOperation;	// 0x327ec059
- (void)_keepAliveTimer:(id)timer;	// 0x327ee045
- (id)_newURLRequest;	// 0x327ee055
- (id)_outputForData:(id)data error:(id *)error;	// 0x327ee725
- (void)_releaseOutputBlocks;	// 0x327ee969
- (long)_runRunLoopUntilStopped;	// 0x327eea11
- (void)_stopIfCancelled;	// 0x327eeae1
- (void)_stopRunLoop;	// 0x327eeb19
// declared property getter: - (id)cachedURLResponse;	// 0x327ec3b1
- (void)cancel;	// 0x327ece95
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x327ed971
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x327ed9d9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x327ed9f9
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x327edd8d
- (void)connectionDidFinishLoading:(id)connection;	// 0x327edb4d
// declared property getter: - (id)dataConsumer;	// 0x327ec41d
- (void)dispatchAsync:(id)async;	// 0x327ec541
- (void)dispatchSync:(id)sync;	// 0x327ec555
// declared property getter: - (id)expiredOutputBlock;	// 0x327ec569
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x327ec69d
- (void)main;	// 0x327eced5
// declared property getter: - (id)metricsPageEvent;	// 0x327ec771
// declared property getter: - (id)outputBlock;	// 0x327ec881
// declared property getter: - (BOOL)recordsMetrics;	// 0x327ec99d
// declared property setter: - (void)setDataConsumer:(id)consumer;	// 0x327eca71
// declared property setter: - (void)setExpiredOutputBlock:(id)block;	// 0x327ecb61
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x327ecc59
// declared property setter: - (void)setOutputBlock:(id)block;	// 0x327ecce1
// declared property setter: - (void)setRecordsMetrics:(BOOL)metrics;	// 0x327ecdd9
@end
