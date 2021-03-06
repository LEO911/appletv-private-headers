/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol ATVSecureKeyLoaderDelegate;

__attribute__((visibility("hidden")))
@interface ATVSecureKeyLoader : XXUnknownSuperclass {
	id<ATVSecureKeyLoaderDelegate> _delegate;	// 4 = 0x4
}
@property(assign, nonatomic) __weak id<ATVSecureKeyLoaderDelegate> delegate;	// G=0x39b9c1; S=0x39b9e1; @synthesize=_delegate
- (void).cxx_destruct;	// 0x39b9f5
// declared property getter: - (id)delegate;	// 0x39b9c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x39b9e1
- (void)startLoadingCertificateDataForRequest:(id)request;	// 0x39b985
- (void)startLoadingContentIdentifierDataForRequest:(id)request;	// 0x39b999
- (void)startLoadingKeyResponseDataForRequest:(id)request;	// 0x39b9ad
@end

