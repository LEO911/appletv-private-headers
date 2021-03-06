/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSecureKeyLoader.h"

@class NSURL;
@protocol ATVSecureKeyStandardLoaderRequestGenerating, ATVSecureKeyStandardLoaderConnectionHandling;

__attribute__((visibility("hidden")))
@interface ATVSecureKeyStandardLoader : ATVSecureKeyLoader {
	unsigned _protocolVersion;	// 4 = 0x4
	id<ATVSecureKeyStandardLoaderRequestGenerating> _requestGenerator;	// 8 = 0x8
	id<ATVSecureKeyStandardLoaderConnectionHandling> _connectionHandler;	// 12 = 0xc
	NSURL *_certificateDataURL;	// 16 = 0x10
	NSURL *_keyDataURL;	// 20 = 0x14
}
@property(retain, nonatomic) NSURL *certificateDataURL;	// G=0x3321d; S=0x3322d; @synthesize=_certificateDataURL
@property(assign, nonatomic) __weak id<ATVSecureKeyStandardLoaderConnectionHandling> connectionHandler;	// G=0x331e9; S=0x33209; @synthesize=_connectionHandler
@property(retain, nonatomic) NSURL *keyDataURL;	// G=0x33255; S=0x33265; @synthesize=_keyDataURL
@property(assign, nonatomic) unsigned protocolVersion;	// G=0x33195; S=0x331a5; @synthesize=_protocolVersion
@property(assign, nonatomic) __weak id<ATVSecureKeyStandardLoaderRequestGenerating> requestGenerator;	// G=0x331b5; S=0x331d5; @synthesize=_requestGenerator
- (id)init;	// 0x32731
- (id)initWithCertificateDataURL:(id)certificateDataURL keyDataURL:(id)url;	// 0x32245
- (void).cxx_destruct;	// 0x3328d
- (id)_assetIdentifierForKeyRequest:(id)keyRequest;	// 0x32339
- (id)_bodyDataForRequest:(id)request;	// 0x326c5
- (id)_bodyJSONDataForRequest:(id)request;	// 0x32469
- (id)_bodyXMLDataForRequest:(id)request;	// 0x32381
// declared property getter: - (id)certificateDataURL;	// 0x3321d
// declared property getter: - (id)connectionHandler;	// 0x331e9
// declared property getter: - (id)keyDataURL;	// 0x33255
// declared property getter: - (unsigned)protocolVersion;	// 0x33195
// declared property getter: - (id)requestGenerator;	// 0x331b5
// declared property setter: - (void)setCertificateDataURL:(id)url;	// 0x3322d
// declared property setter: - (void)setConnectionHandler:(id)handler;	// 0x33209
// declared property setter: - (void)setKeyDataURL:(id)url;	// 0x33265
// declared property setter: - (void)setProtocolVersion:(unsigned)version;	// 0x331a5
// declared property setter: - (void)setRequestGenerator:(id)generator;	// 0x331d5
- (void)startLoadingCertificateDataForRequest:(id)request;	// 0x32755
- (void)startLoadingContentIdentifierDataForRequest:(id)request;	// 0x32921
- (void)startLoadingKeyResponseDataForRequest:(id)request;	// 0x32a01
@end

