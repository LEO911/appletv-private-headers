/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface SSRemoteNotification : NSObject {
@private
	NSDictionary *_userInfo;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int actionType;	// G=0x327e562d; 
@property(readonly, assign, nonatomic) NSString *alertBodyString;	// G=0x327e56a9; 
@property(readonly, assign, nonatomic) NSString *alertCancelString;	// G=0x327e57b9; 
@property(readonly, assign, nonatomic) NSString *alertOKString;	// G=0x327e5815; 
@property(readonly, assign, nonatomic) NSString *alertTitleString;	// G=0x327e5871; 
@property(readonly, assign, nonatomic) id badgeValue;	// G=0x327e58cd; 
@property(readonly, assign, nonatomic) NSDictionary *notificationUserInfo;	// G=0x327e5a21; 
@property(readonly, assign, nonatomic) NSString *soundFileName;	// G=0x327e594d; 
- (id)initWithNotificationUserInfo:(id)notificationUserInfo;	// 0x327e558d
- (id)_valueForAlertKey:(id)alertKey;	// 0x327e5a59
// declared property getter: - (int)actionType;	// 0x327e562d
// declared property getter: - (id)alertBodyString;	// 0x327e56a9
// declared property getter: - (id)alertCancelString;	// 0x327e57b9
// declared property getter: - (id)alertOKString;	// 0x327e5815
// declared property getter: - (id)alertTitleString;	// 0x327e5871
// declared property getter: - (id)badgeValue;	// 0x327e58cd
- (void)dealloc;	// 0x327e55e1
// declared property getter: - (id)notificationUserInfo;	// 0x327e5a21
// declared property getter: - (id)soundFileName;	// 0x327e594d
- (id)valueForKey:(id)key;	// 0x327e5a01
@end

