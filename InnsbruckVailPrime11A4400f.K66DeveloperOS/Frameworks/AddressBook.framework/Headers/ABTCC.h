/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import </libobjc.A.h>


@interface ABTCC : NSObject {
	BOOL _calledExternalChangeCallbacks;	// 4 = 0x4
	int _simulateType;	// 8 = 0x8
	BOOL _simulateAccessPrompt;	// 12 = 0xc
	BOOL _simulateAccessPromptGranted;	// 13 = 0xd
	unsigned _simulateAccessPromptDelay;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x2c9e65d9
- (id)init;	// 0x2c9e656d
- (id)_simulateQueue;	// 0x2c9e69bd
- (int)accessPreflight;	// 0x2c9e66c5
- (void)accessRequestWithCompletion:(id)completion;	// 0x2c9e6751
- (void)callExternalChangeCallbacks:(BOOL)callbacks;	// 0x2c9e6719
- (void)dealloc;	// 0x2c9e65ad
- (unsigned char)isAccessRestricted;	// 0x2c9e6701
- (void)simulate:(int)simulate;	// 0x2c9e695d
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)access withDelay:(unsigned)delay;	// 0x2c9e698d
@end
