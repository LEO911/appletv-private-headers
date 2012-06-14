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
@property(readonly, retain) NSBundle *bundle;	// G=0x36439795; converted property
@property(readonly, retain) NSString *executablePath;	// G=0x36439841; converted property
@property(readonly, retain) NSDictionary *launchdJobDictionary;	// G=0x364396bd; converted property
@property(readonly, retain) NSDictionary *serviceDictionary;	// G=0x364397d5; converted property
@property(readonly, assign) int serviceType;	// G=0x36439729; converted property
@property(readonly, assign) void *xpcJobData;	// G=0x36439635; converted property
+ (id)XPCServiceBundleAtPath:(id)path;	// 0x36439551
+ (id)XPCServiceBundleForMainExecutable;	// 0x364394e5
+ (id)XPCServiceBundleFromExecutableAtPath:(id)path;	// 0x36439489
+ (launch_data *)createLaunchDataFromArray:(id)array;	// 0x3643962d
+ (void *)createXPCJobsArrayFromArray:(id)array;	// 0x36439625
- (id)initWithArchive:(id)archive;	// 0x36439c25
- (id)initWithBundle:(id)bundle;	// 0x36438f69
- (id)archiveForCache;	// 0x36438fa9
- (BOOL)boolForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x364391f5
// converted property getter: - (id)bundle;	// 0x36439795
- (void)dealloc;	// 0x36439b35
- (id)description;	// 0x3643912d
- (id)descriptionWithIndent:(unsigned)indent;	// 0x36439915
- (id)dictionaryForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x364392bd
// converted property getter: - (id)executablePath;	// 0x36439841
- (id)identifier;	// 0x364398ad
- (BOOL)isSystemService;	// 0x364393c9
// converted property getter: - (id)launchdJobDictionary;	// 0x364396bd
- (launch_data *)launchdJobLaunchData;	// 0x364396a1
- (id)launchdJobPropertyListData;	// 0x364393e9
- (id)launchdJobPropertyListString;	// 0x3643942d
- (id)objectForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x364391c9
// converted property getter: - (id)serviceDictionary;	// 0x364397d5
// converted property getter: - (int)serviceType;	// 0x36439729
- (id)stringForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x36439261
// converted property getter: - (void *)xpcJobData;	// 0x36439635
@end
