/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMercantile.h"
#import <NSObject.h> // Unknown library

@class NSURLConnection, NSMutableDictionary, NSMutableData, NSURLRequest, BRMerchant, NSURLResponse, NSDate, NSThread, BRURLDocumentManager, NSError;

@interface BRURLDocument : NSObject <BRMercantile> {
@private
	NSURLRequest *_request;	// 4 = 0x4
	NSURLResponse *_response;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
	NSMutableData *_content;	// 16 = 0x10
	BRURLDocumentManager *_manager;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
	NSThread *_callingThread;	// 28 = 0x1c
	NSMutableDictionary *_metadata;	// 32 = 0x20
	unsigned _documentNumber;	// 36 = 0x24
	NSDate *_requestDate;	// 40 = 0x28
	NSDate *_loadedDate;	// 44 = 0x2c
	BOOL _wasRedirected;	// 48 = 0x30
	BOOL _cancelled;	// 49 = 0x31
	BOOL _loaded;	// 50 = 0x32
}
@property(retain) id URLRequest;	// G=0x30378d15; S=0x30378bd5; converted property
@property(readonly, retain) NSThread *callingThread;	// G=0x30378da1; converted property
@property(readonly, assign) BOOL cancelled;	// G=0x30378f4d; converted property
@property(retain) NSMutableData *content;	// G=0x30378e01; S=0x3037a931; converted property
@property(retain) NSError *error;	// G=0x30378df1; S=0x30378db1; converted property
@property(readonly, assign) BOOL loaded;	// G=0x30378e11; converted property
@property(readonly, retain) NSDate *loadedDate;	// G=0x30378f3d; converted property
@property(readonly, retain) BRURLDocumentManager *manager;	// G=0x3037a921; converted property
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x30378f6d; S=0x30379009; 
@property(readonly, retain) NSDate *requestDate;	// G=0x30378f2d; converted property
@property(readonly, assign) BOOL wasRedirected;	// G=0x30378f5d; converted property
+ (id)documentWithURLRequest:(id)urlrequest;	// 0x303787fd
+ (id)documentWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x30378839
- (id)init;	// 0x303789ad
- (id)initWithURLRequest:(id)urlrequest;	// 0x30378879
- (id)initWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x3037888d
// converted property getter: - (id)URLRequest;	// 0x30378d15
- (id)URLResponse;	// 0x30378d25
- (void)_cancel;	// 0x303790c9
- (void)_documentDidLoad;	// 0x30379049
- (unsigned)_documentNumber;	// 0x30379255
- (void)_extractCookies;	// 0x303798f9
- (id)_manager;	// 0x303790b9
- (void)_setConnection:(id)connection;	// 0x303791d5
- (void)_setDocumentNumber:(unsigned)number;	// 0x30379245
- (void)_setManager:(id)manager;	// 0x303790a9
- (void)_setRequestDate:(id)date;	// 0x30379265
- (void)_threadDeath:(id)death;	// 0x30379215
- (void)_verifyDocument;	// 0x303792a5
- (void)_verifyTypesInFeed:(id)feed parentKeys:(id)keys learnTypes:(BOOL)types;	// 0x303795a5
// converted property getter: - (id)callingThread;	// 0x30378da1
- (void)cancel;	// 0x30378e95
// converted property getter: - (BOOL)cancelled;	// 0x30378f4d
- (void)clearError;	// 0x30378f01
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3037a4e9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x30379a0d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3037a67d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x30379e3d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x30379cb5
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x3037a8dd
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x30379f3d
- (void)connectionDidFinishLoading:(id)connection;	// 0x3037a209
// converted property getter: - (id)content;	// 0x30378e01
- (id)copyForLoading;	// 0x303789b1
- (void)dealloc;	// 0x30378acd
- (void)documentDidLoad;	// 0x30378e21
- (void)documentLoaded;	// 0x30378e31
// converted property getter: - (id)error;	// 0x30378df1
// converted property getter: - (BOOL)loaded;	// 0x30378e11
// converted property getter: - (id)loadedDate;	// 0x30378f3d
// converted property getter: - (id)manager;	// 0x3037a921
// declared property getter: - (id)merchant;	// 0x30378f6d
- (id)metadataForKey:(id)key;	// 0x30378e55
// converted property getter: - (id)requestDate;	// 0x30378f2d
// converted property setter: - (void)setContent:(id)content;	// 0x3037a931
// converted property setter: - (void)setError:(id)error;	// 0x30378db1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x30379009
- (void)setMetadata:(id)metadata forKey:(id)key;	// 0x30378e35
// converted property setter: - (void)setURLRequest:(id)request;	// 0x30378bd5
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x30378e85
- (int)statusCode;	// 0x30378d35
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30378e75
// converted property getter: - (BOOL)wasRedirected;	// 0x30378f5d
@end
