/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RUIYTDocumentBuilder : XXUnknownSuperclass {
	NSMutableArray *_documentsAwaitingTokenGeneration;	// 4 = 0x4
	BOOL _awaitingTokenGeneration;	// 8 = 0x8
	NSMutableArray *_documentsAwaitingAuthentication;	// 12 = 0xc
	BOOL _awaitingAuthentication;	// 16 = 0x10
}
+ (void)setSingleton:(id)singleton;	// 0xa0b09
+ (id)singleton;	// 0xa0af9
- (id)init;	// 0xa0b21
- (void).cxx_destruct;	// 0xa1fb1
- (void)_postDocumentDidFinishBuildingNotificationForDocument:(id)_postDocument;	// 0xa18b5
- (BOOL)_setupAccessTokenForDocument:(id)document;	// 0xa1981
- (BOOL)_setupTokenForDocument:(id)document;	// 0xa1c95
- (void)_tokenGenerated:(id)generated;	// 0xa13c5
- (void)_tokenGenerationFailed:(id)failed;	// 0xa1645
- (void)_userLoggedIn:(id)anIn;	// 0xa0e59
- (void)_userLoginFailed:(id)failed;	// 0xa1115
- (id)buildDocument:(id)document;	// 0xa0cb1
- (void)cancelBuild:(id)build;	// 0xa0d31
- (void)dealloc;	// 0xa0bc9
@end

