/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ATVLogger : NSObject {
	NSObject<OS_dispatch_queue> *_componentsQueue;	// 4 = 0x4
	BOOL _allComponentsEnabled;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
	NSArray *_persistentComponents;	// 16 = 0x10
	int _logLevel;	// 20 = 0x14
	NSMutableDictionary *_enabledComponents;	// 24 = 0x18
	NSMutableDictionary *_httpConfigurations;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL allComponentsEnabled;	// G=0x300d71f9; S=0x300d7209; @synthesize=_allComponentsEnabled
@property(retain, nonatomic) NSString *domain;	// G=0x300d711d; S=0x300d712d; @synthesize=_domain
@property(retain, nonatomic) NSMutableDictionary *enabledComponents;	// G=0x300d7189; S=0x300d7199; @synthesize=_enabledComponents
@property(retain, nonatomic) NSMutableDictionary *httpConfigurations;	// G=0x300d71c1; S=0x300d71d1; @synthesize=_httpConfigurations
@property(assign, nonatomic) int logLevel;	// G=0x300d7179; S=0x300d5819; @synthesize=_logLevel
@property(copy, nonatomic) NSArray *persistentComponents;	// G=0x300d7155; S=0x300d7169; @synthesize=_persistentComponents
+ (void)initializeLoggingWithDomain:(id)domain persistentComponents:(id)components;	// 0x300d5429
+ (id)sharedInstance;	// 0x300d5419
- (id)initWithDomain:(id)domain persistentComponents:(id)components;	// 0x300d554d
- (void).cxx_destruct;	// 0x300d7219
- (void)_enableComponent:(id)component withLogHandlers:(id)logHandlers;	// 0x300d58e5
- (void)_logForComponent:(id)component level:(int)level format:(id)format list:(void *)list;	// 0x300d69f1
- (void)_logForComponent:(id)component level:(int)level message:(id)message;	// 0x300d6df1
// declared property getter: - (BOOL)allComponentsEnabled;	// 0x300d71f9
- (void)disableComponent:(id)component;	// 0x300d6061
// declared property getter: - (id)domain;	// 0x300d711d
- (void)enableComponent:(id)component withConfiguration:(id)configuration;	// 0x300d5a51
- (void)enableComponent:(id)component withLogHandler:(id)logHandler;	// 0x300d583d
// declared property getter: - (id)enabledComponents;	// 0x300d7189
// declared property getter: - (id)httpConfigurations;	// 0x300d71c1
- (void)httpLogForComponent:(id)component level:(int)level message:(id)message;	// 0x300d6e09
// declared property getter: - (int)logLevel;	// 0x300d7179
- (BOOL)loggingEnabledForComponent:(id)component atLevel:(int)level;	// 0x300d616d
// declared property getter: - (id)persistentComponents;	// 0x300d7155
- (void)reset;	// 0x300d62c5
// declared property setter: - (void)setAllComponentsEnabled:(BOOL)enabled;	// 0x300d7209
// declared property setter: - (void)setDomain:(id)domain;	// 0x300d712d
// declared property setter: - (void)setEnabledComponents:(id)components;	// 0x300d7199
// declared property setter: - (void)setHttpConfigurations:(id)configurations;	// 0x300d71d1
// declared property setter: - (void)setLogLevel:(int)level;	// 0x300d5819
// declared property setter: - (void)setPersistentComponents:(id)components;	// 0x300d7169
@end

