/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSURL;

__attribute__((visibility("hidden")))
@interface ATVCupidMediaURLCacheRecord : XXUnknownSuperclass {
	NSURL *_url;	// 4 = 0x4
	NSDate *_expiration;	// 8 = 0x8
}
@property(retain, nonatomic) NSDate *expiration;	// G=0x4caea5; S=0x4caeb5; @synthesize=_expiration
@property(retain, nonatomic) NSURL *url;	// G=0x4cae6d; S=0x4cae7d; @synthesize=_url
- (void).cxx_destruct;	// 0x4caedd
// declared property getter: - (id)expiration;	// 0x4caea5
// declared property setter: - (void)setExpiration:(id)expiration;	// 0x4caeb5
// declared property setter: - (void)setUrl:(id)url;	// 0x4cae7d
// declared property getter: - (id)url;	// 0x4cae6d
@end
