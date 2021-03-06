/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOLocationShiftProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (void)_resetURL;	// 0x32d04705
+ (unsigned short)providerID;	// 0x32d046fd
- (id)init;	// 0x32d04731
- (void)cancelRequest;	// 0x32d04a21
- (void)dealloc;	// 0x32d04835
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x32d04a41
- (void)requesterDidCancel:(id)requester;	// 0x32d04af5
- (void)requesterDidFinish:(id)requester;	// 0x32d04b45
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x32d048c1
@end

