/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

#import </libobjc.A.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IDSPublicKeyCacheEntry : NSObject {
	NSString *_fromURI;	// 4 = 0x4
	NSString *_forURI;	// 8 = 0x8
	NSMutableDictionary *_map;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *forURI;	// G=0x311ce8b5; S=0x311ce8c9; @synthesize=_forURI
@property(copy, nonatomic) NSString *fromURI;	// G=0x311ce891; S=0x311ce8a5; @synthesize=_fromURI
@property(retain, nonatomic) NSMutableDictionary *map;	// G=0x311ce7d5; S=0x311ce8d9; @synthesize=_map
- (void)dealloc;	// 0x311ce819
// declared property getter: - (id)forURI;	// 0x311ce8b5
// declared property getter: - (id)fromURI;	// 0x311ce891
// declared property getter: - (id)map;	// 0x311ce7d5
// declared property setter: - (void)setForURI:(id)uri;	// 0x311ce8c9
// declared property setter: - (void)setFromURI:(id)uri;	// 0x311ce8a5
// declared property setter: - (void)setMap:(id)map;	// 0x311ce8d9
@end

