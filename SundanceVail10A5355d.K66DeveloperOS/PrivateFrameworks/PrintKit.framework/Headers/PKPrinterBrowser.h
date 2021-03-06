/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSFileHandle, NSMutableArray;
@protocol PKPrinterBrowserDelegate, OS_dispatch_queue;

@interface PKPrinterBrowser : NSObject {
	id<PKPrinterBrowserDelegate> delegate;	// 4 = 0x4
	DNSServiceRef_tRef mainBrowserRef;	// 8 = 0x8
	DNSServiceRef_tRef ippBrowserRef;	// 12 = 0xc
	DNSServiceRef_tRef ippsBrowserRef;	// 16 = 0x10
	DNSServiceRef_tRef localippBrowserRef;	// 20 = 0x14
	DNSServiceRef_tRef localippsBrowserRef;	// 24 = 0x18
	NSMutableDictionary *printers;	// 28 = 0x1c
	NSMutableDictionary *printersByUUID;	// 32 = 0x20
	NSFileHandle *handle;	// 36 = 0x24
	unsigned char originalCellFlag;	// 40 = 0x28
	unsigned char originalWifiFlag;	// 41 = 0x29
	NSObject<OS_dispatch_queue> *printersQueue;	// 44 = 0x2c
	NSMutableArray *pendingList;	// 48 = 0x30
}
@property(assign, nonatomic) id<PKPrinterBrowserDelegate> delegate;	// G=0x35665461; S=0x35665471; @synthesize
@property(retain, nonatomic) NSFileHandle *handle;	// G=0x35665481; S=0x35665491; @synthesize
@property(retain, nonatomic) NSMutableArray *pendingList;	// G=0x356654d1; S=0x356654e1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printers;	// G=0x356654a1; S=0x356654b1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printersByUUID;	// G=0x356654f1; S=0x35665501; @synthesize
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *printersQueue;	// G=0x356654c1; @synthesize
+ (id)browserWithDelegate:(id)delegate;	// 0x35663c1d
- (id)initWithDelegate:(id)delegate;	// 0x35663c65
- (void)addBlockToPendingList:(id)pendingList;	// 0x356649d1
- (void)addLimboPrinter:(id)printer local:(BOOL)local;	// 0x35664309
- (void)addQueryResult:(id)result toPrinter:(id)printer;	// 0x3566466d
- (void)browseCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x35664b7d
- (void)browseLocalCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x35664d25
- (void)dealloc;	// 0x35663fd5
// declared property getter: - (id)delegate;	// 0x35665461
// declared property getter: - (id)handle;	// 0x35665481
// declared property getter: - (id)pendingList;	// 0x356654d1
// declared property getter: - (id)printers;	// 0x356654a1
// declared property getter: - (id)printersByUUID;	// 0x356654f1
// declared property getter: - (id)printersQueue;	// 0x356654c1
- (void)queryCallback:(int)callback flags:(unsigned)flags fullName:(const char *)name rdlen:(unsigned short)rdlen rdata:(const void *)rdata;	// 0x35664ecd
- (void)queryHardcodedPrinters;	// 0x356650d1
- (void)reissueTXTQuery:(id)query;	// 0x35664559
- (void)removePrinter:(id)printer;	// 0x3566413d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35665471
// declared property setter: - (void)setHandle:(id)handle;	// 0x35665491
// declared property setter: - (void)setPendingList:(id)list;	// 0x356654e1
// declared property setter: - (void)setPrinters:(id)printers;	// 0x356654b1
// declared property setter: - (void)setPrintersByUUID:(id)uuid;	// 0x35665501
@end

