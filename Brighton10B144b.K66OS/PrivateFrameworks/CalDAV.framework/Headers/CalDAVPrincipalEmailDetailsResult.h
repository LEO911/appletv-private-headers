/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSSet, NSString;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {
	NSString *_displayName;	// 4 = 0x4
	NSSet *_addresses;	// 8 = 0x8
	NSURL *_principalURL;	// 12 = 0xc
}
@property(retain) NSSet *addresses;	// G=0x3359eddd; S=0x3359edf1; @synthesize=_addresses
@property(retain) NSString *displayName;	// G=0x3359edb9; S=0x3359edcd; @synthesize=_displayName
@property(retain) NSURL *principalURL;	// G=0x3359ee01; S=0x3359ee15; @synthesize=_principalURL
+ (id)resultFromResponseItem:(id)responseItem;	// 0x3359e8b1
// declared property getter: - (id)addresses;	// 0x3359eddd
- (void)dealloc;	// 0x3359ed41
- (id)description;	// 0x3359ecb5
// declared property getter: - (id)displayName;	// 0x3359edb9
// declared property getter: - (id)principalURL;	// 0x3359ee01
// declared property setter: - (void)setAddresses:(id)addresses;	// 0x3359edf1
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3359edcd
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3359ee15
@end

