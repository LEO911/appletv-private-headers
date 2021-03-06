/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

#import "MobileAsset-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDictionary;

@interface ASAsset : NSObject {
	NSString *_assetType;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
	NSDictionary *_downloadOptions;	// 12 = 0xc
	NSString *_clientName;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	id _progressHandler;	// 24 = 0x18
	MobileAsset *_cfAsset;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *assetType;	// G=0x326e5a0d; @synthesize=_assetType
@property(readonly, assign, nonatomic) NSDictionary *attributes;	// G=0x326e4bbd; 
@property(retain, nonatomic) NSString *clientName;	// G=0x326e5af5; S=0x326e5b2d; 
@property(retain, nonatomic) NSDictionary *downloadOptions;	// G=0x326e59ed; S=0x326e59fd; @synthesize=_downloadOptions
@property(readonly, assign, nonatomic) NSDictionary *fullAttributes;	// G=0x326e5b71; 
@property(assign, nonatomic) int garbageCollectionBehavior;	// G=0x326e4df5; S=0x326e4ecd; 
@property(readonly, retain) NSString *identifier;	// G=0x326e5bfd; converted property
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x326e4ba1; 
@property(copy, nonatomic) id progressHandler;	// G=0x326e59c9; S=0x326e59dd; @synthesize=_progressHandler
@property(readonly, assign, nonatomic) int state;	// G=0x326e4cfd; 
- (id)initWithAssetType:(id)assetType attributes:(id)attributes;	// 0x326e5a1d
- (void)_downloadWithOptions:(id)options shouldFireCallback:(BOOL)callback;	// 0x326e4f7d
- (id)_getLocalAttribute:(id)attribute;	// 0x326e58f9
- (void)adjustDownloadOptions:(id)options completion:(id)completion;	// 0x326e4f59
// declared property getter: - (id)assetType;	// 0x326e5a0d
// declared property getter: - (id)attributes;	// 0x326e4bbd
- (void)beginDownloadWithOptions:(id)options;	// 0x326e5455
- (void)cancelDownload:(id)download;	// 0x326e56a9
- (BOOL)cancelDownloadAndReturnError:(id *)error;	// 0x326e5765
// declared property getter: - (id)clientName;	// 0x326e5af5
- (void)dealloc;	// 0x326e4a81
- (id)description;	// 0x326e4b4d
// declared property getter: - (id)downloadOptions;	// 0x326e59ed
// declared property getter: - (id)fullAttributes;	// 0x326e5b71
// declared property getter: - (int)garbageCollectionBehavior;	// 0x326e4df5
// converted property getter: - (id)identifier;	// 0x326e5bfd
- (BOOL)isPresentOnDisk;	// 0x326e5d71
// declared property getter: - (id)localURL;	// 0x326e4ba1
- (MobileAsset *)mobileAsset;	// 0x326e58e9
- (void)pauseDownload:(id)download;	// 0x326e5469
- (BOOL)pauseDownloadAndReturnError:(id *)error;	// 0x326e5525
// declared property getter: - (id)progressHandler;	// 0x326e59c9
- (void)purge:(id)purge;	// 0x326e57c9
- (BOOL)purgeAndReturnError:(id *)error;	// 0x326e5885
- (BOOL)requiredDiskSpaceIsAvailable:(long long *)available error:(id *)error;	// 0x326e4f19
- (void)resumeDownload:(id)download;	// 0x326e5589
- (BOOL)resumeDownloadAndReturnError:(id *)error;	// 0x326e5645
// declared property setter: - (void)setClientName:(id)name;	// 0x326e5b2d
// declared property setter: - (void)setDownloadOptions:(id)options;	// 0x326e59fd
// declared property setter: - (void)setGarbageCollectionBehavior:(int)behavior;	// 0x326e4ecd
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x326e59dd
// declared property getter: - (int)state;	// 0x326e4cfd
@end

