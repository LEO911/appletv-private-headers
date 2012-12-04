/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface IMUserNotification : NSObject {
	id _reserved;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) unsigned displayFlags;	// G=0x34389799; 
@property(readonly, assign, nonatomic) NSDictionary *displayInformation;	// G=0x343897d9; 
@property(readonly, assign, nonatomic) id identifier;	// G=0x34389731; 
@property(readonly, assign, nonatomic) unsigned response;	// G=0x34389801; 
@property(readonly, assign, nonatomic) unsigned responseFlags;	// G=0x3438988d; 
@property(readonly, assign, nonatomic) NSDictionary *responseInformation;	// G=0x343898cd; 
@property(readonly, assign, nonatomic) double timeout;	// G=0x34389759; 
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x3438981d; S=0x34389845; 
+ (id)userNotificationWithIdentifier:(id)identifier timeout:(double)timeout alertLevel:(unsigned)level displayFlags:(unsigned)flags displayInformation:(id)information;	// 0x3438958d
+ (id)userNotificationWithIdentifier:(id)identifier title:(id)title message:(id)message defaultButton:(id)button alternateButton:(id)button5 otherButton:(id)button6;	// 0x343895f1
- (id)_initWithIdentifier:(id)identifier timeout:(double)timeout displayFlags:(unsigned)flags displayInformation:(id)information;	// 0x34389331
- (void)_setResponseFlags:(unsigned)flags responseInformation:(id)information;	// 0x343898f5
- (void)dealloc;	// 0x34389541
// declared property getter: - (unsigned)displayFlags;	// 0x34389799
// declared property getter: - (id)displayInformation;	// 0x343897d9
// declared property getter: - (id)identifier;	// 0x34389731
// declared property getter: - (unsigned)response;	// 0x34389801
// declared property getter: - (unsigned)responseFlags;	// 0x3438988d
// declared property getter: - (id)responseInformation;	// 0x343898cd
// declared property setter: - (void)setUserInfo:(id)info;	// 0x34389845
// declared property getter: - (double)timeout;	// 0x34389759
// declared property getter: - (id)userInfo;	// 0x3438981d
@end
