/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <DAAccount.h> // Unknown library

@class DATaskManager, NSData, NSString, NSDictionary, NSURL;

@interface SubCalAccount : DAAccount {
	DATaskManager *_taskManager;	// 60 = 0x3c
	NSData *_tmpICSData;	// 64 = 0x40
}
@property(retain, nonatomic) NSDictionary *externalRepresentation;	// G=0x360edb11; S=0x360edb2d; 
@property(retain) id host;	// G=0x360ed879; S=0x360ed895; converted property
@property(assign) int port;	// G=0x360edb49; S=0x360edb65; converted property
@property(assign) BOOL shouldRemoveAlarms;	// G=0x360edbbd; S=0x360edbdd; 
@property(assign) int subCalAccountVersion;	// G=0x360ed769; S=0x360ed79d; 
@property(readonly, assign, nonatomic) NSURL *subscriptionURL;	// G=0x360eca8d; 
@property(retain, nonatomic) NSString *syncId;	// G=0x360edad9; S=0x360edaf5; 
@property(readonly, retain) DATaskManager *taskManager;	// G=0x360ecb09; converted property
@property(retain) NSData *tmpICSData;	// G=0x360ece61; S=0x360ecddd; converted property
@property(assign) BOOL useSSL;	// G=0x360edb81; S=0x360edba1; converted property
@property(retain) id username;	// G=0x360ed7e1; S=0x360ed7fd; converted property
+ (Class)accountClass;	// 0x360ec8ed
+ (Class)clientClass;	// 0x360ec909
+ (id)defaultProperties;	// 0x360ec925
+ (id)supportedDataclasses;	// 0x360eca61
- (void)_checkValidityWithConsumer:(id)consumer quickValidate:(BOOL)validate;	// 0x360ecb59
- (id)_oldURLsForKeychain;	// 0x360ecfe9
- (id)_tmpICSCalendarPath;	// 0x360ecd9d
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x360ed131
- (BOOL)accountNeedsUpgrade;	// 0x360ed66d
- (void)checkValidityWithConsumer:(id)consumer;	// 0x360ecca9
- (void)clearTmpICSData;	// 0x360ecf19
- (void)dealloc;	// 0x360ec879
// declared property getter: - (id)externalRepresentation;	// 0x360edb11
- (void)handleTrustChallenge:(id)challenge forTask:(id)task;	// 0x360edf09
- (BOOL)hasSubscribedCalendarAtURL:(id)url;	// 0x360ededd
// converted property getter: - (id)host;	// 0x360ed879
- (BOOL)isEqualToAccount:(id)account;	// 0x360edc49
- (id)localizedIdenticalAccountFailureMessage;	// 0x360eddb5
- (id)localizedInvalidPasswordMessage;	// 0x360ede2d
// converted property getter: - (int)port;	// 0x360edb49
- (void)quickValidate:(id)validate;	// 0x360eccbd
- (void)refreshAllCalendars;	// 0x360edc45
- (void)saveTmpICSData;	// 0x360ece21
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x360edb2d
// converted property setter: - (void)setHost:(id)host;	// 0x360ed895
// converted property setter: - (void)setPort:(int)port;	// 0x360edb65
// declared property setter: - (void)setShouldRemoveAlarms:(BOOL)removeAlarms;	// 0x360edbdd
// declared property setter: - (void)setSubCalAccountVersion:(int)version;	// 0x360ed79d
// declared property setter: - (void)setSyncId:(id)anId;	// 0x360edaf5
// converted property setter: - (void)setTmpICSData:(id)data;	// 0x360ecddd
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x360edba1
// converted property setter: - (void)setUsername:(id)username;	// 0x360ed7fd
// declared property getter: - (BOOL)shouldRemoveAlarms;	// 0x360edbbd
// declared property getter: - (int)subCalAccountVersion;	// 0x360ed769
- (void)subCalValidationTask:(id)task finishedWithError:(id)error calendarName:(id)name calendarData:(id)data;	// 0x360eccd1
// declared property getter: - (id)subscriptionURL;	// 0x360eca8d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x360eca81
// declared property getter: - (id)syncId;	// 0x360edad9
// converted property getter: - (id)taskManager;	// 0x360ecb09
// converted property getter: - (id)tmpICSData;	// 0x360ece61
- (BOOL)upgradeAccount;	// 0x360ed5e5
// converted property getter: - (BOOL)useSSL;	// 0x360edb81
// converted property getter: - (id)username;	// 0x360ed7e1
@end
