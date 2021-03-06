/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAVRequest.h> // Unknown library

@class CalDAVListingReader;

@interface CalDAVListingRequest : DAVRequest {
	CalDAVListingReader *_responseReader;	// 200 = 0xc8
}
+ (id)icsStringFromDate:(id)date;	// 0x32cfd3d9
+ (id)nodeWithName:(id)name;	// 0x32cfd581
+ (id)nodeWithName:(id)name attributes:(id)attributes;	// 0x32cfd53d
- (id)initWithSession:(id)session URI:(id)uri startDate:(id)date endDate:(id)date4;	// 0x32cfd64d
- (void)dealloc;	// 0x32cfd605
- (id)error;	// 0x32cfd5c1
- (id)filenamesToETags;	// 0x32cfd3b9
@end

