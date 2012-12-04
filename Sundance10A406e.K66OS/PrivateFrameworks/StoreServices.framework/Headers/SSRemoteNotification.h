/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {
	NSDictionary *_userInfo;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int actionType;	// G=0x312c85e9; 
@property(readonly, assign, nonatomic) NSString *alertBodyString;	// G=0x312c8669; 
@property(readonly, assign, nonatomic) NSString *alertCancelString;	// G=0x312c8775; 
@property(readonly, assign, nonatomic) NSString *alertOKString;	// G=0x312c87d1; 
@property(readonly, assign, nonatomic) NSString *alertTitleString;	// G=0x312c882d; 
@property(readonly, assign, nonatomic) id badgeValue;	// G=0x312c8889; 
@property(readonly, assign, nonatomic) NSDictionary *notificationUserInfo;	// G=0x312c89dd; 
@property(readonly, assign, nonatomic) NSString *soundFileName;	// G=0x312c8909; 
- (id)initWithNotificationUserInfo:(id)notificationUserInfo;	// 0x312c8549
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x312c8a49
- (id)_valueForAlertKey:(id)alertKey;	// 0x312c8ae9
// declared property getter: - (int)actionType;	// 0x312c85e9
// declared property getter: - (id)alertBodyString;	// 0x312c8669
// declared property getter: - (id)alertCancelString;	// 0x312c8775
// declared property getter: - (id)alertOKString;	// 0x312c87d1
// declared property getter: - (id)alertTitleString;	// 0x312c882d
// declared property getter: - (id)badgeValue;	// 0x312c8889
- (id)copyXPCEncoding;	// 0x312c8a15
- (void)dealloc;	// 0x312c859d
// declared property getter: - (id)notificationUserInfo;	// 0x312c89dd
// declared property getter: - (id)soundFileName;	// 0x312c8909
- (id)valueForKey:(id)key;	// 0x312c89bd
@end
