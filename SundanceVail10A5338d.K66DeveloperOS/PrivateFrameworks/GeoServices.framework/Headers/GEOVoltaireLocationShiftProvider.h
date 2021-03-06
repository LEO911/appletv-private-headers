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
+ (void)_resetURL;	// 0x3248559d
+ (unsigned short)providerID;	// 0x32485595
- (id)init;	// 0x324855c9
- (void)cancelRequest;	// 0x324858c1
- (void)dealloc;	// 0x324856cd
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x324858e1
- (void)requesterDidCancel:(id)requester;	// 0x3248599d
- (void)requesterDidFinish:(id)requester;	// 0x324859f5
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x32485759
@end

