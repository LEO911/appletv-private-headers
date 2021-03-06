/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
	int _failureCount;	// 12 = 0xc
	BOOL _hasPassword;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	id<NSURLAuthenticationChallengeSender> _sender;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	BOOL _userNameIsEditable;	// 32 = 0x20
}
@property(assign) int failureCount;	// G=0x369571b1; S=0x369571c1; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x369571d1; S=0x369571e1; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x369571f1; S=0x36957205; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x36957229; S=0x36957239; @synthesize=_sender
@property(retain) NSString *user;	// G=0x36957249; S=0x3695725d; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x36957281; S=0x36957291; @synthesize=_userNameIsEditable
- (id)init;	// 0x3695709d
- (void)dealloc;	// 0x36957155
// declared property getter: - (int)failureCount;	// 0x369571b1
// declared property getter: - (BOOL)hasPassword;	// 0x369571d1
// declared property getter: - (id)password;	// 0x369571f1
// declared property getter: - (id)sender;	// 0x36957229
// declared property setter: - (void)setFailureCount:(int)count;	// 0x369571c1
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x369571e1
// declared property setter: - (void)setPassword:(id)password;	// 0x36957205
// declared property setter: - (void)setSender:(id)sender;	// 0x36957239
// declared property setter: - (void)setUser:(id)user;	// 0x3695725d
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x36957291
// declared property getter: - (id)user;	// 0x36957249
// declared property getter: - (BOOL)userNameIsEditable;	// 0x36957281
- (BOOL)userNameIsEmail;	// 0x369571ad
@end

