/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface RUIYTAccount : XXUnknownSuperclass {
	NSString *_accessToken;	// 28 = 0x1c
	BOOL _allowsInappropriate;	// 32 = 0x20
}
@property(retain) NSString *accessToken;	// G=0x59f5; S=0x5a61; converted property
@property(retain) id accountYouTubeName;	// G=0x5ab9; S=0x5a99; converted property
@property(assign) BOOL allowsInappropriate;	// G=0x5a05; S=0x5a15; converted property
// converted property getter: - (id)accessToken;	// 0x59f5
// converted property getter: - (id)accountYouTubeName;	// 0x5ab9
// converted property getter: - (BOOL)allowsInappropriate;	// 0x5a05
- (void)dealloc;	// 0x5b29
- (BOOL)isAuthenticated;	// 0x5a45
- (void)resetAccountOptions;	// 0x5ad9
// converted property setter: - (void)setAccessToken:(id)token;	// 0x5a61
// converted property setter: - (void)setAccountYouTubeName:(id)name;	// 0x5a99
// converted property setter: - (void)setAllowsInappropriate:(BOOL)inappropriate;	// 0x5a15
- (id)type;	// 0x5a25
@end

