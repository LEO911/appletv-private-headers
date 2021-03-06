/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GEODirectionsProvider.h> // Unknown library
#import "PBRequesterDelegate.h"

@class GMMRequester;

@interface GMMGEODirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
	GMMRequester *_gmmRequester;	// 20 = 0x14
}
@property(retain, nonatomic) GMMRequester *gmmRequester;	// G=0x315ac7b1; S=0x315ac7c1; @synthesize=_gmmRequester
+ (id)providerHostname;	// 0x315abdf1
+ (unsigned short)providerID;	// 0x315abded
- (void)_cleanupRequester;	// 0x315ac5a5
- (void)_sendGMMDirectionsRequest:(id)request;	// 0x315ac4fd
- (void)cancelProviderRequest;	// 0x315ac585
- (void)dealloc;	// 0x315abda9
// declared property getter: - (id)gmmRequester;	// 0x315ac7b1
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x315ac6b1
- (void)requesterDidCancel:(id)requester;	// 0x315ac781
- (void)requesterDidFinish:(id)requester;	// 0x315ac5e9
// declared property setter: - (void)setGmmRequester:(id)requester;	// 0x315ac7c1
- (void)startProviderWithRequest:(id)request;	// 0x315abe0d
@end

