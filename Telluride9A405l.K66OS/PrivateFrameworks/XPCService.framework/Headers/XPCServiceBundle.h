/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

#import <NSObject.h> // Unknown library
#import "XPCServiceArchiver.h"
#import "XPCService-Structs.h"

@class NSBundle, NSString, NSDictionary;

@interface XPCServiceBundle : NSObject <XPCServiceArchiver> {
	NSBundle *_bundle;	// 4 = 0x4
	NSString *_serviceIdentifier;	// 8 = 0x8
	int _serviceIdentifierPredicate;	// 12 = 0xc
	NSString *_executablePath;	// 16 = 0x10
	int _executablePathPredicate;	// 20 = 0x14
	int _serviceType;	// 24 = 0x18
	int _serviceTypePredicate;	// 28 = 0x1c
	NSDictionary *_serviceDictionary;	// 32 = 0x20
	int _serviceDictionaryPredicate;	// 36 = 0x24
	NSDictionary *_launchdJobDictionary;	// 40 = 0x28
	int _launchdJobDictionaryPredicate;	// 44 = 0x2c
	void *_xpcJobData;	// 48 = 0x30
	int _xpcJobDataPredicate;	// 52 = 0x34
}
@property(readonly, retain) NSBundle *bundle;	// G=0x311d7795; converted property
@property(readonly, retain) NSString *executablePath;	// G=0x311d7841; converted property
@property(readonly, retain) NSDictionary *launchdJobDictionary;	// G=0x311d76bd; converted property
@property(readonly, retain) NSDictionary *serviceDictionary;	// G=0x311d77d5; converted property
@property(readonly, assign) int serviceType;	// G=0x311d7729; converted property
@property(readonly, assign) void *xpcJobData;	// G=0x311d7635; converted property
+ (id)XPCServiceBundleAtPath:(id)path;	// 0x311d7551
+ (id)XPCServiceBundleForMainExecutable;	// 0x311d74e5
+ (id)XPCServiceBundleFromExecutableAtPath:(id)path;	// 0x311d7489
+ (launch_data *)createLaunchDataFromArray:(id)array;	// 0x311d762d
+ (void *)createXPCJobsArrayFromArray:(id)array;	// 0x311d7625
- (id)initWithArchive:(id)archive;	// 0x311d7c25
- (id)initWithBundle:(id)bundle;	// 0x311d6f69
- (id)archiveForCache;	// 0x311d6fa9
- (BOOL)boolForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x311d71f5
// converted property getter: - (id)bundle;	// 0x311d7795
- (void)dealloc;	// 0x311d7b35
- (id)description;	// 0x311d712d
- (id)descriptionWithIndent:(unsigned)indent;	// 0x311d7915
- (id)dictionaryForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x311d72bd
// converted property getter: - (id)executablePath;	// 0x311d7841
- (id)identifier;	// 0x311d78ad
- (BOOL)isSystemService;	// 0x311d73c9
// converted property getter: - (id)launchdJobDictionary;	// 0x311d76bd
- (launch_data *)launchdJobLaunchData;	// 0x311d76a1
- (id)launchdJobPropertyListData;	// 0x311d73e9
- (id)launchdJobPropertyListString;	// 0x311d742d
- (id)objectForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x311d71c9
// converted property getter: - (id)serviceDictionary;	// 0x311d77d5
// converted property getter: - (int)serviceType;	// 0x311d7729
- (id)stringForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x311d7261
// converted property getter: - (void *)xpcJobData;	// 0x311d7635
@end
