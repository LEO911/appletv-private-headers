/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface ATVDataServer : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	unsigned long _serverType;	// 8 = 0x8
	id _serverID;	// 12 = 0xc
	int _serverStatus;	// 16 = 0x10
	NSDate *_registeredDate;	// 20 = 0x14
	NSMutableArray *_dataClients;	// 24 = 0x18
	NSMutableDictionary *_metadataDict;	// 28 = 0x1c
}
@property(retain) NSMutableArray *dataClients;	// G=0xcd109; S=0xcd11d; @synthesize=_dataClients
@property(retain) NSMutableDictionary *metadataDict;	// G=0xcd12d; S=0xcd141; @synthesize=_metadataDict
@property(retain, nonatomic) NSString *name;	// G=0xcd079; S=0xcd089; @synthesize=_name
@property(retain, nonatomic) NSDate *registeredDate;	// G=0xcd0e9; S=0xcd0f9; @synthesize=_registeredDate
@property(retain, nonatomic) id serverID;	// G=0xcd0b9; S=0xcd0c9; @synthesize=_serverID
@property(assign, nonatomic) int serverStatus;	// G=0xcd0d9; S=0xccbe5; @synthesize=_serverStatus
@property(assign, nonatomic) unsigned long serverType;	// G=0xcd099; S=0xcd0a9; @synthesize=_serverType
+ (id)activeServer;	// 0xcc6a1
+ (id)defaultServer;	// 0xcc401
+ (void)deregisterDataServer:(id)server;	// 0xcc5d5
+ (id)findServerWithServerID:(id)serverID comparator:(id)comparator;	// 0xcc6c1
+ (void)registerDataServer:(id)server;	// 0xcc4b9
+ (id)serversOfTypes:(unsigned long)types;	// 0xcc8cd
+ (void)setActiveServer:(id)server;	// 0xcc6b1
- (id)initWithServerName:(id)serverName serverID:(id)anId serverType:(unsigned long)type;	// 0xcc99d
- (id)allDataClients;	// 0xccff9
- (id)dataClientOfType:(unsigned long)type;	// 0xcce7d
// declared property getter: - (id)dataClients;	// 0xcd109
- (void)dealloc;	// 0xcca91
- (void)deregisterDataClient:(id)client;	// 0xcce39
- (id)description;	// 0xccb85
- (unsigned)hash;	// 0xccb5d
- (BOOL)isEqual:(id)equal;	// 0xccb25
// declared property getter: - (id)metadataDict;	// 0xcd12d
// declared property getter: - (id)name;	// 0xcd079
- (id)objectForKey:(id)key;	// 0xcd059
- (void)registerDataClient:(id)client;	// 0xccdf5
// declared property getter: - (id)registeredDate;	// 0xcd0e9
// declared property getter: - (id)serverID;	// 0xcd0b9
// declared property getter: - (int)serverStatus;	// 0xcd0d9
// declared property getter: - (unsigned long)serverType;	// 0xcd099
// declared property setter: - (void)setDataClients:(id)clients;	// 0xcd11d
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xcd141
// declared property setter: - (void)setName:(id)name;	// 0xcd089
- (void)setObject:(id)object forKey:(id)key;	// 0xcd025
// declared property setter: - (void)setRegisteredDate:(id)date;	// 0xcd0f9
// declared property setter: - (void)setServerID:(id)anId;	// 0xcd0c9
// declared property setter: - (void)setServerStatus:(int)status;	// 0xccbe5
// declared property setter: - (void)setServerType:(unsigned long)type;	// 0xcd0a9
@end

