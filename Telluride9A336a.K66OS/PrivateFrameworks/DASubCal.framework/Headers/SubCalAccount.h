/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <DAAccount.h> // Unknown library

@class DATaskManager, NSData, NSString, NSDictionary, NSURL;

@interface SubCalAccount : DAAccount {
	DATaskManager *_taskManager;	// 64 = 0x40
	NSData *_tmpICSData;	// 68 = 0x44
}
@property(retain, nonatomic) NSDictionary *externalRepresentation;	// G=0x36df6ce1; S=0x36df6cfd; 
@property(retain) id host;	// G=0x36df6a41; S=0x36df6a5d; converted property
@property(assign) int port;	// G=0x36df6d19; S=0x36df6d35; converted property
@property(assign) BOOL shouldRemoveAlarms;	// G=0x36df6d8d; S=0x36df6dad; 
@property(assign) int subCalAccountVersion;	// G=0x36df6931; S=0x36df6965; 
@property(readonly, assign, nonatomic) NSURL *subscriptionURL;	// G=0x36df5c5d; 
@property(retain, nonatomic) NSString *syncId;	// G=0x36df6ca9; S=0x36df6cc5; 
@property(readonly, retain) DATaskManager *taskManager;	// G=0x36df5cd9; converted property
@property(retain) NSData *tmpICSData;	// G=0x36df6029; S=0x36df5fa5; converted property
@property(assign) BOOL useSSL;	// G=0x36df6d51; S=0x36df6d71; converted property
@property(retain) id username;	// G=0x36df69a9; S=0x36df69c5; converted property
+ (Class)accountClass;	// 0x36df5abd
+ (Class)clientClass;	// 0x36df5ad9
+ (id)defaultProperties;	// 0x36df5af5
+ (id)supportedDataclasses;	// 0x36df5c31
- (void)_checkValidityWithConsumer:(id)consumer quickValidate:(BOOL)validate;	// 0x36df5d29
- (id)_oldURLsForKeychain;	// 0x36df61b1
- (id)_tmpICSCalendarPath;	// 0x36df5f65
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x36df62f9
- (BOOL)accountNeedsUpgrade;	// 0x36df6839
- (void)checkValidityWithConsumer:(id)consumer;	// 0x36df5e79
- (void)clearTmpICSData;	// 0x36df60e1
- (void)dealloc;	// 0x36df5a5d
// declared property getter: - (id)externalRepresentation;	// 0x36df6ce1
- (void)handleTrustChallenge:(id)challenge forTask:(id)task;	// 0x36df70f5
- (BOOL)hasSubscribedCalendarAtURL:(id)url;	// 0x36df70c9
// converted property getter: - (id)host;	// 0x36df6a41
- (BOOL)isEqualToAccount:(id)account;	// 0x36df6e19
- (id)localizedIdenticalAccountFailureMessage;	// 0x36df6fa1
- (id)localizedInvalidPasswordMessage;	// 0x36df7019
// converted property getter: - (int)port;	// 0x36df6d19
- (void)quickValidate:(id)validate;	// 0x36df5e8d
- (void)refreshAllCalendars;	// 0x36df6e15
- (void)saveTmpICSData;	// 0x36df5fe9
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x36df6cfd
// converted property setter: - (void)setHost:(id)host;	// 0x36df6a5d
// converted property setter: - (void)setPort:(int)port;	// 0x36df6d35
// declared property setter: - (void)setShouldRemoveAlarms:(BOOL)removeAlarms;	// 0x36df6dad
// declared property setter: - (void)setSubCalAccountVersion:(int)version;	// 0x36df6965
// declared property setter: - (void)setSyncId:(id)anId;	// 0x36df6cc5
// converted property setter: - (void)setTmpICSData:(id)data;	// 0x36df5fa5
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x36df6d71
// converted property setter: - (void)setUsername:(id)username;	// 0x36df69c5
// declared property getter: - (BOOL)shouldRemoveAlarms;	// 0x36df6d8d
// declared property getter: - (int)subCalAccountVersion;	// 0x36df6931
- (void)subCalValidationTask:(id)task finishedWithError:(id)error calendarName:(id)name calendarData:(id)data;	// 0x36df5ea1
// declared property getter: - (id)subscriptionURL;	// 0x36df5c5d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x36df5c51
// declared property getter: - (id)syncId;	// 0x36df6ca9
// converted property getter: - (id)taskManager;	// 0x36df5cd9
// converted property getter: - (id)tmpICSData;	// 0x36df6029
- (BOOL)upgradeAccount;	// 0x36df67b1
// converted property getter: - (BOOL)useSSL;	// 0x36df6d51
// converted property getter: - (id)username;	// 0x36df69a9
@end

