/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSFileHandle, NSDate, DAStatusReport, NSTimer, NSString, NSURL, NSURLConnection, NSMutableData;
@protocol SubCalURLRequestDelegate;

@interface SubCalURLRequest : NSObject <NSURLConnectionDelegate> {
	NSURL *_url;	// 4 = 0x4
	id<SubCalURLRequestDelegate> _delegate;	// 8 = 0x8
	NSString *_username;	// 12 = 0xc
	NSString *_password;	// 16 = 0x10
	double _timestamp;	// 20 = 0x14
	NSURLConnection *_connection;	// 28 = 0x1c
	NSMutableData *_connectionData;	// 32 = 0x20
	BOOL _useFileCache;	// 36 = 0x24
	NSString *_filePath;	// 40 = 0x28
	NSFileHandle *_fileHandle;	// 44 = 0x2c
	BOOL _sendDataUpdateCallback;	// 48 = 0x30
	NSDate *_startTime;	// 52 = 0x34
	DAStatusReport *_statusReport;	// 56 = 0x38
	NSTimer *_idleTimer;	// 60 = 0x3c
	NSString *_startRunloopDescriptionString;	// 64 = 0x40
}
@property(retain, nonatomic) NSMutableData *connectionData;	// G=0x306413ed; S=0x306413fd; @synthesize=_connectionData
@property(assign, nonatomic) id<SubCalURLRequestDelegate> delegate;	// G=0x306412cd; S=0x306401cd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *filePath;	// G=0x306413bd; @synthesize=_filePath
@property(copy, nonatomic) NSString *password;	// G=0x30641301; S=0x30641315; @synthesize=_password
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x306413cd; S=0x306413dd; @synthesize=_statusReport
@property(assign) double timestamp;	// G=0x30641325; S=0x30641359; @synthesize=_timestamp
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x306412bd; @synthesize=_url
@property(assign) BOOL useFileCache;	// G=0x3064138d; S=0x306413a5; @synthesize=_useFileCache
@property(copy, nonatomic) NSString *username;	// G=0x306412dd; S=0x306412f1; @synthesize=_username
+ (id)_cachedICSFilesDirectory;	// 0x30640f59
+ (void)_initializeFileCache;	// 0x30640fd1
- (id)initWithURL:(id)url;	// 0x3063f481
- (void)_cancelIdleTimer;	// 0x3063fbc9
- (void)_createIdleTimer;	// 0x3063fad1
- (void)_extendIdleTimer;	// 0x3063fb71
- (void)_finishWithError:(id)error;	// 0x306400b1
- (void)_idleTimerFired;	// 0x3063f919
- (void)_markEndTime;	// 0x3063f895
- (void)_markStartTime;	// 0x3063f851
- (void)_openFileHandle;	// 0x30640929
- (void)_receivedDataForFile:(id)file;	// 0x30640ab5
- (void)_respondToChallenge:(id)challenge withCredential:(id)credential noCredentialBehavior:(int)behavior;	// 0x30640301
- (void)_setHeadersOnRequest:(id)request;	// 0x3063f691
- (void)cancel;	// 0x3063ff69
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x30640215
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x30640e49
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x30640465
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x30640ca1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x30640765
// declared property getter: - (id)connectionData;	// 0x306413ed
- (void)connectionDidFinishLoading:(id)connection;	// 0x30640d55
- (void)dealloc;	// 0x3063f579
// declared property getter: - (id)delegate;	// 0x306412cd
// declared property getter: - (id)filePath;	// 0x306413bd
// declared property getter: - (id)password;	// 0x30641301
// declared property setter: - (void)setConnectionData:(id)data;	// 0x306413fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x306401cd
// declared property setter: - (void)setPassword:(id)password;	// 0x30641315
// declared property setter: - (void)setStatusReport:(id)report;	// 0x306413dd
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x30641359
// declared property setter: - (void)setUseFileCache:(BOOL)cache;	// 0x306413a5
// declared property setter: - (void)setUsername:(id)username;	// 0x306412f1
- (void)startConnection;	// 0x3063fc3d
// declared property getter: - (id)statusReport;	// 0x306413cd
// declared property getter: - (double)timestamp;	// 0x30641325
// declared property getter: - (id)url;	// 0x306412bd
// declared property getter: - (BOOL)useFileCache;	// 0x3064138d
// declared property getter: - (id)username;	// 0x306412dd
@end

