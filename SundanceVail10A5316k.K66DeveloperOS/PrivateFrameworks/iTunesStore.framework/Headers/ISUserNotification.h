/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface ISUserNotification : NSObject {
	int _allowedRetryCount;	// 4 = 0x4
	int _currentRetryCount;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	unsigned long _optionFlags;	// 16 = 0x10
	NSDictionary *_userInfo;	// 20 = 0x14
}
@property(assign) int allowedRetryCount;	// G=0x335345f9; S=0x3353460d; @synthesize=_allowedRetryCount
@property(assign) int currentRetryCount;	// G=0x33534625; S=0x33534639; @synthesize=_currentRetryCount
@property(readonly, assign) NSDictionary *dictionary;	// G=0x335345b1; 
@property(readonly, assign) unsigned long optionFlags;	// G=0x335345e9; 
@property(retain) NSDictionary *userInfo;	// G=0x33534651; S=0x33534665; @synthesize=_userInfo
- (id)init;	// 0x33534461
- (id)initWithDictionary:(id)dictionary options:(unsigned long)options;	// 0x335344a1
// declared property getter: - (int)allowedRetryCount;	// 0x335345f9
- (CFUserNotificationRef)copyUserNotification;	// 0x33534559
// declared property getter: - (int)currentRetryCount;	// 0x33534625
- (void)dealloc;	// 0x335344f1
// declared property getter: - (id)dictionary;	// 0x335345b1
// declared property getter: - (unsigned long)optionFlags;	// 0x335345e9
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x3353460d
// declared property setter: - (void)setCurrentRetryCount:(int)count;	// 0x33534639
// declared property setter: - (void)setUserInfo:(id)info;	// 0x33534665
// declared property getter: - (id)userInfo;	// 0x33534651
@end

